#pragma once

enum ControllerInputs
{
	INPUT_NEXT_CAMERA = 0,
	INPUT_LOOK_LR = 1,
	INPUT_LOOK_UD = 2,
	INPUT_LOOK_UP_ONLY = 3,
	INPUT_LOOK_DOWN_ONLY = 4,
	INPUT_LOOK_LEFT_ONLY = 5,
	INPUT_LOOK_RIGHT_ONLY = 6,
	INPUT_CINEMATIC_SLOWMO = 7,
	INPUT_SCRIPTED_FLY_UD = 8,
	INPUT_SCRIPTED_FLY_LR = 9,
	INPUT_SCRIPTED_FLY_ZUP = 10,
	INPUT_SCRIPTED_FLY_ZDOWN = 11,
	INPUT_WEAPON_WHEEL_UD = 12,
	INPUT_WEAPON_WHEEL_LR = 13,
	INPUT_WEAPON_WHEEL_NEXT = 14,
	INPUT_WEAPON_WHEEL_PREV = 15,
	INPUT_SELECT_NEXT_WEAPON = 16,
	INPUT_SELECT_PREV_WEAPON = 17,
	INPUT_SKIP_CUTSCENE = 18,
	INPUT_CHARACTER_WHEEL = 19,
	INPUT_MULTIPLAYER_INFO = 20,
	INPUT_SPRINT = 21,
	INPUT_JUMP = 22,
	INPUT_ENTER = 23,
	INPUT_ATTACK = 24,
	INPUT_AIM = 25,
	INPUT_LOOK_BEHIND = 26,
	INPUT_PHONE = 27,
	INPUT_SPECIAL_ABILITY = 28,
	INPUT_SPECIAL_ABILITY_SECONDARY = 29,
	INPUT_MOVE_LR = 30,
	INPUT_MOVE_UD = 31,
	INPUT_MOVE_UP_ONLY = 32,
	INPUT_MOVE_DOWN_ONLY = 33,
	INPUT_MOVE_LEFT_ONLY = 34,
	INPUT_MOVE_RIGHT_ONLY = 35,
	INPUT_DUCK = 36,
	INPUT_SELECT_WEAPON = 37,
	INPUT_PICKUP = 38,
	INPUT_SNIPER_ZOOM = 39,
	INPUT_SNIPER_ZOOM_IN_ONLY = 40,
	INPUT_SNIPER_ZOOM_OUT_ONLY = 41,
	INPUT_SNIPER_ZOOM_IN_SECONDARY = 42,
	INPUT_SNIPER_ZOOM_OUT_SECONDARY = 43,
	INPUT_COVER = 44,
	INPUT_RELOAD = 45,
	INPUT_TALK = 46,
	INPUT_DETONATE = 47,
	INPUT_HUD_SPECIAL = 48,
	INPUT_ARREST = 49,
	INPUT_ACCURATE_AIM = 50,
	INPUT_CONTEXT = 51,
	INPUT_CONTEXT_SECONDARY = 52,
	INPUT_WEAPON_SPECIAL = 53,
	INPUT_WEAPON_SPECIAL_TWO = 54,
	INPUT_DIVE = 55,
	INPUT_DROP_WEAPON = 56,
	INPUT_DROP_AMMO = 57,
	INPUT_THROW_GRENADE = 58,
	INPUT_VEH_MOVE_LR = 59,
	INPUT_VEH_MOVE_UD = 60,
	INPUT_VEH_MOVE_UP_ONLY = 61,
	INPUT_VEH_MOVE_DOWN_ONLY = 62,
	INPUT_VEH_MOVE_LEFT_ONLY = 63,
	INPUT_VEH_MOVE_RIGHT_ONLY = 64,
	INPUT_VEH_SPECIAL = 65,
	INPUT_VEH_GUN_LR = 66,
	INPUT_VEH_GUN_UD = 67,
	INPUT_VEH_AIM = 68,
	INPUT_VEH_ATTACK = 69,
	INPUT_VEH_ATTACK2 = 70,
	INPUT_VEH_ACCELERATE = 71,
	INPUT_VEH_BRAKE = 72,
	INPUT_VEH_DUCK = 73,
	INPUT_VEH_HEADLIGHT = 74,
	INPUT_VEH_EXIT = 75,
	INPUT_VEH_HANDBRAKE = 76,
	INPUT_VEH_HOTWIRE_LEFT = 77,
	INPUT_VEH_HOTWIRE_RIGHT = 78,
	INPUT_VEH_LOOK_BEHIND = 79,
	INPUT_VEH_CIN_CAM = 80,
	INPUT_VEH_NEXT_RADIO = 81,
	INPUT_VEH_PREV_RADIO = 82,
	INPUT_VEH_NEXT_RADIO_TRACK = 83,
	INPUT_VEH_PREV_RADIO_TRACK = 84,
	INPUT_VEH_RADIO_WHEEL = 85,
	INPUT_VEH_HORN = 86,
	INPUT_VEH_FLY_THROTTLE_UP = 87,
	INPUT_VEH_FLY_THROTTLE_DOWN = 88,
	INPUT_VEH_FLY_YAW_LEFT = 89,
	INPUT_VEH_FLY_YAW_RIGHT = 90,
	INPUT_VEH_PASSENGER_AIM = 91,
	INPUT_VEH_PASSENGER_ATTACK = 92,
	INPUT_VEH_SPECIAL_ABILITY_FRANKLIN = 93,
	INPUT_VEH_STUNT_UD = 94,
	INPUT_VEH_CINEMATIC_UD = 95,
	INPUT_VEH_CINEMATIC_UP_ONLY = 96,
	INPUT_VEH_CINEMATIC_DOWN_ONLY = 97,
	INPUT_VEH_CINEMATIC_LR = 98,
	INPUT_VEH_SELECT_NEXT_WEAPON = 99,
	INPUT_VEH_SELECT_PREV_WEAPON = 100,
	INPUT_VEH_ROOF = 101,
	INPUT_VEH_JUMP = 102,
	INPUT_VEH_GRAPPLING_HOOK = 103,
	INPUT_VEH_SHUFFLE = 104,
	INPUT_VEH_DROP_PROJECTILE = 105,
	INPUT_VEH_MOUSE_CONTROL_OVERRIDE = 106,
	INPUT_VEH_FLY_ROLL_LR = 107,
	INPUT_VEH_FLY_ROLL_LEFT_ONLY = 108,
	INPUT_VEH_FLY_ROLL_RIGHT_ONLY = 109,
	INPUT_VEH_FLY_PITCH_UD = 110,
	INPUT_VEH_FLY_PITCH_UP_ONLY = 111,
	INPUT_VEH_FLY_PITCH_DOWN_ONLY = 112,
	INPUT_VEH_FLY_UNDERCARRIAGE = 113,
	INPUT_VEH_FLY_ATTACK = 114,
	INPUT_VEH_FLY_SELECT_NEXT_WEAPON = 115,
	INPUT_VEH_FLY_SELECT_PREV_WEAPON = 116,
	INPUT_VEH_FLY_SELECT_TARGET_LEFT = 117,
	INPUT_VEH_FLY_SELECT_TARGET_RIGHT = 118,
	INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE = 119,
	INPUT_VEH_FLY_DUCK = 120,
	INPUT_VEH_FLY_ATTACK_CAMERA = 121,
	INPUT_VEH_FLY_MOUSE_CONTROL_OVERRIDE = 122,
	INPUT_VEH_SUB_TURN_LR = 123,
	INPUT_VEH_SUB_TURN_LEFT_ONLY = 124,
	INPUT_VEH_SUB_TURN_RIGHT_ONLY = 125,
	INPUT_VEH_SUB_PITCH_UD = 126,
	INPUT_VEH_SUB_PITCH_UP_ONLY = 127,
	INPUT_VEH_SUB_PITCH_DOWN_ONLY = 128,
	INPUT_VEH_SUB_THROTTLE_UP = 129,
	INPUT_VEH_SUB_THROTTLE_DOWN = 130,
	INPUT_VEH_SUB_ASCEND = 131,
	INPUT_VEH_SUB_DESCEND = 132,
	INPUT_VEH_SUB_TURN_HARD_LEFT = 133,
	INPUT_VEH_SUB_TURN_HARD_RIGHT = 134,
	INPUT_VEH_SUB_MOUSE_CONTROL_OVERRIDE = 135,
	INPUT_VEH_PUSHBIKE_PEDAL = 136,
	INPUT_VEH_PUSHBIKE_SPRINT = 137,
	INPUT_VEH_PUSHBIKE_FRONT_BRAKE = 138,
	INPUT_VEH_PUSHBIKE_REAR_BRAKE = 139,
	INPUT_MELEE_ATTACK_LIGHT = 140,
	INPUT_MELEE_ATTACK_HEAVY = 141,
	INPUT_MELEE_ATTACK_ALTERNATE = 142,
	INPUT_MELEE_BLOCK = 143,
	INPUT_PARACHUTE_DEPLOY = 144,
	INPUT_PARACHUTE_DETACH = 145,
	INPUT_PARACHUTE_TURN_LR = 146,
	INPUT_PARACHUTE_TURN_LEFT_ONLY = 147,
	INPUT_PARACHUTE_TURN_RIGHT_ONLY = 148,
	INPUT_PARACHUTE_PITCH_UD = 149,
	INPUT_PARACHUTE_PITCH_UP_ONLY = 150,
	INPUT_PARACHUTE_PITCH_DOWN_ONLY = 151,
	INPUT_PARACHUTE_BRAKE_LEFT = 152,
	INPUT_PARACHUTE_BRAKE_RIGHT = 153,
	INPUT_PARACHUTE_SMOKE = 154,
	INPUT_PARACHUTE_PRECISION_LANDING = 155,
	INPUT_MAP = 156,
	INPUT_SELECT_WEAPON_UNARMED = 157,
	INPUT_SELECT_WEAPON_MELEE = 158,
	INPUT_SELECT_WEAPON_HANDGUN = 159,
	INPUT_SELECT_WEAPON_SHOTGUN = 160,
	INPUT_SELECT_WEAPON_SMG = 161,
	INPUT_SELECT_WEAPON_AUTO_RIFLE = 162,
	INPUT_SELECT_WEAPON_SNIPER = 163,
	INPUT_SELECT_WEAPON_HEAVY = 164,
	INPUT_SELECT_WEAPON_SPECIAL = 165,
	INPUT_SELECT_CHARACTER_MICHAEL = 166,
	INPUT_SELECT_CHARACTER_FRANKLIN = 167,
	INPUT_SELECT_CHARACTER_TREVOR = 168,
	INPUT_SELECT_CHARACTER_MULTIPLAYER = 169,
	INPUT_SAVE_REPLAY_CLIP = 170,
	INPUT_SPECIAL_ABILITY_PC = 171,
	INPUT_CELLPHONE_UP = 172,
	INPUT_CELLPHONE_DOWN = 173,
	INPUT_CELLPHONE_LEFT = 174,
	INPUT_CELLPHONE_RIGHT = 175,
	INPUT_CELLPHONE_SELECT = 176,
	INPUT_CELLPHONE_CANCEL = 177,
	INPUT_CELLPHONE_OPTION = 178,
	INPUT_CELLPHONE_EXTRA_OPTION = 179,
	INPUT_CELLPHONE_SCROLL_FORWARD = 180,
	INPUT_CELLPHONE_SCROLL_BACKWARD = 181,
	INPUT_CELLPHONE_CAMERA_FOCUS_LOCK = 182,
	INPUT_CELLPHONE_CAMERA_GRID = 183,
	INPUT_CELLPHONE_CAMERA_SELFIE = 184,
	INPUT_CELLPHONE_CAMERA_DOF = 185,
	INPUT_CELLPHONE_CAMERA_EXPRESSION = 186,
	INPUT_FRONTEND_DOWN = 187,
	INPUT_FRONTEND_UP = 188,
	INPUT_FRONTEND_LEFT = 189,
	INPUT_FRONTEND_RIGHT = 190,
	INPUT_FRONTEND_RDOWN = 191,
	INPUT_FRONTEND_RUP = 192,
	INPUT_FRONTEND_RLEFT = 193,
	INPUT_FRONTEND_RRIGHT = 194,
	INPUT_FRONTEND_AXIS_X = 195,
	INPUT_FRONTEND_AXIS_Y = 196,
	INPUT_FRONTEND_RIGHT_AXIS_X = 197,
	INPUT_FRONTEND_RIGHT_AXIS_Y = 198,
	INPUT_FRONTEND_PAUSE = 199,
	INPUT_FRONTEND_PAUSE_ALTERNATE = 200,
	INPUT_FRONTEND_ACCEPT = 201,
	INPUT_FRONTEND_CANCEL = 202,
	INPUT_FRONTEND_X = 203,
	INPUT_FRONTEND_Y = 204,
	INPUT_FRONTEND_LB = 205,
	INPUT_FRONTEND_RB = 206,
	INPUT_FRONTEND_LT = 207,
	INPUT_FRONTEND_RT = 208,
	INPUT_FRONTEND_LS = 209,
	INPUT_FRONTEND_RS = 210,
	INPUT_FRONTEND_LEADERBOARD = 211,
	INPUT_FRONTEND_SOCIAL_CLUB = 212,
	INPUT_FRONTEND_SOCIAL_CLUB_SECONDARY = 213,
	INPUT_FRONTEND_DELETE = 214,
	INPUT_FRONTEND_ENDSCREEN_ACCEPT = 215,
	INPUT_FRONTEND_ENDSCREEN_EXPAND = 216,
	INPUT_FRONTEND_SELECT = 217,
	INPUT_SCRIPT_LEFT_AXIS_X = 218,
	INPUT_SCRIPT_LEFT_AXIS_Y = 219,
	INPUT_SCRIPT_RIGHT_AXIS_X = 220,
	INPUT_SCRIPT_RIGHT_AXIS_Y = 221,
	INPUT_SCRIPT_RUP = 222,
	INPUT_SCRIPT_RDOWN = 223,
	INPUT_SCRIPT_RLEFT = 224,
	INPUT_SCRIPT_RRIGHT = 225,
	INPUT_SCRIPT_LB = 226,
	INPUT_SCRIPT_RB = 227,
	INPUT_SCRIPT_LT = 228,
	INPUT_SCRIPT_RT = 229,
	INPUT_SCRIPT_LS = 230,
	INPUT_SCRIPT_RS = 231,
	INPUT_SCRIPT_PAD_UP = 232,
	INPUT_SCRIPT_PAD_DOWN = 233,
	INPUT_SCRIPT_PAD_LEFT = 234,
	INPUT_SCRIPT_PAD_RIGHT = 235,
	INPUT_SCRIPT_SELECT = 236,
	INPUT_CURSOR_ACCEPT = 237,
	INPUT_CURSOR_CANCEL = 238,
	INPUT_CURSOR_X = 239,
	INPUT_CURSOR_Y = 240,
	INPUT_CURSOR_SCROLL_UP = 241,
	INPUT_CURSOR_SCROLL_DOWN = 242,
	INPUT_ENTER_CHEAT_CODE = 243,
	INPUT_INTERACTION_MENU = 244,
	INPUT_MP_TEXT_CHAT_ALL = 245,
	INPUT_MP_TEXT_CHAT_TEAM = 246,
	INPUT_MP_TEXT_CHAT_FRIENDS = 247,
	INPUT_MP_TEXT_CHAT_CREW = 248,
	INPUT_PUSH_TO_TALK = 249,
	INPUT_CREATOR_LS = 250,
	INPUT_CREATOR_RS = 251,
	INPUT_CREATOR_LT = 252,
	INPUT_CREATOR_RT = 253,
	INPUT_CREATOR_MENU_TOGGLE = 254,
	INPUT_CREATOR_ACCEPT = 255,
	INPUT_CREATOR_DELETE = 256,
	INPUT_ATTACK2 = 257,
	INPUT_RAPPEL_JUMP = 258,
	INPUT_RAPPEL_LONG_JUMP = 259,
	INPUT_RAPPEL_SMASH_WINDOW = 260,
	INPUT_PREV_WEAPON = 261,
	INPUT_NEXT_WEAPON = 262,
	INPUT_MELEE_ATTACK1 = 263,
	INPUT_MELEE_ATTACK2 = 264,
	INPUT_WHISTLE = 265,
	INPUT_MOVE_LEFT = 266,
	INPUT_MOVE_RIGHT = 267,
	INPUT_MOVE_UP = 268,
	INPUT_MOVE_DOWN = 269,
	INPUT_LOOK_LEFT = 270,
	INPUT_LOOK_RIGHT = 271,
	INPUT_LOOK_UP = 272,
	INPUT_LOOK_DOWN = 273,
	INPUT_SNIPER_ZOOM_IN = 274,
	INPUT_SNIPER_ZOOM_OUT = 275,
	INPUT_SNIPER_ZOOM_IN_ALTERNATE = 276,
	INPUT_SNIPER_ZOOM_OUT_ALTERNATE = 277,
	INPUT_VEH_MOVE_LEFT = 278,
	INPUT_VEH_MOVE_RIGHT = 279,
	INPUT_VEH_MOVE_UP = 280,
	INPUT_VEH_MOVE_DOWN = 281,
	INPUT_VEH_GUN_LEFT = 282,
	INPUT_VEH_GUN_RIGHT = 283,
	INPUT_VEH_GUN_UP = 284,
	INPUT_VEH_GUN_DOWN = 285,
	INPUT_VEH_LOOK_LEFT = 286,
	INPUT_VEH_LOOK_RIGHT = 287,
	INPUT_REPLAY_START_STOP_RECORDING = 288,
	INPUT_REPLAY_START_STOP_RECORDING_SECONDARY = 289,
	INPUT_SCALED_LOOK_LR = 290,
	INPUT_SCALED_LOOK_UD = 291,
	INPUT_SCALED_LOOK_UP_ONLY = 292,
	INPUT_SCALED_LOOK_DOWN_ONLY = 293,
	INPUT_SCALED_LOOK_LEFT_ONLY = 294,
	INPUT_SCALED_LOOK_RIGHT_ONLY = 295,
	INPUT_REPLAY_MARKER_DELETE = 296,
	INPUT_REPLAY_CLIP_DELETE = 297,
	INPUT_REPLAY_PAUSE = 298,
	INPUT_REPLAY_REWIND = 299,
	INPUT_REPLAY_FFWD = 300,
	INPUT_REPLAY_NEWMARKER = 301,
	INPUT_REPLAY_RECORD = 302,
	INPUT_REPLAY_SCREENSHOT = 303,
	INPUT_REPLAY_HIDEHUD = 304,
	INPUT_REPLAY_STARTPOINT = 305,
	INPUT_REPLAY_ENDPOINT = 306,
	INPUT_REPLAY_ADVANCE = 307,
	INPUT_REPLAY_BACK = 308,
	INPUT_REPLAY_TOOLS = 309,
	INPUT_REPLAY_RESTART = 310,
	INPUT_REPLAY_SHOWHOTKEY = 311,
	INPUT_REPLAY_CYCLEMARKERLEFT = 312,
	INPUT_REPLAY_CYCLEMARKERRIGHT = 313,
	INPUT_REPLAY_FOVINCREASE = 314,
	INPUT_REPLAY_FOVDECREASE = 315,
	INPUT_REPLAY_CAMERAUP = 316,
	INPUT_REPLAY_CAMERADOWN = 317,
	INPUT_REPLAY_SAVE = 318,
	INPUT_REPLAY_TOGGLETIME = 319,
	INPUT_REPLAY_TOGGLETIPS = 320,
	INPUT_REPLAY_PREVIEW = 321,
	INPUT_REPLAY_TOGGLE_TIMELINE = 322,
	INPUT_REPLAY_TIMELINE_PICKUP_CLIP = 323,
	INPUT_REPLAY_TIMELINE_DUPLICATE_CLIP = 324,
	INPUT_REPLAY_TIMELINE_PLACE_CLIP = 325,
	INPUT_REPLAY_CTRL = 326,
	INPUT_REPLAY_TIMELINE_SAVE = 327,
	INPUT_REPLAY_PREVIEW_AUDIO = 328,
	INPUT_VEH_DRIVE_LOOK = 329,
	INPUT_VEH_DRIVE_LOOK2 = 330,
	INPUT_VEH_FLY_ATTACK2 = 331,
	INPUT_RADIO_WHEEL_UD = 332,
	INPUT_RADIO_WHEEL_LR = 333,
	INPUT_VEH_SLOWMO_UD = 334,
	INPUT_VEH_SLOWMO_UP_ONLY = 335,
	INPUT_VEH_SLOWMO_DOWN_ONLY = 336,
	INPUT_MAP_POI = 337
};
enum GameEvents
{
	SCRIPT_ARRAY_DATA_VERIFY_EVENT,
	REQUEST_CONTROL_EVENT,
	GIVE_CONTROL_EVENT,
	WEAPON_DAMAGE_EVENT,
	REQUEST_PICKUP_EVENT,
	REQUEST_MAP_PICKUP_EVENT,
	RESPAWN_PLAYER_PED_EVENT,
	GIVE_WEAPON_EVENT,
	REMOVE_WEAPON_EVENT,
	REMOVE_ALL_WEAPONS_EVENT,
	VEHICLE_COMPONENT_CONTROL_EVENT,
	FIRE_EVENT,
	EXPLOSION_EVENT,
	START_PROJECTILE_EVENT,
	ALTER_WANTED_LEVEL_EVENT,
	CHANGE_RADIO_STATION_EVENT,
	RAGDOLL_REQUEST_EVENT,
	PLAYER_TAUNT_EVENT,
	PLAYER_CARD_STAT_EVENT,
	DOOR_BREAK_EVENT,
	SCRIPTED_GAME_EVENT,
	REMOTE_SCRIPT_INFO_EVENT,
	REMOTE_SCRIPT_LEAVE_EVENT,
	MARK_AS_NO_LONGER_NEEDED_EVENT,
	CONVERT_TO_SCRIPT_ENTITY_EVENT,
	SCRIPT_WORLD_STATE_EVENT,
	INCIDENT_ENTITY_EVENT,
	CLEAR_AREA_EVENT,
	CLEAR_RECTANGLE_AREA_EVENT,
	NETWORK_REQUEST_SYNCED_SCENE_EVENT,
	NETWORK_START_SYNCED_SCENE_EVENT,
	NETWORK_UPDATE_SYNCED_SCENE_EVENT,
	NETWORK_STOP_SYNCED_SCENE_EVENT,
	GIVE_PED_SCRIPTED_TASK_EVENT,
	GIVE_PED_SEQUENCE_TASK_EVENT,
	NETWORK_CLEAR_PED_TASKS_EVENT,
	NETWORK_START_PED_ARREST_EVENT,
	NETWORK_START_PED_UNCUFF_EVENT,
	NETWORK_SOUND_CAR_HORN_EVENT,
	NETWORK_ENTITY_AREA_STATUS_EVENT,
	NETWORK_GARAGE_OCCUPIED_STATUS_EVENT,
	PED_CONVERSATION_LINE_EVENT,
	SCRIPT_ENTITY_STATE_CHANGE_EVENT,
	NETWORK_PLAY_SOUND_EVENT,
	NETWORK_STOP_SOUND_EVENT,
	NETWORK_PLAY_AIRDEFENSE_FIRE_EVENT,
	NETWORK_BANK_REQUEST_EVENT,
	REQUEST_DOOR_EVENT,
	NETWORK_TRAIN_REQUEST_EVENT,
	NETWORK_TRAIN_REPORT_EVENT,
	NETWORK_INCREMENT_STAT_EVENT,
	MODIFY_VEHICLE_LOCK_WORD_STATE_DATA,
	REQUEST_PHONE_EXPLOSION_EVENT,
	REQUEST_DETACHMENT_EVENT,
	KICK_VOTES_EVENT,
	GIVE_PICKUP_REWARDS_EVENT,
	NETWORK_CRC_HASH_CHECK_EVENT,
	BLOW_UP_VEHICLE_EVENT,
	NETWORK_SPECIAL_FIRE_EQUIPPED_WEAPON,
	NETWORK_RESPONDED_TO_THREAT_EVENT,
	NETWORK_SHOUT_TARGET_POSITION,
	PICKUP_DESTROYED_EVENT,
	UPDATE_PLAYER_SCARS_EVENT,
	NETWORK_CHECK_EXE_SIZE_EVENT,
	NETWORK_PTFX_EVENT,
	NETWORK_PED_SEEN_DEAD_PED_EVENT,
	REMOVE_STICKY_BOMB_EVENT,
	NETWORK_CHECK_CODE_CRCS_EVENT,
	INFORM_SILENCED_GUNSHOT_EVENT,
	PED_PLAY_PAIN_EVENT,
	CACHE_PLAYER_HEAD_BLEND_DATA_EVENT,
	REMOVE_PED_FROM_PEDGROUP_EVENT,
	REPORT_MYSELF_EVENT,
	REPORT_CASH_SPAWN_EVENT,
	ACTIVATE_VEHICLE_SPECIAL_ABILITY_EVENT,
	NETWORK_CHECK_CATALOG_CRC,
};

