#include "../Header/Cheat Functions/FiberMain.h"
#include "../../../Header/GUI/DirectX/Proxy.h"
#include "../../../Header/GUI/DirectX/ImGuiMain.h"
#include <d3d11.h>
#include <dxgi.h>

using namespace Cheat;

typedef HRESULT(__stdcall* Present) (IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
typedef HRESULT(__stdcall* ResizeBuffers)(IDXGISwapChain* pSwapChain, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags);
typedef LRESULT(CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);
typedef uintptr_t PTR;

HMODULE ourModule = 0;
extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
Present oPresent;
ResizeBuffers oResizeBuffers;
HWND window = NULL;
WNDPROC oWndProc;
ID3D11Device* pDevice = NULL;
ID3D11DeviceContext* pContext = NULL;
ID3D11RenderTargetView* mainRenderTargetView;
bool init = false;

// Functions
LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags);
HRESULT hkResizeBuffers(IDXGISwapChain* pThis, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags);
DWORD WINAPI RenderHookThread(HMODULE hmod);


void DirectX::ImGuiInit()
{
	Proxy_Attach();
	CreateThread(nullptr, NULL, (LPTHREAD_START_ROUTINE)RenderHookThread, CheatModuleHandle, NULL, nullptr);
}

LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	if (CheatFeatures::CursorGUINavigationEnabled && ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
		return true;

	return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
}

HRESULT hkResizeBuffers(IDXGISwapChain* pSwapChain, UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat, UINT SwapChainFlags)
{
	if (mainRenderTargetView) {
		pContext->OMSetRenderTargets(0, 0, 0);
		mainRenderTargetView->Release();
	}

	HRESULT hr = oResizeBuffers(pSwapChain, BufferCount, Width, Height, NewFormat, SwapChainFlags);

	ID3D11Texture2D* pBuffer;
	pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (void**)&pBuffer);

	pDevice->CreateRenderTargetView(pBuffer, NULL, &mainRenderTargetView);
	pBuffer->Release();

	pContext->OMSetRenderTargets(1, &mainRenderTargetView, NULL);

	D3D11_VIEWPORT vp;
	vp.Width = Width;
	vp.Height = Height;
	vp.MinDepth = 0.0f;
	vp.MaxDepth = 1.0f;
	vp.TopLeftX = 0;
	vp.TopLeftY = 0;
	pContext->RSSetViewports(1, &vp);
	return hr;
}

HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{
	if (!init)
	{
		if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&pDevice)))
		{
			pDevice->GetImmediateContext(&pContext);
			DXGI_SWAP_CHAIN_DESC sd;
			pSwapChain->GetDesc(&sd);
			window = sd.OutputWindow;
			ID3D11Texture2D* pBackBuffer;
			pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
			pDevice->CreateRenderTargetView(pBackBuffer, NULL, &mainRenderTargetView);
			pBackBuffer->Release();
			oWndProc = (WNDPROC)SetWindowLongPtr(window, GWLP_WNDPROC, (LONG_PTR)WndProc);
			ImGui::CreateContext();
			ImGuiIO& io = ImGui::GetIO();
			io.IniFilename = NULL;
			io.MouseDrawCursor = true;
			std::string FontLocation = std::getenv("SystemDrive") + (std::string)"\\Windows\\Fonts\\Verdana.ttf";
			io.Fonts->AddFontFromFileTTF(FontLocation.c_str(), 20.f);
			ImGui_ImplWin32_Init(window);
			ImGui_ImplDX11_Init(pDevice, pContext);
			init = true;
		}
		else
		{
			return oPresent(pSwapChain, SyncInterval, Flags);
		}			
	}

	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	ImVec4* colors = ImGui::GetStyle().Colors;
	colors[ImGuiCol_TitleBg] = ImColor(GUI::PrimaryColor.r, GUI::PrimaryColor.g, GUI::PrimaryColor.b);
	colors[ImGuiCol_TitleBgActive] = ImColor(GUI::PrimaryColor.r, GUI::PrimaryColor.g, GUI::PrimaryColor.b);
	colors[ImGuiCol_Border] = ImColor(105, 105, 105);
	colors[ImGuiCol_Border] = ImColor(105, 105, 105);
	colors[ImGuiCol_Button] = ImColor(GUI::PrimaryColor.r, GUI::PrimaryColor.g, GUI::PrimaryColor.b);
	colors[ImGuiCol_ButtonHovered] = ImColor(GUI::PrimaryColor.r, GUI::PrimaryColor.g, GUI::PrimaryColor.b);
	colors[ImGuiCol_ButtonActive] = ImColor(GUI::PrimaryColor.r, GUI::PrimaryColor.g, GUI::PrimaryColor.b);

	Logger::ShowLoggerWindow();

	ImGui::Render();
	pContext->OMSetRenderTargets(1, &mainRenderTargetView, NULL);
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());

	return oPresent(pSwapChain, SyncInterval, Flags);
}

DWORD WINAPI RenderHookThread(HMODULE hmod)
{
	if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success)
	{
		kiero::bind(8, (void**)&oPresent, hkPresent);
		kiero::bind(13, (void**)&oResizeBuffers, hkResizeBuffers);
	}
	else
	{
		Logger::Error("Kiero initialization failed", true);
	}
	return TRUE;
}