enum eBlipColor
{
	ColorWhite = 0,
	ColorRed = 1,
	ColorGreen = 2,
	ColorBlue = 3,
	ColorPlayer = 4,
	ColorYellow = 5,
	ColorPurple = 7,
	ColorVehicle = 38,
	ColorMichael = 42,
	ColorFranklin = 43,
	ColorTrevor = 44,
	ColorMissionRed = 49,
	ColorMissionVehicle = 54,
	ColorYellowMission = 66,
	ColorYellowMission2 = 60,
	ColorWaypoint = 83,
};

enum eBlipSprite
{
	SpriteStandard = 1,
	SpriteBig = 2,
	SpritePoliceOfficer = 3,
	SpritePoliceArea = 4,
	SpriteSquare = 5,
	SpritePlayer = 6,
	SpriteNorth = 7,
	SpriteWaypoint = 8,
	SpriteBigCircle = 9,
	SpriteBigCircleOutline = 10,
	SpriteArrowUpOutlined = 11,
	SpriteArrowDownOutlined = 12,
	SpriteArrowUp = 13,
	SpriteArrowDown = 14,
	SpritePoliceHelicopterAnimated = 15,
	SpriteJet = 16,
	SpriteNumber1 = 17,
	SpriteNumber2 = 18,
	SpriteNumber3 = 19,
	SpriteNumber4 = 20,
	SpriteNumber5 = 21,
	SpriteNumber6 = 22,
	SpriteNumber7 = 23,
	SpriteNumber8 = 24,
	SpriteNumber9 = 25,
	SpriteNumber10 = 26,
	SpriteGTAOCrew = 27,
	SpriteGTAOFriendly = 28,
	SpriteLift = 36,
	SpriteRaceFinish = 38,
	SpriteSafehouse = 40,
	SpritePoliceOfficer2 = 41,
	SpritePoliceCarDot = 42,
	SpritePoliceHelicopter = 43,
	SpriteChatBubble = 47,
	SpriteGarage2 = 50,
	SpriteDrugs = 51,
	SpriteStore = 52,
	SpritePoliceCar = 56,
	SpritePolicePlayer = 58,
	SpritePoliceStation = 60,
	SpriteHospital = 61,
	SpriteHelicopter = 64,
	SpriteStrangersAndFreaks = 65,
	SpriteArmoredTruck = 66,
	SpriteTowTruck = 68,
	SpriteBarber = 71,
	SpriteLosSantosCustoms = 72,
	SpriteClothes = 73,
	SpriteTattooParlor = 75,
	SpriteSimeon = 76,
	SpriteLester = 77,
	SpriteMichael = 78,
	SpriteTrevor = 79,
	SpriteRampage = 84,
	SpriteVinewoodTours = 85,
	SpriteLamar = 86,
	SpriteFranklin = 88,
	SpriteChinese = 89,
	SpriteAirport = 90,
	SpriteBar = 93,
	SpriteBaseJump = 94,
	SpriteCarWash = 100,
	SpriteComedyClub = 102,
	SpriteDart = 103,
	SpriteFIB = 106,
	SpriteDollarSign = 108,
	SpriteGolf = 109,
	SpriteAmmuNation = 110,
	SpriteExile = 112,
	SpriteShootingRange = 119,
	SpriteSolomon = 120,
	SpriteStripClub = 121,
	SpriteTennis = 122,
	SpriteTriathlon = 126,
	SpriteOffRoadRaceFinish = 127,
	SpriteKey = 134,
	SpriteMovieTheater = 135,
	SpriteMusic = 136,
	SpriteMarijuana = 140,
	SpriteHunting = 141,
	SpriteArmsTraffickingGround = 147,
	SpriteNigel = 149,
	SpriteAssaultRifle = 150,
	SpriteBat = 151,
	SpriteGrenade = 152,
	SpriteHealth = 153,
	SpriteKnife = 154,
	SpriteMolotov = 155,
	SpritePistol = 156,
	SpriteRPG = 157,
	SpriteShotgun = 158,
	SpriteSMG = 159,
	SpriteSniper = 160,
	SpriteSonicWave = 161,
	SpritePointOfInterest = 162,
	SpriteGTAOPassive = 163,
	SpriteGTAOUsingMenu = 164,
	SpriteLink = 171,
	SpriteMinigun = 173,
	SpriteGrenadeLauncher = 174,
	SpriteArmor = 175,
	SpriteCastle = 176,
	SpriteCamera = 184,
	SpriteHandcuffs = 188,
	SpriteYoga = 197,
	SpriteCab = 198,
	SpriteNumber11 = 199,
	SpriteNumber12 = 200,
	SpriteNumber13 = 201,
	SpriteNumber14 = 202,
	SpriteNumber15 = 203,
	SpriteNumber16 = 204,
	SpriteShrink = 205,
	SpriteEpsilon = 206,
	SpritePersonalVehicleCar = 225,
	SpritePersonalVehicleBike = 226,
	SpriteCustody = 237,
	SpriteArmsTraffickingAir = 251,
	SpriteFairground = 266,
	SpritePropertyManagement = 267,
	SpriteAltruist = 269,
	SpriteEnemy = 270,
	SpriteChop = 273,
	SpriteDead = 274,
	SpriteHooker = 279,
	SpriteFriend = 280,
	SpriteBountyHit = 303,
	SpriteGTAOMission = 304,
	SpriteGTAOSurvival = 305,
	SpriteCrateDrop = 306,
	SpritePlaneDrop = 307,
	SpriteSub = 308,
	SpriteRace = 309,
	SpriteDeathmatch = 310,
	SpriteArmWrestling = 311,
	SpriteAmmuNationShootingRange = 313,
	SpriteRaceAir = 314,
	SpriteRaceCar = 315,
	SpriteRaceSea = 316,
	SpriteGarbageTruck = 318,
	SpriteMotorCycle = 348,
	SpriteSafehouseForSale = 350,
	SpritePackage = 351,
	SpriteMartinMadrazo = 352,
	SpriteEnemyHelicopter = 353,
	SpriteBoost = 354,
	SpriteDevin = 355,
	SpriteMarina = 356,
	SpriteGarage = 357,
	SpriteGolfFlag = 358,
	SpriteHangar = 359,
	SpriteHelipad = 360,
	SpriteJerryCan = 361,
	SpriteMasks = 362,
	SpriteHeistSetup = 363,
	SpriteIncapacitated = 364,
	SpritePickupSpawn = 365,
	SpriteBoilerSuit = 366,
	SpriteCompleted = 367,
	SpriteRockets = 368,
	SpriteGarageForSale = 369,
	SpriteHelipadForSale = 370,
	SpriteMarinaForSale = 371,
	SpriteHangarForSale = 372,
	SpriteBusiness = 374,
	SpriteBusinessForSale = 375,
	SpriteRaceBike = 376,
	SpriteParachute = 377,
	SpriteTeamDeathmatch = 378,
	SpriteRaceFoot = 379,
	SpriteVehicleDeathmatch = 380,
	SpriteBarry = 381,
	SpriteDom = 382,
	SpriteMaryAnn = 383,
	SpriteCletus = 384,
	SpriteJosh = 385,
	SpriteMinute = 386,
	SpriteOmega = 387,
	SpriteTonya = 388,
	SpritePaparazzo = 389,
	SpriteCrosshair = 390,
	SpriteCreator = 398,
	SpriteCreatorDirection = 399,
	SpriteAbigail = 400,
	SpriteBlimp = 401,
	SpriteRepair = 402,
	SpriteTestosterone = 403,
	SpriteDinghy = 404,
	SpriteFanatic = 405,
	SpriteInformation = 407,
	SpriteCaptureBriefcase = 408,
	SpriteLastTeamStanding = 409,
	SpriteBoat = 410,
	SpriteCaptureHouse = 411,
	SpriteJerryCan2 = 415,
	SpriteRP = 416,
	SpriteGTAOPlayerSafehouse = 417,
	SpriteGTAOPlayerSafehouseDead = 418,
	SpriteCaptureAmericanFlag = 419,
	SpriteCaptureFlag = 420,
	SpriteTank = 421,
	SpriteHelicopterAnimated = 422,
	SpritePlane = 423,
	SpriteJet2 = 424,
	SpritePlayerNoColor = 425,
	SpriteGunCar = 426,
	SpriteSpeedboat = 427,
	SpriteHeist = 428,
	SpriteStopwatch = 430,
	SpriteDollarSignCircled = 431,
	SpriteCrosshair2 = 432,
	SpriteDollarSignSquared = 434,
};

enum eBone
{
	SKEL_ROOT = 0x0,
	SKEL_Pelvis = 0x2e28,
	SKEL_L_Thigh = 0xe39f,
	SKEL_L_Calf = 0xf9bb,
	SKEL_L_Foot = 0x3779,
	SKEL_L_Toe0 = 0x83c,
	IK_L_Foot = 0xfedd,
	PH_L_Foot = 0xe175,
	MH_L_Knee = 0xb3fe,
	SKEL_R_Thigh = 0xca72,
	SKEL_R_Calf = 0x9000,
	SKEL_R_Foot = 0xcc4d,
	SKEL_R_Toe0 = 0x512d,
	IK_R_Foot = 0x8aae,
	PH_R_Foot = 0x60e6,
	MH_R_Knee = 0x3fcf,
	RB_L_ThighRoll = 0x5c57,
	RB_R_ThighRoll = 0x192a,
	SKEL_Spine_Root = 0xe0fd,
	SKEL_Spine0 = 0x5c01,
	SKEL_Spine1 = 0x60f0,
	SKEL_Spine2 = 0x60f1,
	SKEL_Spine3 = 0x60f2,
	SKEL_L_Clavicle = 0xfcd9,
	SKEL_L_UpperArm = 0xb1c5,
	SKEL_L_Forearm = 0xeeeb,
	SKEL_L_Hand = 0x49d9,
	SKEL_L_Finger00 = 0x67f2,
	SKEL_L_Finger01 = 0xff9,
	SKEL_L_Finger02 = 0xffa,
	SKEL_L_Finger10 = 0x67f3,
	SKEL_L_Finger11 = 0x1049,
	SKEL_L_Finger12 = 0x104a,
	SKEL_L_Finger20 = 0x67f4,
	SKEL_L_Finger21 = 0x1059,
	SKEL_L_Finger22 = 0x105a,
	SKEL_L_Finger30 = 0x67f5,
	SKEL_L_Finger31 = 0x1029,
	SKEL_L_Finger32 = 0x102a,
	SKEL_L_Finger40 = 0x67f6,
	SKEL_L_Finger41 = 0x1039,
	SKEL_L_Finger42 = 0x103a,
	PH_L_Hand = 0xeb95,
	IK_L_Hand = 0x8cbd,
	RB_L_ForeArmRoll = 0xee4f,
	RB_L_ArmRoll = 0x1470,
	MH_L_Elbow = 0x58b7,
	SKEL_R_Clavicle = 0x29d2,
	SKEL_R_UpperArm = 0x9d4d,
	SKEL_R_Forearm = 0x6e5c,
	SKEL_R_Hand = 0xdead,
	SKEL_R_Finger00 = 0xe5f2,
	SKEL_R_Finger01 = 0xfa10,
	SKEL_R_Finger02 = 0xfa11,
	SKEL_R_Finger10 = 0xe5f3,
	SKEL_R_Finger11 = 0xfa60,
	SKEL_R_Finger12 = 0xfa61,
	SKEL_R_Finger20 = 0xe5f4,
	SKEL_R_Finger21 = 0xfa70,
	SKEL_R_Finger22 = 0xfa71,
	SKEL_R_Finger30 = 0xe5f5,
	SKEL_R_Finger31 = 0xfa40,
	SKEL_R_Finger32 = 0xfa41,
	SKEL_R_Finger40 = 0xe5f6,
	SKEL_R_Finger41 = 0xfa50,
	SKEL_R_Finger42 = 0xfa51,
	PH_R_Hand = 0x6f06,
	IK_R_Hand = 0x188e,
	RB_R_ForeArmRoll = 0xab22,
	RB_R_ArmRoll = 0x90ff,
	MH_R_Elbow = 0xbb0,
	SKEL_Neck_1 = 0x9995,
	SKEL_Head = 0x796e,
	IK_Head = 0x322c,
	FACIAL_facialRoot = 0xfe2c,
	FB_L_Brow_Out_000 = 0xe3db,
	FB_L_Lid_Upper_000 = 0xb2b6,
	FB_L_Eye_000 = 0x62ac,
	FB_L_CheekBone_000 = 0x542e,
	FB_L_Lip_Corner_000 = 0x74ac,
	FB_R_Lid_Upper_000 = 0xaa10,
	FB_R_Eye_000 = 0x6b52,
	FB_R_CheekBone_000 = 0x4b88,
	FB_R_Brow_Out_000 = 0x54c,
	FB_R_Lip_Corner_000 = 0x2ba6,
	FB_Brow_Centre_000 = 0x9149,
	FB_UpperLipRoot_000 = 0x4ed2,
	FB_UpperLip_000 = 0xf18f,
	FB_L_Lip_Top_000 = 0x4f37,
	FB_R_Lip_Top_000 = 0x4537,
	FB_Jaw_000 = 0xb4a0,
	FB_LowerLipRoot_000 = 0x4324,
	FB_LowerLip_000 = 0x508f,
	FB_L_Lip_Bot_000 = 0xb93b,
	FB_R_Lip_Bot_000 = 0xc33b,
	FB_Tongue_000 = 0xb987,
	RB_Neck_1 = 0x8b93,
	IK_Root = 0xdd1c
};

enum FontEnum
{
	FontChaletLondon = 0,
	FontHouseScript = 1,
	FontMonospace = 2,
	FontWingDings = 3,
	FontChaletComprimeCologne = 4,
	FontPricedown = 7
};

enum eHudComponent
{
	HudComponentMain = 0,
	HudComponentWantedStars,
	HudComponentWeaponIcon,
	HudComponentCash,
	HudComponentMpCash,
	HudComponentMpMessage,
	HudComponentVehicleName,
	HudComponentAreaName,
	HudComponentUnused,
	HudComponentStreetName,
	HudComponentHelpText,
	HudComponentFloatingHelpText1,
	HudComponentFloatingHelpText2,
	HudComponentCashChange,
	HudComponentReticle,
	HudComponentSubtitleText,
	HudComponentRadioStationsWheel,
	HudComponentSaving,
	HudComponentGameStreamUnused,
	HudComponentWeaponWheel,
	HudComponentWeaponWheelStats,
	HudComponentDrugsPurse01,
	HudComponentDrugsPurse02,
	HudComponentDrugsPurse03,
	HudComponentDrugsPurse04,
	HudComponentMpTagCashFromBank,
	HudComponentMpTagPackages,
	HudComponentMpTagCuffKeys,
	HudComponentMpTagDownloadData,
	HudComponentMpTagIfPedFollowing,
	HudComponentMpTagKeyCard,
	HudComponentMpTagRandomObject,
	HudComponentMpTagRemoteControl,
	HudComponentMpTagCashFromSafe,
	HudComponentMpTagWeaponsPackage,
	HudComponentMpTagKeys,
	HudComponentMpVehicle,
	HudComponentMpVehicleHeli,
	HudComponentMpVehiclePlane,
	HudComponentPlayerSwitchAlert,
	HudComponentMpRankBar,
	HudComponentDirectorMode,
	HudComponentReplayController,
	HudComponentReplayMouse,
	HudComponentReplayHeader,
	HudComponentReplayOptions,
	HudComponentReplayHelpText,
	HudComponentReplayMiscText,
	HudComponentReplayTopLine,
	HudComponentReplayBottomLine,
	HudComponentReplayLeftBar,
	HudComponentReplayTimer
};

enum eGameState 
{
	GameStatePlaying,
	GameStateIntro,
	GameStateLicense = 3,
	GameStateMainMenu = 5,
	GameStateLoadingSP_MP = 6
};

enum FrameFlags : std::uint32_t
{
	FrameFlagExplosiveAmmo = 1 << 3,
	FrameFlagFireAmmo = 1 << 4,
	FrameFlagExplosiveMelee = 1 << 5,
	FrameFlagSuperJump = 1 << 6,
};

enum PedCamViewModes
{
	ThirdPersonNear = 0,
	ThirdPersonMedium = 1,
	ThirdPersonFar = 2,
	Cinematic = 3,
	FirstPerson = 4,
};

enum AnimationFlags
{
	ANIM_FLAG_NORMAL = 0,
	ANIM_FLAG_REPEAT = 1,
	ANIM_FLAG_STOP_LAST_FRAME = 2,
	ANIM_FLAG_UPPERBODY = 16,
	ANIM_FLAG_ENABLE_PLAYER_CONTROL = 32,
	ANIM_FLAG_CANCELABLE = 120,
};

enum SessionTypes
{
	SessionTypeJoinPublic,
	SessionTypeNewPublic,
	SessionTypeClosedCrew,
	SessionTypeCrew,
	SessionTypeClosedFriend = 6,
	SessionTypeFindFriend = 9,
	SessionTypeSolo,
	SessionTypeInviteOnly,
	SessionTypeJoinCrew
};

enum ScriptEventTypes
{
	KICK_TO_SINGLE_PLAYER,
	CEO_KICK,
	CEO_BAN,
	PROPERTY_TELEPORT,
	CAYO_PERICO_TELEPORT,
	FORCE_INTO_MISSION
};