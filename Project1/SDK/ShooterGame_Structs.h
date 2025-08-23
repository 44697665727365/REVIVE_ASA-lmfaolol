#pragma once

/**
 * Name: Ark_Survival_Ascended
 * Version: 0.1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum ShooterGame.EPrimalCharacterInputType
	 */
	enum class EPrimalCharacterInputType : uint8_t
	{
		PrimaryFire       = 0,
		Targeting         = 1,
		AltFire           = 2,
		SwitchWeapon      = 3,
		Reload            = 4,
		Crouch            = 5,
		Prone             = 6,
		CrouchProneToggle = 7,
		SwitchMap         = 8,
		DinoAttack        = 9,
		MAX               = 10
	};

	/**
	 * Enum ShooterGame.UContextMenuItemSwitchMode
	 */
	enum class EUContextMenuItemSwitchMode : uint8_t
	{
		UContextMenuItemSwitchModeNone                           = 0,
		UContextMenuItemSwitchModeRadio                          = 1,
		UContextMenuItemSwitchModeCheckbox                       = 2,
		UContextMenuItemSwitchModeUContextMenuItemSwitchMode_MAX = 3
	};

	/**
	 * Enum ShooterGame.EAntiDupeTransactionLog
	 */
	enum class EAntiDupeTransactionLog : uint8_t
	{
		Item_Upload   = 0,
		Dino_Upload   = 1,
		Player_Upload = 2,
		MAX_ENTRY     = 3,
		MAX           = 4
	};

	/**
	 * Enum ShooterGame.EBiomeZone
	 */
	enum class EBiomeZone : uint8_t
	{
		None                  = 0,
		Beach                 = 1,
		Canyon                = 2,
		River                 = 3,
		Grassland             = 4,
		Swamp                 = 5,
		Jungle                = 6,
		RedwoodForest         = 7,
		Mountain              = 8,
		Snow                  = 9,
		Ocean                 = 10,
		Lava                  = 11,
		Surface               = 12,
		FertileChamber        = 13,
		BioluminescentChamber = 14,
		ElementChamber        = 15,
		Wasteland             = 16,
		MAX                   = 17
	};

	/**
	 * Enum ShooterGame.FolderWidgetType
	 */
	enum class EFolderWidgetType : uint8_t
	{
		FolderWidgetTypeFWT_Back         = 0,
		FolderWidgetTypeFWT_Folder       = 1,
		FolderWidgetTypeFWT_CustomFolder = 2,
		FolderWidgetTypeFWT_MAX          = 3
	};

	/**
	 * Enum ShooterGame.EBoidType
	 */
	enum class EBoidType : uint8_t
	{
		Follower  = 0,
		Leader    = 1,
		FreeAgent = 2,
		MAX       = 3
	};

	/**
	 * Enum ShooterGame.EOldShaderPlatform
	 */
	enum class EOldShaderPlatform : uint8_t
	{
		OSP_PCD3D_SM5            = 0,
		OSP_OPENGL_SM4           = 1,
		OSP_PS4                  = 2,
		OSP_OPENGL_PCES2         = 3,
		OSP_XBOXONE              = 4,
		OSP_PCD3D_SM4            = 5,
		OSP_OPENGL_SM5           = 6,
		OSP_PCD3D_ES2            = 7,
		OSP_OPENGL_ES2_ANDROID   = 8,
		OSP_OPENGL_ES2_WEBGL     = 9,
		OSP_OPENGL_ES2_IOS       = 10,
		OSP_METAL                = 11,
		OSP_OPENGL_SM4_MAC       = 12,
		OSP_METAL_MRT            = 13,
		OSP_OPENGL_ES31_EXT      = 14,
		OSP_PCD3D_ES3            = 15,
		OSP_OPENGL_PCES3         = 16,
		OSP_METAL_SM5            = 17,
		OSP_VULKAN_PCES3         = 18,
		OSP_METAL_SM4            = 19,
		OSP_VULKAN_SM4           = 20,
		OSP_VULKAN_SM5           = 21,
		OSP_VULKAN_ES3_1_ANDROID = 22,
		OSP_METAL_MACES3         = 23,
		OSP_METAL_MACES2         = 24,
		OSP_OPENGL_ES3_1_ANDROID = 25,
		OSP_SWITCH               = 26,
		OSP_SWITCH_FORWARD       = 27,
		OSP_NumPlatforms         = 28,
		OSP_MAX                  = 29
	};

	/**
	 * Enum ShooterGame.EMissionDispatcherTriggerMode
	 */
	enum class EMissionDispatcherTriggerMode : uint8_t
	{
		AutoStartMission    = 0,
		Ignore              = 1,
		ActivateViaMultiUse = 2,
		MAX                 = 3
	};

	/**
	 * Enum ShooterGame.ENativeMissionMetaTag
	 */
	enum class ENativeMissionMetaTag : uint8_t
	{
		INVALID                = 0,
		GENESIS_VR_BOSS_UNLOCK = 1,
		ARCTIC_MISSION         = 2,
		BOG_MISSION            = 3,
		LUNAR_MISSION          = 4,
		OCEAN_MISSION          = 5,
		VOLCANIC_MISSION       = 6,
		NORMAL_DIFFICULTY      = 7,
		ALPHA_DIFFICULTY       = 8,
		BETA_DIFFICULTY        = 9,
		GAMMA_DIFFICULTY       = 10,
		MAX                    = 11
	};

	/**
	 * Enum ShooterGame.EMissionDispatchMode
	 */
	enum class EMissionDispatchMode : uint8_t
	{
		StartAnywhere                  = 0,
		RequireNearbyMissionDispatcher = 1,
		RequireInsideMissionDispatcher = 2,
		UseBPStaticCanStartMission     = 3,
		RequireInsideDispatcherNoCheck = 4,
		MAX                            = 5
	};

	/**
	 * Enum ShooterGame.ECompanionState
	 */
	enum class ECompanionState : uint8_t
	{
		IDLE      = 0,
		FOCUSED   = 1,
		EVENT     = 2,
		MONOLOGUE = 3,
		ASLEEP    = 4,
		CUSTOM    = 5,
		MAX       = 6
	};

	/**
	 * Enum ShooterGame.EGrappleState
	 */
	enum class EGrappleState : uint8_t
	{
		GRAPPLE_Idle      = 0,
		GRAPPLE_Pulling   = 1,
		GRAPPLE_Releasing = 2,
		GRAPPLE_Custom    = 3,
		GRAPPLE_Max       = 4
	};

	/**
	 * Enum ShooterGame.EClimbingMode
	 */
	enum class EClimbingMode : uint8_t
	{
		None       = 0,
		Attached   = 1,
		Finalizing = 2,
		MAX        = 3
	};

	/**
	 * Enum ShooterGame.EClimbingType
	 */
	enum class EClimbingType : uint8_t
	{
		None       = 0,
		ClimbLook  = 1,
		ClimbInput = 2,
		Slide      = 3,
		MAX        = 4
	};

	/**
	 * Enum ShooterGame.EClimbingAnimationType
	 */
	enum class EClimbingAnimationType : uint8_t
	{
		Up                   = 0,
		Down                 = 1,
		Right                = 2,
		Left                 = 3,
		MeleeUp              = 4,
		MeleeRight           = 5,
		MeleeLeft            = 6,
		FinishUp             = 7,
		FinishDown           = 8,
		HangingFwd           = 9,
		HangingMelee         = 10,
		HangingFinishUp      = 11,
		HangingFinishDown    = 12,
		JumpUp               = 13,
		JumpUpRight          = 14,
		JumpUpLeft           = 15,
		SlideDown            = 16,
		AttachUp             = 17,
		AttachDown           = 18,
		AttachHangingUp      = 19,
		AttachHangingDown    = 20,
		FlipLeft             = 21,
		FlipRight            = 22,
		FlipUp               = 23,
		FlipDown             = 24,
		TurnUp               = 25,
		TurnDown             = 26,
		TurnRight            = 27,
		TurnLeft             = 28,
		OpenInventory        = 29,
		OpenInventoryHanging = 30,
		QuakeFall            = 31,
		MAX                  = 32
	};

	/**
	 * Enum ShooterGame.EBabyCuddleType
	 */
	enum class EBabyCuddleType : uint8_t
	{
		PET  = 0,
		FOOD = 1,
		WALK = 2,
		MAX  = 3
	};

	/**
	 * Enum ShooterGame.EInteractionType
	 */
	enum class EInteractionType : uint8_t
	{
		InteractionType_Foliage = 0,
		InteractionType_Fluid   = 1,
		InteractionType_Both    = 2,
		InteractionType_MAX     = 3
	};

	/**
	 * Enum ShooterGame.EEngramCategory
	 */
	enum class EEngramCategory : uint8_t
	{
		TOOLS       = 0,
		CLOTHING    = 1,
		WEAPONS     = 2,
		SADDLES     = 3,
		STRUCTURES  = 4,
		CRAFTING    = 5,
		MISC        = 6,
		MODSPECIFIC = 7,
		MAX         = 8
	};

	/**
	 * Enum ShooterGame.EEngramGroup
	 */
	enum class EEngramGroup : uint8_t
	{
		ARK_PRIME         = 0,
		ARK_SCORCHEDEARTH = 1,
		ARK_TEK           = 2,
		ARK_UNLEARNED     = 3,
		ARK_ABERRATION    = 4,
		ARK_EXTINCTION    = 5,
		ARK_GENESIS       = 6,
		ARK_GEN2          = 7,
		MAX               = 8
	};

	/**
	 * Enum ShooterGame.EBoneModifierType
	 */
	enum class EBoneModifierType : uint8_t
	{
		HEAD          = 0,
		NECK          = 1,
		NECKLENGTH    = 2,
		CHEST         = 3,
		SHOULDERS     = 4,
		ARMLENGTH     = 5,
		UPPERARM      = 6,
		LOWERARM      = 7,
		HAND          = 8,
		LEGLENGTH     = 9,
		UPPERLEG      = 10,
		LOWERLEG      = 11,
		FOOT          = 12,
		HIP           = 13,
		TORSO         = 14,
		UPPERFACESIZE = 15,
		LOWERFACESIZE = 16,
		TORSODEPTH    = 17,
		HEADHEIGHT    = 18,
		HEADWIDTH     = 19,
		HEADDEPTH     = 20,
		TORSOHEIGHT   = 21,
		TORSOSIZE     = 22,
		OVERALLHEIGHT = 23,
		EYESIZE       = 24,
		EYEWIDTH      = 25,
		MAX           = 26
	};

	/**
	 * Enum ShooterGame.ETooltipMode
	 */
	enum class ETooltipMode : uint8_t
	{
		DEFAULT     = 0,
		ONLY_ACTION = 1,
		OFF         = 2,
		MAX         = 3
	};

	/**
	 * Enum ShooterGame.ENotificationMode
	 */
	enum class ENotificationMode : uint8_t
	{
		DEFAULT = 0,
		MINIMAL = 1,
		COMBAT  = 2,
		OFF     = 3,
		MAX     = 4
	};

	/**
	 * Enum ShooterGame.EPlayerConfigDynamicMaterialVectorTypes
	 */
	enum class EPlayerConfigDynamicMaterialVectorTypes : uint8_t
	{
		BODYFAT_FATDEPOSITS = 0,
		BODYMUSCLE_CHEST    = 1,
		BODYMUSCLE_BACK     = 2,
		BODYMUSCLE_ARMS     = 3,
		BODYMUSCLE_ARMS01   = 4,
		BODYMUSCLE_LEGS     = 5,
		BODYMUSCLE_LEGS01   = 6,
		MAX                 = 7
	};

	/**
	 * Enum ShooterGame.EPlayerConfigPlayerDynamicMaterialSliderTypes
	 */
	enum class EPlayerConfigPlayerDynamicMaterialSliderTypes : uint8_t
	{
		BODYFAT_CHEST                = 0,
		BODYFAT_BELLY                = 1,
		BODYFAT_BUTT                 = 2,
		BODYMUSCLE_CHEST_PECTORALS   = 3,
		BODYMUSCLE_CHEST_ABS         = 4,
		BODYMUSCLE_CHEST_OBLIQUES    = 5,
		BODYMUSCLE_BACK_NECK         = 6,
		BODYMUSCLE_BACK_TRAPEZIES    = 7,
		BODYMUSCLE_BACK_BACK         = 8,
		BODYMUSCLE_ARMS_1_DELTOID    = 9,
		BODYMUSCLE_ARMS_1_TRICEP     = 10,
		BODYMUSCLE_ARMS_1_BICEP      = 11,
		BODYMUSCLE_ARMS_2_FOREARM    = 12,
		BODYMUSCLE_LEGS_1_LATS       = 13,
		BODYMUSCLE_LEGS_1_GLUTES     = 14,
		BODYMUSCLE_LEGS_1_HAMSTRINGS = 15,
		BODYMUSCLE_LEGS_2_ADDUCTORS  = 16,
		BODYMUSCLE_LEGS_2_QUADS      = 17,
		BODYMUSCLE_LEGS_2_CALVES     = 18,
		BODYMUSCLE_OVERALL           = 19,
		BODYFATOVERALL               = 20,
		MAX                          = 21
	};

	/**
	 * Enum ShooterGame.EPlayerDynamicMaterialType
	 */
	enum class EPlayerDynamicMaterialType : uint8_t
	{
		Float  = 0,
		Vector = 1,
		Color  = 2,
		MAX    = 3
	};

	/**
	 * Enum ShooterGame.ETeamPingType
	 */
	enum class ETeamPingType : uint8_t
	{
		SmartPing  = 0,
		GoHere     = 1,
		Tame       = 2,
		Follow     = 3,
		FollowMe   = 4,
		Attack     = 5,
		Danger     = 6,
		LootIt     = 7,
		Track      = 8,
		Rallypoint = 9,
		MAX        = 10
	};

	/**
	 * Enum ShooterGame.ETribeGroupPermission
	 */
	enum class ETribeGroupPermission : uint8_t
	{
		STRUCTUREACTIVATE             = 0,
		INVENTORYACCESS               = 1,
		PET_ORDER                     = 2,
		PET_RIDE                      = 3,
		GENERAL_STRUCTUREDEMOLISH     = 4,
		GENERAL_STRUCTUREATTACHMENT   = 5,
		GENERAL_BUILDSTRUCTUREINRANGE = 6,
		INVITEMEMBER                  = 7,
		PROMOTEMEMBER                 = 8,
		DEMOTEMEMBER                  = 9,
		BANISHMEMBER                  = 10,
		PET_UNCLAIM                   = 11,
		TELEPORT_MEMBERS              = 12,
		TELEPORT_DINOS                = 13,
		PING                          = 14,
		RALLYPOINT                    = 15,
		WIRELESSCRAFTING              = 16,
		MAX                           = 17
	};

	/**
	 * Enum ShooterGame.EXPType
	 */
	enum class EXPType : uint8_t
	{
		XP_GENERIC       = 0,
		XP_KILL          = 1,
		XP_HARVEST       = 2,
		XP_CRAFT         = 3,
		XP_SPECIAL       = 4,
		XP_ALPHAKILL     = 5,
		XP_CAVEKILL      = 6,
		XP_WILDKILL      = 7,
		XP_BOSSKILL      = 8,
		XP_TAMEDKILL     = 9,
		XP_UNCLAIMEDKILL = 10,
		XP_EXPLORERNOTE  = 11,
		MAX              = 12
	};

	/**
	 * Enum ShooterGame.EDinoTamedOrder
	 */
	enum class EDinoTamedOrder : uint8_t
	{
		SetAggressionPassive      = 0,
		SetAggressionNeutral      = 1,
		SetAggressionAggressive   = 2,
		SetAggressionAttackTarget = 3,
		ToggleFollowMe            = 4,
		FollowMe                  = 5,
		StopFollowing             = 6,
		CycleFollowDistance       = 7,
		SetAggressionPassiveFlee  = 8,
		LandingToMe               = 9,
		MAX                       = 10
	};

	/**
	 * Enum ShooterGame.EPrimalItemStat
	 */
	enum class EPrimalItemStat : uint8_t
	{
		GenericQuality         = 0,
		Armor                  = 1,
		MaxDurability          = 2,
		WeaponDamagePercent    = 3,
		WeaponClipAmmo         = 4,
		HypothermalInsulation  = 5,
		Weight                 = 6,
		HyperthermalInsulation = 7,
		MAX                    = 8
	};

	/**
	 * Enum ShooterGame.EPrimalItemType
	 */
	enum class EPrimalItemType : uint8_t
	{
		MiscConsumable   = 0,
		Equipment        = 1,
		Weapon           = 2,
		Ammo             = 3,
		Structure        = 4,
		Resource         = 5,
		Skin             = 6,
		WeaponAttachment = 7,
		Artifact         = 8,
		MAX              = 9
	};

	/**
	 * Enum ShooterGame.ELevelExperienceRampType
	 */
	enum class ELevelExperienceRampType : uint8_t
	{
		Player     = 0,
		DinoEasy   = 1,
		DinoMedium = 2,
		DinoHard   = 3,
		MAX        = 4
	};

	/**
	 * Enum ShooterGame.EPrimalConsumableType
	 */
	enum class EPrimalConsumableType : uint8_t
	{
		Food     = 0,
		Water    = 1,
		Medicine = 2,
		Other    = 3,
		MAX      = 4
	};

	/**
	 * Enum ShooterGame.EPrimalCharacterStatusState
	 */
	enum class EPrimalCharacterStatusState : uint8_t
	{
		Dead         = 0,
		Winded       = 1,
		Starvation   = 2,
		Dehydration  = 3,
		Suffocation  = 4,
		Encumbered   = 5,
		Hypothermia  = 6,
		Hyperthermia = 7,
		Injured      = 8,
		KnockedOut   = 9,
		Sleeping     = 10,
		Cold         = 11,
		Hot          = 12,
		Crafting     = 13,
		MAX          = 14
	};

	/**
	 * Enum ShooterGame.EPrimalItemMessage
	 */
	enum class EPrimalItemMessage : uint8_t
	{
		Broken   = 0,
		Repaired = 1,
		MAX      = 2
	};

	/**
	 * Enum ShooterGame.ETraceType
	 */
	enum class ETraceType : uint8_t
	{
		TT_LineTrace = 0,
		TT_ArcTrace  = 1,
		TT_Max       = 2
	};

	/**
	 * Enum ShooterGame.EPrimalStructureElevatorState
	 */
	enum class EPrimalStructureElevatorState : uint8_t
	{
		PSLS_Down = 0,
		PSLS_Up   = 1,
		PSLS_MAX  = 2
	};

	/**
	 * Enum ShooterGame.ESeedCropPhase
	 */
	enum class ESeedCropPhase : uint8_t
	{
		Seedling   = 0,
		Midling    = 1,
		Growthling = 2,
		Fruiting   = 3,
		MAX        = 4
	};

	/**
	 * Enum ShooterGame.ECrateMovementMode
	 */
	enum class ECrateMovementMode : uint8_t
	{
		None      = 0,
		Regular   = 1,
		Throttled = 2,
		MAX       = 3
	};

	/**
	 * Enum ShooterGame.EPrimalStructurePlacerState
	 */
	enum class EPrimalStructurePlacerState : uint8_t
	{
		Default          = 0,
		FadeAway         = 1,
		PlacingStructure = 2,
		MAX              = 3
	};

	/**
	 * Enum ShooterGame.HighlightStartingPoint
	 */
	enum class EHighlightStartingPoint : uint8_t
	{
		TopLeft                    = 0,
		Center                     = 1,
		HighlightStartingPoint_MAX = 2
	};

	/**
	 * Enum ShooterGame.ControlDirection
	 */
	enum class EControlDirection : uint8_t
	{
		NoDirection          = 0,
		Up                   = 1,
		Down                 = 2,
		Left                 = 3,
		Right                = 4,
		ControlDirection_MAX = 5
	};

	/**
	 * Enum ShooterGame.EWindSourceMode
	 */
	enum class EWindSourceMode : uint8_t
	{
		AtmosphericWind    = 0,
		FoliageInteraction = 1,
		MAX                = 2
	};

	/**
	 * Enum ShooterGame.EEffectScope
	 */
	enum class EEffectScope : uint8_t
	{
		FirstPersonOnly = 0,
		ThirdPersonOnly = 1,
		AllCameraModes  = 2,
		MAX             = 3
	};

	/**
	 * Enum ShooterGame.EWirelessTransmissionType
	 */
	enum class EWirelessTransmissionType : uint8_t
	{
		Custom       = 0,
		Power        = 1,
		Water        = 2,
		Fuel         = 3,
		Ammo         = 4,
		Crafting     = 5,
		ItemTransfer = 6,
		MAX          = 7
	};

	/**
	 * Enum ShooterGame.EWorldBuffPropertyLocation
	 */
	enum class EWorldBuffPropertyLocation : uint8_t
	{
		GameMode  = 0,
		GameState = 1,
		MAX       = 2
	};

	/**
	 * Enum ShooterGame.EWorldBuffDifficultyType
	 */
	enum class EWorldBuffDifficultyType : uint8_t
	{
		GAMMA = 0,
		BETA  = 1,
		ALPHA = 2,
		OTHER = 3,
		MAX   = 4
	};

	/**
	 * Enum ShooterGame.ECheatActorType
	 */
	enum class ECheatActorType : uint8_t
	{
		Pawns     = 0,
		Dino      = 1,
		Player    = 2,
		Tame      = 3,
		Wild      = 4,
		Structure = 5,
		MAX       = 6
	};

	/**
	 * Enum ShooterGame.EHapticEffectType
	 */
	enum class EHapticEffectType : uint8_t
	{
		HET_MenuTick         = 0,
		HET_MenuSelection    = 1,
		HET_RadialTick       = 2,
		HET_RadialSelection  = 3,
		HET_MenuAnalogSweep  = 4,
		HET_StatLevelUp      = 5,
		HET_StructureFail    = 6,
		HET_StructureSuccess = 7,
		HET_StructureDestroy = 8,
		HET_StructureFlip    = 9,
		HET_ResourceGather   = 10,
		HET_EnterWater       = 11,
		HET_StartFlying      = 12,
		HET_Explosion        = 13,
		HET_BossTeleport     = 14,
		HET_BigDinoWalking   = 15,
		HET_MAX              = 16
	};

	/**
	 * Enum ShooterGame.ETriggerEffectType
	 */
	enum class ETriggerEffectType : uint8_t
	{
		None           = 0,
		Feedback       = 1,
		Weapon         = 2,
		Slope          = 3,
		Vibration      = 4,
		VibrationSlope = 5,
		MAX            = 6
	};

	/**
	 * Enum ShooterGame.EPrimalStatsValueTypes
	 */
	enum class EPrimalStatsValueTypes : uint8_t
	{
		TotalShots         = 0,
		Misses             = 1,
		HitsStructure      = 2,
		HitsDinoBody       = 3,
		HitsDinoCritical   = 4,
		HitsPlayerBody     = 5,
		HitsPlayerCritical = 6,
		MAX                = 7
	};

	/**
	 * Enum ShooterGame.EPrimalGDKStat
	 */
	enum class EPrimalGDKStat : uint8_t
	{
		CreatureTamed  = 0,
		KilledSurvivor = 1,
		PlayerDied     = 2,
		PunchedTrees   = 3,
		MAX            = 4
	};

	/**
	 * Enum ShooterGame.EAimAssistType
	 */
	enum class EAimAssistType : uint8_t
	{
		Off                 = 0,
		TargetingOn         = 1,
		RangeWeaponAlwaysOn = 2,
		MAX                 = 3
	};

	/**
	 * Enum ShooterGame.EMissionState
	 */
	enum class EMissionState : uint8_t
	{
		ServerSetup = 0,
		Activated   = 1,
		Suspended   = 2,
		Deactivated = 3,
		MAX         = 4
	};

	/**
	 * Enum ShooterGame.EGamePhase
	 */
	enum class EGamePhase : uint8_t
	{
		None       = 0,
		Lobby_SOTF = 1,
		Match_SOTF = 2,
		MAX        = 3
	};

	/**
	 * Enum ShooterGame.EMissionTimerMode
	 */
	enum class EMissionTimerMode : uint8_t
	{
		HideTimer                = 0,
		ShowTimeRemaining        = 1,
		ShowTimeElapsed          = 2,
		UseBPGetMissionTimerText = 3,
		MAX                      = 4
	};

	/**
	 * Enum ShooterGame.ESpawnPattern
	 */
	enum class ESpawnPattern : uint8_t
	{
		Circle = 0,
		Grid   = 1,
		Random = 2,
		MAX    = 3
	};

	/**
	 * Enum ShooterGame.EMissionRelatedPropertyUsage
	 */
	enum class EMissionRelatedPropertyUsage : uint8_t
	{
		Prefix      = 0,
		Suffix      = 1,
		Description = 2,
		MAX         = 3
	};

	/**
	 * Enum ShooterGame.EMissionRelatedPropertyType
	 */
	enum class EMissionRelatedPropertyType : uint8_t
	{
		Name_PropertyType    = 0,
		String_PropertyType  = 1,
		Boolean_PropertyType = 2,
		Integer_PropertyType = 3,
		Float_PropertyType   = 4,
		Double_PropertyType  = 5,
		MAX                  = 6
	};

	/**
	 * Enum ShooterGame.ESTOFNotificationType
	 */
	enum class ESTOFNotificationType : uint8_t
	{
		Death           = 0,
		TribeEliminated = 1,
		MatchVictory    = 2,
		MatchDraw       = 3,
		MAX             = 4
	};

	/**
	 * Enum ShooterGame.EPrimalARKTributeDataType
	 */
	enum class EPrimalARKTributeDataType : uint8_t
	{
		Items         = 0,
		TamedDinos    = 1,
		CharacterData = 2,
		MAX           = 3
	};

	/**
	 * Enum ShooterGame.EPrimalCharacterStatusValue
	 */
	enum class EPrimalCharacterStatusValue : uint8_t
	{
		Health                  = 0,
		Stamina                 = 1,
		Torpidity               = 2,
		Oxygen                  = 3,
		Food                    = 4,
		Water                   = 5,
		Temperature             = 6,
		Weight                  = 7,
		MeleeDamageMultiplier   = 8,
		SpeedMultiplier         = 9,
		TemperatureFortitude    = 10,
		CraftingSpeedMultiplier = 11,
		MAX                     = 12
	};


	/**
	 * Enum ShooterGame.EBoolExecResult
	 */
	enum class EBoolExecResult : uint8_t
	{
		Success = 0,
		Failed  = 1,
		MAX     = 2
	};

	/**
	 * Enum ShooterGame.ECameraStyle
	 */
	enum class ECameraStyle : uint8_t
	{
		Default     = 0,
		FirstPerson = 1,
		ThirdPerson = 2,
		FreeCam     = 3,
		Orbit       = 4,
		Spectator   = 5,
		MAX         = 6
	};

	/**
	 * Enum ShooterGame.ETargetingTeamBehavior
	 */
	enum class ETargetingTeamBehavior : uint8_t
	{
		ExactMatch              = 0,
		FriendlyWith            = 1,
		PrioritizeButIncludeAny = 2,
		MAX                     = 3
	};

	/**
	 * Enum ShooterGame.EChatMessageType
	 */
	enum class EChatMessageType : uint8_t
	{
		MyMessage            = 0,
		SameTeamMessage      = 1,
		DifferentTeamMessage = 2,
		SystemWideMessage    = 3,
		SameAllianceMessage  = 4,
		AdminMessage         = 5,
		MAX                  = 6
	};

	/**
	 * Enum ShooterGame.EChatType
	 */
	enum class EChatType : uint8_t
	{
		GlobalChat      = 0,
		ProximityChat   = 1,
		RadioChat       = 2,
		GlobalTribeChat = 3,
		AllianceChat    = 4,
		MAX             = 5
	};

	/**
	 * Enum ShooterGame.EChatSendMode
	 */
	enum class EChatSendMode : uint8_t
	{
		GlobalChat      = 0,
		GlobalTribeChat = 1,
		LocalChat       = 2,
		AllianceChat    = 3,
		MAX             = 4
	};

	/**
	 * Enum ShooterGame.EShooterPhysMaterialType
	 */
	enum class EShooterPhysMaterialType : uint8_t
	{
		Unknown    = 0,
		Concrete   = 1,
		Dirt       = 2,
		Water      = 3,
		Metal      = 4,
		Wood       = 5,
		Grass      = 6,
		Glass      = 7,
		Flesh      = 8,
		Leaves     = 9,
		Rock       = 10,
		Sand       = 11,
		Snow       = 12,
		Corruption = 13,
		Lava       = 14,
		Acid       = 15,
		MAX        = 16
	};

	/**
	 * Enum ShooterGame.EPlayerActionIndex
	 */
	enum class EPlayerActionIndex : uint8_t
	{
		None                     = 0,
		WhistleFollow            = 1,
		WhistleFollowOne         = 2,
		WhistleStop              = 3,
		WhistleStopOne           = 4,
		WhistleAggressive        = 5,
		WhistleNeutral           = 6,
		WhistlePassive           = 7,
		WhistlePassiveFlee       = 8,
		WhistleAttackTarget      = 9,
		WhistleAttackThisTarget  = 10,
		WhistleLandFlyerOne      = 11,
		ShowInventory            = 12,
		ShowCraftables           = 13,
		ShowTribeManager         = 14,
		Poop                     = 15,
		UnHideCompanion          = 16,
		ShowEmoteSelection       = 17,
		Back_WhistleList         = 18,
		Emote_HatSwitch          = 19,
		Emote_Salute             = 20,
		Emote_Sorry              = 21,
		Emote_Thank              = 22,
		Emote_Wave               = 23,
		Emote_Laugh              = 24,
		Emote_Yes                = 25,
		Emote_No                 = 26,
		Emote_Taunt              = 27,
		Emote_Cheer              = 28,
		Emote_FriendlyLowerHands = 29,
		Emote_MAX                = 30,
		MAX                      = 31
	};

	/**
	 * Enum ShooterGame.EMissionAlertType
	 */
	enum class EMissionAlertType : uint8_t
	{
		Positive = 0,
		Neutral  = 1,
		Negative = 2,
		MAX      = 3
	};

	/**
	 * Enum ShooterGame.EPhaseRequirementWidgetVisualState
	 */
	enum class EPhaseRequirementWidgetVisualState : uint8_t
	{
		Neutral  = 0,
		Positive = 1,
		Negative = 2,
		Custom   = 3,
		MAX      = 4
	};

	/**
	 * Enum ShooterGame.ELootItemType
	 */
	enum class ELootItemType : uint8_t
	{
		None             = 0,
		Element          = 1,
		Hexagons         = 2,
		ResourceCommon   = 3,
		ResourceUncommon = 4,
		ResourceRare     = 5,
		ArmorTier1       = 6,
		ArmorTier2       = 7,
		ArmorTier3       = 8,
		ArmorTek         = 9,
		WeaponTier1      = 10,
		WeaponTier2      = 11,
		WeaponTier3      = 12,
		WeaponTek        = 13,
		AmmoTier1        = 14,
		AmmoTier2        = 15,
		AmmoTier3        = 16,
		Saddle           = 17,
		MAX              = 18
	};

	/**
	 * Enum ShooterGame.ESimpleCurve
	 */
	enum class ESimpleCurve : uint8_t
	{
		Linear       = 0,
		Pow0         = 1,
		Pow1         = 2,
		Pow101       = 3,
		Pow2         = 4,
		Pow201       = 5,
		Pow3         = 6,
		Pow301       = 7,
		PowCos0      = 8,
		PowCos1      = 9,
		PowCos101    = 10,
		PowCos2      = 11,
		PowCos201    = 12,
		PowCos3      = 13,
		PowCos301    = 14,
		PowSin0      = 15,
		PowSin1      = 16,
		PowSin101    = 17,
		PowSin2      = 18,
		PowSin201    = 19,
		PowSin3      = 20,
		PowSin301    = 21,
		PowMinCos0   = 22,
		PowMinCos1   = 23,
		PowMinCos101 = 24,
		PowMinCos2   = 25,
		PowMinCos201 = 26,
		PowMinCos3   = 27,
		PowMinCos301 = 28,
		PowMax0      = 29,
		PowMax1      = 30,
		PowMax101    = 31,
		PowMax2      = 32,
		PowMax201    = 33,
		PowMax3      = 34,
		PowMax301    = 35,
		MAX          = 36
	};

	/**
	 * Enum ShooterGame.EHUDElementType
	 */
	enum class EHUDElementType : uint8_t
	{
		Text        = 0,
		ProgressBar = 1,
		Image       = 2,
		MAX         = 3
	};

	/**
	 * Enum ShooterGame.EHUDElementAnchorMode
	 */
	enum class EHUDElementAnchorMode : uint8_t
	{
		Specified     = 0,
		QuickbarLeft  = 1,
		QuickbarRight = 2,
		QuickbarTop   = 3,
		MAX           = 4
	};

	/**
	 * Enum ShooterGame.EStencilAlliance
	 */
	enum class EStencilAlliance : uint8_t
	{
		None       = 0,
		Friendly   = 1,
		NPC        = 2,
		NPCFleeing = 3,
		Hostile    = 4,
		Ally       = 5,
		Element    = 6,
		MAX        = 7
	};

	/**
	 * Enum ShooterGame.EHUDElementHorizontalAlignment
	 */
	enum class EHUDElementHorizontalAlignment : uint8_t
	{
		Center = 0,
		Left   = 1,
		Right  = 2,
		MAX    = 3
	};

	/**
	 * Enum ShooterGame.EHUDElementVerticalAlignment
	 */
	enum class EHUDElementVerticalAlignment : uint8_t
	{
		Center = 0,
		Top    = 1,
		Bottom = 2,
		MAX    = 3
	};

	/**
	 * Enum ShooterGame.ELeaderboardColumnName
	 */
	enum class ELeaderboardColumnName : uint8_t
	{
		MissionTag   = 0,
		PlayerNetId  = 1,
		TribeId      = 2,
		TimestampUtc = 3,
		FloatValue   = 4,
		IntValue     = 5,
		NameValue    = 6,
		StringValue  = 7,
		MAX          = 8
	};

	/**
	 * Enum ShooterGame.ELeaderboardGroupByMode
	 */
	enum class ELeaderboardGroupByMode : uint8_t
	{
		None    = 0,
		First   = 1,
		Min     = 2,
		Max     = 3,
		Sum     = 4,
		Count   = 5,
		Average = 6
	};

	/**
	 * Enum ShooterGame.ELeaderboardOrdering
	 */
	enum class ELeaderboardOrdering : uint8_t
	{
		Ascending  = 0,
		Descending = 1,
		MAX        = 2
	};

	/**
	 * Enum ShooterGame.EMassTeleportState
	 */
	enum class EMassTeleportState : uint8_t
	{
		INITIATED         = 0,
		TRIGGERED_SUCCESS = 1,
		TRIGGERED_FAILED  = 2,
		COMPLETED         = 3,
		CANCELLED         = 4,
		MAX               = 5
	};

	/**
	 * Enum ShooterGame.EDLCSelector
	 */
	enum class EDLCSelector : uint8_t
	{
		DLCScorchedEarth = 0,
		DLCAberration    = 1,
		DLCExtinction    = 2,
		DLCCrystalIsles  = 3,
		DLCGenesis       = 4,
		DLCGen2          = 5,
		DLCTheCenter     = 6,
		DLCRagnarok      = 7,
		DLCLostIsland    = 8,
		DLCValguero      = 9,
		DLCFjordur       = 10,
		DLCSelectorMax   = 11,
		MAX              = 12
	};

	/**
	 * Enum ShooterGame.EDinoInputAction
	 */
	enum class EDinoInputAction : uint8_t
	{
		Fire   = 0,
		Target = 1,
		Crouch = 2,
		MAX    = 3
	};

	/**
	 * Enum ShooterGame.ECameraSetting_BoolCondition
	 */
	enum class ECameraSetting_BoolCondition : uint8_t
	{
		Dont_Care          = 0,
		Yes                = 1,
		No                 = 2,
		ECameraSetting_MAX = 3
	};

	/**
	 * Enum ShooterGame.ECDOArrayModificationType
	 */
	enum class ECDOArrayModificationType : uint8_t
	{
		MODIFY         = 0,
		ADD            = 1,
		REMOVE         = 2,
		REPLACE_TARRAY = 3,
		MAX            = 4
	};

	/**
	 * Enum ShooterGame.ETrackedActorCategory
	 */
	enum class ETrackedActorCategory : uint8_t
	{
		NoCategory = 0,
		Creatures  = 1,
		Allies     = 2,
		Teammates  = 3,
		MAX        = 4
	};

	/**
	 * Enum ShooterGame.EFieldActivationType_New
	 */
	enum class EFieldActivationType_New : uint8_t
	{
		Delay           = 0,
		OnTick          = 1,
		OnTickWithDelay = 2,
		Trigger         = 3,
		MAX             = 4
	};

	/**
	 * Enum ShooterGame.EPrimalCameraState
	 */
	enum class EPrimalCameraState : uint8_t
	{
		OLD_CAMERA                           = 0,
		ASA_CAMERA                           = 1,
		NORMAL_INTERP_TO_OLD_CAMERA          = 2,
		NORMAL_INTERP_TO_ASA_CAMERA          = 3,
		WAITING_TO_SWITCH_TO_OLD_CAMERA_SLOW = 4,
		SLOW_INTERP_TO_OLD_CAMERA            = 5,
		MAX                                  = 6
	};

	/**
	 * Enum ShooterGame.EWeaponState
	 */
	enum class EWeaponState : uint8_t
	{
		Idle        = 0,
		Firing      = 1,
		Reloading   = 2,
		Equipping   = 3,
		UnEquipping = 4,
		MAX         = 5
	};

	/**
	 * Enum ShooterGame.EWeaponAmmoReloadState
	 */
	enum class EWeaponAmmoReloadState : uint8_t
	{
		Playing_Anim     = 0,
		Waiting_For_Ammo = 1,
		Ready            = 2,
		MAX              = 3
	};

	/**
	 * Enum ShooterGame.EDomeState
	 */
	enum class EDomeState : uint8_t
	{
		NotADome = 0,
		Inside   = 1,
		Outside  = 2,
		MAX      = 3
	};

	/**
	 * Enum ShooterGame.EHubSubMenu
	 */
	enum class EHubSubMenu : uint8_t
	{
		Inventory       = 0,
		Engrams         = 1,
		TribeManager    = 2,
		TrackedDinoList = 3,
		SurvivalProfile = 4,
		MissionList     = 5,
		Minimap         = 6,
		MAX             = 7
	};

	/**
	 * Enum ShooterGame.EDropItemIconAction
	 */
	enum class EDropItemIconAction : uint8_t
	{
		DA_NoAction                = 0,
		DA_Equip                   = 1,
		DA_UnEquip                 = 2,
		DA_AddToSlot               = 3,
		DA_RemoveFromSlot          = 4,
		DA_ToRemoteInv             = 5,
		DA_FromRemoteInv           = 6,
		DA_RemoteEquip             = 7,
		DA_MergeItemStack          = 8,
		DA_SplitItemStack          = 9,
		DA_SwapItems               = 10,
		DA_UseWithItem             = 11,
		DA_UnEquipTransferToLocal  = 12,
		DA_RemoveItemSkin          = 13,
		DA_SplitItemStackOne       = 14,
		DA_RemoveWeaponAmmo        = 15,
		DA_FromRemoteInvToSlot     = 16,
		DA_ToRemoteInvFromSlot     = 17,
		DA_EquipLocalFromRemote    = 18,
		DA_EquipRemoteFromLocal    = 19,
		DA_UnequipRemote           = 20,
		DA_UnequipTransferToRemote = 21,
		DA_ToArkInv                = 22,
		DA_FromArkInv              = 23,
		MAX                        = 24
	};

	/**
	 * Enum ShooterGame.EListDisplay
	 */
	enum class EListDisplay : uint8_t
	{
		MISSIONS = 0,
		EFFECTS  = 1,
		MAX      = 2
	};

	/**
	 * Enum ShooterGame.EDataDisplay
	 */
	enum class EDataDisplay : uint8_t
	{
		MISSION_INFO = 0,
		LEADERBOARDS = 1,
		MAX          = 2
	};

	/**
	 * Enum ShooterGame.EServerOctreeGroup
	 */
	enum class EServerOctreeGroup : uint8_t
	{
		STASISCOMPONENTS                  = 0,
		PLAYERPAWNS                       = 1,
		DINOPAWNS                         = 2,
		PAWNS                             = 3,
		STRUCTURES                        = 4,
		TARGETABLEACTORS                  = 5,
		PLAYERS_CONNECTED                 = 6,
		SPATIALNETWORKEDACTORS            = 7,
		SPATIALNETWORKEDACTORS_DORMANT    = 8,
		ALL_SPATIAL                       = 9,
		THERMALSTRUCTURES                 = 10,
		STRUCTURES_CORE                   = 11,
		DINOPAWNS_TAMED                   = 12,
		PLAYERS_AND_TAMED_DINOS           = 13,
		PLAYERS_CONNECTED_AND_TAMED_DINOS = 14,
		DINOFOODCONTAINER                 = 15,
		GRENADES                          = 16,
		TREESAPTAPS                       = 17,
		LARGEUNSTASISRANGE                = 18,
		TRAPS                             = 19,
		MAX                               = 20
	};

	/**
	 * Enum ShooterGame.EEditorMessageLogLevel
	 */
	enum class EEditorMessageLogLevel : uint8_t
	{
		Error   = 0,
		Warning = 1,
		Info    = 2,
		Success = 3,
		MAX     = 4
	};

	/**
	 * Enum ShooterGame.EPlayMovieVolumeType
	 */
	enum class EPlayMovieVolumeType : uint8_t
	{
		Default   = 0,
		Music     = 1,
		Character = 2,
		Voice     = 3,
		MAX       = 4
	};

	/**
	 * Enum ShooterGame.EColorChannelTarget
	 */
	enum class EColorChannelTarget : uint8_t
	{
		Red   = 0,
		Green = 1,
		Blue  = 2,
		Alpha = 3,
		All   = 4,
		MAX   = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ShooterGame.ArkTributeEntity
	 * Size -> 0x0004
	 */
	struct FArkTributeEntity
	{
	public:
		int32_t                                                    UploadTime;                                              // 0x0000(0x0004) ZeroConstructor, Transient, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ItemNetID
	 * Size -> 0x0008
	 */
	struct FItemNetID
	{
	public:
		uint32_t                                                   ItemID1;                                                 // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ItemID2;                                                 // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.CustomItemByteArray
	 * Size -> 0x0010
	 */
	struct FCustomItemByteArray
	{
	public:
		TArray<unsigned char>                                      Bytes;                                                   // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.CustomItemByteArrays
	 * Size -> 0x0010
	 */
	struct FCustomItemByteArrays
	{
	public:
		TArray<struct FCustomItemByteArray>                        ByteArrays;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.CustomItemDoubles
	 * Size -> 0x0010
	 */
	struct FCustomItemDoubles
	{
	public:
		TArray<double>                                             Doubles;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.CustomItemData
	 * Size -> 0x0078
	 */
	struct FCustomItemData
	{
	public:
		class FName                                                CustomDataName;                                          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      CustomDataStrings;                                       // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<float>                                              CustomDataFloats;                                        // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class UObject*>                                     CustomDataObjects;                                       // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      CustomDataClasses;                                       // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FName>                                        CustomDataNames;                                         // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FCustomItemByteArrays                               CustomDataBytes;                                         // 0x0058(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, RepSkip, NativeAccessSpecifierPublic
		struct FCustomItemDoubles                                  CustomDataDoubles;                                       // 0x0068(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.CraftingResourceRequirement
	 * Size -> 0x0018
	 */
	struct FCraftingResourceRequirement
	{
	public:
		float                                                      BaseResourceRequirement;                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PDLS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ResourceItemType;                                        // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCraftingRequireExactResourceType;                       // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FVX2[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.DinoAncestorsEntry
	 * Size -> 0x0030
	 */
	struct FDinoAncestorsEntry
	{
	public:
		class FString                                              MaleName;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaleDinoID1;                                             // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaleDinoID2;                                             // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FemaleName;                                              // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   FemaleDinoID1;                                           // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   FemaleDinoID2;                                           // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	// ScriptStruct ShooterGame.CustomCosmeticAdditionalSettings
	// 0x0020 (0x0020 - 0x0000)
	struct FCustomCosmeticAdditionalSettings final
	{
	public:
		struct FVector                                CustomCosmeticDinoRiderOffset;                     // 0x0000(0x0018)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          bCustomCosmeticUnequipOnSleepOrDeath;              // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_2DA7[0x7];                                     // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};
	// ScriptStruct ShooterGame.ItemNetInfo
	// 0x0210 (0x0210 - 0x0000)
	struct FItemNetInfo final
	{
	public:
		TSubclassOf<class UPrimalItem>                ItemArchetype;                                     // 0x0000(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FItemNetID                             ItemID;                                            // 0x0008(0x0008)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
		uint32                                        ItemQuantity;                                      // 0x0010(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         CustomItemID;                                      // 0x0014(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         SlotIndex;                                         // 0x0018(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		int64                                         CustomCosmeticModSkinReplacementID;                // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         CustomCosmeticModSkinVariantID;                    // 0x0028(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		class UClass* CustomCosmeticModSkinReplacementOriginalClass;     // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		double                                        CreationTime;                                      // 0x0038(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                 CustomItemName;                                    // 0x0040(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                 CustomItemDescription;                             // 0x0050(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		double                                        UploadEarliestValidTime;                           // 0x0060(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<uint64>                                SteamUserItemID;                                   // 0x0068(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
		uint8                                         bIsBlueprint : 1;                                  // 0x0078(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bIsEngram : 1;                                     // 0x0078(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bIsCustomRecipe : 1;                               // 0x0078(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bIsFoodRecipe : 1;                                 // 0x0078(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bIsRepairing : 1;                                  // 0x0078(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bAllowRemovalFromInventory : 1;                    // 0x0078(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bHideFromInventoryDisplay : 1;                     // 0x0078(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bAllowRemovalFromSteamInventory : 1;               // 0x0078(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bFromSteamInventory : 1;                           // 0x0079(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bIsFromAllClustersInventory : 1;                   // 0x0079(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bForcePreventGrinding : 1;                         // 0x0079(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bIsEquipped : 1;                                   // 0x0079(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (BlueprintVisible, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bIsSlot : 1;                                       // 0x0079(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (BlueprintVisible, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bIsInitialItem : 1;                                // 0x0079(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (BlueprintVisible, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         Pad_7A[0x2];                                       // 0x007A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		uint16                                        CraftQueue;                                        // 0x007C(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_7E[0x2];                                       // 0x007E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        NextCraftCompletionTime;                           // 0x0080(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         CraftingSkill;                                     // 0x0088(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         CraftedSkillBonus;                                 // 0x008C(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                 CrafterCharacterName;                              // 0x0090(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                 CrafterTribeName;                                  // 0x00A0(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint32                                        WeaponClipAmmo;                                    // 0x00B0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ItemDurability;                                    // 0x00B4(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ItemRating;                                        // 0x00B8(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint32                                        ExpirationTimeUTC;                                 // 0x00BC(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         ItemQualityIndex;                                  // 0x00C0(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_C1[0x7];                                       // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		TSubclassOf<class UPrimalItem>                ItemCustomClass;                                   // 0x00C8(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint16                                        ItemStatValues[0x8];                               // 0x00D0(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int16                                         ItemColorID[0x6];                                  // 0x00E0(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_EC[0x4];                                       // 0x00EC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		TSubclassOf<class UPrimalItem>                ItemSkinTemplate;                                  // 0x00F0(0x0008)(BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FCustomItemData>                CustomItemDatas;                                   // 0x00F8(0x0010)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FColor>                         CustomItemColors;                                  // 0x0108(0x0010)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FCraftingResourceRequirement>   CustomResourceRequirements;                        // 0x0118(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
		double                                        NextSpoilingTime;                                  // 0x0128(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		double                                        LastSpoilingTime;                                  // 0x0130(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint64                                        OwnerPlayerDataId;                                 // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TWeakObjectPtr<class AShooterCharacter>       LastOwnerPlayer;                                   // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		double                                        LastAutoDurabilityDecreaseTime;                    // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         ItemStatClampsMultiplier;                          // 0x0150(0x0004)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_154[0x4];                                      // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct FVector                                OriginalItemDropLocation;                          // 0x0158(0x0018)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int16                                         PreSkinItemColorID[0x6];                           // 0x0170(0x0002)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         EggNumberOfLevelUpPointsApplied[0xC];              // 0x017C(0x0001)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         EggNumberMutationsApplied[0xC];                    // 0x0188(0x0001)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         EggTamedIneffectivenessModifier;                   // 0x0194(0x0004)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         EggColorSetIndices[0x6];                           // 0x0198(0x0001)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_19E[0x2];                                      // 0x019E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		int32                                         EggGenderOverride;                                 // 0x01A0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         ItemVersion;                                       // 0x01A4(0x0001)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_1A5[0x3];                                      // 0x01A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        ClusterSpoilingTimeUTC;                            // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FDinoAncestorsEntry>            EggDinoAncestors;                                  // 0x01B0(0x0010)(ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
		TArray<struct FDinoAncestorsEntry>            EggDinoAncestorsMale;                              // 0x01C0(0x0010)(ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
		TArray<class FName>                           EggDinoGeneTraits;                                 // 0x01D0(0x0010)(ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
		int32                                         EggRandomMutationsFemale;                          // 0x01E0(0x0004)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         EggRandomMutationsMale;                            // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         ItemProfileVersion;                                // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          bNetInfoFromClient;                                // 0x01E9(0x0001)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_1EA[0x2];                                      // 0x01EA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		uint8                                         bIsFromClubArk : 1;                                // 0x01EC(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         Pad_1ED[0x3];                                      // 0x01ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		struct FCustomCosmeticAdditionalSettings      CustomCosmeticAuthVars;                            // 0x01F0(0x0020)(RepSkip, NoDestructor, NativeAccessSpecifierPublic)
	};
	/**
	 * ScriptStruct ShooterGame.ArkTributeInventoryItem
	 * Size -> 0x01D4 (FullSize[0x01D8] - InheritedSize[0x0004])
	 */
	struct FArkTributeInventoryItem : public FArkTributeEntity
	{
	public:
		unsigned char                                              UnknownData_MMO1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FItemNetInfo                                        ArkTributeItem;                                          // 0x0008(0x01C8) Transient, SaveGame, NativeAccessSpecifierPublic
		float                                                      Version;                                                 // 0x01D0(0x0004) ZeroConstructor, Transient, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0RGC[0x4];                                   // 0x01D4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ARKTributeDino
	 * Size -> 0x0134 (FullSize[0x0138] - InheritedSize[0x0004])
	 */
	struct FARKTributeDino : public FArkTributeEntity
	{
	public:
		unsigned char                                              UnknownData_KEYP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              DinoClassPtr[0x30];                                      // 0x0008(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		TArray<unsigned char>                                      DinoData;                                                // 0x0038(0x0010) ZeroConstructor, Transient, SaveGame, NativeAccessSpecifierPublic
		class FString                                              DinoName;                                                // 0x0048(0x0010) ZeroConstructor, Transient, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DinoNameInMap;                                           // 0x0058(0x0010) ZeroConstructor, Transient, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DinoStats[0xC];                                          // 0x0068(0x00C0) ZeroConstructor, Transient, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DinoExperiencePoints;                                    // 0x0128(0x0004) ZeroConstructor, Transient, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Version;                                                 // 0x012C(0x0004) ZeroConstructor, Transient, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   DinoID1;                                                 // 0x0130(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   DinoID2;                                                 // 0x0134(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ArkTributePlayerData
	 * Size -> 0x011C (FullSize[0x0120] - InheritedSize[0x0004])
	 */
	struct FArkTributePlayerData : public FArkTributeEntity
	{
	public:
		unsigned char                                              UnknownData_6ZTP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   PlayerDataID;                                            // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      PlayerDataBytes;                                         // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              PlayerName;                                              // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerStats[0xC];                                        // 0x0030(0x00C0) ZeroConstructor, Transient, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UploadingServerMapName;                                  // 0x00F0(0x0010) ZeroConstructor, Transient, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UploadingServerName;                                     // 0x0100(0x0010) ZeroConstructor, Transient, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWasAllowDPCUpload;                                      // 0x0110(0x0001) ZeroConstructor, Transient, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWithItems;                                              // 0x0111(0x0001) ZeroConstructor, Transient, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4KMX[0x2];                                   // 0x0112(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   ItemCount;                                               // 0x0114(0x0004) ZeroConstructor, Transient, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForServerTransfer;                                      // 0x0118(0x0001) ZeroConstructor, Transient, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AJP3[0x3];                                   // 0x0119(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Version;                                                 // 0x011C(0x0004) ZeroConstructor, Transient, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ArkInventoryData
	 * Size -> 0x0030
	 */
	struct FArkInventoryData
	{
	public:
		TArray<struct FArkTributeInventoryItem>       ArkItems;                                          // 0x0000(0x0010)(ZeroConstructor, Transient, SaveGame, NativeAccessSpecifierPublic)
		TArray<struct FARKTributeDino>                ArkTamedDinosData;                                 // 0x0010(0x0010)(ZeroConstructor, Transient, SaveGame, NativeAccessSpecifierPublic)
		TArray<struct FArkTributePlayerData>          ArkPlayerData;                                     // 0x0020(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
		int32                                         ClubArkTokens;                                     // 0x0030(0x0004)(ZeroConstructor, Transient, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_294E[0x4];                                     // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		TArray<struct FCustomItemData>                CustomCloudDatas;                                  // 0x0038(0x0010)(ZeroConstructor, Transient, SaveGame, NativeAccessSpecifierPublic)
		char kadjaksjd[0x10];
		//TArray<TSoftClassPtr<class UClass>>           PersistentItemUnlocks;                             // 0x0048(0x0010)(ZeroConstructor, Transient, SaveGame, UObjectWrapper, NativeAccessSpecifierPublic)
	};

	/**
	 * ScriptStruct ShooterGame.ItemCraftingCostOverride
	 * Size -> 0x0018
	 */
	struct FItemCraftingCostOverride
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCraftingResourceRequirement>                BaseCraftingResourceRequirements;                        // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.MaxItemQuantityOverride
	 * Size -> 0x0008
	 */
	struct FMaxItemQuantityOverride
	{
	public:
		int32_t                                                    MaxItemQuantity;                                         // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreMultiplier;                                       // 0x0004(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N6K5[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ItemMaxItemQuantityOverride
	 * Size -> 0x0010
	 */
	struct FItemMaxItemQuantityOverride
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMaxItemQuantityOverride                            Quantity;                                                // 0x0008(0x0008) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ClassMultiplier
	 * Size -> 0x0018
	 */
	struct FClassMultiplier
	{
	public:
		class FString                                              ClassName;                                               // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Multiplier;                                              // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MUKS[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.LevelExperienceRamp
	 * Size -> 0x0010
	 */
	struct FLevelExperienceRamp
	{
	public:
		TArray<float>                                              ExperiencePointsForLevel;                                // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.EngramEntryOverride
	 * Size -> 0x0028
	 */
	struct FEngramEntryOverride
	{
	public:
		class FString                                              EngramClassName;                                         // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EngramIndex;                                             // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EngramHidden;                                            // 0x0014(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4P8I[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EngramPointsCost;                                        // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EngramLevelRequirement;                                  // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RemoveEngramPreReq;                                      // 0x0020(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L70L[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.InventoryComponentDefaultItemsAppend
	 * Size -> 0x0038
	 */
	struct FInventoryComponentDefaultItemsAppend
	{
	public:
		TArray<class UClass*>                                      InventoryComponentClasses;                               // 0x0000(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      AddItems;                                                // 0x0010(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      RemoveItems;                                             // 0x0020(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                       bAddToForceAllowCrafting;                                // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5M0G[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.DinoDownloadData
	 * Size -> 0x0010
	 */
	struct FDinoDownloadData
	{
	public:
		uint32_t                                                   AllowDownloadTimeUTC;                                    // 0x0000(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CV23[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              UniqueDino;                                              // 0x0008(0x0008) ZeroConstructor, SaveGame, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.DataSet
	 * Size -> 0x0078
	 */
	struct FDataSet
	{
	public:
		class FName                                                DataSetName;                                             // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        ListNames;                                               // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      ListStrings;                                             // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ListInts;                                                // 0x0028(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              ListFloats;                                              // 0x0038(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UObject*>                                     ListObjects;                                             // 0x0048(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      ListActors;                                              // 0x0058(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HAWY[0x10];                                  // 0x0068(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.TeleportDestination
	 * Size -> 0x0040
	 */
	struct FTeleportDestination
	{
	public:
		class FString                                              DestinationTitle;                                        // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DestinationLocation;                                     // 0x0010(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            DestinationRotation;                                     // 0x0028(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.MassTeleportData
	 * Size -> 0x0120
	 */
	struct FMassTeleportData
	{
	public:
		struct FTeleportDestination                                MyTeleportDestination;                                   // 0x0000(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		double                                                     MyTeleportStartTime;                                     // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MyTeleportDuration;                                      // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MyTeleportRadius;                                        // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              InitiatedByActor;                                        // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7W9L[0x8];                                   // 0x0058(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          InitiatedAtTransform;                                    // 0x0060(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              BuffToApply;                                             // 0x00C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      MyTeleportingActors;                                     // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bTeleportSnapsToGround : 1;                              // 0x00D8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZFUW[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTransform>                                  MyTeleportingActorTransformOffsets;                      // 0x00E0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              MyTeleportingDelays;                                     // 0x00F0(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            MyTeleportationAttemptMap;                               // 0x0100(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bMaintainRotation : 1;                                   // 0x0110(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1FZ3[0xF];                                   // 0x0111(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.WorldBuffPersistantData
	 * Size -> 0x0018
	 */
	struct FWorldBuffPersistantData
	{
	public:
		class FName                                                WorldBuffIdentifier;                                     // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StackCount;                                              // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C2IV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     WorldBuffStartTime;                                      // 0x0010(0x0008) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.CDOModification_SinglePropertyBase
	 * Size -> 0x0040
	 */
	struct FCDOModification_SinglePropertyBase
	{
	public:
		unsigned char                                              TheClass[0x30];                                          // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		class FName                                                PropertyName;                                            // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlsoApplyToChildrenClasses;                             // 0x0038(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDontApplyToChildClassIfVarIsEdited;                     // 0x0039(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FUX2[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.BoolPropertyPair
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	struct FBoolPropertyPair : public FCDOModification_SinglePropertyBase
	{
	public:
		bool                                                       BoolPropertyValue;                                       // 0x0040(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OYFE[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.CDOModification_ArrayBase
	 * Size -> 0x0060
	 */
	struct FCDOModification_ArrayBase
	{
	public:
		unsigned char                                              TheClass[0x30];                                          // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		class FName                                                PropertyName;                                            // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlsoApplyToChildrenClasses;                             // 0x0038(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDontApplyToChildClassIfVarIsEdited;                     // 0x0039(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECDOArrayModificationType                                  ArrayOperation;                                          // 0x003A(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ST5Y[0x5];                                   // 0x003B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<uint32_t>                                           IndexesToModify;                                         // 0x0040(0x0010) Edit, EditFixedSize, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           IndexesToRemove;                                         // 0x0050(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.CDOModification_BoolArray
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	struct FCDOModification_BoolArray : public FCDOModification_ArrayBase
	{
	public:
		TArray<bool>                                               Values;                                                  // 0x0060(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.IntPropertyPair
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	struct FIntPropertyPair : public FCDOModification_SinglePropertyBase
	{
	public:
		int32_t                                                    IntPropertyValue;                                        // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JM6U[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.CDOModification_IntArray
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	struct FCDOModification_IntArray : public FCDOModification_ArrayBase
	{
	public:
		TArray<int32_t>                                            Values;                                                  // 0x0060(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.FloatPropertyPair
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	struct FFloatPropertyPair : public FCDOModification_SinglePropertyBase
	{
	public:
		float                                                      FloatPropertyValue;                                      // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8LXX[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.CDOModification_FloatArray
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	struct FCDOModification_FloatArray : public FCDOModification_ArrayBase
	{
	public:
		TArray<float>                                              Values;                                                  // 0x0060(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.DoublePropertyPair
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	struct FDoublePropertyPair : public FCDOModification_SinglePropertyBase
	{
	public:
		double                                                     DoublePropertyValue;                                     // 0x0040(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.CDOModification_DoubleArray
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	struct FCDOModification_DoubleArray : public FCDOModification_ArrayBase
	{
	public:
		TArray<double>                                             Values;                                                  // 0x0060(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.StringPropertyPair
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	struct FStringPropertyPair : public FCDOModification_SinglePropertyBase
	{
	public:
		class FString                                              StringPropertyValue;                                     // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.CDOModification_StringArray
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	struct FCDOModification_StringArray : public FCDOModification_ArrayBase
	{
	public:
		TArray<class FString>                                      Values;                                                  // 0x0060(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.VectorPropertyPair
	 * Size -> 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
	 */
	struct FVectorPropertyPair : public FCDOModification_SinglePropertyBase
	{
	public:
		struct FVector                                             VectorPropertyValue;                                     // 0x0040(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.CDOModification_VectorArray
	 * Size -> 0x0010 (FullSize[0x0070] - InheritedSize[0x0060])
	 */
	struct FCDOModification_VectorArray : public FCDOModification_ArrayBase
	{
	public:
		TArray<struct FVector>                                     Values;                                                  // 0x0060(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.RotatorPropertyPair
	 * Size -> 0x0018 (FullSize[0x0058] - InheritedSize[0x0040])
	 */
	struct FRotatorPropertyPair : public FCDOModification_SinglePropertyBase
	{
	public:
		struct FRotator                                            RotatorPropertyValue;                                    // 0x0040(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.NetChangeDefaultPropertyValue
	 * Size -> 0x00D0
	 */
	struct FNetChangeDefaultPropertyValue
	{
	public:
		TArray<struct FBoolPropertyPair>                           BoolProperties;                                          // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FCDOModification_BoolArray>                  BoolArrayProperties;                                     // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FIntPropertyPair>                            IntProperties;                                           // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FCDOModification_IntArray>                   IntArrayProperties;                                      // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FFloatPropertyPair>                          FloatProperties;                                         // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FCDOModification_FloatArray>                 FloatArrayProperties;                                    // 0x0050(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FDoublePropertyPair>                         DoubleProperties;                                        // 0x0060(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FCDOModification_DoubleArray>                DoubleArrayProperties;                                   // 0x0070(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FStringPropertyPair>                         StringProperties;                                        // 0x0080(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FCDOModification_StringArray>                StringArrayProperties;                                   // 0x0090(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FVectorPropertyPair>                         VectorProperties;                                        // 0x00A0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FCDOModification_VectorArray>                VectorArrayProperties;                                   // 0x00B0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FRotatorPropertyPair>                        RotatorProperties;                                       // 0x00C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.CDOClassDebug
	 * Size -> 0x0050
	 */
	struct FCDOClassDebug
	{
	public:
		class FName                                                Description;                                             // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TheClass[0x30];                                          // 0x0008(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		bool                                                       bDontDebugShooterCharacters : 1;                         // 0x0038(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q5I7[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        PropertyNames;                                           // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.CDODebugData
	 * Size -> 0x0018
	 */
	struct FCDODebugData
	{
	public:
		float                                                      RadiusToSearchForActors;                                 // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D2ZF[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCDOClassDebug>                              TheDebugData;                                            // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PointOfInterestData
	 * Size -> 0x01E0
	 */
	struct FPointOfInterestData
	{
	public:
		unsigned char                                              PointType;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UYYT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                PointTag;                                                // 0x0004(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FN8R[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PointTitle;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PointDescription;                                        // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PointLocation;                                           // 0x0030(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            PointRotation;                                           // 0x0048(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class AActor*                                              PointActor;                                              // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointVisibleDistance;                                    // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointVisibleDotProductRange;                             // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          PointIcon;                                               // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     ViewedPointVFX;                                          // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           ViewedPointSFX;                                          // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              PointCosmeticActorClass;                                 // 0x0088(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          PointCosmeticActorOffsetTransform;                       // 0x0090(0x0060) Edit, BlueprintVisible, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHidePointOfInterestTitleBar : 1;                        // 0x00F0(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPointTagValidated : 1;                                  // 0x00F0(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPointTagRequiresValidation : 1;                         // 0x00F0(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyVisibleOffScreen : 1;                               // 0x00F0(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyVisibleOnScreen : 1;                                // 0x00F0(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysVisible : 1;                                      // 0x00F0(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_547L[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          LocationAddedSound;                                      // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          LocationReachedSound;                                    // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WidgetLocationOffset;                                    // 0x0108(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WidgetHiddenDistance;                                    // 0x0120(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        IndicatorColor;                                          // 0x0124(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        IconColor;                                               // 0x0134(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsePulseAnimation : 1;                                  // 0x0144(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowProgress : 1;                                       // 0x0144(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_34IH[0x3];                                   // 0x0145(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProgressValue;                                           // 0x0148(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VU63[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ProgressLabelText;                                       // 0x0150(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ProgressBarColor;                                        // 0x0160(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ProgressLabelColor;                                      // 0x0170(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowProgressLabelWhenOffScreen : 1;                     // 0x0180(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyVisibleOnMap : 1;                                   // 0x0180(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GBZ0[0x3];                                   // 0x0181(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CharacterID;                                             // 0x0184(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CharacterIsPlayer : 1;                                   // 0x0188(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N9MO[0x3];                                   // 0x0189(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AlphaMultiplier;                                         // 0x018C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScaleMultiplier;                                         // 0x0190(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowSecondaryProgress : 1;                              // 0x0194(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TEBZ[0x3];                                   // 0x0195(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SecondaryProgressValue;                                  // 0x0198(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SecondaryProgressBarColor;                               // 0x019C(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanDismissPOI : 1;                                      // 0x01AC(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PJVB[0x3];                                   // 0x01AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    UseDismissIndex;                                         // 0x01B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H2M5[0x4];                                   // 0x01B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              DismissActorAction;                                      // 0x01B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DistanceString;                                          // 0x01C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventTextClose : 1;                                   // 0x01D0(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6F4Z[0xF];                                   // 0x01D1(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.SoundWaveAnimTexturePairs
	 * Size -> 0x0040
	 */
	struct FSoundWaveAnimTexturePairs
	{
	public:
		struct FSoftObjectPath                                     LocalizedSoundWave;                                      // 0x0000(0x0020) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     MatchingAnimTexture;                                     // 0x0020(0x0020) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.LocalizedSoundWaveAnimTexturePairArrays
	 * Size -> 0x0020
	 */
	struct FLocalizedSoundWaveAnimTexturePairArrays
	{
	public:
		class FString                                              TwoLetterISOLanguageName;                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSoundWaveAnimTexturePairs>                  SoundWaveAnimTexturePairs;                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.CompanionReactionData
	 * Size -> 0x00B0
	 */
	struct FCompanionReactionData
	{
	public:
		int32_t                                                    ReactionPriority;                                        // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ReactionType;                                            // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7FJD[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ReactionTimePadding_Start;                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReactionTimePadding_End;                                 // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ForceReactionDuration;                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S9D9[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimMontage*                                        ReactionAnim;                                            // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReactionStartDelay_Anim;                                 // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReactionForceDuration_Anim;                              // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystem*                                     ReactionVFX;                                             // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReactionStartDelay_VFX;                                  // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReactionForceDuration_VFX;                               // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSoftObjectPath>                             ReactionSFXArray;                                        // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      ReactionStartDelay_SFX;                                  // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReactionForceDuration_SFX;                               // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReactionIsMonologue : 1;                                // 0x0050(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsReactionPlaying : 1;                                  // 0x0050(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsReactionPlaying_Anim : 1;                             // 0x0050(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsReactionPlaying_VFX : 1;                              // 0x0050(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsReactionPlaying_SFX : 1;                              // 0x0050(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GWPQ[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ReactionStartTime;                                       // 0x0058(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     ReactionEndTime;                                         // 0x0060(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RequiredSecondsSincePreviousReactionInOrderToBePlayed;   // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDontCancelWhenGreaterOrEqualPriorityPlays : 1;          // 0x006C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0J0Q[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ChanceToOccur;                                           // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CXF8[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     FallbackSharedAnimTexture;                               // 0x0078(0x0020) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLocalizedSoundWaveAnimTexturePairArrays>    LocalizedSoundWaves;                                     // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    ExplorerNoteIndexToUnlock;                               // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RPUS[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PointOfInterestCompanionBehavior
	 * Size -> 0x0300
	 */
	struct FPointOfInterestCompanionBehavior
	{
	public:
		float                                                      CompanionFocusRange;                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CompanionOrbitWithinRange;                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CompanionOrbitRadius;                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NVN9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             OrbitOriginOffset;                                       // 0x0010(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CompanionReachedOrbitWithinDistOverride;                 // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpToOrbitSpeedOverride;                              // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InterpAroundOrbitSpeedOverride;                          // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6FJ9[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCompanionReactionData                              CompanionReaction_WithinRange;                           // 0x0038(0x00B0) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FCompanionReactionData                              CompanionReaction_StartOrbit;                            // 0x00E8(0x00B0) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FCompanionReactionData                              CompanionReaction_ReachedOrbit;                          // 0x0198(0x00B0) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FCompanionReactionData                              CompanionReaction_PointViewed;                           // 0x0248(0x00B0) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
		bool                                                       bForceCompanionFocus : 1;                                // 0x02F8(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOrbitingCompanionLooksAtPoint : 1;                      // 0x02F8(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceCompanionLookAtPointActor : 1;                     // 0x02F8(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRandomlyOrbitAroundAndScan : 1;                         // 0x02F8(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_69SO[0x7];                                   // 0x02F9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.CompanionEventSegmentData
	 * Size -> 0x0100
	 */
	struct FCompanionEventSegmentData
	{
	public:
		float                                                      SegmentDuration;                                         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LT9M[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCompanionReactionData                              SegmentCompanionReaction;                                // 0x0008(0x00B0) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
		bool                                                       bMoveCompanionToLocation : 1;                            // 0x00B8(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMakeCompanionLookAtSomething : 1;                       // 0x00B8(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M9BT[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             MoveCompanionToLocationOffset;                           // 0x00C0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              MakeCompanionLookAtActor;                                // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MakeCompanionLookAtLocation;                             // 0x00E0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CompanionLocationInterpSpeed;                            // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CompanionRotationInterpSpeed;                            // 0x00FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.CompanionEventData
	 * Size -> 0x0050
	 */
	struct FCompanionEventData
	{
	public:
		unsigned char                                              EventType;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J82U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EventTitle;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCompanionEventSegmentData>                  EventSegmentArray;                                       // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
		float                                                      EventTotalDuration;                                      // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LSAN[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     EventStartTime;                                          // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CurrentSegmentIndex;                                     // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7LBA[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastSegmentStartTime;                                    // 0x0040(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     EventEndTime;                                            // 0x0048(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.CustomButtonWidgetStyle
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FCustomButtonWidgetStyle : public FSlateWidgetStyle
	{
	public:
		struct FLinearColor                                        NormalChildTintColor;                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        HoveredChildTintColor;                                   // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        PressedChildTintColor;                                   // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        DisabledChildTintColor;                                  // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.TribeAlliance
	 * Size -> 0x0048
	 */
	struct FTribeAlliance
	{
	public:
		class FString                                              AllianceName;                                            // 0x0000(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   AllianceID;                                              // 0x0010(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XXNY[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      MembersTribeName;                                        // 0x0018(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           MembersTribeID;                                          // 0x0028(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
		TArray<uint32_t>                                           AdminsTribeID;                                           // 0x0038(0x0010) ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.TribeGovernment
	 * Size -> 0x0014
	 */
	struct FTribeGovernment
	{
	public:
		int32_t                                                    TribeGovern_PINCode;                                     // 0x0000(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TribeGovern_DinoOwnership;                               // 0x0004(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TribeGovern_StructureOwnership;                          // 0x0008(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TribeGovern_DinoTaming;                                  // 0x000C(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TribeGovern_DinoUnclaimAdminOnly;                        // 0x0010(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalPlayerCharacterConfigStruct
	 * Size -> 0x0110
	 */
	struct FPrimalPlayerCharacterConfigStruct
	{
	public:
		bool                                                       bIsFemale : 1;                                           // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5Y5A[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        BodyColors[0x4];                                         // 0x0004(0x0040) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              OverrideHeadHairColor[0x2];                              // 0x0044(0x0002) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              OverrideFacialHairColor[0x2];                            // 0x0046(0x0002) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              FacialHairIndex;                                         // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              HeadHairIndex;                                           // 0x0049(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              EyebrowIndex;                                            // 0x004A(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ESS9[0x1];                                   // 0x004B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PercentOfFullHeadHairGrowth;                             // 0x004C(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentOfFullFacialHairGrowth;                           // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CQJ2[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayerCharacterName;                                     // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RawBoneModifiers[0x1A];                                  // 0x0068(0x0068) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DynamicMaterialBytes[0x32];                              // 0x00D0(0x0032) Edit, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_26MI[0x2];                                   // 0x0102(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PlayerVoiceCollectionIndex;                              // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsingCustomPlayerVoiceCollection : 1;                   // 0x0108(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6VE5[0x3];                                   // 0x0109(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PlayerSpawnRegionIndex;                                  // 0x010C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.TribeWar
	 * Size -> 0x0030
	 */
	struct FTribeWar
	{
	public:
		int32_t                                                    EnemyTribeID;                                            // 0x0000(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StartDayNumber;                                          // 0x0004(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EndDayNumber;                                            // 0x0008(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartDayTime;                                            // 0x000C(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndDayTime;                                              // 0x0010(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsApproved;                                             // 0x0014(0x0001) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7RC7[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InitiatingTribeID;                                       // 0x0018(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_615Z[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              EnemyTribeName;                                          // 0x0020(0x0010) ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.TribeRankGroup
	 * Size -> 0x0028
	 */
	struct FTribeRankGroup
	{
	public:
		class FString                                              RankGroupName;                                           // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              RankGroupRank;                                           // 0x0010(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              InventoryRank;                                           // 0x0011(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              StructureActivationRank;                                 // 0x0012(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              NewStructureActivationRank;                              // 0x0013(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              NewStructureInventoryRank;                               // 0x0014(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PetOrderRank;                                            // 0x0015(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PetRidingRank;                                           // 0x0016(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              InviteToGroupRank;                                       // 0x0017(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MaxPromotionGroupRank;                                   // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MaxDemotionGroupRank;                                    // 0x0019(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MaxBanishmentGroupRank;                                  // 0x001A(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              NumInvitesRemaining;                                     // 0x001B(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventStructureDemolish : 1;                           // 0x001C(0x0001) BIT_FIELD BlueprintVisible, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventStructureAttachment : 1;                         // 0x001C(0x0001) BIT_FIELD BlueprintVisible, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventStructureBuildInRange : 1;                       // 0x001C(0x0001) BIT_FIELD BlueprintVisible, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventUnclaiming : 1;                                  // 0x001C(0x0001) BIT_FIELD BlueprintVisible, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowInvites : 1;                                       // 0x001C(0x0001) BIT_FIELD BlueprintVisible, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitInvites : 1;                                       // 0x001C(0x0001) BIT_FIELD BlueprintVisible, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowDemotions : 1;                                     // 0x001C(0x0001) BIT_FIELD BlueprintVisible, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowPromotions : 1;                                    // 0x001C(0x0001) BIT_FIELD BlueprintVisible, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowBanishments : 1;                                   // 0x001D(0x0001) BIT_FIELD BlueprintVisible, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventWirelessCrafting : 1;                            // 0x001D(0x0001) BIT_FIELD BlueprintVisible, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0DP2[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              TeleportMembersRank;                                     // 0x0020(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              TeleportDinosRank;                                       // 0x0021(0x0001) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z7FZ[0x2];                                   // 0x0022(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bDefaultRank : 1;                                        // 0x0024(0x0001) BIT_FIELD BlueprintVisible, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowPing : 1;                                          // 0x0024(0x0001) BIT_FIELD BlueprintVisible, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowRallyPoint : 1;                                    // 0x0024(0x0001) BIT_FIELD BlueprintVisible, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_33SX[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.CustomTrackedActorInfo
	 * Size -> 0x00E0
	 */
	struct FCustomTrackedActorInfo
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TameAffinityPercent;                                     // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HealthPercent;                                           // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HealthCurrent;                                           // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HealthMax;                                               // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HungerPercent;                                           // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HungerCurrent;                                           // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HungerMax;                                               // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TorpidityPercent;                                        // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TameEffectivenessPercent;                                // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TameEffectivenessLvlModifier;                            // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0038(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsConcious;                                             // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseGender;                                              // 0x0051(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFemale;                                               // 0x0052(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTamed;                                                // 0x0053(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DinoImprintingQuality;                                   // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BabyNextCuddleTime;                                      // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BabyAge;                                                 // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeUntilNextNamedAge;                                   // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5MK3[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastTameConsumedFoodTime;                                // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ImprinterName;                                           // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DataID1;                                                 // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DataID2;                                                 // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TargetName;                                              // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPlayer;                                               // 0x0098(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFavorited;                                            // 0x0099(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTrackedWaypoint;                                      // 0x009A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IXBM[0x5];                                   // 0x009B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DinoEntry;                                               // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideFromTrackListAndOnlyShowOnMap;                      // 0x00A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GNXN[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TribeName;                                               // 0x00B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TargetingTeam;                                           // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsVehicle;                                              // 0x00C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsValidForCurrentFilter;                                // 0x00C5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UGG4[0x2];                                   // 0x00C6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Level;                                                   // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_98OX[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TamedAtTime;                                             // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       POIVisible;                                              // 0x00D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IN5H[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.TrackedActorPlusInfoStruct
	 * Size -> 0x0128
	 */
	struct FTrackedActorPlusInfoStruct
	{
	public:
		class AActor*                                              TrackedActor;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCustomTrackedActorInfo                             ReplicatedInfo;                                          // 0x0008(0x00E0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FVector                                             ActorLastKnownLocation;                                  // 0x00E8(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LastPOILocation;                                         // 0x0100(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PreviousLinkedListTrackedActorID;                        // 0x0118(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PreviousLinkedListTrackedActorCategory;                  // 0x011C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3CHM[0x3];                                   // 0x011D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NextLinkedListTrackedActorID;                            // 0x0120(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              NextLinkedListTrackedActorCategory;                      // 0x0124(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MJA8[0x3];                                   // 0x0125(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.TeamPingData
	 * Size -> 0x0050
	 */
	struct FTeamPingData
	{
	public:
		unsigned char                                              PingID;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B1BA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Location;                                                // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              ToActor;                                                 // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ByPlayerID;                                              // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TargetingTeam;                                           // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     CreationTime;                                            // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETeamPingType                                              PingType;                                                // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JEZ3[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayerName;                                              // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};


	// ScriptStruct ShooterGame.TribeData
	// 0x01C8 (0x01C8 - 0x0000)
	struct FTribeData final
	{
	public:
		class FString                                 TribeName;                                         // 0x0000(0x0010)(BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		double                                        LastNameChangeTime;                                // 0x0010(0x0008)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint32                                        OwnerPlayerDataId;                                 // 0x0018(0x0004)(ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         TribeID;                                           // 0x001C(0x0004)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                         MembersPlayerName;                                 // 0x0020(0x0010)(BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
		TArray<uint32>                                MembersPlayerDataID;                               // 0x0030(0x0010)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
		TArray<uint8>                                 MembersRankGroups;                                 // 0x0040(0x0010)(BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
		TArray<double>                                SlotFreedTime;                                     // 0x0050(0x0010)(BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
		TArray<uint32>                                TribeAdmins;                                       // 0x0060(0x0010)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
		TArray<struct FTribeAlliance>                 TribeAlliances;                                    // 0x0070(0x0010)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
		bool                                          bSetGovernment;                                    // 0x0080(0x0001)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_2AED[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		struct FTribeGovernment                       TribeGovernment;                                   // 0x0084(0x0014)(BlueprintVisible, SaveGame, NoDestructor, NativeAccessSpecifierPublic)
		TArray<struct FPrimalPlayerCharacterConfigStruct> MembersConfigs;                                    // 0x0098(0x0010)(BlueprintVisible, ZeroConstructor, SaveGame, RepSkip, NativeAccessSpecifierPublic)
		TArray<struct FTribeWar>                      TribeWars;                                         // 0x00A8(0x0010)(ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
		TArray<class FString>                         TribeLog;                                          // 0x00B8(0x0010)(BlueprintVisible, ZeroConstructor, SaveGame, RepSkip, NativeAccessSpecifierPublic)
		int32                                         LogIndex;                                          // 0x00C8(0x0004)(BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_2AEE[0x4];                                     // 0x00CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		TArray<struct FTribeRankGroup>                TribeRankGroups;                                   // 0x00D0(0x0010)(BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic)
		int32                                         NumTribeDinos;                                     // 0x00E0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_2AEF[0x4];                                     // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		char kjhweqjkwejq[0x10];
		TArray<int32>                                 NumDinosOfLimitedDinoClasses;                      // 0x00F8(0x0010)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FTrackedActorPlusInfoStruct>    CachedTeamTameList_UpdatedOnInterval;              // 0x0108(0x0010)(BlueprintVisible, ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
		double                                        LastNetworkTimeUpdatedCachedTeamTameList;          // 0x0118(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTeamPingData                          RallyPointData;                                    // 0x0120(0x0050)(BlueprintVisible, NativeAccessSpecifierPublic)
		bool                                          bHaveRallyPointData;                               // 0x0170(0x0001)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_2AF0[0x57];                                    // 0x0171(0x0057)(Fixing Struct Size After Last Property [ Dumper-7 ])
	};

	/**
	 * ScriptStruct ShooterGame.EngramEntryAutoUnlock
	 * Size -> 0x0018
	 */
	struct FEngramEntryAutoUnlock
	{
	public:
		class FString                                              EngramClassName;                                         // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LevelToAutoUnlock;                                       // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YXDK[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.DinoSpawnWeightMultiplier
	 * Size -> 0x0014
	 */
	struct FDinoSpawnWeightMultiplier
	{
	public:
		class FName                                                DinoNameTag;                                             // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnWeightMultiplier;                                   // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OverrideSpawnLimitPercentage;                            // 0x000C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NL9U[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpawnLimitPercentage;                                    // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ClassNameReplacement
	 * Size -> 0x0020
	 */
	struct FClassNameReplacement
	{
	public:
		class FString                                              FromClassName;                                           // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ToClassName;                                             // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ConfigCraftingResourceRequirement
	 * Size -> 0x0020
	 */
	struct FConfigCraftingResourceRequirement
	{
	public:
		float                                                      BaseResourceRequirement;                                 // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NH4R[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ResourceItemTypeString;                                  // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCraftingRequireExactResourceType;                       // 0x0018(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TGPQ[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ConfigItemCraftingCostOverride
	 * Size -> 0x0020
	 */
	struct FConfigItemCraftingCostOverride
	{
	public:
		class FString                                              ItemClassString;                                         // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FConfigCraftingResourceRequirement>          BaseCraftingResourceRequirements;                        // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ConfigMaxItemQuantityOverride
	 * Size -> 0x0018
	 */
	struct FConfigMaxItemQuantityOverride
	{
	public:
		class FString                                              ItemClassString;                                         // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMaxItemQuantityOverride                            Quantity;                                                // 0x0010(0x0008) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.SupplyCrateItemEntry
	 * Size -> 0x0090
	 */
	struct FSupplyCrateItemEntry
	{
	public:
		class FString                                              ItemEntryName;                                           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EntryWeight;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9OJN[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      Items;                                                   // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class FString>                                      ItemClassStrings;                                        // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<float>                                              ItemsWeights;                                            // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ItemQuantityOverrides;                                   // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      MinQuantity;                                             // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxQuantity;                                             // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyQuantityToSingleItem;                              // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6LQR[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      QuantityPower;                                           // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRandomQuality;                                        // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinQuality;                                              // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxQuality;                                              // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      QualityPower;                                            // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceBlueprint : 1;                                     // 0x0078(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForcePreventGrinding : 1;                               // 0x0078(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CP9E[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ChanceToBeBlueprintOverride;                             // 0x007C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemStatClampsMultiplier;                                // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChanceToActuallyGiveItem;                                // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RequiresMinQuality;                                      // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N8VD[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.SupplyCrateItemSet
	 * Size -> 0x0040
	 */
	struct FSupplyCrateItemSet
	{
	public:
		class FString                                              SetName;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSupplyCrateItemEntry>                       ItemEntries;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      MinNumItems;                                             // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxNumItems;                                             // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NumItemsPower;                                           // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SetWeight;                                               // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bItemsRandomWithoutReplacement;                          // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IVK5[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ItemSetOverride;                                         // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ConfigSupplyCrateItemsOverride
	 * Size -> 0x0038
	 */
	struct FConfigSupplyCrateItemsOverride
	{
	public:
		class FString                                              SupplyCrateClassString;                                  // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinItemSets;                                             // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxItemSets;                                             // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumItemSetsPower;                                        // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetsRandomWithoutReplacement;                           // 0x001C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AETT[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSupplyCrateItemSet>                         ItemSets;                                                // 0x0020(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bAppendItemSets;                                         // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAppendPreventIncreasingMinMaxItemSets;                  // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IF0D[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ClassRemappingWeight
	 * Size -> 0x0060
	 */
	struct FClassRemappingWeight
	{
	public:
		unsigned char                                              FromClass[0x30];                                         // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              ToClasses[0x10];                                         // 0x0030(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<float>                                              Weights;                                                 // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                ActiveEvent;                                             // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExactMatch : 1;                                         // 0x0058(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LJR9[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.NPCDifficultyLevelRange
	 * Size -> 0x0030
	 */
	struct FNPCDifficultyLevelRange
	{
	public:
		TArray<float>                                              EnemyLevelsMin;                                          // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
		TArray<float>                                              EnemyLevelsMax;                                          // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
		TArray<float>                                              GameDifficulties;                                        // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.NPCSpawnEntry
	 * Size -> 0x0128
	 */
	struct FNPCSpawnEntry
	{
	public:
		class FString                                              AnEntryName;                                             // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              NPCsToSpawn[0x10];                                       // 0x0010(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<class FString>                                      NPCsToSpawnStrings;                                      // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FClassRemappingWeight>                       NPCRandomSpawnClassWeights;                              // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     NPCsSpawnOffsets;                                        // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<float>                                              NPCsToSpawnPercentageChance;                             // 0x0050(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<float>                                              NPCMinLevelOffset;                                       // 0x0060(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<float>                                              NPCMaxLevelOffset;                                       // 0x0070(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<float>                                              NPCMinLevelMultiplier;                                   // 0x0080(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<float>                                              NPCMaxLevelMultiplier;                                   // 0x0090(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bAddLevelOffsetBeforeMultiplier : 1;                     // 0x00A0(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GRNQ[0x7];                                   // 0x00A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      NPCOverrideLevel;                                        // 0x00A8(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FVector                                             ExtentCheck;                                             // 0x00B8(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             GroupSpawnOffset;                                        // 0x00D0(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EntryWeight;                                             // 0x00E8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ManualSpawnPointSpreadRadius;                            // 0x00EC(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaterOnlySpawnMinimumWaterHeight;                        // 0x00F0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaximumWaterHeight;                                      // 0x00F4(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ColorSets;                                               // 0x00F8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNPCDifficultyLevelRange>                    NPCDifficultyLevelRanges;                                // 0x0100(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      LevelDifficultyTestOverride;                             // 0x0110(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnMinDistanceFromStructuresMultiplier;                // 0x0114(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnMinDistanceFromPlayersMultiplier;                   // 0x0118(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnMinDistanceFromTamedDinosMultiplier;                // 0x011C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandGroupSpawnOffsetZMin;                                // 0x0120(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandGroupSpawnOffsetZMax;                                // 0x0124(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.NPCSpawnLimit
	 * Size -> 0x0048
	 */
	struct FNPCSpawnLimit
	{
	public:
		unsigned char                                              NPCClass[0x30];                                          // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		class FString                                              NPCClassString;                                          // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPercentageOfDesiredNumToAllow;                        // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1GLV[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ConfigNPCSpawnEntriesContainer
	 * Size -> 0x0030
	 */
	struct FConfigNPCSpawnEntriesContainer
	{
	public:
		class FString                                              NPCSpawnEntriesContainerClassString;                     // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNPCSpawnEntry>                              NPCSpawnEntries;                                         // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FNPCSpawnLimit>                              NPCSpawnLimits;                                          // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.LeaderboardRow
	 * Size -> 0x0048
	 */
	struct FLeaderboardRow
	{
	public:
		class FName                                                MissionTag;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerNetId;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TribeID;                                                 // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UMEX[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TimestampUtc;                                            // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FloatValue;                                              // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IntValue;                                                // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NameValue;                                               // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StringValue;                                             // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.LeaderboardEntry
	 * Size -> 0x0018
	 */
	struct FLeaderboardEntry
	{
	public:
		class FName                                                MissionTag;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLeaderboardRow>                             Rows;                                                    // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.LeaderboardsContainer
	 * Size -> 0x0010
	 */
	struct FLeaderboardsContainer
	{
	public:
		TArray<struct FLeaderboardEntry>                           Leaderboards;                                            // 0x0000(0x0010) ZeroConstructor, RepSkip, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.BuffAddition
	 * Size -> 0x0040
	 */
	struct FBuffAddition
	{
	public:
		unsigned char                                              ForClass[0x30];                                          // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		TArray<class UClass*>                                      BuffAdditions;                                           // 0x0030(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.CrateTemporaryQualityModifiers
	 * Size -> 0x0020
	 */
	struct FCrateTemporaryQualityModifiers
	{
	public:
		class FName                                                CustomTag;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClassString;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      QualityMultiplierModifier;                               // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P5XO[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.CrateTemporaryQualityModifierSet
	 * Size -> 0x0018
	 */
	struct FCrateTemporaryQualityModifierSet
	{
	public:
		class FName                                                SetTag;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FCrateTemporaryQualityModifiers>             Modifiers;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ResourceTemporaryAmountModifiers
	 * Size -> 0x0020
	 */
	struct FResourceTemporaryAmountModifiers
	{
	public:
		class FName                                                CustomTag;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HarvestComponentClassString;                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ResourceAmountMultiplierModifier;                        // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4FJ1[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ResourceTemporaryAmountModifierSet
	 * Size -> 0x0018
	 */
	struct FResourceTemporaryAmountModifierSet
	{
	public:
		class FName                                                SetTag;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FResourceTemporaryAmountModifiers>           Modifiers;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.AhoCorasickState
	 * Size -> 0x0068
	 */
	struct FAhoCorasickState
	{
	public:
		unsigned char                                              UnknownData_F54G[0x50];                                  // 0x0000(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Failure;                                                 // 0x0050(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HOB2[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            Goto;                                                    // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.AhoCorasickMatcher
	 * Size -> 0x0018
	 */
	struct FAhoCorasickMatcher
	{
	public:
		TArray<struct FAhoCorasickState>                           States;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    MaxC;                                                    // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0I3X[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.SOTFScorePlayerData
	 * Size -> 0x0048
	 */
	struct FSOTFScorePlayerData
	{
	public:
		int32_t                                                    LinkedID;                                                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9286[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayerName;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayersKilled;                                           // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DinosKilled;                                             // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     DeathTime;                                               // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              KilledBy;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DeathDamageCauserClass;                                  // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KillerTeam;                                              // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UPGZ[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.SOTFScoreTribeData
	 * Size -> 0x000C
	 */
	struct FSOTFScoreTribeData
	{
	public:
		int32_t                                                    TargetingTeam;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayersKilledByDinos;                                    // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DinosKilledByDinos;                                      // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.DamageNegatingItem
	 * Size -> 0x0010
	 */
	struct FDamageNegatingItem
	{
	public:
		class UClass*                                              ItemSubclass;                                            // 0x0000(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NegationFactor;                                          // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_90EX[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalFolderIcons
	 * Size -> 0x0020
	 */
	struct FPrimalFolderIcons
	{
	public:
		class UTexture2D*                                          NormalFolder;                                            // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          CustomFolder;                                            // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          Back;                                                    // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              TextColor;                                               // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NNJW[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.DataListEntryButtonBorderColors
	 * Size -> 0x0010
	 */
	struct FDataListEntryButtonBorderColors
	{
	public:
		struct FColor                                              Normal;                                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Hovered;                                                 // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Pressed;                                                 // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Disabled;                                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.DeferredMovementTick
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FDeferredMovementTick : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_W21Y[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ItemSetup
	 * Size -> 0x0028
	 */
	struct FItemSetup
	{
	public:
		class UClass*                                              ItemType;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemBlueprintPath;                                       // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinQuality;                                              // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxQuality;                                              // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Quantity;                                                // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoEquip : 1;                                          // 0x0024(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDontStack : 1;                                          // 0x0024(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceBlueprint : 1;                                     // 0x0024(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F3KZ[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.DinoSetup
	 * Size -> 0x0120
	 */
	struct FDinoSetup
	{
	public:
		class UClass*                                              DinoType;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DinoSoftReference[0x30];                                 // 0x0008(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		class FString                                              DinoBlueprintPath;                                       // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DinoName;                                                // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DinoLevel;                                               // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BasePointsPerStat[0xC];                                  // 0x005C(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PlayerAddedPointsPerStat[0xC];                           // 0x0068(0x000C) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FCXX[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             SpawnOffset;                                             // 0x0078(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDinoTamedOrder                                            DinoState;                                               // 0x0090(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MMX2[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EPrimalCharacterStatusValue>                        PrioritizeStats;                                         // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FItemSetup>                                  TamedDinoInventory;                                      // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UClass*                                              SaddleType;                                              // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SaddleSoftReference[0x30];                               // 0x00C0(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		class FString                                              SaddleBlueprintPath;                                     // 0x00F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SaddleQuality;                                           // 0x0100(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SaddleMinRandomQuality;                                  // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandomWeight;                                            // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTamed : 1;                                            // 0x010C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreMaxTameLimit : 1;                                 // 0x010C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventSpawningAtTameLimit : 1;                         // 0x010C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlockTamedDialog : 1;                                   // 0x010C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoEquipSaddle : 1;                                    // 0x010C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseFixedSpawnLevel : 1;                                 // 0x010C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6CHO[0x3];                                   // 0x010D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WildRandomScaleOverride;                                 // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DinoImprintingQuality;                                   // 0x0114(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNetInfoFromClient;                                      // 0x0118(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S1NT[0x7];                                   // 0x0119(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.SlideData
	 * Size -> 0x0068
	 */
	struct FSlideData
	{
	public:
		TWeakObjectPtr<class USplineComponent>                     SplineComponent;                                         // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UParticleSystemComponent*                            Emitter;                                                 // 0x0008(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurTime;                                                 // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      Duration;                                                // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FVector>                                     Points;                                                  // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FVector>                                     Tangents;                                                // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		struct FVector                                             Location;                                                // 0x0038(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             Tangent;                                                 // 0x0050(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ShooterGame.HordeCrateNPCGroup
	 * Size -> 0x0050
	 */
	struct FHordeCrateNPCGroup
	{
	public:
		TArray<class UClass*>                                      NPCClasses;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		unsigned char                                              NPCAssets[0x10];                                         // 0x0010(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<float>                                              NPCWeights;                                              // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            MinLevels;                                               // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            MaxLevels;                                               // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.HordeCrateWave
	 * Size -> 0x0060
	 */
	struct FHordeCrateWave
	{
	public:
		int32_t                                                    MinNumOfNPCs;                                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNumOfNPCs;                                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeToPrepareForWave;                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D0ID[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHordeCrateNPCGroup                                 NPCsToSpawn;                                             // 0x0010(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.HordeCrateDifficultyLevel
	 * Size -> 0x00B0
	 */
	struct FHordeCrateDifficultyLevel
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZVJ9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxNumOfEventsForDifficulty;                             // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DifficultyLevel;                                         // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinNPCsToStart;                                          // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNPCsToStart;                                          // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FCSM[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHordeCrateNPCGroup                                 StartingNPCs;                                            // 0x0018(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FHordeCrateWave>                             NPCWavesToComplete;                                      // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      MinTimeBeforeSelfDestruct;                               // 0x0078(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxTimeBeforeSelfDestruct;                               // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ActorTemplate;                                           // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinQualityMultiplier;                                    // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxQualityMultiplier;                                    // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinAmtRewardItems;                                       // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxAmtRewardItems;                                       // 0x0094(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        DifficultyColor;                                         // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MainNodeElementPct;                                      // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7PL5[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.HordeCrateEvent
	 * Size -> 0x0020
	 */
	struct FHordeCrateEvent
	{
	public:
		double                                                     EventStartTime;                                          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               HordeSpawnNetwork;                                       // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class AActor>                               HordeModeCrate;                                          // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasBeenInitiated;                                       // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              EventType;                                               // 0x0019(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_61B4[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PingData
	 * Size -> 0x0060
	 */
	struct FPingData
	{
	public:
		unsigned char                                              PingID;                                                  // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LZ3Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PingedLocation;                                          // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 PingedComponent;                                         // 0x0020(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          PingIcon;                                                // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CreatedByPlayerID;                                       // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z4LU[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   CreatedByPlayerChar;                                     // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AShooterCharacter*>                           RespondedPlayerChars;                                    // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
		double                                                     PingCreationTime;                                        // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasBeenViewed : 1;                                      // 0x0058(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDying : 1;                                            // 0x0058(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDead : 1;                                             // 0x0058(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RVEF[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.LeaderboardDisplayRow
	 * Size -> 0x0020
	 */
	struct FLeaderboardDisplayRow
	{
	public:
		class UTexture2D*                                          RowIcon;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      Columns;                                                 // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HA7J[0x8];                                   // 0x0018(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.LeaderboardColumnDefinition
	 * Size -> 0x0070
	 */
	struct FLeaderboardColumnDefinition
	{
	public:
		float                                                      WidthPercent;                                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             ColumnPadding;                                           // 0x0004(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AR1U[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      Font;                                                    // 0x0018(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.MapData
	 * Size -> 0x0078
	 */
	struct FMapData
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          MapTexture;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             OriginMax;                                               // 0x0018(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             OriginMin;                                               // 0x0030(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PlayableMax;                                             // 0x0048(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PlayableMin;                                             // 0x0060(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.DamageTypeAdjuster
	 * Size -> 0x0038
	 */
	struct FDamageTypeAdjuster
	{
	public:
		unsigned char                                              DamageTypeClass[0x30];                                   // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		float                                                      DamageMultiplier;                                        // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreMultiplierIfWildDinoAttacker : 1;                 // 0x0034(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreMultiplierIfTamedDinoAttacker : 1;                // 0x0034(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyUseMultiplierIfWildDinoAttacker : 1;                // 0x0034(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyUseMultiplierIfTamedDinoAttacker : 1;               // 0x0034(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyUseMultiplierIfTamed : 1;                           // 0x0034(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B5NX[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.DestructionGeoCollectionInfo
	 * Size -> 0x0078
	 */
	struct FDestructionGeoCollectionInfo
	{
	public:
		unsigned char                                              SoftDestructionGeoCollectionAsset[0x30];                 // 0x0000(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		struct FVector                                             DestructibleMeshLocationOffset;                          // 0x0030(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DestructibleMeshScaleOverride;                           // 0x0048(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            DestructibleMeshRotationOffset;                          // 0x0060(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.BoneDamageAdjuster
	 * Size -> 0x000C
	 */
	struct FBoneDamageAdjuster
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageMultiplier;                                        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.StructureVariant
	 * Size -> 0x0130
	 */
	struct FStructureVariant
	{
	public:
		class FString                                              VariantName;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                VariantTag;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseBPAllowSwitchToVariant;                              // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M4FP[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Mesh[0x30];                                              // 0x0020(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bUseMeshTransform;                                       // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OB14[0xF];                                   // 0x0051(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          MeshTransform;                                           // 0x0060(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DestroyedMeshOverride[0x30];                             // 0x00C0(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<struct FDestructionGeoCollectionInfo>               DestroyedMeshesOverride;                                 // 0x00F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              VariantIcon[0x30];                                       // 0x0100(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct ShooterGame.PrimalStructureSnapTagSettings
	 * Size -> 0x0040
	 */
	struct FPrimalStructureSnapTagSettings
	{
	public:
		TArray<class FName>                                        SnapToStructureTagsToExclude;                            // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FName>                                        SnapFromStructureTagsToExclude;                          // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FName>                                        SnapToStructureTagsToInclude;                            // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FName>                                        SnapFromStructureTagsToInclude;                          // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalStructureSnapPointOverride
	 * Size -> 0x0088
	 */
	struct FPrimalStructureSnapPointOverride
	{
	public:
		class UStaticMesh*                                         StaticMeshOverride;                                      // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              StructureClassOverride[0x30];                            // 0x0008(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		struct FVector                                             PreviewLocOffset;                                        // 0x0038(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            PreviewRotOffset;                                        // 0x0050(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             PreviewScaleOffset;                                      // 0x0068(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APrimalStructure*                                    StructureClassCDO;                                       // 0x0080(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalStructureSnapPoint
	 * Size -> 0x01A0
	 */
	struct FPrimalStructureSnapPoint
	{
	public:
		class FName                                                SnapPointDescription;                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             PointLocOffset;                                          // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            PointRotOffset;                                          // 0x0020(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            PointComparisonExtraRotOffset;                           // 0x0038(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAttachToPoint : 1;                                      // 0x0050(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttachFromPoint : 1;                                    // 0x0050(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHighPriorityAttachToPoint : 1;                          // 0x0050(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapToUseAlternatePlacemenTraceScale : 1;               // 0x0050(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttachToDisableEncroachmentCheck : 1;                   // 0x0050(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInvalidForStructureLinking : 1;                         // 0x0050(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapForceNoGroundRequirement : 1;                       // 0x0050(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapToOnlyAllowSingleAttachment : 1;                    // 0x0050(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPorthole : 1;                                           // 0x0051(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4LVD[0x2];                                   // 0x0052(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ToPointSnapTypeFlags;                                    // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntVector                                          ExtraSnapTypeFlags;                                      // 0x0058(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ToPointSnapTypeExcludeFlags;                             // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntVector                                          ExtraSnapTypeExcludeFlags;                               // 0x0068(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SnapPointMatchGroup;                                     // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntVector                                          ExtraSnapPointMatchGroup;                                // 0x0078(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SnapTag;                                                 // 0x0084(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                StaticMeshSnapSocketName;                                // 0x008C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AN0P[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              SnapToStructureTypesToExclude[0x10];                     // 0x0098(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              SnapFromStructureTypesToExclude[0x10];                   // 0x00A8(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              SnapToStructureTypesToInclude[0x10];                     // 0x00B8(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              SnapFromStructureTypesToInclude[0x10];                   // 0x00C8(0x0010) UNKNOWN PROPERTY: ArrayProperty
		struct FPrimalStructureSnapTagSettings                     SnapTags;                                                // 0x00D8(0x0040) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FPrimalStructureSnapPointOverride                   SnapPointOverride;                                       // 0x0118(0x0088) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ItemToDisplayInStructureTooltip
	 * Size -> 0x0020
	 */
	struct FItemToDisplayInStructureTooltip
	{
	public:
		class UClass*                                              PrimalItem;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Quantity;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0YHV[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ModuleGroupHeader;                                       // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalMapMarkerEntryData
	 * Size -> 0x0028
	 */
	struct FPrimalMapMarkerEntryData
	{
	public:
		int32_t                                                    coord1;                                                  // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    coord2;                                                  // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideMarkerTextColor;                                // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HG0B[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FColor                                              OverrideMarkerTextColor;                                 // 0x001C(0x0004) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      coord1f;                                                 // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      coord2f;                                                 // 0x0024(0x0004) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalWirelessReferences
	 * Size -> 0x00A0
	 */
	struct FPrimalWirelessReferences
	{
	public:
		unsigned char                                              WirelessSources[0x50];                                   // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              WirelessConsumers[0x50];                                 // 0x0050(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct ShooterGame.MetaTagIDInfo
	 * Size -> 0x000C
	 */
	struct FMetaTagIDInfo
	{
	public:
		int32_t                                                    MetaTagEnumIndex;                                        // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MetaTagDisplayName;                                      // 0x0004(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.LootTableEntry
	 * Size -> 0x0040
	 */
	struct FLootTableEntry
	{
	public:
		ELootItemType                                              LootItemType;                                            // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PJ74[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      LootItemClasses;                                         // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESimpleCurve                                               QuantityCurve;                                           // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QQ9B[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinQuantity;                                             // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxQuantity;                                             // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESimpleCurve                                               QualityCurve;                                            // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MH8Q[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           QualityRange;                                            // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.TimeRange
	 * Size -> 0x0008
	 */
	struct FTimeRange
	{
	public:
		float                                                      Min;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Max;                                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.MissionPhase
	 * Size -> 0x0048
	 */
	struct FMissionPhase
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayText;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowInUI : 1;                                           // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseBPGetPhaseDisplayText : 1;                           // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseGeneratePhaseRequirements : 1;                       // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoSwitchToNextPhase : 1;                              // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLastPhase : 1;                                        // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2SG6[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WaitTimeAfterPhaseCompletes;                             // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NextPhaseName;                                           // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTimeRange                                          AutoSwitchPhaseAttemptInterval;                          // 0x0028(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		class USoundBase*                                          PhaseStartSound;                                         // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          PhaseEndSound;                                           // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          PhaseMusicLoop;                                          // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.MissionPhaseData
	 * Size -> 0x0004
	 */
	struct FMissionPhaseData
	{
	public:
		bool                                                       bPhaseCompleted : 1;                                     // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5OOW[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.MissionWorldBuffData
	 * Size -> 0x000C
	 */
	struct FMissionWorldBuffData
	{
	public:
		class FName                                                WorldBuffIdentifier;                                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StacksToGive;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.TaggedString
	 * Size -> 0x0018
	 */
	struct FTaggedString
	{
	public:
		class FName                                                Tag;                                                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              String;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.CharacterAndControllerPair
	 * Size -> 0x0010
	 */
	struct FCharacterAndControllerPair
	{
	public:
		class AShooterCharacter*                                   Character;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AShooterPlayerController*                            Controller;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.TeleportedCharacter
	 * Size -> 0x0040
	 */
	struct FTeleportedCharacter
	{
	public:
		class APrimalCharacter*                                    Character;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AController*                                         Controller;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             OriginalLocation;                                        // 0x0010(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            OriginalRotation;                                        // 0x0028(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PlayerItems
	 * Size -> 0x0018
	 */
	struct FPlayerItems
	{
	public:
		class AShooterCharacter*                                   Character;                                               // 0x0000(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FItemNetID>                                  ItemIDs;                                                 // 0x0008(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.MissionWorldIndicator
	 * Size -> 0x00B0
	 */
	struct FMissionWorldIndicator
	{
	public:
		class FName                                                DescriptionTagString;                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ItemType;                                                // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             WorldPosition;                                           // 0x0018(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              TargetActor;                                             // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Priority;                                                // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7QO1[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              CustomData;                                              // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTargetActorName : 1;                                 // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTargetActorIcon : 1;                                 // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseItemName : 1;                                        // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseItemIcon : 1;                                        // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyVisibleOffScreen : 1;                               // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyVisibleOnScreen : 1;                                // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysVisible : 1;                                      // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCompanionIndicator : 1;                                 // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowDistance : 1;                                       // 0x0049(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P5VD[0x2];                                   // 0x004A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        IndicatorColor;                                          // 0x004C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        IconColor;                                               // 0x005C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsePulseAnimation : 1;                                  // 0x006C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowProgress : 1;                                       // 0x006C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VBNP[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ProgressValue;                                           // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MMW5[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ProgressLabelText;                                       // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ProgressBarColor;                                        // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ProgressLabelColor;                                      // 0x0098(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowProgressLabelWhenOffScreen : 1;                     // 0x00A8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0R0Q[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ClassAddition
	 * Size -> 0x0040
	 */
	struct FClassAddition
	{
	public:
		unsigned char                                              ForClass[0x30];                                          // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              ClassAdditions[0x10];                                    // 0x0030(0x0010) UNKNOWN PROPERTY: ArrayProperty
	};

	/**
	 * ScriptStruct ShooterGame.ExtraEggItem
	 * Size -> 0x0048
	 */
	struct FExtraEggItem
	{
	public:
		unsigned char                                              DropItem[0x30];                                          // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		class FName                                                ActiveEventFilter;                                       // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ForDinoCharacter;                                        // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DropChance;                                              // 0x0040(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TNPV[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.InvalidReferenceRedirector
	 * Size -> 0x0048
	 */
	struct FInvalidReferenceRedirector
	{
	public:
		class FString                                              InvalidReferenceKey;                                     // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              RedirectedClass;                                         // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     RedirectedClassSoftReference;                            // 0x0018(0x0020) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      LimitedToMaps;                                           // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.WorldDefaultItemSet
	 * Size -> 0x0030
	 */
	struct FWorldDefaultItemSet
	{
	public:
		class FName                                                ItemSetName;                                             // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        MapName;                                                 // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bFirstTimeEquip;                                         // 0x0018(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyGiveItemSetOnce;                                    // 0x0019(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEquipOnNewPawn;                                         // 0x001A(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GRPK[0x1];                                   // 0x001B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ForceEquipIfAppID;                                       // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      ItemsToGive;                                             // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ClassRemapping
	 * Size -> 0x0060
	 */
	struct FClassRemapping
	{
	public:
		unsigned char                                              FromClass[0x30];                                         // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              ToClass[0x30];                                           // 0x0030(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct ShooterGame.ActiveEventSupplyCrateWeight
	 * Size -> 0x0028
	 */
	struct FActiveEventSupplyCrateWeight
	{
	public:
		unsigned char                                              ReplacementCrateClasses[0x10];                           // 0x0000(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<float>                                              Weights;                                                 // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                ActiveEvent;                                             // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.NPCSpawnEntriesContainerAdditions
	 * Size -> 0x0038
	 */
	struct FNPCSpawnEntriesContainerAdditions
	{
	public:
		class UClass*                                              SpawnEntriesContainerClass;                              // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SpawnEntriesContainerClassString;                        // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNPCSpawnEntry>                              AdditionalNPCSpawnEntries;                               // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FNPCSpawnLimit>                              AdditionalNPCSpawnLimits;                                // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.AvailableMission
	 * Size -> 0x0020
	 */
	struct FAvailableMission
	{
	public:
		class UClass*                                              MissionClass;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SU1F[0x18];                                  // 0x0008(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.BoneModifierRange
	 * Size -> 0x0070
	 */
	struct FBoneModifierRange
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MinScale;                                                // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MaxScale;                                                // 0x0020(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MinTranslation;                                          // 0x0038(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MaxTranslation;                                          // 0x0050(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Recursive;                                               // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3KIN[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.BoneModifierRangeArray
	 * Size -> 0x0030
	 */
	struct FBoneModifierRangeArray
	{
	public:
		bool                                                       bAffectsLegLength : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseExtraMax : 1;                                        // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PMZF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinLegLengthMultiplier;                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxLegLengthMultiplier;                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J9X5[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBoneModifierRange>                          BoneArray;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector2D                                           GlobalFatRemap;                                          // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.RandValueRange
	 * Size -> 0x000C
	 */
	struct FRandValueRange
	{
	public:
		float                                                      MinVal;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxVal;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandPower;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.DinoBabySetup
	 * Size -> 0x0038
	 */
	struct FDinoBabySetup
	{
	public:
		class FName                                                DinoNameTag;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FBoneModifierRangeArray>                     BabyBoneModifierRanges;                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              WildRandomScaleRangeWeights;                             // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FRandValueRange>                             WildRandomScaleRanges;                                   // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.UnlockableEmoteEntry
	 * Size -> 0x00A0
	 */
	struct FUnlockableEmoteEntry
	{
	public:
		class FName                                                EmoteName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EmoteDescription;                                        // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EmoteGroup;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UseEmoteMessage;                                         // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MaleAnim[0x30];                                          // 0x0030(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              FemaleAnim[0x30];                                        // 0x0060(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      EmotePlayMinimumInterval;                                // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGiveDefault;                                            // 0x0094(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CIT3[0x3];                                   // 0x0095(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          EmoteIcon;                                               // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.EmoteGroup
	 * Size -> 0x0020
	 */
	struct FEmoteGroup
	{
	public:
		class FName                                                GroupName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        GroupColor;                                              // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          GroupIcon;                                               // 0x0018(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ColorDefinition
	 * Size -> 0x001C
	 */
	struct FColorDefinition
	{
	public:
		class FName                                                ColorName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorValue;                                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasOverridePriority;                                    // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_75CS[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.HairStyleDefinitionMeshAnimbpPair
	 * Size -> 0x0068
	 */
	struct FHairStyleDefinitionMeshAnimbpPair
	{
	public:
		unsigned char                                              HairMesh[0x30];                                          // 0x0000(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		class UClass*                                              AnimBlueprint;                                           // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PlayerMeshTextureMask[0x30];                             // 0x0038(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct ShooterGame.HairStyleDefinition
	 * Size -> 0x00B8
	 */
	struct FHairStyleDefinition
	{
	public:
		bool                                                       bIsHairStyleLocked;                                      // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTallHairOffsetCamera;                                // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GNUH[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                UnlockHairStyleName;                                     // 0x0004(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VC39[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              HairStyleName;                                           // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FHairStyleDefinitionMeshAnimbpPair>          HairMeshesMale;                                          // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      MaleBeginHairMorphTargetRange;                           // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WVJV[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FHairStyleDefinitionMeshAnimbpPair>          HairMeshesFemale;                                        // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              FemaleHairOverride[0x30];                                // 0x0048(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      FemaleBeginHairMorphTargetRange;                         // 0x0078(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6UPM[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          HairStylePreviewIconImage;                               // 0x0080(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              FemaleOverrideHairStylePreviewIconImage[0x30];           // 0x0088(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct ShooterGame.ObjectCorrelation
	 * Size -> 0x0010
	 */
	struct FObjectCorrelation
	{
	public:
		class UObject*                                             FromObject;                                              // 0x0000(0x0008) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             ToObject;                                                // 0x0008(0x0008) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.StructureToBuildAddition
	 * Size -> 0x0040
	 */
	struct FStructureToBuildAddition
	{
	public:
		unsigned char                                              ForStructureItem[0x30];                                  // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              AdditionalStructures[0x10];                              // 0x0030(0x0010) UNKNOWN PROPERTY: ArrayProperty
	};

	/**
	 * ScriptStruct ShooterGame.StructureVariantAdditionEntry
	 * Size -> 0x0018
	 */
	struct FStructureVariantAdditionEntry
	{
	public:
		class FName                                                ForStructureTierTag;                                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FStructureVariant>                           Variants;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.StructureVariantAddition
	 * Size -> 0x0018
	 */
	struct FStructureVariantAddition
	{
	public:
		class FName                                                ForStructureTag;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FStructureVariantAdditionEntry>              VariantEntries;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	// ScriptStruct ShooterGame.MountedDLCInfo
	// 0x0068 (0x0068 - 0x0000)
	struct FMountedDLCInfo final
	{
	public:
		class FString                                 Name;                                              // 0x0000(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                 Path;                                              // 0x0010(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                 ID;                                                // 0x0020(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                 ProductId;                                         // 0x0030(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         bAutoMount : 1;                                    // 0x0040(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Config, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         Pad_31B5[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
		class FString                                 StoreProductIdOverride;                            // 0x0048(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                 Map;                                               // 0x0058(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};
	/**
	 * ScriptStruct ShooterGame.MountedDLCMapInfo
	 * Size -> 0x0020
	 */
	struct FMountedDLCMapInfo
	{
	public:
		class FString                                              ID;                                                      // 0x0000(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Map;                                                     // 0x0010(0x0010) ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.Struct_MissionModule_Travel
	 * Size -> 0x0038
	 */
	struct FStruct_MissionModule_Travel
	{
	public:
		class FString                                              RequirementsTitle;                                       // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RequirementsMessage;                                     // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DelayAfterModule;                                        // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DelayBeforeModule;                                       // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                TriggerKeyOfPointToGoTo;                                 // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistanceFromPointToHideIcon;                             // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NavPointLabel;                                           // 0x002C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XQBY[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.LinkedZoneSpawnVolumeEntry
	 * Size -> 0x0050
	 */
	struct FLinkedZoneSpawnVolumeEntry
	{
	public:
		class ANPCZoneSpawnVolume*                                 LinkedZoneSpawnVolume;                                   // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      ZoneSpawnVolumeFloors;                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      ZoneSpawnVolumeIgnoreCeilings;                           // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
		TArray<class FName>                                        ZoneSpawnVolumeIgnoreCeilingTags;                        // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
		TArray<class FName>                                        ZoneSpawnVolumeFloorTags;                                // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
		float                                                      EntryWeight;                                             // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DR4K[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.HibernationCountInfo
	 * Size -> 0x0038
	 */
	struct FHibernationCountInfo
	{
	public:
		unsigned char                                              ClassType[0x30];                                         // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		int32_t                                                    Count;                                                   // 0x0030(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8TKW[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.OceanDinoSpawnEntry
	 * Size -> 0x0060
	 */
	struct FOceanDinoSpawnEntry
	{
	public:
		class FString                                              EntryFriendlyName;                                       // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SpawnDinoClass[0x30];                                    // 0x0010(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		float                                                      SpawnDinoWeight;                                         // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EntrySpawnDistanceMultiplier;                            // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnZOffset;                                            // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumDepthFromWaterSurface;                            // 0x004C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSpawnZ;                                               // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NetworkAndStasisRangeMultiplier;                         // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumAllowedFreeDepthForSpawn;                         // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OverrideMaxValidSpawnPointAttempts;                      // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.OceanDinoDepthEntry
	 * Size -> 0x0038
	 */
	struct FOceanDinoDepthEntry
	{
	public:
		TArray<struct FOceanDinoSpawnEntry>                        OceanDinoSpawnEntries;                                   // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              SectionFriendlyName;                                     // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartAtDepthZ;                                           // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BJ8J[0x14];                                  // 0x0024(0x0014) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.HUDRichTextOverlayData
	 * Size -> 0x0070
	 */
	struct FHUDRichTextOverlayData
	{
	public:
		class FString                                              DisplayText;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        DefaultTextColor;                                        // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreDefaultTextColor : 1;                             // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OLRR[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           position;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextJustify                                               TextAlignment;                                           // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalScreenAnchor;                                  // 0x0039(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalScreenAnchor;                                    // 0x003A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalWidgetAlignment;                               // 0x003B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalWidgetAlignment;                                 // 0x003C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U4YF[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Scale;                                                   // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseAutoWrap : 1;                                        // 0x0044(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TO7R[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           AutoSizeOverride;                                        // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              Instigator;                                              // 0x0058(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IWPF[0x10];                                  // 0x0060(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.AssetRetainer
	 * Size -> 0x0010
	 */
	struct FAssetRetainer
	{
	public:
		class UObject*                                             HardReference;                                           // 0x0000(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeLeft;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KTI7[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.DecalData
	 * Size -> 0x0020
	 */
	struct FDecalData
	{
	public:
		class UMaterialInterface*                                  DecalMaterial;                                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecalSize;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecalDepth;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DecalImpactNormalOffset;                                 // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LifeSpan;                                                // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandomAngleRange;                                        // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GVAZ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalSnapshotPose
	 * Size -> 0x0048
	 */
	struct FPrimalSnapshotPose
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Sequence;                                                // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Time;                                                    // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Pedestal;                                                // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2NX9[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PedestalBone;                                            // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             RootOffset;                                              // 0x0030(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.VelocityBasedCharacterSoundInfo
	 * Size -> 0x0038
	 */
	struct FVelocityBasedCharacterSoundInfo
	{
	public:
		TArray<class USoundBase*>                                  Sounds;                                                  // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FVector2D                                           VelocityRange;                                           // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAdjustByCharacterSize;                                  // 0x0020(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V7VP[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LowerSize;                                               // 0x0024(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UpperSize;                                               // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    LowerOffset;                                             // 0x002C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UpperOffset;                                             // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EEI1[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.Rotator_NetQuantize
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRotator_NetQuantize : public FRotator
	{	};

	/**
	 * ScriptStruct ShooterGame.DefaultTextureParamOverride
	 * Size -> 0x0010
	 */
	struct FDefaultTextureParamOverride
	{
	public:
		class FName                                                TextureParamName;                                        // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          TextureValue;                                            // 0x0008(0x0008) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.DinoAttackInfo
	 * Size -> 0x0150
	 */
	struct FDinoAttackInfo
	{
	public:
		class FName                                                AttackName;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttackWeight;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttackRange;                                             // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinAttackRange;                                          // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActivateAttackRange;                                     // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttackInterval;                                          // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHighQualityAttack : 1;                                  // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipUntamed : 1;                                        // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipTamed : 1;                                          // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyOnWildDinos : 1;                                    // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventWhenEncumbered : 1;                              // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRidingOnlyAllowOnGround : 1;                            // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRidingOnlyAllowWhileFlying : 1;                         // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyUseWithPlayersOrRiders : 1;                         // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyUseWithPlayers : 1;                                 // 0x001D(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventWhenSwimming : 1;                                // 0x001D(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventWhenInsufficientStamina : 1;                     // 0x001D(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipOnFlyers : 1;                                       // 0x001D(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSkipAI : 1;                                             // 0x001D(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventOnFemale : 1;                                    // 0x001D(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventOnMale : 1;                                      // 0x001D(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventWhenDinoCarrying : 1;                            // 0x001D(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseBlueprintCanRiderAttack : 1;                         // 0x001E(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequiresWalking : 1;                                    // 0x001E(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequiresSwimming : 1;                                   // 0x001E(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AttackStatusStarted : 1;                                 // 0x001E(0x0001) BIT_FIELD BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttackStopsMovement : 1;                                // 0x001E(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttackStopsMovementAllowFalling : 1;                    // 0x001E(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttackWithJump : 1;                                     // 0x001E(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLocationBasedAttack : 1;                                // 0x001E(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDropCarriedCharacter : 1;                               // 0x001F(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCancelAndDropIfCarriedCharacter : 1;                    // 0x001F(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventAttackWhileRunning : 1;                          // 0x001F(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceUpdateInRange : 1;                                  // 0x001F(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ForceUpdateMeshSelf : 1;                                 // 0x001F(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSecondaryAnimationInAir : 1;                         // 0x001F(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseBlueprintCanAttack : 1;                              // 0x001F(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseBlueprintAdjustOutputDamage : 1;                     // 0x001F(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableRunningWhenAttacking : 1;                        // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bKeepExecutingWhenAcquiringTarget : 1;                   // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventWithRider : 1;                                   // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAIForceAttackDotProductCheck : 1;                       // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInstantlyHarvestCorpse : 1;                             // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAddPawnVelocityToProjectile : 1;                        // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttackStopsRotation : 1;                                // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTamedAISpecialAttack : 1;                               // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventWhenCarryingExplosive : 1;                       // 0x0021(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowWhenAnimationPreventsInput : 1;                    // 0x0021(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequireLineOfSight : 1;                                 // 0x0021(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseBPOverrideGetAttackAnimationIndex : 1;               // 0x0021(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSecondaryAnimationWhenSwimming : 1;                  // 0x0021(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTertiaryAnimationWhenSwimming : 1;                   // 0x0021(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHighQualityAttackOnlyPlayerOrTamed : 1;                 // 0x0021(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMeleeTraceForHitBlockers : 1;                           // 0x0021(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMeleeTraceForHitBlockersAddHeadsocket : 1;              // 0x0022(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9118[0x1];                                   // 0x0023(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIgnoreCrouchAttack : 1;                                 // 0x0024(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreResettingAttackIndexInTick : 1;                   // 0x0024(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventSkippingAnimGraphDuringAttack : 1;               // 0x0024(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_374Q[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            ChildStateIndexes;                                       // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      AttackWithJumpChance;                                    // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L7H4[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastAttackTime;                                          // 0x0040(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     RiderLastAttackTime;                                     // 0x0048(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttackSelectionExpirationTime;                           // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XI2E[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     AttackSelectionTime;                                     // 0x0058(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttackRotationRangeDegrees;                              // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttackRotationGroundSpeedMultiplier;                     // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            AttackRotationRate;                                      // 0x0068(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        MeleeSwingSockets;                                       // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                RangedSocket;                                            // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MeleeDamageAmount;                                       // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MeleeDamageImpulse;                                      // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MeleeSwingRadius;                                        // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6BSF[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              MeleeDamageType;                                         // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttackOffset;                                            // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaCost;                                             // 0x00B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RiderAttackInterval;                                     // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DotProductCheckMin;                                      // 0x00BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DotProductCheckMax;                                      // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YFKV[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAnimMontage*>                                AttackAnimations;                                        // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<float>                                              AttackAnimationWeights;                                  // 0x00D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<float>                                              AttackAnimationsTimeFromEndToConsiderFinished;           // 0x00E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UClass*                                              ProjectileClass;                                         // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              AttackStateTypeClass;                                    // 0x0100(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttackRunningSpeedModifier;                              // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SwimmingAttackRunningSpeedModifier;                      // 0x010C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SetAttackTargetTime;                                     // 0x0110(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PPAP[0x4];                                   // 0x0114(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimalAIState*                                      AttackStateType;                                         // 0x0118(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     LastSocketPositions;                                     // 0x0120(0x0010) BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		double                                                     LastProjectileSpawnTime;                                 // 0x0130(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        AttackAnimDamageImpactFXSocketNames;                     // 0x0138(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bUseClosestSocketsForDamageImpactFX : 1;                 // 0x0148(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableAttackerDamageImpactFX : 1;                      // 0x0148(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R89S[0x7];                                   // 0x0149(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.HibernationZoneInfo
	 * Size -> 0x0010
	 */
	struct FHibernationZoneInfo
	{
	public:
		class ANPCZoneVolume*                                      Volume;                                                  // 0x0000(0x0008) ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0008(0x0004) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AOMJ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.SaddlePassengerSeatDefinition
	 * Size -> 0x0110
	 */
	struct FSaddlePassengerSeatDefinition
	{
	public:
		class FName                                                AttachBoneName;                                          // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AttachBoneNameEnemyDino;                                 // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AttachBoneNameDino;                                      // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BoardActionText;                                         // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          BoardActionIcon;                                         // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             UnboardLocationOffset;                                   // 0x0030(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              BoardingRequiresEngram;                                  // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FPVCameraLocationOffset;                                 // 0x0050(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AttachRelativeLocation;                                  // 0x0068(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            AttachRelativeRotation;                                  // 0x0080(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            DinoOverrideAttachRelativeRotation;                      // 0x0098(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              CharacterAdditiveAnim[0x30];                             // 0x00B0(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bHideCharacterLowerBody : 1;                             // 0x00E0(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCharacterPitch : 1;                                  // 0x00E0(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitCameraYaw : 1;                                     // 0x00E0(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseDinoRotationToLimitCameraYaw : 1;                    // 0x00E0(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWeaponIgnoreDino : 1;                                   // 0x00E0(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideDinoForLocalPassenger : 1;                          // 0x00E0(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CharacterAdditiveAnimIsNonAdditive : 1;                  // 0x00E0(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowDinoPassenger : 1;                                 // 0x00E0(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventManualPassenger : 1;                             // 0x00E1(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDinoOverrideAttachRelativeRotation : 1;                 // 0x00E1(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseBoneNameDinoOverride : 1;                            // 0x00E1(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSavePassenger : 1;                                      // 0x00E1(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventDamageToSeatedDino : 1;                          // 0x00E1(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HBFX[0x2];                                   // 0x00E2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CameraYawRange;                                          // 0x00E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AimOffsetYawFactor;                                      // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AimOffsetPitchFactor;                                    // 0x00EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AimOffsetYawBias;                                        // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AimOffsetPitchBias;                                      // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtraHypoThermalInsulation;                              // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtraHyperThermalInsulation;                             // 0x00FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsSaddleTurret : 1;                                     // 0x0100(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLimitTurretPitch : 1;                                   // 0x0100(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VWSW[0x3];                                   // 0x0101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TurretPitchMin;                                          // 0x0104(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurretPitchMax;                                          // 0x0108(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowOrbitCam : 1;                                      // 0x010C(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowTPV : 1;                                           // 0x010C(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventPassengerWeapons : 1;                            // 0x010C(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowAccessDinoInventory : 1;                           // 0x010C(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUnboardUseLastRotation : 1;                             // 0x010C(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_STQF[0x3];                                   // 0x010D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.DinoBaseLevelWeightEntry
	 * Size -> 0x000C
	 */
	struct FDinoBaseLevelWeightEntry
	{
	public:
		float                                                      EntryWeight;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseLevelMinRange;                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseLevelMaxRange;                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.WeightedObjectList
	 * Size -> 0x0020
	 */
	struct FWeightedObjectList
	{
	public:
		TArray<float>                                              Weights;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class UObject*>                                     AssociatedObjects;                                       // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalSaddleStructure
	 * Size -> 0x0040
	 */
	struct FPrimalSaddleStructure
	{
	public:
		struct FVector                                             DinoRelativeLocation;                                    // 0x0000(0x0018) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            DinoRelativeRotation;                                    // 0x0018(0x0018) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                BoneName;                                                // 0x0030(0x0008) BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APrimalStructure*                                    MyStructure;                                             // 0x0038(0x0008) BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.StatValuePair
	 * Size -> 0x0008
	 */
	struct FStatValuePair
	{
	public:
		EPrimalCharacterStatusValue                                Stat;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G8RG[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Value;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.DinoSaddleStruct
	 * Size -> 0x0020
	 */
	struct FDinoSaddleStruct
	{
	public:
		class USkeletalMeshComponent*                              Saddle;                                                  // 0x0000(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMesh*                                       SkeletalMesh;                                            // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FItemNetID                                          ItemID;                                                  // 0x0010(0x0008) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bJustRemoved;                                            // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D48F[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.DinoExtraDefaultItemList
	 * Size -> 0x0018
	 */
	struct FDinoExtraDefaultItemList
	{
	public:
		int32_t                                                    MinimumDinoLevel;                                        // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChanceToGive;                                            // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      DefaultItemsToGive;                                      // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.WildFollowerSpawnEntry
	 * Size -> 0x0050
	 */
	struct FWildFollowerSpawnEntry
	{
	public:
		TArray<float>                                              WeightedChancesToAlsoSpawnWildFollowerOnSpawn;           // 0x0000(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              ClassOverride[0x30];                                     // 0x0010(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		bool                                                       bDontSpawnAsChild : 1;                                   // 0x0040(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreConfigSpawnChanceMultiplier : 1;                  // 0x0040(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreConfigSpawnCountMultiplier : 1;                   // 0x0040(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4P5W[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AgeRangeMin;                                             // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AgeRangeMax;                                             // 0x0048(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T9ZU[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.StatusValueModifierDescription
	 * Size -> 0x0050
	 */
	struct FStatusValueModifierDescription
	{
	public:
		class UTexture2D*                                          ModifierIcon;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ModifierName;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ModifierDescription;                                     // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              ModifierColor;                                           // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisplayHUDMessage;                                      // 0x002C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_20M2[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              HUDMessage;                                              // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              HUDMessageColor;                                         // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventDrawingBuffDescription;                          // 0x0044(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HPMJ[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BuffType;                                                // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventDisplayBuffHUD;                                  // 0x004C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_04QK[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ItemMultiplier
	 * Size -> 0x0010
	 */
	struct FItemMultiplier
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemMultiplier;                                          // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NFH1[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.DamagePrimalCharacterStatusValueModifier
	 * Size -> 0x0030
	 */
	struct FDamagePrimalCharacterStatusValueModifier
	{
	public:
		EPrimalCharacterStatusValue                                ValueType;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1IH3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bSpeedToAddInSeconds : 1;                                // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bContinueOnUnchangedValue : 1;                           // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnorePawnDamageAdjusters : 1;                          // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bResetExistingModifierDescriptionIndex : 1;              // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetValue : 1;                                           // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetAdditionalValue : 1;                                 // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UCI0[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LimitExistingModifierDescriptionToMaxAmount;             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UseAbsoluteDamageAmount;                                 // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageMultiplierAmountToAdd;                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpeedToAdd;                                              // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StatusValueModifierDescriptionIndex;                     // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsePercentualDamage : 1;                                // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMakeUntameable : 1;                                     // 0x001C(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MY0L[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PercentualDamage;                                        // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9WM1[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              ScaleValueByCharacterDamageType;                         // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.MaxStatScaler
	 * Size -> 0x000C
	 */
	struct FMaxStatScaler
	{
	public:
		EPrimalCharacterStatusValue                                LevelUpValueType;                                        // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IIF3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TargetValue;                                             // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TargetValueIsPercent;                                    // 0x0008(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IRF7[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PostProcessMaterialAdjuster
	 * Size -> 0x0048
	 */
	struct FPostProcessMaterialAdjuster
	{
	public:
		class UMaterialInterface*                                  PostProcessParentMaterial;                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        ScalarParameterNames;                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<float>                                              ScalarParameterValues;                                   // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FName>                                        VectorParameterNames;                                    // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     VectorParameterValues;                                   // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.BuffMPCAdjuster
	 * Size -> 0x0048
	 */
	struct FBuffMPCAdjuster
	{
	public:
		class UMaterialParameterCollection*                        MPC;                                                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        ScalarParameterNames;                                    // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<float>                                              ScalarParameterValues;                                   // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FName>                                        VectorParameterNames;                                    // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     VectorParameterValues;                                   // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.SerializedMissionData
	 * Size -> 0x0018
	 */
	struct FSerializedMissionData
	{
	public:
		class FName                                                MissionTag;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SerializedData;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PointOfInterestData_ForCompanion
	 * Size -> 0x04E0
	 */
	struct FPointOfInterestData_ForCompanion
	{
	public:
		struct FPointOfInterestData                                PointData;                                               // 0x0000(0x01E0) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
		struct FPointOfInterestCompanionBehavior                   PointCompanionBehavior;                                  // 0x01E0(0x0300) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.GrappleAnchor
	 * Size -> 0x0050
	 */
	struct FGrappleAnchor
	{
	public:
		struct FVector                                             AnchorWorldLocation;                                     // 0x0000(0x0018) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USceneComponent*                                     AnchoredComponent;                                       // 0x0018(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AnchoredItemIndex;                                       // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MXCR[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AnchoredBoneName;                                        // 0x0028(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AnchorRelativeOffset;                                    // 0x0038(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.GrappleTether
	 * Size -> 0x01B8
	 */
	struct FGrappleTether
	{
	public:
		class FString                                              TetherTag;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGrappleAnchor                                      TetherAnchor_Start;                                      // 0x0010(0x0050) Edit, BlueprintVisible, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGrappleAnchor                                      TetherAnchor_End;                                        // 0x0060(0x0050) Edit, BlueprintVisible, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGrappleAnchor                                      TetherAnchor_Visual_Start;                               // 0x00B0(0x0050) Edit, BlueprintVisible, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGrappleAnchor                                      TetherAnchor_Visual_End;                                 // 0x0100(0x0050) Edit, BlueprintVisible, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic
		class APrimalCharacter*                                    GrappledParentPrimalChar;                                // 0x0150(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APrimalCharacter*                                    GrappleOwner;                                            // 0x0158(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APrimalBuff_Grappled*                                MasterGrappleBuff;                                       // 0x0160(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TetherLifetime;                                          // 0x0168(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1QAP[0x4];                                   // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TetherCreationTime;                                      // 0x0170(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OGIO[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bAnyoneCanControl : 1;                                   // 0x0180(0x0001) BIT_FIELD Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseVisualAnchor_Start : 1;                              // 0x0180(0x0001) BIT_FIELD Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseVisualAnchor_End : 1;                                // 0x0180(0x0001) BIT_FIELD Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTetherBroken : 1;                                       // 0x0180(0x0001) BIT_FIELD BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E40R[0x7];                                   // 0x0181(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastAboveBreakDistPastTetherLengthTime;                  // 0x0188(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TetherLength_Current;                                    // 0x0190(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GAAZ[0x4];                                   // 0x0194(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             DirFromOwner_Current;                                    // 0x0198(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DistToOwner_Current;                                     // 0x01B0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OwnerDistFromTetherLimit_Current;                        // 0x01B4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ReplicatedGrappleTetherData
	 * Size -> 0x0178
	 */
	struct FReplicatedGrappleTetherData
	{
	public:
		class FString                                              Rep_TetherTag;                                           // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGrappleAnchor                                      Rep_TetherAnchor_Start;                                  // 0x0010(0x0050) ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGrappleAnchor                                      Rep_TetherAnchor_End;                                    // 0x0060(0x0050) ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGrappleAnchor                                      Rep_TetherAnchor_Visual_Start;                           // 0x00B0(0x0050) ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGrappleAnchor                                      Rep_TetherAnchor_Visual_End;                             // 0x0100(0x0050) ContainsInstancedReference, NativeAccessSpecifierPublic
		class APrimalBuff_Grappled*                                Rep_MasterGrappledBuff;                                  // 0x0150(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Rep_TetherLifetime;                                      // 0x0158(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G0JM[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     Rep_TetherCreationTime;                                  // 0x0160(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Rep_bUseVisualAnchor_Start : 1;                          // 0x0168(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Rep_bUseVisualAnchor_End : 1;                            // 0x0168(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZHR6[0x3];                                   // 0x0169(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Rep_TetherLength;                                        // 0x016C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Rep_bAnyoneCanControl : 1;                               // 0x0170(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Rep_bTetherBroken : 1;                                   // 0x0170(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AZ2Z[0x7];                                   // 0x0171(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.MissionRelatedActorData
	 * Size -> 0x0040
	 */
	struct FMissionRelatedActorData
	{
	public:
		class AActor*                                              RelatedActor;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RelatedActorPropertyName;                                // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMissionRelatedPropertyType                                RelatedActorPropertyType;                                // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMissionRelatedPropertyUsage                               RelatedActorPropertyUsage;                               // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C7NQ[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        RelatedActorPropertyTextColor;                           // 0x0014(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        LocalIndexMatchColorModifier;                            // 0x0024(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseLocalIndexMatchColorModifier;                        // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KZYN[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    IndexMatchRangeOffset;                                   // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O8HZ[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.MissionPhaseRequirement
	 * Size -> 0x0090
	 */
	struct FMissionPhaseRequirement
	{
	public:
		class FName                                                DescriptionStringTag;                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              RelatedType;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRelatedTypeName : 1;                                 // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9305[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMissionRelatedActorData                            OptionalRelatedActorData;                                // 0x0018(0x0040) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsComplete : 1;                                         // 0x0058(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCount : 1;                                           // 0x0058(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseProgress : 1;                                        // 0x0058(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoCalculateProgressFromCount : 1;                     // 0x0058(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IKHR[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CurrentCount;                                            // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCount;                                                // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      progress;                                                // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPhaseRequirementWidgetVisualState                         PhaseRequirementWidgetVisualState;                       // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UB5X[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        CustomPhaseRequirementTextColor;                         // 0x006C(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        CustomPhaseRequirementProgressBarColor;                  // 0x007C(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SWGF[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ClientMissionData
	 * Size -> 0x0058
	 */
	struct FClientMissionData
	{
	public:
		class AMissionType*                                        Mission;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMissionPhaseRequirement>                    Requirements;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMissionPhaseRequirement>                    LocalRequirements;                                       // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMissionWorldIndicator>                      MissionWorldIndicators;                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FMissionWorldIndicator>                      LocalWorldIndicators;                                    // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FItemNetInfo>                                Items;                                                   // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ClientMissionSubscriptionData
	 * Size -> 0x0040
	 */
	struct FClientMissionSubscriptionData
	{
	public:
		unsigned char                                              MissionType[0x30];                                       // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		TArray<class FName>                                        Keys;                                                    // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.CameraInterpMovementBasedMultipliers
	 * Size -> 0x0080
	 */
	struct FCameraInterpMovementBasedMultipliers
	{
	public:
		bool                                                       bUseSpringStiffnessSpeedMultipliers : 1;                 // 0x0000(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplySpringStiffnessSpeedMultipliersToZ : 1;            // 0x0000(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSpeedMultipliersForBackwardsMovement : 1;            // 0x0000(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C72M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BackwardsMovementReferenceSpeedForSpringStiffnessMultiplier; // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WalkingReferenceSpeedForSpringStiffnessMultiplier;       // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RunningReferenceSpeedForSpringStiffnessMultiplier;       // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseBackwardsMovementSpeedMultiplierExponent;            // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseWalkingSpeedMultiplierExponent;                      // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseRunningSpeedMultiplierExponent;                      // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinAllowedBaseBackwardsMovementSpeedMultiplier;          // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinAllowedBaseWalkingSpeedMultiplier;                    // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinAllowedBaseRunningSpeedMultiplier;                    // 0x0024(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAllowedBaseBackwardsMovementSpeedMultiplier;          // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAllowedBaseWalkingSpeedMultiplier;                    // 0x002C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAllowedBaseRunningSpeedMultiplier;                    // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BGND[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ExtraBackwardsMovementSpringStiffnessMultiplier;         // 0x0038(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ExtraWalkingSpringStiffnessMultiplier;                   // 0x0050(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ExtraRunningSpringStiffnessMultiplier;                   // 0x0068(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalCameraSettingsConditions
	 * Size -> 0x0002
	 */
	struct FPrimalCameraSettingsConditions
	{
	public:
		ECameraSetting_BoolCondition                               RequireMoving;                                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECameraSetting_BoolCondition                               RequireSprinting;                                        // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalCameraInterpParams
	 * Size -> 0x000C
	 */
	struct FPrimalCameraInterpParams
	{
	public:
		float                                                      SpringStiffness;                                         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CriticalDamping;                                         // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetVelocity;                                          // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalCameraInterpScreenAreaModifier
	 * Size -> 0x0050
	 */
	struct FPrimalCameraInterpScreenAreaModifier
	{
	public:
		bool                                                       bApplyOnXAxis : 1;                                       // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyOnYAxis : 1;                                       // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HMMK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ScreenCoords;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLerpValue : 1;                                          // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SJKB[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ScreenCoordsForLerping;                                  // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideStartingParamsForLerping : 1;                   // 0x0030(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0W5Z[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrimalCameraInterpParams                           StartingInterpParamsForLerping;                          // 0x0034(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ExponentialLerpBase;                                     // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimalCameraInterpParams                           NewInterpParams;                                         // 0x0044(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalCameraPitchBasedModifier
	 * Size -> 0x0090
	 */
	struct FPrimalCameraPitchBasedModifier
	{
	public:
		struct FVector2D                                           ApplyBetweenPitchValues;                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLerpValue : 1;                                          // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J8RS[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           LerpBetweenPitchValues;                                  // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExponentialLerpBase;                                     // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxis                                                      InterpParamsAxis;                                        // 0x002C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3YZI[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrimalCameraInterpParams                           FinalInterpParams;                                       // 0x0030(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverrideArmLengthStartingLerpValue : 1;                 // 0x003C(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E15H[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ArmLengthStartingLerpValue;                              // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FinalArmLength;                                          // 0x0044(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideArmLengthInterpParams : 1;                      // 0x0048(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AVB8[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrimalCameraInterpParams                           FinalArmLengthInterpParams;                              // 0x004C(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverridePivotLocationOffset : 1;                        // 0x0058(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverridePivotLocationOffsetStartingLerpValue : 1;       // 0x0058(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M625[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PivotLocationOffsetStartingLerpValue;                    // 0x0060(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             FinalPivotOffset;                                        // 0x0078(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalCameraParams
	 * Size -> 0x00D8
	 */
	struct FPrimalCameraParams
	{
	public:
		class FName                                                CameraPivotBoneName;                                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsePivotLocationOffset : 1;                             // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDinoUseOldSystemCameraLocation : 1;                     // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4RMC[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PivotLocationOffset;                                     // 0x0010(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimalCameraInterpParams                           CameraPivotLocationInterpParamsX;                        // 0x0028(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FPrimalCameraInterpParams                           CameraPivotLocationInterpParamsY;                        // 0x0034(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FPrimalCameraInterpParams                           CameraPivotLocationInterpParamsZ;                        // 0x0040(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VNF3[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPrimalCameraInterpScreenAreaModifier>       InterpParamsXModifiers;                                  // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FPrimalCameraInterpScreenAreaModifier>       InterpParamsYModifiers;                                  // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FPrimalCameraInterpScreenAreaModifier>       InterpParamsZModifiers;                                  // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      PositivePitchZDistOff;                                   // 0x0080(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimalCameraInterpParams                           CameraPivotRotationInterpParams;                         // 0x0084(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bLerpRotationInterpParamsBasedOnRotationSpeed : 1;       // 0x0090(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7Q8A[0x3];                                   // 0x0091(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrimalCameraInterpParams                           MaxCameraPivotRotationInterpParams;                      // 0x0094(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		float                                                      YawDeltaToStartLerping;                                  // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      YawDeltaToEndLerping;                                    // 0x00A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraArmLength;                                         // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimalCameraInterpParams                           CameraArmLengthInterpParams;                             // 0x00AC(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FPrimalCameraPitchBasedModifier>             PitchBasedModifiers;                                     // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FVector2D                                           AnimAimOffsetPitchRange;                                 // 0x00C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalCameraSettings
	 * Size -> 0x00E8
	 */
	struct FPrimalCameraSettings
	{
	public:
		class FName                                                Description;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimalCameraSettingsConditions                     Conditions;                                              // 0x0008(0x0002) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VB0U[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrimalCameraParams                                 CameraParams;                                            // 0x0010(0x00D8) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalCameraPivotZInterpOverrides
	 * Size -> 0x0034
	 */
	struct FPrimalCameraPivotZInterpOverrides
	{
	public:
		bool                                                       bOverridePivotZInterpForCrouching : 1;                   // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W81K[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrimalCameraInterpParams                           CrouchPivotZInterpParams;                                // 0x0004(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverridePivotZInterpForProne : 1;                       // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7SUD[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrimalCameraInterpParams                           PronePivotZInterpParams;                                 // 0x0014(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bOverridePivotZInterpForLongFalls : 1;                   // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FXKA[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrimalCameraInterpParams                           LongFallPivotZInterpParams;                              // 0x0024(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		float                                                      InterpSpeedToReachLongFallZInterpParams;                 // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalCameraProfile
	 * Size -> 0x01C0
	 */
	struct FPrimalCameraProfile
	{
	public:
		bool                                                       bUseCameraRotationToDetermineInterpAxes : 1;             // 0x0000(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0GL6[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SnapPivotToFinalLocationAfterDistance;                   // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FlyingSnapPivotToFinalLocationAfterDistance;             // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L1AJ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCameraInterpMovementBasedMultipliers               CameraPivotInterpMultipliers;                            // 0x0010(0x0080) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FPrimalCameraSettings                               DefaultPrimalCameraSettings;                             // 0x0090(0x00E8) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FPrimalCameraSettings>                       AdditionalPrimalCameraSettings;                          // 0x0178(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FPrimalCameraPivotZInterpOverrides                  CameraPivotZInterpOverrides;                             // 0x0188(0x0034) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UL5A[0x4];                                   // 0x01BC(0x0004) MISSED OFFSET (PADDING)
	};

	struct FPrimalServerMoveExtendedData
	{
		FRotator ClientRotation;   // 0x0000
		uint8 bIsRunning;          // 0x0018
		uint8 bIsDino;             // 0x0019
		uint8 bTestForYawDisagreement; // 0x001A
		uint8 Padding[5];          // 0x001B - 0x001F (undefined bytes for padding)
	};

	struct FCharacterNetworkMoveData 
	{
		enum class ENetworkMoveType : uint32_t 
		{
			NewMove = 0,
			PendingMove = 1,
			OldMove = 2
		};

		void* __vftable;                     // Virtual function table pointer (likely inherited from a base class)
		uint32_t NetworkMoveType;             // enum for ENetworkMoveType (FCharacterNetworkMoveData::ENetworkMoveType)
		uint32_t TimeStamp;                   // Timestamp for the move
		FVector_NetQuantize10 Acceleration;   // Quantized acceleration vector
		FVector_NetQuantize100 Location;      // Quantized location vector
		FRotator ControlRotation; // Control rotation (using a templated type for double precision)
		uint8_t CompressedMoveFlags;          // Flags for compressed move
		uint8_t MovementMode;                 // Movement mode
		uint8_t Padding1;                     // Padding
		uint8_t Padding2;                     // Padding
		uint8_t Padding3;                     // Padding
		uint8_t Padding4;                     // Padding
		uint8_t Padding5;                     // Padding
		uint8_t Padding6;                     // Padding
		void* MovementBase;                   // Pointer or offset to the movement base
		FName MovementBaseBoneName;           // Bone name for movement base
	};

	
	struct FPrimalCharacterMoveData
	{
		FRotator Rotation;  // 0x00 - Rotation
		float MaxSpeed;                       // 0x18 - Max speed (float)
		uint8_t bClientIsRunning;             // 0x1C - Client running flag (1 byte)
		uint8_t bAccelerationFollowsRotation; // 0x1D - Acceleration follows rotation flag (1 byte)
		uint8_t Padding[2];                   // 0x1E-0x1F - Padding for alignment
	};

	struct FPrimalCharacterNetworkMoveData : public FCharacterNetworkMoveData 
	{
		FPrimalCharacterMoveData PrimalMoveData; // Contains move data
	};

	struct FCharacterNetworkMoveDataContainer
	{
		void** VfTable;                     // Virtual function table pointer
		uint8_t bHasPendingMove;             // Boolean indicating if there is a pending move
		uint8_t bIsDualHybridRootMotionMove; // Boolean indicating if this is a dual hybrid root motion move
		uint8_t bHasOldMove;                 // Boolean indicating if there is an old move
		uint8_t bDisableCombinedScopedMove;  // Boolean to disable combined scoped moves
		uint8_t Padding1[4];                 // Padding to align to the next 8-byte boundary
		void* NewMoveData;                   // Pointer to new move data
		void* PendingMoveData;               // Pointer to pending move data
		void* OldMoveData;                   // Pointer to old move data
		FCharacterNetworkMoveData BaseDefaultMoveData[3]; // Array of 3 FCharacterNetworkMoveData
	};

	struct FPrimalCharacterNetworkMoveDataContainer : public FCharacterNetworkMoveDataContainer 
	{
		FPrimalCharacterNetworkMoveData PrimalDefaultMoveData[3]; // Array of 3 instances of FPrimalCharacterNetworkMoveData
	};

	/**
	 * ScriptStruct ShooterGame.PrimalCameraParamsOverride
	 * Size -> 0x0088
	 */
	struct FPrimalCameraParamsOverride
	{
	public:
		class FName                                                CameraPivotBoneName;                                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverridePivotLocationOffsetSettings : 1;                // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsePivotLocationOffset : 1;                             // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4TVM[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PivotLocationOffset;                                     // 0x0010(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimalCameraInterpParams                           CameraPivotLocationInterpParamsX;                        // 0x0028(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FPrimalCameraInterpParams                           CameraPivotLocationInterpParamsY;                        // 0x0034(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FPrimalCameraInterpParams                           CameraPivotLocationInterpParamsZ;                        // 0x0040(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FPrimalCameraInterpParams                           CameraPivotRotationInterpParams;                         // 0x004C(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		float                                                      CameraArmLength;                                         // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimalCameraInterpParams                           CameraArmLengthInterpParams;                             // 0x005C(0x000C) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FVector2D>                                   RemoveOriginalPitchModifiersInPitchRange;                // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FPrimalCameraPitchBasedModifier>             PitchBasedModifiers;                                     // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalCameraSettingsOverride
	 * Size -> 0x0098
	 */
	struct FPrimalCameraSettingsOverride
	{
	public:
		class FName                                                Description;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPrimalCameraSettingsConditions                     Conditions;                                              // 0x0008(0x0002) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0G3T[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPrimalCameraParamsOverride                         CameraParamsOverride;                                    // 0x0010(0x0088) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalCameraSettingsOverrideGroup
	 * Size -> 0x0010
	 */
	struct FPrimalCameraSettingsOverrideGroup
	{
	public:
		TArray<struct FPrimalCameraSettingsOverride>               SettingsOverrides;                                       // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.CharacterPreset
	 * Size -> 0x00D8
	 */
	struct FCharacterPreset
	{
	public:
		struct FVector2D                                           BodyColorSliderValue;                                    // 0x0000(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           HairColorSliderValue;                                    // 0x0010(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           HairTipColorSliderValue;                                 // 0x0020(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           BeardTipColorSliderValue;                                // 0x0030(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           BeardColorSliderValue;                                   // 0x0040(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           EyeColorSliderValue;                                     // 0x0050(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           EyeIrisColorSliderValue;                                 // 0x0060(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HairStyleSliderValue;                                    // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HairLengthSliderValue;                                   // 0x0074(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BeardLengthSliderValue;                                  // 0x0078(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BeardStyleSliderValue;                                   // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EyebrowStyleSliderValue;                                 // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VQNL[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              BoneModifierSliderValues;                                // 0x0088(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		int32_t                                                    PlayerVoiceCollectionIndex;                              // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    bIsPlayerVoiceCollectionCustom;                          // 0x009C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SkinBodyColor;                                           // 0x00A0(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              DynamicMaterialFloats;                                   // 0x00B0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector2D>                                   DynamicMaterialColorPicker;                              // 0x00C0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsLastCharacterMade;                                    // 0x00D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverridesGender;                                        // 0x00D1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFemale;                                               // 0x00D2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDefaultPreset;                                        // 0x00D3(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9Q0X[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalCharacterStatusStateThresholds
	 * Size -> 0x0048
	 */
	struct FPrimalCharacterStatusStateThresholds
	{
	public:
		TArray<float>                                              HighThresholdStatusStateValues;                          // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<EPrimalCharacterStatusState>                        HighThresholdStatusStateType;                            // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<float>                                              LowThresholdStatusStateValues;                           // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<EPrimalCharacterStatusState>                        LowThresholdStatusStateType;                             // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       StatusStateThresholdValuesAbsolute;                      // 0x0040(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8BRF[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalCharacterStatusValueModifier
	 * Size -> 0x0024
	 */
	struct FPrimalCharacterStatusValueModifier
	{
	public:
		unsigned char                                              UnknownData_E2DI[0x24];                                  // 0x0000(0x0024) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.CinematicMaterial
	 * Size -> 0x0038
	 */
	struct FCinematicMaterial
	{
	public:
		class UMaterialInstanceDynamic*                            Mid;                                                     // 0x0000(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              CinematicMaterial[0x30];                                 // 0x0008(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct ShooterGame.ClimbingTypeSettings
	 * Size -> 0x001C
	 */
	struct FClimbingTypeSettings
	{
	public:
		bool                                                       bIsOneShot : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FO92[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WaitTime;                                                // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaConsumption;                                      // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ConsumeDurabilityMultiplier;                             // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttachMoveTraceDistance;                                 // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttachBackTraceDistance;                                 // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttachForwardTraceDistance;                              // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ClimbingTransitionParams
	 * Size -> 0x0070
	 */
	struct FClimbingTransitionParams
	{
	public:
		float                                                      LocationInterpSpeed;                                     // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RotationInterpSpeed;                                     // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OvershootDuration;                                       // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OvershootCurveExp;                                       // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OvershootCurveStartOffset;                               // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OvershootCurveDirectionBias;                             // 0x0014(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OvershootCurveStartBias;                                 // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OvershootCurveEndOffset;                                 // 0x001C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OvershootCurveEndBias;                                   // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraLocationInterpSpeed;                               // 0x0024(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraRotationInterpSpeed;                               // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCameraSwitch;                                           // 0x002C(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_005Y[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CameraTransitionDuration;                                // 0x0030(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_45AN[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CameraSwitchStrength;                                    // 0x0038(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraSwitchLocationInterpSpeed;                         // 0x0050(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CameraSwitchRotationInterpSpeed;                         // 0x0054(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            CameraSwitchOffset;                                      // 0x0058(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ColorSetDefinition
	 * Size -> 0x0060
	 */
	struct FColorSetDefinition
	{
	public:
		class FString                                              RegionName;                                              // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        ColorEntryNames;                                         // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<float>                                              RandomWeights;                                           // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<float>                                              MinLevel;                                                // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<float>                                              MaxLevel;                                                // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1AG5[0x10];                                  // 0x0050(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.DinoFoodEffectivenessMultipliers
	 * Size -> 0x0030
	 */
	struct FDinoFoodEffectivenessMultipliers
	{
	public:
		float                                                      FoodEffectivenessMultiplier;                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HealthEffectivenessMultiplier;                           // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TorpidityEffectivenessMultiplier;                        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AffinityEffectivenessMultiplier;                         // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AffinityOverride;                                        // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaEffectivenessMultiplier;                          // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FoodItemCategory;                                        // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZMQY[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              FoodItemParent;                                          // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UntamedFoodConsumptionPriority;                          // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6JAW[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.EngramEntries
	 * Size -> 0x0010
	 */
	struct FEngramEntries
	{
	public:
		TArray<class UClass*>                                      EngramEntries;                                           // 0x0000(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalCharacterStatusValueDefinition
	 * Size -> 0x0020
	 */
	struct FPrimalCharacterStatusValueDefinition
	{
	public:
		class UTexture2D*                                          StatusValueIcon;                                         // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StatusValueName;                                         // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLevelUpSetToMaxValue;                                   // 0x0018(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisplayHideCurrentValue;                                // 0x0019(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisplayAsPercent;                                       // 0x001A(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PFYC[0x5];                                   // 0x001B(0x0005) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalCharacterStatusStateDefinition
	 * Size -> 0x0058
	 */
	struct FPrimalCharacterStatusStateDefinition
	{
	public:
		EPrimalCharacterStatusValue                                StatusValueType;                                         // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KZ3G[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StatusValueThresholdIndex;                               // 0x0004(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          StatusStateIcon;                                         // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StatusStateName;                                         // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StatusStateDescription;                                  // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              StatusStateNameColor;                                    // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsed;                                                   // 0x0034(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisplayHUDMessage;                                      // 0x0035(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WEQC[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              HUDMessage;                                              // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              HUDMessageColor;                                         // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BuffType;                                                // 0x004C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventDisplayBuffHUD;                                  // 0x0050(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7G8S[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalItemStatDefinition
	 * Size -> 0x0018
	 */
	struct FPrimalItemStatDefinition
	{
	public:
		class UTexture2D*                                          ItemStatIcon;                                            // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemStatName;                                            // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalItemDefinition
	 * Size -> 0x0020
	 */
	struct FPrimalItemDefinition
	{
	public:
		class UTexture2D*                                          ItemTypeIcon;                                            // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemTypeName;                                            // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              ItemTypeColor;                                           // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0S7C[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalEquipmentDefinition
	 * Size -> 0x0018
	 */
	struct FPrimalEquipmentDefinition
	{
	public:
		class UTexture2D*                                          EquipmentTypeIcon;                                       // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EquipmentTypeName;                                       // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalItemQuality
	 * Size -> 0x0030
	 */
	struct FPrimalItemQuality
	{
	public:
		struct FLinearColor                                        QualityColor;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              QualityName;                                             // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      QualityRandomMultiplierThreshold;                        // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CraftingXPMultiplier;                                    // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RepairingXPMultiplier;                                   // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CraftingResourceRequirementsMultiplier;                  // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.AppIDItem
	 * Size -> 0x0060
	 */
	struct FAppIDItem
	{
	public:
		class FString                                              AchievementID;                                           // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      AchievementIDs;                                          // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                GiveItemIfEmoteNameUnlocked;                             // 0x0020(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AppID;                                                   // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayerBadgeGroup;                                        // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceNewDefaultCosmetic;                                // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VF4M[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      PlayerIDStrings;                                         // 0x0038(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class UClass*                                              ItemClass;                                               // 0x0048(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      ItemClasses;                                             // 0x0050(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.RangedValues
	 * Size -> 0x0008
	 */
	struct FRangedValues
	{
	public:
		int32_t                                                    Range;                                                   // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PlayerCharacterGenderDefinition
	 * Size -> 0x0A38
	 */
	struct FPlayerCharacterGenderDefinition
	{
	public:
		class FString                                              GenderString;                                            // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              CharacterBlueprint;                                      // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLinearColor>                                ColorSetBody;                                            // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FLinearColor>                                ColorSetHair;                                            // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FLinearColor>                                ColorSetEyes;                                            // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  CharacterPreviewMaterial;                                // 0x0048(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      DefaultCharacterNames;                                   // 0x0050(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<float>                                              DefaultCharacterNameWeights;                             // 0x0060(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FBoneModifierRangeArray                             CharacterBoneModifierRanges[0x1A];                       // 0x0070(0x04E0) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FBoneModifierRangeArray                             ExtraCharacterBoneModifierMax[0x1A];                     // 0x0550(0x04E0) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UClass*                                              GlobalBoneModifiers;                                     // 0x0A30(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.NamedTeamDefinition
	 * Size -> 0x0080
	 */
	struct FNamedTeamDefinition
	{
	public:
		class FName                                                TeamName;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTargetingTeamExclusionList : 1;                         // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTargetingTeamInclusionList : 1;                         // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowTargetsOnOwnTeam : 1;                              // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCarnivore : 1;                                        // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTargetPlayersAndTamedOnly : 1;                          // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceTargetPlayersAndTamed : 1;                         // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoredByAllTeams : 1;                                  // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q05T[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        TeamNameList;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FName>                                        TargetingMultiplierTeamNames;                            // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FName>                                        DontGiveDamageTeamList;                                  // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FName>                                        DontReceiveDamageTeamList;                               // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FName>                                        MaximumTargetableDistanceTeams;                          // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<float>                                              MaximumTargetableDistances;                              // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<float>                                              TargetingMultiplierTeamWeights;                          // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ExplorerNoteAchievement
	 * Size -> 0x0020
	 */
	struct FExplorerNoteAchievement
	{
	public:
		class FString                                              AchievementName;                                         // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ExplorerNoteIndices;                                     // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PlayerDynamicMaterialFloat
	 * Size -> 0x0020
	 */
	struct FPlayerDynamicMaterialFloat
	{
	public:
		class FName                                                NameUsedForDynamicMaterialByteParam;                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinValue;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxValue;                                                // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinRandomSliderValue;                                    // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxRandomSliderValue;                                    // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultValueMale;                                        // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultValueFemale;                                      // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PlayerDynamicMaterialVector
	 * Size -> 0x0038
	 */
	struct FPlayerDynamicMaterialVector
	{
	public:
		class FName                                                NameUsedForDynamicMaterialByteParam;                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MinValue;                                                // 0x0008(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             MaxValue;                                                // 0x0020(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PlayerDynamicMaterialColors
	 * Size -> 0x000C
	 */
	struct FPlayerDynamicMaterialColors
	{
	public:
		class FName                                                NameUsedForDynamicMaterialByteParam;                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Value;                                                   // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.MultiAchievement
	 * Size -> 0x0020
	 */
	struct FMultiAchievement
	{
	public:
		class FString                                              UnlockAchievement;                                       // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      RequiredAchievements;                                    // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.LocalizedSoundCueEntry
	 * Size -> 0x0030
	 */
	struct FLocalizedSoundCueEntry
	{
	public:
		class FString                                              TwoLetterISOLanguageName;                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     LocalizedSoundCue;                                       // 0x0010(0x0020) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ExplorerNoteEntry
	 * Size -> 0x0110
	 */
	struct FExplorerNoteEntry
	{
	public:
		unsigned char                                              UnknownData_PISY[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ExplorerNoteType;                                        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsIsland : 1;                                           // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsScorchedEarth : 1;                                    // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAberration : 1;                                       // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsExtinction : 1;                                       // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsGenesis1 : 1;                                         // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsGenesis2 : 1;                                         // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDossier : 1;                                          // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDontRequireProximityToChest : 1;                        // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUnlockIgnorePopup : 1;                                  // 0x0009(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUnlockIgnoreSound : 1;                                  // 0x0009(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventXPBuff : 1;                                      // 0x0009(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RDP0[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ExplorerNoteDescription;                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DossierTameableDinoNameTag;                              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ExplorerNoteMesh[0x30];                                  // 0x0028(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              ExplorerNoteAnimBP[0x30];                                // 0x0058(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		struct FSoftObjectPath                                     ExplorerNoteTexture;                                     // 0x0088(0x0020) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          ExplorerNoteIcon;                                        // 0x00A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  ExplorerNoteIconMaterial;                                // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          UnlockedSoundOverride;                                   // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShowExplorerNoteTitleDelayTime;                          // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3AXP[0x4];                                   // 0x00C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundCue*                                           ExplorerNoteOpenSound;                                   // 0x00C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           ExplorerNoteCloseSound;                                  // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MoviePath;                                               // 0x00D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                LocalizedSubtitle;                                       // 0x00E8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FLocalizedSoundCueEntry>                     LocalizedAudio;                                          // 0x0100(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.OverrideAnimBlueprintEntry
	 * Size -> 0x0060
	 */
	struct FOverrideAnimBlueprintEntry
	{
	public:
		unsigned char                                              FromBPClass[0x30];                                       // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              ToBPClass[0x30];                                         // 0x0030(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct ShooterGame.GrinderItemReplacer
	 * Size -> 0x0010
	 */
	struct FGrinderItemReplacer
	{
	public:
		class UClass*                                              Current;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              replacement;                                             // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.CryopodPersistantBuffs
	 * Size -> 0x0018
	 */
	struct FCryopodPersistantBuffs
	{
	public:
		class FString                                              BuffClassString;                                         // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IDBitMask;                                               // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OYAI[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.SubtitleStringEntry
	 * Size -> 0x0020
	 */
	struct FSubtitleStringEntry
	{
	public:
		class FText                                                BaseText;                                                // 0x0000(0x0018) Edit, NativeAccessSpecifierPublic
		float                                                      StartTime;                                               // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndTime;                                                 // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.SubtitleStringMap
	 * Size -> 0x0020
	 */
	struct FSubtitleStringMap
	{
	public:
		class FString                                              MediaName;                                               // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FSubtitleStringEntry>                        Subtitles;                                               // 0x0010(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.DinoAbilityInfo
	 * Size -> 0x0028
	 */
	struct FDinoAbilityInfo
	{
	public:
		class FName                                                InputAction;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AbilityName;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AbilityDescription;                                      // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.DinoAbilities
	 * Size -> 0x0018
	 */
	struct FDinoAbilities
	{
	public:
		class FName                                                DinoTag;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDinoAbilityInfo>                            AbilityInfos;                                            // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PlayerConfigVoiceCollectionInfo
	 * Size -> 0x0020
	 */
	struct FPlayerConfigVoiceCollectionInfo
	{
	public:
		class UPrimaryDataAsset*                                   VoiceCollectionRef;                                      // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NameUsedForVoiceCollection;                              // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsMasculineCategory : 1;                                // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFeminineCategory : 1;                                 // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1F50[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.BoneTypeValueStruct
	 * Size -> 0x0008
	 */
	struct FBoneTypeValueStruct
	{
	public:
		EBoneModifierType                                          BoneModifierType;                                        // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WKDP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Value;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PlayerBoneBodyPreset
	 * Size -> 0x0060
	 */
	struct FPlayerBoneBodyPreset
	{
	public:
		class FString                                              BodyPresetName;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          BodyPresetPreviewIconImage;                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FBoneTypeValueStruct>                        BoneModifierSliderValues;                                // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<float>                                              DynamicMaterialByteFloats;                               // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FPlayerDynamicMaterialVector>                DynamicMaterialByteVector;                               // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FPlayerDynamicMaterialColors>                DynamicMaterialByteColors;                               // 0x0048(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bMaleOnly : 1;                                           // 0x0058(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFemaleOnly : 1;                                         // 0x0058(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RSWQ[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.CachedDBSet
	 * Size -> 0x0030
	 */
	struct FCachedDBSet
	{
	public:
		class FName                                                ModName;                                                 // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UShooterWeaponDB*                                    WeaponDB;                                                // 0x0008(0x0008) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimalDinoDB*                                       DinoDB;                                                  // 0x0010(0x0008) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimalStructureDB*                                  StructureDB;                                             // 0x0018(0x0008) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimalInventoryDB*                                  InventoryDB;                                             // 0x0020(0x0008) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimalMissionDB*                                    MissionDB;                                               // 0x0028(0x0008) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.CachedDBAccessor
	 * Size -> 0x0040
	 */
	struct FCachedDBAccessor
	{
	public:
		struct FCachedDBSet                                        CachedDBs;                                               // 0x0000(0x0030) Edit, NoDestructor, NativeAccessSpecifierPrivate
		TArray<struct FCachedDBSet>                                OverrideCachedDBs;                                       // 0x0030(0x0010) Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPrivate
	};

	/**
	 * ScriptStruct ShooterGame.HarvestResourceEntry
	 * Size -> 0x0078
	 */
	struct FHarvestResourceEntry
	{
	public:
		int32_t                                                    OverrideQuantityMax;                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OverrideQuantityMin;                                     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OverrideQuantityRandomPower;                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EntryWeight;                                             // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EffectivenessQuantityMultiplier;                         // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EffectivenessQualityMultiplier;                          // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ResourceItem;                                            // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      QualityMin;                                              // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      QualityMax;                                              // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      XPGainMax;                                               // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      XPGainMin;                                               // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DamageTypeEntryValuesOverrides[0x10];                    // 0x0030(0x0010) UNKNOWN PROPERTY: ArrayProperty
		TArray<float>                                              DamageTypeEntryWeightOverrides;                          // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<float>                                              DamageTypeEntryMinQuantityOverrides;                     // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<float>                                              DamageTypeEntryMaxQuantityOverrides;                     // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bScaleWithDinoBabyAge : 1;                               // 0x0070(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DD9A[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.DamageHarvestingEntry
	 * Size -> 0x0028
	 */
	struct FDamageHarvestingEntry
	{
	public:
		float                                                      DamageMultiplier;                                        // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HarvestQuantityMultiplier;                               // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageHarvestAdditionalEffectiveness;                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageDurabilityConsumptionMultiplier;                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowUnderwaterHarvesting : 1;                          // 0x0010(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G2HF[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DamageTypeParent;                                        // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              HarvestDamageFXOverride;                                 // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ComponentAttachmentEntry
	 * Size -> 0x0038
	 */
	struct FComponentAttachmentEntry
	{
	public:
		class UClass*                                              ActorComponentClass;                                     // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ComponentLocationOffset;                                 // 0x0008(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            ComponentRotationOffset;                                 // 0x0020(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ItemCraftQueueEntry
	 * Size -> 0x0018
	 */
	struct FItemCraftQueueEntry
	{
	public:
		struct FItemNetID                                          ItemID;                                                  // 0x0000(0x0008) NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    Quantity;                                                // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsRepair;                                               // 0x000C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreInventoryRequirement;                             // 0x000D(0x0001) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AQ1P[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RepairPercentage;                                        // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RepairSpeedMultiplier;                                   // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.EventItem
	 * Size -> 0x0040
	 */
	struct FEventItem
	{
	public:
		class FName                                                EventName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Item[0x30];                                              // 0x0008(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		bool                                                       bIsEngram;                                               // 0x0038(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7OZ1[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ItemSpawnActorClassOverride
	 * Size -> 0x0010
	 */
	struct FItemSpawnActorClassOverride
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ActorClassOverride;                                      // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ItemCraftingConsumptionReplenishment
	 * Size -> 0x0018
	 */
	struct FItemCraftingConsumptionReplenishment
	{
	public:
		TArray<class UClass*>                                      ItemResourceClasses;                                     // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		class UClass*                                              ToReplaceWithClass;                                      // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ExtraItemAttachmentInfo
	 * Size -> 0x0010
	 */
	struct FExtraItemAttachmentInfo
	{
	public:
		class UActorComponent*                                     ExtraComponentsToAttach;                                 // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SocketToAttachTo;                                        // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ItemAttachmentInfo
	 * Size -> 0x0070
	 */
	struct FItemAttachmentInfo
	{
	public:
		class UActorComponent*                                     ComponentToAttach;                                       // 0x0000(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FExtraItemAttachmentInfo>                    ExtraItemAttachmentInfos;                                // 0x0008(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FName                                                SocketToAttachTo;                                        // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanBuildStructuresOn : 1;                               // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseParentAnims : 1;                                     // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttachToFirstPersonHands : 1;                           // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttachToThirdPersonWeaponMesh : 1;                      // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisabled : 1;                                           // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseItemColors : 1;                                      // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseIgnoreAttachmentWhenEquipmentOfType : 1;             // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideCharacterMesh : 1;                                  // 0x0020(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttachmentRequireWeaponSupportShield : 1;               // 0x0021(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceDediAttachment : 1;                                // 0x0021(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceVisibleInFirstPerson : 1;                          // 0x0021(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreEquipmentForceHideFirstPerson : 1;                // 0x0021(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttachToFirstPersonCamera : 1;                          // 0x0021(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAttachToFirstPersonCameraCapsule : 1;                   // 0x0021(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPersistShieldRefreshOnWeaponEquip : 1;                  // 0x0021(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableForTaxidermy : 1;                                // 0x0021(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDontAddAttachedParentBounds : 1;                        // 0x0022(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KK4R[0x5];                                   // 0x0023(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              OnlyUseAttachmentForActorClass[0x30];                    // 0x0028(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		EPrimalEquipmentType                                       IgnoreAttachmentWhenEquipmentOfType;                     // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GCHL[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AttachedCompName;                                        // 0x005C(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class UActorComponent>                      AttachedCompReference;                                   // 0x0064(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y5HE[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ActorClassAttachmentInfo
	 * Size -> 0x0078
	 */
	struct FActorClassAttachmentInfo
	{
	public:
		unsigned char                                              OwnerActorClassParent[0x30];                             // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		TArray<struct FItemAttachmentInfo>                         ItemAttachmentInfos;                                     // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FName                                                PlayerMeshTextureMaskParamName;                          // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          PlayerMeshTextureMask;                                   // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          PlayerMeshNoItemDefaultTextureMask;                      // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayerMeshTextureMaskMaterialIndexNew;                   // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayerMeshTextureMaskMaterialIndexAlt;                   // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FPVHandsMeshTextureMaskParamName;                        // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          FPVHandsMeshTextureMask;                                 // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FPVHandsMeshTextureMaskMaterialIndex;                    // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FPVHandsMeshTextureMaskMaterialIndex2;                   // 0x0074(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ServerCustomFolder
	 * Size -> 0x0028
	 */
	struct FServerCustomFolder
	{
	public:
		int32_t                                                    InventoryCompType;                                       // 0x0000(0x0004) ZeroConstructor, Transient, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FXUR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              FolderName;                                              // 0x0008(0x0010) ZeroConstructor, Transient, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FItemNetID>                                  CustomFolderItemIds;                                     // 0x0018(0x0010) ZeroConstructor, Transient, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.OverrideMultiuseButtonStyle
	 * Size -> 0x0440
	 */
	struct FOverrideMultiuseButtonStyle
	{
	public:
		struct FButtonStyle                                        Style;                                                   // 0x0000(0x03F0) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FCustomButtonWidgetStyle                            ExtendedStyle;                                           // 0x03F0(0x0048) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_USDD[0x8];                                   // 0x0438(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.UseItemAddCharacterStatusValue
	 * Size -> 0x0058
	 */
	struct FUseItemAddCharacterStatusValue
	{
	public:
		float                                                      BaseAmountToAdd;                                         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPercentOfMaxStatusValue : 1;                            // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPercentOfCurrentStatusValue : 1;                        // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseItemQuality : 1;                                     // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDontRequireLessThanMaxToUse : 1;                        // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAddOverTime : 1;                                        // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAddOverTimeSpeedInSeconds : 1;                          // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bContinueOnUnchangedValue : 1;                           // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetValue : 1;                                           // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetAdditionalValue : 1;                                 // 0x0005(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bResetExistingModifierDescriptionIndex : 1;              // 0x0005(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceUseStatOnDinos : 1;                                // 0x0005(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_76K0[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LimitExistingModifierDescriptionToMaxAmount;             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AddOverTimeSpeed;                                        // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentAbsoluteMaxValue;                                 // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentAbsoluteMinValue;                                 // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StatusValueModifierDescriptionIndex;                     // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemQualityAddValueMultiplier;                           // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPrimalCharacterStatusValue                                StatusValueType;                                         // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPrimalCharacterStatusValue                                StopAtValueNearMax;                                      // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L1TL[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ScaleValueByCharacterDamageType[0x30];                   // 0x0028(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct ShooterGame.ItemStatInfo
	 * Size -> 0x0024
	 */
	struct FItemStatInfo
	{
	public:
		bool                                                       bUsed : 1;                                               // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCalculateAsPercent : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisplayAsPercent : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRequiresSubmerged : 1;                                  // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventIfSubmerged : 1;                                 // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideStatFromTooltip : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L5AT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    DefaultModifierValue;                                    // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RandomizerRangeOverride;                                 // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandomizerRangeMultiplier;                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TheRandomizerPower;                                      // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StateModifierScale;                                      // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InitialValueConstant;                                    // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RatingValueMultiplier;                                   // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AbsoluteMaxValue;                                        // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.CropItemPhaseData
	 * Size -> 0x0170
	 */
	struct FCropItemPhaseData
	{
	public:
		float                                                      NextStageFertilizerCacheThreshold;                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4ED7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              StageStaticMesh[0x30];                                   // 0x0008(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              StageStaticMeshes[0x10];                                 // 0x0038(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              HasFruitStageStaticMesh[0x30];                           // 0x0048(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              HasFruitStageStaticMeshes[0x10];                         // 0x0078(0x0010) UNKNOWN PROPERTY: ArrayProperty
		struct FVector                                             StageStaticMeshScale3D;                                  // 0x0088(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             StageStaticMeshTranslationOffset;                        // 0x00A0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            StageStaticMeshRotationOffset;                           // 0x00B8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     StageStaticMeshScales3D;                                 // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     StageStaticMeshTranslationOffsets;                       // 0x00E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FRotator>                                    StageStaticMeshRotationOffsets;                          // 0x00F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      StageReachedItemsToGive;                                 // 0x0100(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<float>                                              StageReachedItemsToGiveWeights;                          // 0x0110(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              StageBlockCollisions;                                    // 0x0120(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseStageStructure;                                      // 0x0121(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KRSF[0x6];                                   // 0x0122(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              StageStructure[0x30];                                    // 0x0128(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		struct FVector                                             StageStructureOffset;                                    // 0x0158(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.CustomContextSubmenu
	 * Size -> 0x0018
	 */
	struct FCustomContextSubmenu
	{
	public:
		class FName                                                SubmenuName;                                             // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        SubmenuOptions;                                          // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.CustomContextMenuData
	 * Size -> 0x0028
	 */
	struct FCustomContextMenuData
	{
	public:
		class FName                                                ContextItemName;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                DisplayString;                                           // 0x0008(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		class FName                                                OptionalKeybindName;                                     // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.EngramCustomFolder
	 * Size -> 0x0020
	 */
	struct FEngramCustomFolder
	{
	public:
		class FString                                              FolderName;                                              // 0x0000(0x0010) ZeroConstructor, Transient, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      EngramCustomFolderItemClasses;                           // 0x0010(0x0010) ZeroConstructor, Transient, SaveGame, UObjectWrapper, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.FogOfWarInfoStruct
	 * Size -> 0x0038
	 */
	struct FFogOfWarInfoStruct
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      CompressedVisibilityBuffer;                              // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		uint32_t                                                   UnCompressedVisibilityBufferSize;                        // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0BP7[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<bool>                                               UnlockMask;                                              // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.MapMarkerPerMapInfo
	 * Size -> 0x0020
	 */
	struct FMapMarkerPerMapInfo
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPrimalMapMarkerEntryData>                   MapMarkers;                                              // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PhotoModeMotionControlTrackData
	 * Size -> 0x0048
	 */
	struct FPhotoModeMotionControlTrackData
	{
	public:
		float                                                      TickTime;                                                // 0x0000(0x0004) ZeroConstructor, Transient, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J20U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TickLoc;                                                 // 0x0008(0x0018) ZeroConstructor, Transient, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            TickRot;                                                 // 0x0020(0x0018) ZeroConstructor, Transient, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      FocalLength;                                             // 0x0038(0x0004) ZeroConstructor, Transient, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FocusDistance;                                           // 0x003C(0x0004) ZeroConstructor, Transient, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Aperture;                                                // 0x0040(0x0004) ZeroConstructor, Transient, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O7JS[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PhotoModeMotionControlTrackInfo
	 * Size -> 0x0040
	 */
	struct FPhotoModeMotionControlTrackInfo
	{
	public:
		struct FVector                                             StartLoc;                                                // 0x0000(0x0018) ZeroConstructor, Transient, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            StartRot;                                                // 0x0018(0x0018) ZeroConstructor, Transient, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FPhotoModeMotionControlTrackData>            TickData;                                                // 0x0030(0x0010) ZeroConstructor, Transient, SaveGame, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PlayerDeathReason
	 * Size -> 0x0038
	 */
	struct FPlayerDeathReason
	{
	public:
		int32_t                                                    PlayerID;                                                // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AO5H[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DeathReason;                                             // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     DiedAtTime;                                              // 0x0018(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DeathLocation;                                           // 0x0020(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.DinoOrderID
	 * Size -> 0x0018
	 */
	struct FDinoOrderID
	{
	public:
		int32_t                                                    DinoID1;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DinoID2;                                                 // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DinoName;                                                // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.DinoOrderGroup
	 * Size -> 0x0030
	 */
	struct FDinoOrderGroup
	{
	public:
		class FString                                              DinoOrderGroupName;                                      // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      DinoOrderClasses;                                        // 0x0010(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<struct FDinoOrderID>                                DinoOrderIDs;                                            // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalPersistentCharacterStatsStruct
	 * Size -> 0x02C8
	 */
	struct FPrimalPersistentCharacterStatsStruct
	{
	public:
		uint16                                        CharacterStatusComponent_ExtraCharacterLevel;      // 0x0000(0x0002)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_2B5A[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         CharacterStatusComponent_ExperiencePoints;         // 0x0004(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         PlayerState_TotalEngramPoints;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         PlayerState_PurchasedEngramPoints;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         CharacterStatusComponent_HighestExtraCharacterLevel; // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         CharacterStatusComponent_LastRespecAtExtraCharacterLevel; // 0x0014(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		double                                        CharacterStatusComponent_LastRespecUtcTimeSeconds; // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<uint32>                                PerMapExplorerNoteUnlocks;                         // 0x0020(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<class FName>                           PerMapNamedExplorerNoteUnlocks;                    // 0x0030(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<class FName>                           EmoteUnlocks;                                      // 0x0040(0x0010)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<TSubclassOf<class UPrimalItem>>        PlayerState_EngramBlueprints;                      // 0x0050(0x0010)(BlueprintVisible, ZeroConstructor, RepSkip, UObjectWrapper, NativeAccessSpecifierPublic)
		uint8                                         CharacterStatusComponent_NumberOfLevelUpPointsApplied[0xC]; // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_2B5B[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		TSubclassOf<class UPrimalItem>                PlayerState_DefaultItemSlotClasses[0xA];           // 0x0070(0x0008)(ZeroConstructor, SaveGame, RepSkip, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         PlayerState_DefaultItemSlotEngrams[0xA];           // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_2B5C[0x6];                                     // 0x00CA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
		struct FDinoOrderGroup                        DinoOrderGroups[0xA];                              // 0x00D0(0x0030)(SaveGame, RepSkip, NativeAccessSpecifierPublic)
		int32                                         CurrentlySelectedDinoOrderGroup;                   // 0x02B0(0x0004)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         PercentageOfHeadHairGrowth;                        // 0x02B4(0x0004)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          bHasUnlockedAllExplorerNotes;                      // 0x02B8(0x0001)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                          bHasUnlockedAllBBTExplorerNotes;                   // 0x02B9(0x0001)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_2B5D[0x2];                                     // 0x02BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
		float                                         PercentageOfFacialHairGrowth;                      // 0x02BC(0x0004)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         FacialHairIndex;                                   // 0x02C0(0x0001)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         HeadHairIndex;                                     // 0x02C1(0x0001)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         EyebrowIndex;                                      // 0x02C2(0x0001)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_2B5E[0x5];                                     // 0x02C3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
		TArray<TSubclassOf<class UPrimalItem>>        ForcedUnlockDefaultCosmetics;                      // 0x02C8(0x0010)(BlueprintVisible, ZeroConstructor, RepSkip, UObjectWrapper, NativeAccessSpecifierPublic)
	};

	/**
	 * ScriptStruct ShooterGame.LatestMissionScore
	 * Size -> 0x00A0
	 */
	struct FLatestMissionScore
	{
	public:
		class FName                                                MissionTag;                                              // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLeaderboardRow                                     LatestScore;                                             // 0x0008(0x0048) BlueprintVisible, NativeAccessSpecifierPublic
		struct FLeaderboardRow                                     BestScore;                                               // 0x0050(0x0048) BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bHasValidScore;                                          // 0x0098(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EJLG[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.VectorBoolPair
	 * Size -> 0x0020
	 */
	struct FVectorBoolPair
	{
	public:
		struct FVector                                             VectorVal;                                               // 0x0000(0x0018) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BoolVal;                                                 // 0x0018(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_44ME[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.TrackedActorIDCategoryPair
	 * Size -> 0x0008
	 */
	struct FTrackedActorIDCategoryPair
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETrackedActorCategory                                      Category;                                                // 0x0004(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JKME[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.TrackedActorIDCategoryPairWithBool
	 * Size -> 0x0008
	 */
	struct FTrackedActorIDCategoryPairWithBool
	{
	public:
		int32_t                                                    ID;                                                      // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETrackedActorCategory                                      Category;                                                // 0x0004(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BoolVal;                                                 // 0x0005(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IK9H[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (PADDING)
	};

	// ScriptStruct ShooterGame.PrimalPlayerDataStruct
	// 0x0530 (0x0530 - 0x0000)
	struct FPrimalPlayerDataStruct
	{
	public:
		uint64                                        PlayerDataID;                                      // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FUniqueNetIdRepl                       UniqueID;                                          // 0x0008(0x0030)(BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                 SavedNetworkAddress;                               // 0x0038(0x0010)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                 PlayerName;                                        // 0x0048(0x0010)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint32                                        LocalPlayerIndex;                                  // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         bFirstSpawned : 1;                                 // 0x005C(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         bUseSpectator : 1;                                 // 0x005C(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
		uint8                                         Pad_2B60[0x3];                                     // 0x005D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
		struct FPrimalPlayerCharacterConfigStruct     MyPlayerCharacterConfig;                           // 0x0060(0x0110)(BlueprintVisible, NativeAccessSpecifierPublic)
		int32                                         LastPinCodeUsed;                                   // 0x0170(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_2B61[0x4];                                     // 0x0174(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		struct FPrimalPersistentCharacterStatsStruct  MyPersistentCharacterStats;                        // 0x0178(0x02D8)(BlueprintVisible, NativeAccessSpecifierPublic)
		int32                                         NumPersonalDinos;                                  // 0x0450(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_2B62[0x4];                                     // 0x0454(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		char kjdaskjda[0x10];
		TArray<int32>                                 NumDinosOfLimitedDinoClasses;                      // 0x0468(0x0010)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		int32                                         TribeID;                                           // 0x0478(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_2B63[0x4];                                     // 0x047C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		TArray<int32>                                 AppIDSet;                                          // 0x0480(0x0010)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		int32                                         PlayerDataVersion;                                 // 0x0490(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint8                                         Pad_2B64[0x4];                                     // 0x0494(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
		double                                        NextAllowedRespawnTime;                            // 0x0498(0x0008)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		double                                        LastTimeDiedToEnemyTeam;                           // 0x04A0(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		double                                        LoginTime;                                         // 0x04A8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		double                                        LastLoginTime;                                     // 0x04B0(0x0008)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         AllowedRespawnInterval;                            // 0x04B8(0x0004)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         NumOfDeaths;                                       // 0x04BC(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32                                         SpawnDayNumber;                                    // 0x04C0(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                         SpawnDayTime;                                      // 0x04C4(0x0004)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		double                                        LastInventoryRetrievalUTCTime;                     // 0x04C8(0x0008)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		double                                        SuicideCooldownStartTime;                          // 0x04D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FLatestMissionScore>            LatestMissionScores;                               // 0x04D8(0x0010)(BlueprintVisible, ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
		TArray<struct FTrackedActorPlusInfoStruct>    PersonalCachedTeamActorList_UpdatedOnInterval;     // 0x04E8(0x0010)(BlueprintVisible, ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
		double                                        LastNetworkTimeUpdatedPersonalCachedTeamActorLists; // 0x04F8(0x0008)(BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVectorBoolPair>                ServerSavedLastDeathLocations;                     // 0x0500(0x0010)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<struct FTrackedActorIDCategoryPair>    SavedFavoritedTrackedActorInfo;                    // 0x0510(0x0010)(BlueprintVisible, ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
		TArray<struct FTrackedActorIDCategoryPairWithBool> SavedWaypointTrackedActorInfo;                     // 0x0520(0x0010)(BlueprintVisible, ZeroConstructor, RepSkip, NativeAccessSpecifierPublic)
	};

	/**
	 * ScriptStruct ShooterGame.EngramsSetSoftReferenceMapping
	 * Size -> 0x0010
	 */
	struct FEngramsSetSoftReferenceMapping
	{
	public:
		TArray<class FString>                                      EngramSetToUnlock;                                       // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.BossEngramsSoftReferenceMapping
	 * Size -> 0x0010
	 */
	struct FBossEngramsSoftReferenceMapping
	{
	public:
		TArray<struct FEngramsSetSoftReferenceMapping>             EngramSets;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ProjectileWeaponData
	 * Size -> 0x0028
	 */
	struct FProjectileWeaponData
	{
	public:
		float                                                      ProjectileLife;                                          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExplosionDamage;                                         // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExplosionImpulse;                                        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DirectDamage;                                            // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DirectImpulse;                                           // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExplosionRadius;                                         // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageType;                                              // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DirectDamageType;                                        // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ManagedBoneSetup
	 * Size -> 0x001C
	 */
	struct FManagedBoneSetup
	{
	public:
		class FName                                                BoneName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETraceType                                                 TraceType;                                               // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNoHitDefaultToCenter : 1;                               // 0x0009(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DDZX[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StartOffset;                                             // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LineTraceLength;                                         // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LaunchSpeed;                                             // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GravityOverride;                                         // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalTextStyle
	 * Size -> 0x0350
	 */
	struct FPrimalTextStyle
	{
	public:
		class FName                                                StyleName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z9DQ[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTextBlockStyle                                     TextStyle;                                               // 0x0010(0x0340) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalImageStyle
	 * Size -> 0x0100
	 */
	struct FPrimalImageStyle
	{
	public:
		class FName                                                StyleName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JV9F[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInlineTextImageStyle                               ImageStyle;                                              // 0x0010(0x00F0) Edit, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.SeatingSpot
	 * Size -> 0x0038
	 */
	struct FSeatingSpot
	{
	public:
		int32_t                                                    SeatNumber;                                              // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0B3U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             LocationOffset;                                          // 0x0008(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RotationOffset;                                          // 0x0020(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.Porthole
	 * Size -> 0x0030
	 */
	struct FPorthole
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x0018(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                DisplayName;                                             // 0x001C(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L11C[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBoxComponent*                                       CollisionComp;                                           // 0x0028(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.WeaponData
	 * Size -> 0x002C
	 */
	struct FWeaponData
	{
	public:
		bool                                                       bInfiniteAmmo;                                           // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNeverReload;                                            // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsesAmmo;                                               // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDontTakeAmmoOnReload;                                   // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFullReloadFromSingleItem;                               // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowAmmoInClipAsPercent;                                // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDontReloadEmptyClipOnEquip;                             // 0x0006(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IKL6[0x1];                                   // 0x0007(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AmmoPerClip;                                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AmmoPerShot;                                             // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSilentOverflowReload;                                   // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0U97[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TimeBetweenShots;                                        // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NoAnimReloadDuration;                                    // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceReloadDuration;                                    // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLoopedReloadAnim;                                       // 0x001D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TH84[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ReloadDurationPerAmmoCount;                              // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemDurabilityToConsumePerShot;                          // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HarvestResourceMultiplier;                               // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.WeaponAnim
	 * Size -> 0x0010
	 */
	struct FWeaponAnim
	{
	public:
		class UAnimMontage*                                        Pawn1P;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimMontage*                                        Pawn3P;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.InstantWeaponData
	 * Size -> 0x0030
	 */
	struct FInstantWeaponData
	{
	public:
		float                                                      WeaponSpread;                                            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetingSpreadMod;                                      // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FinalWeaponSpreadMultiplier;                             // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FiringSpreadIncrement;                                   // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FiringSpreadMax;                                         // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WeaponRange;                                             // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HitDamage;                                               // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageImpulse;                                           // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DamageType;                                              // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ClientSideHitLeeway;                                     // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AllowedViewDotHitDir;                                    // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PropertyModifierDefinition
	 * Size -> 0x0010
	 */
	struct FPropertyModifierDefinition
	{
	public:
		class FName                                                PropertyName;                                            // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNeedsManualReplication;                                 // 0x0008(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWorldBuffPropertyLocation                                 BuffPropertyLocation;                                    // 0x0009(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XGVF[0x2];                                   // 0x000A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ModifierValue;                                           // 0x000C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.WorldBuffDefinition
	 * Size -> 0x00F0
	 */
	struct FWorldBuffDefinition
	{
	public:
		class FName                                                WorldBuffIdentifier;                                     // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                WorldBuffDisplayTitle;                                   // 0x0008(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FLinearColor                                        WorldBuffDisplayTitleColor;                              // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                WorldBuffDisplayText;                                    // 0x0030(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		class UTexture2D*                                          WorldBuffDisplayIcon;                                    // 0x0048(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                WorldBuffServerNotificationText;                         // 0x0050(0x0018) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FLinearColor                                        WorldBuffServerNotificationTextColor;                    // 0x0068(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          WorldBuffServerNotificationIcon;                         // 0x0078(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          WorldBuffServerNotificationSound;                        // 0x0080(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StackLimit;                                              // 0x0088(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WorldBuffDuration;                                       // 0x008C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        WorldBuffsToRemoveOnStart;                               // 0x0090(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class FName>                                        WorldBuffsToPreventWhileActive;                          // 0x00A0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      TimeFromEndToAllowReplacement;                           // 0x00B0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                WorldBuffSetName;                                        // 0x00B4(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWorldBuffDifficultyType                                   BuffDifficulty;                                          // 0x00BC(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KFL2[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DifficultyDisplayText;                                   // 0x00C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRefreshTimerAtFullStacks : 1;                           // 0x00D0(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStacksExtendDuration : 1;                               // 0x00D0(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStacksIncreaseEffect : 1;                               // 0x00D0(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoveAllOtherWorldBuffsOnStart : 1;                    // 0x00D0(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventAddingAnyOtherWorldBuffs : 1;                    // 0x00D0(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceDisableServerNotifications : 1;                    // 0x00D0(0x0001) BIT_FIELD Edit, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MIAN[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              WorldBuffCustomImplementation;                           // 0x00D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPropertyModifierDefinition>                 PropertyModifiers;                                       // 0x00E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.FoliageReskinDefinition
	 * Size -> 0x0030
	 */
	struct FFoliageReskinDefinition
	{
	public:
		class FString                                              ForFoliage;                                              // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          NewFoliageMaterials;                                     // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          OverrideDestructionMaterials;                            // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.SublevelOverrideDefinition
	 * Size -> 0x0010
	 */
	struct FSublevelOverrideDefinition
	{
	public:
		class FName                                                SublevelPackageToReplace;                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SublevelPackageToActivate;                               // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.LevelStaticMeshReskinDefinition
	 * Size -> 0x0018
	 */
	struct FLevelStaticMeshReskinDefinition
	{
	public:
		class FString                                              MaterialNameToReplace;                                   // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  NewMaterial;                                             // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.SublevelOverrideGroup
	 * Size -> 0x0038
	 */
	struct FSublevelOverrideGroup
	{
	public:
		class FString                                              ForMapName;                                              // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSublevelOverrides;                                   // 0x0010(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DNK5[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSublevelOverrideDefinition>                 SublevelOverrides;                                       // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<struct FLevelStaticMeshReskinDefinition>            StaticMeshReskins;                                       // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.MissionMetaData
	 * Size -> 0x0010
	 */
	struct FMissionMetaData
	{
	public:
		class FName                                                MissionTag;                                              // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              MissionMetaDataClass;                                    // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.FakeStaticMeshSocketData
	 * Size -> 0x0070
	 */
	struct FFakeStaticMeshSocketData
	{
	public:
		class FName                                                FakeSocketName;                                          // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_32Z3[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RelativeTransform;                                       // 0x0010(0x0060) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.AdditionalStaticMeshSockets
	 * Size -> 0x0040
	 */
	struct FAdditionalStaticMeshSockets
	{
	public:
		unsigned char                                              ForStaticMesh[0x30];                                     // 0x0000(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<struct FFakeStaticMeshSocketData>                   AdditionalRelativeSockets;                               // 0x0030(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ActiveEventGlobalStatusAdjustments
	 * Size -> 0x0068
	 */
	struct FActiveEventGlobalStatusAdjustments
	{
	public:
		class FName                                                ActiveEvent;                                             // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GlobalStatusAdjustmentRateMultipliersPositive[0xC];      // 0x0008(0x0030) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GlobalStatusAdjustmentRateMultipliersNegative[0xC];      // 0x0038(0x0030) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PlayerStatusStateCharacterSound
	 * Size -> 0x0010
	 */
	struct FPlayerStatusStateCharacterSound
	{
	public:
		EPrimalCharacterStatusState                                StateType;                                               // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MN8Y[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          SoundToPlay;                                             // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ShooterCharacterPostUpdateTickFunction
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FShooterCharacterPostUpdateTickFunction : public FTickFunction
	{
	public:
		unsigned char                                              UnknownData_XOUT[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ExplorerNoteLocationsPair
	 * Size -> 0x0018
	 */
	struct FExplorerNoteLocationsPair
	{
	public:
		int32_t                                                    ExplorerNoteIndex;                                       // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9P23[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CheatString;                                             // 0x0008(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.MinimapMark
	 * Size -> 0x0078
	 */
	struct FUniqueNetId
	{
		char jkdaskjd[0x18];
	};

	struct FMinimapMark
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CustomTag;                                               // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0018(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ID;                                                      // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XLLI[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          MarkIcon;                                                // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                MapName;                                                 // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsShowing : 1;                                          // 0x0058(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LTDB[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        IconColor;                                               // 0x005C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsShowingText : 1;                                      // 0x006C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NTKF[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CharacterID;                                             // 0x0070(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CharacterIsPlayer : 1;                                   // 0x0074(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NW8L[0x3];                                   // 0x0075(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.DinoMapMarkerInfo
	 * Size -> 0x0038
	 */
	struct FDinoMapMarkerInfo
	{
	public:
		class APrimalDinoCharacter*                                Dino;                                                    // 0x0000(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                MarkerComponent;                                         // 0x0008(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             DinoLocation;                                            // 0x0010(0x0018) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PreviousLatitudeNumber;                                  // 0x0028(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PreviousLongitudeNumber;                                 // 0x002C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              MarkerColor;                                             // 0x0030(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CT9K[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ServerChatMessage
	 * Size -> 0x0050
	 */
	struct FServerChatMessage
	{
	public:
		unsigned char                                              UnknownData_UXF9[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MessageText;                                             // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        MessageColor;                                            // 0x0018(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsBold;                                                 // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D18X[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DisplayScale;                                            // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DisplayTime;                                             // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WLWD[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          MessageIcon;                                             // 0x0038(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          SoundToPlay;                                             // 0x0040(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MessageTypeID;                                           // 0x0048(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R9TS[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.TeamPingDataForClient
	 * Size -> 0x0080
	 */
	struct FTeamPingDataForClient
	{
	public:
		class FString                                              PingText;                                                // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AActor*                                              ToActor;                                                 // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ByPlayerID;                                              // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_69QA[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CreationTime;                                            // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETeamPingType                                              PingType;                                                // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WL8J[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          PingIcon;                                                // 0x0048(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        PingColor;                                               // 0x0050(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PingDuration;                                            // 0x0060(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_US4C[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayerName;                                              // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundCue*                                           SoundOnPing;                                             // 0x0078(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.MissionWaypointInfo
	 * Size -> 0x0038
	 */
	struct FMissionWaypointInfo
	{
	public:
		bool                                                       bWaypointActive;                                         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BYSQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             WaypointDestination;                                     // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              WaypointTitle;                                           // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                WaypointID;                                              // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.StructHighlightInfo
	 * Size -> 0x0018
	 */
	struct FStructHighlightInfo
	{
	public:
		TWeakObjectPtr<class APrimalStructure>                     Structure;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        HighlightColor;                                          // 0x0008(0x0010) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.UserCosmeticInfo
	 * Size -> 0x0010
	 */
	struct FUserCosmeticInfo
	{
	public:
		class FString                                              TribeFlagFile;                                           // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.TamingDinoInfo
	 * Size -> 0x0068
	 */
	struct FTamingDinoInfo
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TameAffinityPercent;                                     // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HealthPercent;                                           // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HealthCurrent;                                           // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HealthMax;                                               // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HungerPercent;                                           // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HungerCurrent;                                           // 0x0024(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HungerMax;                                               // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TorpidityPercent;                                        // 0x002C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TameEffectivenessPercent;                                // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TameEffectivenessLvlModifier;                            // 0x0034(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0038(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsConcious;                                             // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseGender;                                              // 0x0051(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFemale;                                               // 0x0052(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTamed;                                                // 0x0053(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   DataID1;                                                 // 0x0054(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   DataID2;                                                 // 0x0058(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFavorited;                                            // 0x005C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5Q68[0x3];                                   // 0x005D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DinoEntry;                                               // 0x0060(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.TamingWaypointInfo
	 * Size -> 0x00B0
	 */
	struct FTamingWaypointInfo
	{
	public:
		bool                                                       bWaypointActive;                                         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MI2Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             WaypointDestination;                                     // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              WaypointTitle;                                           // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WaypointID;                                              // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WZA0[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Icon;                                                    // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTamingDinoInfo                                     DinoInfo;                                                // 0x0040(0x0068) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
		float                                                      ProgressBarPercent;                                      // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTamed;                                                // 0x00AC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q0GJ[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.TrackedActorWaypointInfo
	 * Size -> 0x0148
	 */
	struct FTrackedActorWaypointInfo
	{
	public:
		bool                                                       bWaypointActive;                                         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F40E[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             WaypointDestination;                                     // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              WaypointTitle;                                           // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WaypointID;                                              // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NO5Q[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          Icon;                                                    // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCustomTrackedActorInfo                             DinoInfo;                                                // 0x0040(0x00E0) Edit, BlueprintVisible, DisableEditOnTemplate, NativeAccessSpecifierPublic
		float                                                      ProgressBarPercent;                                      // 0x0120(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTamed;                                                // 0x0124(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XM02[0x3];                                   // 0x0125(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TamedAtTime;                                             // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LastPOILocation;                                         // 0x0130(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.OverrideDamageHarvestingEntry
	 * Size -> 0x0048
	 */
	struct FOverrideDamageHarvestingEntry
	{
	public:
		TArray<class UClass*>                                      ForHarvestingComponents;                                 // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic
		struct FDamageHarvestingEntry                              HarvestEntryOverride;                                    // 0x0010(0x0028) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FHarvestResourceEntry>                       HarvestResourceEntriesOverride;                          // 0x0038(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.TargetClassDamageScaler
	 * Size -> 0x0010
	 */
	struct FTargetClassDamageScaler
	{
	public:
		class UClass*                                              TargetClass;                                             // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageScale;                                             // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0OYH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.AudioComponentWrapper
	 * Size -> 0x0048
	 */
	struct FAudioComponentWrapper
	{
	public:
		class UAudioComponent*                                     AudioComponent;                                          // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MWS1[0x40];                                  // 0x0008(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.AssetPathObjectPair
	 * Size -> 0x0028
	 */
	struct FAssetPathObjectPair
	{
	public:
		struct FSoftObjectPath                                     AssetPath;                                               // 0x0000(0x0020) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             AssetObject;                                             // 0x0020(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.DepthOfFieldSetting
	 * Size -> 0x0020
	 */
	struct FDepthOfFieldSetting
	{
	public:
		float                                                      FocalDistance;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FocalRegion;                                             // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NearTransitionRegion;                                    // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FarTransitionRegion;                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxBokehSize;                                            // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Occlusion;                                               // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseGaussianBlur;                                         // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LH52[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ActiveEventMainMenuOverride
	 * Size -> 0x0020
	 */
	struct FActiveEventMainMenuOverride
	{
	public:
		class FName                                                ActiveEvent;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          MainMenuBG;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MusicFilename;                                           // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ShooterForceFeedback
	 * Size -> 0x0010
	 */
	struct FShooterForceFeedback
	{
	public:
		class UForceFeedbackEffect*                                FFE;                                                     // 0x0000(0x0008) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Priority;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       playWhenPaused;                                          // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHapticEffectType                                          Type;                                                    // 0x000D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9HWT[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.HUDNotification
	 * Size -> 0x0060
	 */
	struct FHUDNotification
	{
	public:
		class FString                                              NotificationString;                                      // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  NotificationMaterial;                                    // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          NotificationTexture;                                     // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RemainingDisplayTime;                                    // 0x0020(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              NotificationColor;                                       // 0x0024(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NotificationScale;                                       // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LastYPos;                                                // 0x002C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     StartedTime;                                             // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MessageTypeID;                                           // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemMsgType;                                             // 0x003C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ItemClass;                                               // 0x0040(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemName;                                                // 0x0048(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemQuantity;                                            // 0x0058(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemQuantityFloat;                                       // 0x005C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.CustomWheelSettings
	 * Size -> 0x0048
	 */
	struct FCustomWheelSettings
	{
	public:
		class FString                                              CenterText;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        CenterTextColorOverride;                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           CenterImageSize;                                         // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          CenterImage;                                             // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinNumDivisions;                                         // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InnerDistance;                                           // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OuterDistance;                                           // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCenterTextColorOverride : 1;                         // 0x0044(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BPRO[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.HintReplacementKeysForKeyboardControls
	 * Size -> 0x0020
	 */
	struct FHintReplacementKeysForKeyboardControls
	{
	public:
		class FString                                              KeyboardControl;                                         // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      ReplacementGamepadControls;                              // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.SpawnPointInfo
	 * Size -> 0x0050
	 */
	struct FSpawnPointInfo
	{
	public:
		int32_t                                                    SpawnPointID;                                            // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VX37[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              BedName;                                                 // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ABiomeZoneVolume*                                    SpawnPointVolume;                                        // 0x0018(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              SpawnPointActorClass;                                    // 0x0020(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AtLocation;                                              // 0x0028(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     NextAllowedUseTime;                                      // 0x0040(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowedUse;                                             // 0x0048(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OE1J[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.AvoidanceArea
	 * Size -> 0x00C0
	 */
	struct FAvoidanceArea
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0018(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          Transform;                                               // 0x0030(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             BoxExtents;                                              // 0x0090(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SphereRadius;                                            // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NY7A[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CreationTime;                                            // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlockBox : 1;                                           // 0x00B8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBlockSphere : 1;                                        // 0x00B8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDynamic : 1;                                          // 0x00B8(0x0001) BIT_FIELD Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U5FU[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.BoidBehavior
	 * Size -> 0x0040
	 */
	struct FBoidBehavior
	{
	public:
		TArray<struct FAvoidanceArea>                              AvoidanceAreas;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      DesiredSeparation;                                       // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NeighborDist;                                            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SeparationMultiplier;                                    // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AlignmentMultiplier;                                     // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CohesionMultiplier;                                      // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AvoidanceMultiplier;                                     // 0x0024(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetingMultiplier;                                     // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDistanceToLeaders;                                    // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSpeedMultiplier;                                      // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxForceMultiplier;                                      // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseBoundsCulling;                                       // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_00SU[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BoundsCullingMultiplier;                                 // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.FlockPersistentData
	 * Size -> 0x0038
	 */
	struct FFlockPersistentData
	{
	public:
		float                                                      AvoidanceAreaDecayRate;                                  // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AvoidanceTraceInterval;                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AvoidanceTraceInferredBoxSize;                           // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AvoidanceTraceInferredSphereRadius;                      // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AvoidanceTraceForwardDistance;                           // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AvoidanceTraceDownDistance;                              // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     LastAvoidanceTraceTime;                                  // 0x0018(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNumAvoidanceAreas;                                    // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U7BB[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAvoidanceArea>                              DynamicAvoidanceAreas;                                   // 0x0028(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.Boid
	 * Size -> 0x0098
	 */
	struct FBoid
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0018(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x0030(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Acceleration;                                            // 0x0048(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSpeed;                                                // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxForce;                                                // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurnRate;                                                // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTargeting : 1;                                       // 0x006C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasReachedTarget : 1;                                   // 0x006C(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAlive : 1;                                            // 0x006C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W22R[0x3];                                   // 0x006D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SpiralTime;                                              // 0x0070(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VTYZ[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TargetLocation;                                          // 0x0078(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBoidType                                                  Type;                                                    // 0x0090(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YNEE[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ProjectileArc
	 * Size -> 0x0058
	 */
	struct FProjectileArc
	{
	public:
		struct FVector                                             StartLocation;                                           // 0x0000(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             StartDirection;                                          // 0x0018(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LaunchSpeed;                                             // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4J8M[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            WorldRotation;                                           // 0x0038(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bApplyRotationToGravityDirection;                        // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L2RI[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OverrideGravityZ;                                        // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ClimbingAnims
	 * Size -> 0x0400
	 */
	struct FClimbingAnims
	{
	public:
		struct FWeaponAnim                                         LeftHandAnchored[0x20];                                  // 0x0000(0x0200) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FWeaponAnim                                         RightHandAnchored[0x20];                                 // 0x0200(0x0200) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.BiomeZoneImpactEffect
	 * Size -> 0x0080
	 */
	struct FBiomeZoneImpactEffect
	{
	public:
		class UClass*                                              SpawnActors[0x10];                                       // 0x0000(0x0080) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.SkyBoxLoadedStatus
	 * Size -> 0x0020
	 */
	struct FSkyBoxLoadedStatus
	{
	public:
		unsigned char                                              UnknownData_JBVL[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          LoadedTextureResources[0x3];                             // 0x0008(0x0018) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalPlayerCharacterConfigStructReplicated
	 * Size -> 0x0110
	 */
	struct FPrimalPlayerCharacterConfigStructReplicated
	{
	public:
		bool                                                       bIsFemale : 1;                                           // 0x0000(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_03KQ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        BodyColors[0x4];                                         // 0x0004(0x0040) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ENKW[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayerCharacterName;                                     // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              FacialHairIndex;                                         // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              HeadHairIndex;                                           // 0x0059(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              EyebrowIndex;                                            // 0x005A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8QJ3[0x1];                                   // 0x005B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      PercentOfFullHeadHairGrowth;                             // 0x005C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentOfFullFacialHairGrowth;                           // 0x0060(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RawBoneModifiers[0x1A];                                  // 0x0064(0x0068) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayerSpawnRegionIndex;                                  // 0x00CC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              OverrideHeadHairColor[0x2];                              // 0x00D0(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              OverrideFacialHairColor[0x2];                            // 0x00D2(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DynamicMaterialBytes[0x32];                              // 0x00D4(0x0032) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TQ1Z[0x2];                                   // 0x0106(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PlayerVoiceCollectionIndex;                              // 0x0108(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsingCustomPlayerVoiceCollection : 1;                   // 0x010C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HRIQ[0x3];                                   // 0x010D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.SOTFNotificationInfo
	 * Size -> 0x0078
	 */
	struct FSOTFNotificationInfo
	{
	public:
		bool                                                       bIsActive;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1V24[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      PlayerNames;                                             // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              PlayerDeathReason;                                       // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TribeName;                                               // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeamID;                                                  // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J2VI[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CustomDrawString;                                        // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     StartDisplayTime;                                        // 0x0050(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DisplayInterval;                                         // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4JQ2[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPrimalPlayerCharacterConfigStructReplicated> DisplayData;                                             // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bLastPlayer;                                             // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESTOFNotificationType                                      Type;                                                    // 0x0071(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3N5R[0x6];                                   // 0x0072(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ScrollingTextInfo
	 * Size -> 0x0010
	 */
	struct FScrollingTextInfo
	{
	public:
		class UTextRenderComponent*                                TextComponent;                                           // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Time;                                                    // 0x0008(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActive;                                                 // 0x000C(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GNST[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PlayerPreviewImage
	 * Size -> 0x0038
	 */
	struct FPlayerPreviewImage
	{
	public:
		unsigned char                                              UnknownData_P1SO[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMeshComponent*                                PreviewMesh;                                             // 0x0018(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextRenderComponent*                                PlayerNameText;                                          // 0x0020(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextRenderComponent*                                TribeComponent;                                          // 0x0028(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextRenderComponent*                                DeathInfo;                                               // 0x0030(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.BannerTextInfo
	 * Size -> 0x0018
	 */
	struct FBannerTextInfo
	{
	public:
		class UTextRenderComponent*                                TextComponent;                                           // 0x0000(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaticMeshComponent*                                BackgroundComponent;                                     // 0x0008(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bActive;                                                 // 0x0010(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CHGJ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.VehicleEngineDatum
	 * Size -> 0x0014
	 */
	struct FVehicleEngineDatum
	{
	public:
		float                                                      FadeInRPMStart;                                          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeInRPMEnd;                                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutRPMStart;                                         // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FadeOutRPMEnd;                                           // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxPitchMultiplier;                                      // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.SupplyCrateSpawnEntry
	 * Size -> 0x0068
	 */
	struct FSupplyCrateSpawnEntry
	{
	public:
		float                                                      EntryWeight;                                             // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ND7V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              CrateTemplate[0x30];                                     // 0x0008(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              CrateEnemySpawnEntries[0x30];                            // 0x0038(0x0030) UNKNOWN PROPERTY: SoftClassProperty
	};

	/**
	 * ScriptStruct ShooterGame.SupplyCrateSpawnPointEntry
	 * Size -> 0x0070
	 */
	struct FSupplyCrateSpawnPointEntry
	{
	public:
		class AActor*                                              LinkedSpawnPoint;                                        // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ANPCZoneManager*                                     LinkedEnemySpawnZoneManager;                             // 0x0008(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LinkedEnemySpawnZoneManagerTag;                          // 0x0010(0x0008) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTraceGroundPoint : 1;                                   // 0x0018(0x0001) BIT_FIELD Edit, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2TMH[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TraceGroundPointDownOffset;                              // 0x0020(0x0018) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TraceGroundPointUpOffset;                                // 0x0038(0x0018) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnPointWeight;                                        // 0x0050(0x0004) Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6FW2[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FSupplyCrateSpawnEntry>                      OverrideSupplyCrateEntries;                              // 0x0058(0x0010) Edit, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D1MA[0x8];                                   // 0x0068(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalTriggerEffect
	 * Size -> 0x0018
	 */
	struct FPrimalTriggerEffect
	{
	public:
		ETriggerEffectType                                         Type;                                                    // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9B75[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    position;                                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Strength;                                                // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EndPosition;                                             // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EndStrength;                                             // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Frequency;                                               // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.TriggerEffectLibraryEntry
	 * Size -> 0x0060
	 */
	struct FTriggerEffectLibraryEntry
	{
	public:
		unsigned char                                              WeaponClass[0x30];                                       // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		struct FPrimalTriggerEffect                                HasAmmoEffect;                                           // 0x0030(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FPrimalTriggerEffect                                EmptyEffect;                                             // 0x0048(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	struct FShooterSessionData
	{
		int32_t EntryIndex; // 0x0000 (0x0004)
		unsigned char Padding0x0004[0x4]; // 0x0004 (0x0004) Padding/undefined bytes
		FString GameName; // 0x0008 (0x0010)
		FString MapName;  // 0x0018 (0x0010)
		FString OwnerName; // 0x0028 (0x0010)
		FString OwnerId; // 0x0038 (0x0010)
		FString PlatformOwnerId; // 0x0048 (0x0010)
		FString DayTimeStr; // 0x0058 (0x0010)
		FString ClusterId; // 0x0068 (0x0010)
		int32_t NumPlayers; // 0x0078 (0x0004)
		int32_t MaxNumPlayers; // 0x007C (0x0004)
		int32_t Ping; // 0x0080 (0x0004)
		unsigned char Padding0x0084[0x4]; // 0x0084 (0x0004) Padding/undefined bytes
		FString HostAddrWithPort; // 0x0088 (0x0010)
		FString HostAddr; // 0x0098 (0x0010)
		TArray<int64_t> ModIds; // 0x00A8 (0x0010)
		bool bIsOfficial; // 0x00B8 (0x0001)
		bool sotfMatchStarted; // 0x00B9 (0x0001)
		bool bHasPassword; // 0x00BA (0x0001)
		bool bPVEServer; // 0x00BB (0x0001)
		bool bUsingBattleEye; // 0x00BC (0x0001)
		bool bAllowDownloadCharacters; // 0x00BD (0x0001)
		bool bAllowDownloadItems; // 0x00BE (0x0001)
		bool bIsLegacyServer; // 0x00BF (0x0001)
		bool bLastPlayedSession; // 0x00C0 (0x0001)
		unsigned char Padding0x00C1[0x3]; // 0x00C1 (0x0003) Padding/undefined bytes
		int32_t QueryPort; // 0x00C4 (0x0004)
		int32_t LobbyReportedBuildID; // 0x00C8 (0x0004)
		int32_t BuildId; // 0x00CC (0x0004)
		FString SessionId; // 0x00D0 (0x0010)
		int64_t TotalConversionID; // 0x00E0 (0x0008)
		FGuid Identifier; // 0x00E8 (0x0010)
	};

	/**
	 * ScriptStruct ShooterGame.CheatMenuCheatItem
	 * Size -> 0x0040
	 */
	struct FCheatMenuCheatItem
	{
	public:
		unsigned char                                              Item[0x30];                                              // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		int32_t                                                    Quantity;                                                // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Quality;                                                 // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Blueprint;                                               // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_18CY[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.CheatMenuCharacterPresetItems
	 * Size -> 0x0010
	 */
	struct FCheatMenuCharacterPresetItems
	{
	public:
		TArray<struct FCheatMenuCheatItem>                         CharacterItems;                                          // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.MapDescription
	 * Size -> 0x0020
	 */
	struct FMapDescription
	{
	public:
		class UTexture2D*                                          MapImage;                                                // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              MapDescription;                                          // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinAscensionLevelRequired;                               // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GRYO[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.DifficultyValues
	 * Size -> 0x0018
	 */
	struct FDifficultyValues
	{
	public:
		class FName                                                DataListValueName;                                       // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        ValuesPerDifficulty;                                     // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.CarouselEntryData
	 * Size -> 0x0070
	 */
	struct FCarouselEntryData
	{
	public:
		class FString                                              ImagePath;                                               // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EntryWidgetTemplate;                                     // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PipWidgetTemplate;                                       // 0x0020(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EntryData;                                               // 0x0030(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PipData;                                                 // 0x0040(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OnClickedAction;                                         // 0x0050(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OnFocusAction;                                           // 0x0060(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.NewOptionsItem
	 * Size -> 0x0028
	 */
	struct FNewOptionsItem
	{
	public:
		class FString                                              DisplayString;                                           // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   locKey;                                                  // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                settingName;                                             // 0x0014(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                buttonFunction;                                          // 0x001C(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       negate;                                                  // 0x0024(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       disabledForNow;                                          // 0x0025(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AQX2[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.OptionsSet
	 * Size -> 0x0028
	 */
	struct FOptionsSet
	{
	public:
		class FString                                              tabName;                                                 // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   tabLocKey;                                               // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MPOnly;                                                  // 0x0014(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LLP1[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FNewOptionsItem>                             optionsItems;                                            // 0x0018(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.KeyBindingItem
	 * Size -> 0x0030
	 */
	struct FKeyBindingItem
	{
	public:
		bool                                                       bIsAxisMapping : 1;                                      // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C78H[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                WidgetName;                                              // 0x0004(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V1QH[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ActionName;                                              // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZNW4[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.BoneModifierSlider
	 * Size -> 0x0030
	 */
	struct FBoneModifierSlider
	{
	public:
		class FName                                                SliderWidgetName;                                        // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FBoneModifierRange>                          BoneModifierRanges;                                      // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		EBoneModifierType                                          BoneModifierType;                                        // 0x0018(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PWF3[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DefaultValueMale;                                        // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultValueFemale;                                      // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CHT5[0xC];                                   // 0x0024(0x000C) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.DynamicMaterialSlider
	 * Size -> 0x0018
	 */
	struct FDynamicMaterialSlider
	{
	public:
		class FName                                                SliderWidgetName;                                        // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPlayerDynamicMaterialType                                 PlayerDynamicMaterialSliderType;                         // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MSJK[0xF];                                   // 0x0009(0x000F) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.CameraLocationSetting
	 * Size -> 0x0040
	 */
	struct FCameraLocationSetting
	{
	public:
		class FName                                                SocketName;                                              // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LocationOffset;                                          // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Zoom;                                                    // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DE2G[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            Rotation;                                                // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.SavedVoiceCollectionActualIndex
	 * Size -> 0x0028
	 */
	struct FSavedVoiceCollectionActualIndex
	{
	public:
		struct FPlayerConfigVoiceCollectionInfo                    GameDataStruct;                                          // 0x0000(0x0020) BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    ActualArrayIndex;                                        // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsCustom : 1;                                           // 0x0024(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YSZ1[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.NamePair
	 * Size -> 0x0010
	 */
	struct FNamePair
	{
	public:
		class FName                                                FNameA;                                                  // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                FNameB;                                                  // 0x0008(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.CustomPreviewMeshInfo
	 * Size -> 0x0A68
	 */
	struct FCustomPreviewMeshInfo
	{
	public:
		bool                                                       bIsEnabled : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsMaleMesh : 1;                                         // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFemaleMesh : 1;                                       // 0x0000(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RL67[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              OverwrittenMesh[0x30];                                   // 0x0008(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              OverwrittenAnimbp[0x30];                                 // 0x0038(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		struct FRotator                                            OverwrittenMeshRotation;                                 // 0x0068(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FBoneModifierSlider>                         OverwrittenBoneModifiersSliders;                         // 0x0080(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FBoneModifierRangeArray                             OverwrittenCharacterBoneModifierRanges[0x1A];            // 0x0090(0x04E0) Edit, NativeAccessSpecifierPublic
		struct FBoneModifierRangeArray                             OverwrittenExtraCharacterBoneModifierMax[0x1A];          // 0x0570(0x04E0) Edit, NativeAccessSpecifierPublic
		TArray<struct FNamePair>                                   OverwrittenReplacedDynamicMaterialNames;                 // 0x0A50(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              MeshCompRef;                                             // 0x0A60(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.VolumetricDispatchDetailLevel
	 * Size -> 0x0040
	 */
	struct FVolumetricDispatchDetailLevel
	{
	public:
		int32_t                                                    ListUpdateFrequency;                                     // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxFoliageDispatches;                                    // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxFluidDispatches;                                      // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxFoliageCharacterInteractions;                         // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxFluidCharacterInteractions;                           // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNonVolumetricInteractions;                            // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxNonVolumetricInteractionDistance;                     // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Pawn_WaterMaxDistance;                                   // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Pawn_WaterMinComplexScreenSize;                          // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Pawn_FoliageMaxDistance;                                 // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Pawn_FoliageMinComplexScreenSize;                        // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Effects_MaxDistance;                                     // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OffscreenMultiplier;                                     // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IncludePriorityGreaterThan;                              // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTriggerFluidEvents;                                     // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5PNZ[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Bubbles_MaxDistance;                                     // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ComponentVolumetricDispatch
	 * Size -> 0x0008
	 */
	struct FComponentVolumetricDispatch
	{
	public:
		TWeakObjectPtr<class UPrimalWindSourceComponent>           InteractionComponent;                                    // 0x0000(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.VolumetricDispatch
	 * Size -> 0x0078
	 */
	struct FVolumetricDispatch
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x0018) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0018(0x0018) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ExtraCapsuleLocation;                                    // 0x0030(0x0018) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Scale;                                                   // 0x0048(0x0018) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Plasticity;                                              // 0x0060(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaterBend;                                               // 0x0064(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      InteractionStrength;                                     // 0x0068(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumEvaluatedBySolver;                                    // 0x006C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxAllowedFrameDelayBuffer;                              // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FramesDelayed;                                           // 0x0074(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.VRBattleWaveUnit
	 * Size -> 0x0070
	 */
	struct FVRBattleWaveUnit
	{
	public:
		unsigned char                                              DinoType[0x30];                                          // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		class FString                                              DinoBlueprintPath;                                       // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DinoLevel;                                               // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4I2B[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             SpawnOffset;                                             // 0x0048(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<EPrimalCharacterStatusValue>                        PrioritizeStats;                                         // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.GridIndex
	 * Size -> 0x0008
	 */
	struct FGridIndex
	{
	public:
		int32_t                                                    X;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Y;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalWorldModifierList
	 * Size -> 0x0040
	 */
	struct FPrimalWorldModifierList
	{
	public:
		bool                                                       bUseActiveEvent;                                         // 0x0000(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_J3LT[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        ActiveEventNames;                                        // 0x0008(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bUseINIStringOptionValue;                                // 0x0018(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IRBD[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      INIStringOptionValues;                                   // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		bool                                                       bHasOverridePriority;                                    // 0x0030(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7F4I[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              WorldModifierClass;                                      // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.IntArray
	 * Size -> 0x0010
	 */
	struct FIntArray
	{
	public:
		TArray<int32_t>                                            Array;                                                   // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.StringArray
	 * Size -> 0x0010
	 */
	struct FStringArray
	{
	public:
		TArray<class FString>                                      Array;                                                   // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PlayerAllClustersInventory
	 * Size -> 0x0038
	 */
	struct FPlayerAllClustersInventory
	{
	public:
		unsigned char                                              UnknownData_3XW3[0x38];                                  // 0x0000(0x0038) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.AnimNode_ApplyBoneMods
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_ApplyBoneMods : public FAnimNode_SkeletalControlBase
	{
	public:
		unsigned char                                              UnknownData_H25X[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.AnimNode_FemaleBoneMods
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_FemaleBoneMods : public FAnimNode_SkeletalControlBase
	{
	public:
		unsigned char                                              UnknownData_XNWX[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.AnimNode_FixVirtualBones
	 * Size -> 0x0028 (FullSize[0x00F0] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_FixVirtualBones : public FAnimNode_SkeletalControlBase
	{
	public:
		bool                                                       bIgnoreOnDedicatedServer;                                // 0x00C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowUpdatingOutsideOfGameWorld;                        // 0x00C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZT38[0x6];                                   // 0x00CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBoneReference>                              VirtualBonesToFix;                                       // 0x00D0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FBoneReference>                              VirtualBoneTargets;                                      // 0x00E0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.AnimNode_GroundBones
	 * Size -> 0x0088 (FullSize[0x0150] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_GroundBones : public FAnimNode_SkeletalControlBase
	{
	public:
		bool                                                       bDebug : 1;                                              // 0x00C8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P0PJ[0x87];                                  // 0x00C9(0x0087) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.AnimNode_ModifyBones
	 * Size -> 0x0008 (FullSize[0x00D0] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_ModifyBones : public FAnimNode_SkeletalControlBase
	{
	public:
		unsigned char                                              UnknownData_0BQ9[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.AnimNode_MultiFabrik
	 * Size -> 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_MultiFabrik : public FAnimNode_SkeletalControlBase
	{
	public:
		float                                                      Precision;                                               // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableDebugDraw;                                        // 0x00CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E19W[0x3];                                   // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                NodeName;                                                // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
	};

	/**
	 * ScriptStruct ShooterGame.AnimNode_MultiFabrik_Dinos
	 * Size -> 0x0030 (FullSize[0x00F8] - InheritedSize[0x00C8])
	 */
	struct FAnimNode_MultiFabrik_Dinos : public FAnimNode_SkeletalControlBase
	{
	public:
		float                                                      Precision;                                               // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableDebugDraw;                                        // 0x00CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_957N[0x3];                                   // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RootOffset;                                              // 0x00D0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_IN5C[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRotator                                            RootRotationOffset;                                      // 0x00D8(0x0018) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bInitOffset;                                             // 0x00F0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_654E[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.TransactionLogData
	 * Size -> 0x0018
	 */
	struct FTransactionLogData
	{
	public:
		unsigned char                                              UnknownData_O05J[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.BattleTribeData
	 * Size -> 0x0018
	 */
	struct FBattleTribeData
	{
	public:
		class FString                                              TribeName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TribeID;                                                 // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5RMR[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.BattlePlayerData
	 * Size -> 0x0020
	 */
	struct FBattlePlayerData
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bConnected;                                              // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlive;                                                  // 0x0011(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X0QN[0x2];                                   // 0x0012(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TribeID;                                                 // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayerID;                                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_52T7[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PlayerDeathNotification
	 * Size -> 0x0088
	 */
	struct FPlayerDeathNotification
	{
	public:
		class FString                                              PlayerDeathStringEnemy;                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerDeathStringAlly;                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerDeathStringYou;                                    // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeathReason;                                             // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      DeadPlayerNames;                                         // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bIsTribeDeath;                                           // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8HYV[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DeathTribeName;                                          // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TargetingTeam;                                           // 0x0068(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VNO3[0x4];                                   // 0x006C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    LinkedPlayerID;                                          // 0x0070(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FPrimalPlayerCharacterConfigStructReplicated> PlayersData;                                             // 0x0078(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.BiomeZoneVolumeEffect
	 * Size -> 0x0048
	 */
	struct FBiomeZoneVolumeEffect
	{
	public:
		EBiomeZone                                                 BiomeZone;                                               // 0x0000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RNWC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UParticleSystem*                                     ParticleSystem;                                          // 0x0008(0x0008) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDecalData                                          DecalData;                                               // 0x0010(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bIsImpactEffect : 1;                                     // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsNonImpactEffect : 1;                                  // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsUnderwaterEffect : 1;                                 // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDecalUniformSize : 1;                                   // 0x0030(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F7WO[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Weight;                                                  // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinSpawnDistance;                                        // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSpawnDistance;                                        // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScaleAtMinDistance;                                      // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ScaleAtMaxDistance;                                      // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ShooterWeaponDBEntry
	 * Size -> 0x00B0
	 */
	struct FShooterWeaponDBEntry
	{
	public:
		class UClass*                                              WeaponAmmoItemTemplate;                                  // 0x0000(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WeaponConfig_AmmoPerClip;                                // 0x0008(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WeaponConfig_bShowAmmoInClipAsPercent : 1;               // 0x000C(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WeaponConfig_bUsesAmmo : 1;                              // 0x000C(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       WeaponConfig_bFullReloadFromSingleItem : 1;              // 0x000C(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanBeUsedAsEquipment : 1;                               // 0x000C(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceAllowMountedWeaponry : 1;                          // 0x000C(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowUseWhileRidingDino : 1;                            // 0x000C(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForcePreventUseWhileRidingDino : 1;                     // 0x000C(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyUseOnSeatingStructure : 1;                          // 0x000C(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowUseOnSeatingStructure : 1;                         // 0x000D(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnlyAllowUseWhenRidingDino : 1;                         // 0x000D(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseBPCanEquip : 1;                                      // 0x000D(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDontActuallyConsumeItemAmmo : 1;                        // 0x000D(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventEquippingUnderwater : 1;                         // 0x000D(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G3YH[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MeleeAttackUsableHarvestDamageMultiplier;                // 0x0010(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NRB7[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              MeleeAttackUsableHarvestDamageType;                      // 0x0018(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              MeleeDamageType;                                         // 0x0020(0x0008) Edit, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ItemDurabilityToConsumePerMeleeHit;                      // 0x0028(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MeleeDamageAmount;                                       // 0x002C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ProjectileClass[0x30];                                   // 0x0030(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              IsChildClassOf[0x50];                                    // 0x0060(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct ShooterGame.PrimalDinoDBEntry
	 * Size -> 0x0078
	 */
	struct FPrimalDinoDBEntry
	{
	public:
		unsigned char                                              ParentClassTree[0x50];                                   // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty
		class FName                                                DinoNameTag;                                             // 0x0050(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NPCZoneVolumeCountWeight;                                // 0x0058(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CapsuleHalfHeight;                                       // 0x005C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CapsuleWaterDepthMultiplier;                             // 0x0060(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CapsuleRadius;                                           // 0x0064(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UnnetworkedStasisMultiplier;                             // 0x0068(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MeleeDamageAmount;                                       // 0x006C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsesGender : 1;                                         // 0x0070(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanBeTorpid : 1;                                        // 0x0070(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsWaterDino : 1;                                        // 0x0070(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAmphibious : 1;                                       // 0x0070(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1KMF[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalStructureDBEntry
	 * Size -> 0x0001
	 */
	struct FPrimalStructureDBEntry
	{
	public:
		bool                                                       bTraceThruEncroachmentPoints : 1;                        // 0x0000(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnCrateOnTopOfStructures : 1;                        // 0x0000(0x0001) BIT_FIELD Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalInventoryDBEntry
	 * Size -> 0x0010
	 */
	struct FPrimalInventoryDBEntry
	{
	public:
		class FString                                              InventoryNameOverride;                                   // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalMissionDBEntry
	 * Size -> 0x0001
	 */
	struct FPrimalMissionDBEntry
	{
	public:
		bool                                                       bUsesFallbackSeeds;                                      // 0x0000(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.FloorSlopeData
	 * Size -> 0x0030
	 */
	struct FFloorSlopeData
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SlopeDir;                                                // 0x0018(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.DinoClassCount
	 * Size -> 0x001C
	 */
	struct FDinoClassCount
	{
	public:
		int32_t                                                    NumberofTamedClass;                                      // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberofTamedBabyClass;                                  // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberofTamedFemalesClass;                               // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberofWildClass;                                       // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberofWildBabyClass;                                   // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberofWildFemalesClass;                                // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberofWildLatentSpawns;                                // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PropertyThunkWrapper
	 * Size -> 0x0008
	 */
	struct FPropertyThunkWrapper
	{
	public:
		unsigned char                                              UnknownData_F7UZ[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.Int32Array
	 * Size -> 0x0010
	 */
	struct FInt32Array
	{
	public:
		TArray<int32_t>                                            Array;                                                   // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.MissionDinoPath
	 * Size -> 0x0058
	 */
	struct FMissionDinoPath
	{
	public:
		TWeakObjectPtr<class AActor>                               TargetActor;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             CurrentTarget;                                           // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LastTarget;                                              // 0x0020(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentSplineKeyTarget;                                  // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LastSplineKeyTarget;                                     // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     LastUpdateTime;                                          // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UpdateInterval;                                          // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TWeakObjectPtr<class USplineComponent>                     ForcePathSpline;                                         // 0x004C(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bReverseAtEnd : 1;                                       // 0x0054(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OR1H[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.RacePlayerData
	 * Size -> 0x0038
	 */
	struct FRacePlayerData
	{
	public:
		class AShooterPlayerController*                            Controller;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AShooterCharacter*                                   Character;                                               // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TargetCheckpoint;                                        // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WXHX[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<bool>                                               CheckpointsHit;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              CheckpointTimes;                                         // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PaintingStreamingJob
	 * Size -> 0x0040
	 */
	struct FPaintingStreamingJob
	{
	public:
		unsigned char                                              UnknownData_Y80I[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.CreateGrappleTetherData
	 * Size -> 0x0160
	 */
	struct FCreateGrappleTetherData
	{
	public:
		class FString                                              WithTag;                                                 // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGrappleAnchor                                      WithTetherStartAnchor;                                   // 0x0010(0x0050) BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGrappleAnchor                                      WithTetherEndAnchor;                                     // 0x0060(0x0050) BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGrappleAnchor                                      WithTetherVisualStartAnchor;                             // 0x00B0(0x0050) BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGrappleAnchor                                      WithTetherVisualEndAnchor;                               // 0x0100(0x0050) BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic
		class APrimalBuff_Grappled*                                WithMasterGrappleBuff;                                   // 0x0150(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WithTetherLifetime;                                      // 0x0158(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseVisualAnchor_Start : 1;                              // 0x015C(0x0001) BIT_FIELD Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseVisualAnchor_End : 1;                                // 0x015C(0x0001) BIT_FIELD Edit, BlueprintVisible, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnyoneCanControl : 1;                                   // 0x015C(0x0001) BIT_FIELD BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R9CG[0x3];                                   // 0x015D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.MissionEligibilityData
	 * Size -> 0x0028
	 */
	struct FMissionEligibilityData
	{
	public:
		class UClass*                                              MissionType;                                             // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                IneligibleReasonType;                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     LastCompletedUtcTime;                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsEligible : 1;                                         // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCompleted : 1;                                          // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnGlobalCooldown : 1;                                   // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnPerPlayerCooldown : 1;                                // 0x0018(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JJPK[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MissionMaxDurationSeconds;                               // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     MissionStartNetworkTime;                                 // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ClientMissionEligibility
	 * Size -> 0x0038
	 */
	struct FClientMissionEligibility
	{
	public:
		bool                                                       bIsEligible : 1;                                         // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCompleted : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnGlobalCooldown : 1;                                   // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnPerPlayerCooldown : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMinLevelRequirement : 1;                                // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BDHX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LastUpdateNetworkTime;                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     LastCompletedUtcTime;                                    // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MissionMaxDurationSeconds;                               // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RE06[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MissionStartNetworkTime;                                 // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Reason;                                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.CableParticle
	 * Size -> 0x0038
	 */
	struct FCableParticle
	{
	public:
		bool                                                       bFree;                                                   // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0VDE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             position;                                                // 0x0008(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             OldPosition;                                             // 0x0020(0x0018) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ARKDinoData
	 * Size -> 0x0040
	 */
	struct FARKDinoData
	{
	public:
		class UClass*                                              DinoClass;                                               // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      DinoData;                                                // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              DinoNameInMap;                                           // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DinoName;                                                // 0x0028(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNetInfoFromClient;                                      // 0x0038(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LLLA[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.DinoAncestorsEntryBlueprint
	 * Size -> 0x0030
	 */
	struct FDinoAncestorsEntryBlueprint
	{
	public:
		class FString                                              MaleName;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaleDinoID1;                                             // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaleDinoID2;                                             // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              FemaleName;                                              // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FemaleDinoID1;                                           // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FemaleDinoID2;                                           // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PlayerConfigDynamicMaterialVectorNameVectorTypePairs
	 * Size -> 0x000C
	 */
	struct FPlayerConfigDynamicMaterialVectorNameVectorTypePairs
	{
	public:
		EPlayerConfigDynamicMaterialVectorTypes                    DynamicMaterialVectorType;                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TY48[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                NameUsedForDynamicMaterialVectorParam;                   // 0x0004(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.NameColorPair
	 * Size -> 0x0018
	 */
	struct FNameColorPair
	{
	public:
		class FName                                                MaterialParamName;                                       // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.NameScalarPair
	 * Size -> 0x000C
	 */
	struct FNameScalarPair
	{
	public:
		class FName                                                MaterialParamName;                                       // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Value;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.DinoSetupGroup
	 * Size -> 0x0030
	 */
	struct FDinoSetupGroup
	{
	public:
		class FName                                                GroupName;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandomWeight;                                            // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T5YD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDinoSetup>                                  Entries;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            EntriesSpawnNumberLimits;                                // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ItemToDinoStatParams
	 * Size -> 0x0018
	 */
	struct FItemToDinoStatParams
	{
	public:
		EPrimalItemStat                                            ItemStat;                                                // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPrimalCharacterStatusValue                                DinoStat;                                                // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GL4B[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinItemStatValue;                                        // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxItemStatValue;                                        // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinDinoStatValue;                                        // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxDinoStatValue;                                        // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESimpleCurve                                               ConversionCurve;                                         // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TZOG[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.TutorialDefinition
	 * Size -> 0x0030
	 */
	struct FTutorialDefinition
	{
	public:
		class FString                                              TutorialTitle;                                           // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TutorialText;                                            // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          TutorialImage;                                           // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TutorialDuration;                                        // 0x0028(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NextTutorialIndex;                                       // 0x002C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.EscapeRoom_RoomItemSetup
	 * Size -> 0x0038
	 */
	struct FEscapeRoom_RoomItemSetup
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumItems;                                                // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4VR4[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStaticMesh*                                         MeshOverride;                                            // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ScaleOverride;                                           // 0x0018(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  MaterialOverride;                                        // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.EscapeRoom_RoomSetup
	 * Size -> 0x00C0
	 */
	struct FEscapeRoom_RoomSetup
	{
	public:
		TArray<bool>                                               RoomUnlockRequirements;                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		TArray<bool>                                               UnlockHintTypes;                                         // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		float                                                      CorrectHintWeight;                                       // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EP46[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              MultiplierPerReset;                                      // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		int32_t                                                    NumDinosToKill;                                          // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MZJA[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDinoSetupGroup>                             RoomGroupDinoSetups;                                     // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		struct FEscapeRoom_RoomItemSetup                           ItemSetup;                                               // 0x0050(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    NumHintFloors;                                           // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumHintRoomPulses;                                       // 0x008C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TimeToComplete;                                          // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TeleportToNextRoomOnUnlock;                              // 0x0094(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       TeleportToNextRoomOnCorrectOverlap;                      // 0x0095(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SpawnEnemiesWithoutUnlockReq;                            // 0x0096(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0SNT[0x1];                                   // 0x0097(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumDinosPerWave;                                         // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WaveInterval;                                            // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<bool>                                               ShowIndicatorsForUnlockReqs;                             // 0x00A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic
		int32_t                                                    MaxActiveDinos;                                          // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseClosestDinosSpawnToPlayers;                           // 0x00B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseForcedTargeting;                                      // 0x00B5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_92JT[0x2];                                   // 0x00B6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxAggroDistance;                                        // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ChooseSingleUniqueUnlockReqForRoom;                      // 0x00BC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TIAE[0x3];                                   // 0x00BD(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ItemSpawnBlacklistInfo
	 * Size -> 0x0050 (FullSize[0x0058] - InheritedSize[0x0008])
	 */
	struct FItemSpawnBlacklistInfo : public FTableRowBase
	{
	public:
		unsigned char                                              ItemClasses[0x50];                                       // 0x0008(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct ShooterGame.WirelessResourceData
	 * Size -> 0x0058
	 */
	struct FWirelessResourceData
	{
	public:
		int32_t                                                    Qty;                                                     // 0x0000(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GQR0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Inventories[0x50];                                       // 0x0008(0x0050) UNKNOWN PROPERTY: SetProperty
	};

	/**
	 * ScriptStruct ShooterGame.RequiresInventorySubclassMapping
	 * Size -> 0x0040
	 */
	struct FRequiresInventorySubclassMapping
	{
	public:
		unsigned char                                              InventoryComponentClassParent[0x30];                     // 0x0000(0x0030) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              RequiresInventoryComponentClassChildren[0x10];           // 0x0030(0x0010) UNKNOWN PROPERTY: ArrayProperty
	};

	/**
	 * ScriptStruct ShooterGame.UnreplicatedEggData
	 * Size -> 0x0068
	 */
	struct FUnreplicatedEggData
	{
	public:
		TArray<int32_t>                                            EggNumberOfLevelUpPointsApplied;                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            EggNumberMutationsApplied;                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      EggTamedIneffectivenessModifier;                         // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TVN5[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            EggColorSetIndices;                                      // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FDinoAncestorsEntryBlueprint>                EggDinoAncestors;                                        // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FDinoAncestorsEntryBlueprint>                EggDinoAncestorsMale;                                    // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    EggRandomMutationsFemale;                                // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EggRandomMutationsMale;                                  // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EggGenderOverride;                                       // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CZ2I[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ArkTributePlayerDataListing
	 * Size -> 0x0120
	 */
	struct FArkTributePlayerDataListing
	{
	public:
		uint64_t                                                   PlayerDataID;                                            // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerName;                                              // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerStats[0xC];                                        // 0x0018(0x00C0) ZeroConstructor, Transient, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWasAllowDPCUpload;                                      // 0x00D8(0x0001) ZeroConstructor, Transient, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9B14[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              UploadingServerMapName;                                  // 0x00E0(0x0010) ZeroConstructor, Transient, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UploadingServerName;                                     // 0x00F0(0x0010) ZeroConstructor, Transient, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWithItems;                                              // 0x0100(0x0001) ZeroConstructor, Transient, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_51P8[0x3];                                   // 0x0101(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   ItemCount;                                               // 0x0104(0x0004) ZeroConstructor, Transient, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Version;                                                 // 0x0108(0x0004) ZeroConstructor, Transient, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ExpirationTimeUTC;                                       // 0x010C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<unsigned char>                                      PlayerDataBytes;                                         // 0x0110(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ARKTributeDinoListing
	 * Size -> 0x00F0
	 */
	struct FARKTributeDinoListing
	{
	public:
		class FString                                              DinoName;                                                // 0x0000(0x0010) ZeroConstructor, Transient, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DinoStats[0xC];                                          // 0x0010(0x00C0) ZeroConstructor, Transient, SaveGame, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DinoExperiencePoints;                                    // 0x00D0(0x0004) ZeroConstructor, Transient, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TTBA[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DinoClass;                                               // 0x00D8(0x0008) ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   DinoID1;                                                 // 0x00E0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   DinoID2;                                                 // 0x00E4(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ExpirationTimeUTC;                                       // 0x00E8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5ZL9[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalChatFontData
	 * Size -> 0x0020
	 */
	struct FPrimalChatFontData
	{
	public:
		class FName                                                FontName;                                                // 0x0000(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FontSize;                                                // 0x0008(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateColor                                         FontColor;                                               // 0x000C(0x0014) Edit, DisableEditOnInstance, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PlacementData
	 * Size -> 0x0088
	 */
	struct FPlacementData
	{
	public:
		struct FVector                                             AdjustedLocation;                                        // 0x0000(0x0018) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            AdjustedRotation;                                        // 0x0018(0x0018) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bSnapped;                                                // 0x0030(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableEncroachmentCheck;                               // 0x0031(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VEHE[0x2];                                   // 0x0032(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MySnapToIndex;                                           // 0x0034(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TheirSnapToIndex;                                        // 0x0038(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R377[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor* FloorHitActor;                                           // 0x0040(0x0008) BlueprintVisible, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APrimalStructure* ParentStructure;                                         // 0x0048(0x0008) BlueprintVisible, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APrimalStructure* ForcePlacedOnFloorParentStructure;                       // 0x0050(0x0008) BlueprintVisible, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APrimalStructure* ReplacesStructure;                                       // 0x0058(0x0008) BlueprintVisible, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APawn* AttachToPawn;                                            // 0x0060(0x0008) BlueprintVisible, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                AttachToBone;                                            // 0x0068(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APrimalDinoCharacter* DinoCharacter;                                           // 0x0070(0x0008) BlueprintVisible, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeightOffset;                                            // 0x0078(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      YawRotOffset;                                            // 0x007C(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlacingAlignmentMode;                                    // 0x0080(0x0004) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreSnappingIfOptional;                               // 0x0084(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsChoosingRotation;                                     // 0x0085(0x0001) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BFD8[0x2];                                   // 0x0086(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalDroppedItemOnPlatform
	 * Size -> 0x0040
	 */
	struct FPrimalDroppedItemOnPlatform
	{
	public:
		struct FVector                                             ItemRelativeLocation;                                    // 0x0000(0x0018) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            ItemRelativeRotation;                                    // 0x0018(0x0018) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FName                                                BoneName;                                                // 0x0030(0x0008) ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class APrimalStructureItemContainer*                       MyItem;                                                  // 0x0038(0x0008) ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ControllerEvent
	 * Size -> 0x0020 (FullSize[0x0040] - InheritedSize[0x0020])
	 */
	struct FControllerEvent : public FInputEvent
	{
	public:
		unsigned char                                              UnknownData_VH6B[0x20];                                  // 0x0020(0x0020) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.CustomWheelEntry
	 * Size -> 0x0070
	 */
	struct FCustomWheelEntry
	{
	public:
		TWeakObjectPtr<class UObject>                              Target;                                                  // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TargetFunctionName;                                      // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Label;                                                   // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Priority;                                                // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActivationTime;                                          // 0x002C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          ActivationSound;                                         // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CustomDataInt;                                           // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CustomDataName;                                          // 0x003C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        TextColorOverride;                                       // 0x0044(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BackgroundColorOverride;                                 // 0x0054(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTextColorOverride : 1;                               // 0x0064(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseBackgroundColorOverride : 1;                         // 0x0064(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPersistWheelOnActivation : 1;                           // 0x0064(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsEnabled : 1;                                          // 0x0064(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawMultiUseOption : 1;                                 // 0x0064(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A526[0x3];                                   // 0x0065(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              BPDrawEntryTargetRef;                                    // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.AllyRadarDatas
	 * Size -> 0x0068
	 */
	struct FAllyRadarDatas
	{
	public:
		struct FVector                                             LastKnownPlayerLocation;                                 // 0x0000(0x0018) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerName;                                              // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LinkedPlayerIDString;                                    // 0x0028(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TribeName;                                               // 0x0038(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlatformProfileName;                                     // 0x0048(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TeamID;                                                  // 0x0058(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LastKnownHealthCurrent;                                  // 0x005C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LastKnownHealthMax;                                      // 0x0060(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DYG9[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.DinoClassCountStruct
	 * Size -> 0x0020
	 */
	struct FDinoClassCountStruct
	{
	public:
		class UClass*                                              DinoClass;                                               // 0x0000(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberofTamedClass;                                      // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberofTamedBabyClass;                                  // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberofTamedFemalesClass;                               // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberofWildClass;                                       // 0x0014(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberofWildBabyClass;                                   // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberofWildFemalesClass;                                // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.Rotator_NetQuantizeNoRoll
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRotator_NetQuantizeNoRoll : public FRotator
	{	};

	/**
	 * ScriptStruct ShooterGame.Rotator_NetQuantizeYawOnly
	 * Size -> 0x0000 (FullSize[0x0018] - InheritedSize[0x0018])
	 */
	struct FRotator_NetQuantizeYawOnly : public FRotator
	{	};

	/**
	 * ScriptStruct ShooterGame.PlayerBanInfo
	 * Size -> 0x0018
	 */
	struct FPlayerBanInfo
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Timeout;                                                 // 0x0010(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SIZQ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.CachedTeamTameListStruct
	 * Size -> 0x0020
	 */
	struct FCachedTeamTameListStruct
	{
	public:
		int32_t                                                    TargetingTeam;                                           // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P027[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTrackedActorPlusInfoStruct>                 CachedTeamTameList;                                      // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class AShooterPlayerController*                            InitiatedPlayerRef;                                      // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PlayersAwaitingUpdatedCachedTeamTameListStruct
	 * Size -> 0x000C
	 */
	struct FPlayersAwaitingUpdatedCachedTeamTameListStruct
	{
	public:
		TWeakObjectPtr<class AShooterPlayerController>             PlayerController;                                        // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsStaleInfo;                                            // 0x0008(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QAMT[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.MissionGlobalData
	 * Size -> 0x0008
	 */
	struct FMissionGlobalData
	{
	public:
		double                                                     LastMissionDeactivatedUtcTime;                           // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.TributePlayerTribeInfo
	 * Size -> 0x0020
	 */
	struct FTributePlayerTribeInfo
	{
	public:
		TArray<uint64_t>                                           PlayerDataIDs;                                           // 0x0000(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<uint64_t>                                           TribeIDs;                                                // 0x0010(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.AtlasAdminCommandTrackingEntry
	 * Size -> 0x0068
	 */
	struct FAtlasAdminCommandTrackingEntry
	{
	public:
		uint32_t                                                   ServerUTCTime;                                           // 0x0000(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KBBG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    PlayerID;                                                // 0x0008(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SteamID;                                                 // 0x0010(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              IP;                                                      // 0x0020(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0030(0x0018) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              CommandType;                                             // 0x0048(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Command;                                                 // 0x0058(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.DynamicUndermeshVolumes_Data
	 * Size -> 0x0010
	 */
	struct FDynamicUndermeshVolumes_Data
	{
	public:
		int32_t                                                    X;                                                       // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Y;                                                       // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Z;                                                       // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    R;                                                       // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.DynamicUndermeshVolumes_MapSet
	 * Size -> 0x0020
	 */
	struct FDynamicUndermeshVolumes_MapSet
	{
	public:
		class FString                                              Map;                                                     // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FDynamicUndermeshVolumes_Data>               volumes;                                                 // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.DynamicUndermeshVolumes_Root
	 * Size -> 0x0010
	 */
	struct FDynamicUndermeshVolumes_Root
	{
	public:
		TArray<struct FDynamicUndermeshVolumes_MapSet>             Root;                                                    // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.GameIniData
	 * Size -> 0x0020
	 */
	struct FGameIniData
	{
	public:
		class FString                                              PropertyName;                                            // 0x0000(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PropertyValue;                                           // 0x0010(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.NonClusterCharacterUploadData
	 * Size -> 0x0138
	 */
	struct FNonClusterCharacterUploadData
	{
	public:
		struct FArkTributePlayerData                               PlayerData;                                              // 0x0000(0x0120) NativeAccessSpecifierPublic
		uint64_t                                                   TribeID;                                                 // 0x0120(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FItemNetInfo>                                Items;                                                   // 0x0128(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.PrimalStats
	 * Size -> 0x0030
	 */
	struct FPrimalStats
	{
	public:
		bool                                                       bUsed;                                                   // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EJ8P[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     StartStatsTime;                                          // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PrimalStatsValues[0x7];                                  // 0x0010(0x001C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_25NT[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.ReplicatePingData
	 * Size -> 0x0038
	 */
	struct FReplicatePingData
	{
	public:
		unsigned char                                              Rep_PingID;                                              // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6OQ2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Rep_PingedLocation;                                      // 0x0008(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimitiveComponent*                                 Rep_PingedComponent;                                     // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   Rep_PingedByPlayerID;                                    // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_42M7[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AShooterCharacter*                                   Rep_PingedByPlayerChar;                                  // 0x0030(0x0008) ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.StructuresOnFloor
	 * Size -> 0x0018
	 */
	struct FStructuresOnFloor
	{
	public:
		class APrimalStructure*                                    FloorStructure;                                          // 0x0000(0x0008) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class APrimalStructure*>                            StructuresOnFloor;                                       // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.AdminPlayerDataInfo
	 * Size -> 0x0040
	 */
	struct FAdminPlayerDataInfo
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerSteamName;                                         // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SteamID;                                                 // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    LinkedPlayerID;                                          // 0x0030(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsHost;                                                  // 0x0038(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BN0E[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.AlivePlayerDataInfo
	 * Size -> 0x0040
	 */
	struct FAlivePlayerDataInfo
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerSteamName;                                         // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   PlayerID;                                                // 0x0020(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TribeName;                                               // 0x0028(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint64_t                                                   TargetingTeamID;                                         // 0x0038(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.AliveNameAndLocation
	 * Size -> 0x0048
	 */
	struct FAliveNameAndLocation
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TribeName;                                               // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   TargetingTeam;                                           // 0x0020(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ALRA[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   PlayerID;                                                // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0030(0x0018) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ServerOptions
	 * Size -> 0x02A0
	 */
	struct FServerOptions
	{
	public:
		class FString                                              MaxStructuresInRange;                                    // 0x0000(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DifficultyOffset;                                        // 0x0010(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GlobalVoiceChat;                                         // 0x0020(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ProximityChat;                                           // 0x0030(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NoTributeDownloads;                                      // 0x0040(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AllowThirdPersonPlayer;                                  // 0x0050(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AlwaysNotifyPlayerLeft;                                  // 0x0060(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DontAlwaysNotifyPlayerJoined;                            // 0x0070(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerHardcore;                                          // 0x0080(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerPVE;                                               // 0x0090(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerCrosshair;                                         // 0x00A0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerForceNoHUD;                                        // 0x00B0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ShowMapPlayerLocation;                                   // 0x00C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerPassword;                                          // 0x00D0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerAdminPassword;                                     // 0x00E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SpectatorPassword;                                       // 0x00F0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DayCycleSpeedScale;                                      // 0x0100(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DayTimeSpeedScale;                                       // 0x0110(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              NightTimeSpeedScale;                                     // 0x0120(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DinoDamageMultiplier;                                    // 0x0130(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerDamageMultiplier;                                  // 0x0140(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StructureDamageMultiplier;                               // 0x0150(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerResistanceMultiplier;                              // 0x0160(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DinoResistanceMultiplier;                                // 0x0170(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StructureResistanceMultiplier;                           // 0x0180(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              XPMultiplier;                                            // 0x0190(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TamingSpeedMultiplier;                                   // 0x01A0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HarvestAmountMultiplier;                                 // 0x01B0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerCharacterWaterDrainMultiplier;                     // 0x01C0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerCharacterFoodDrainMultiplier;                      // 0x01D0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DinoCharacterFoodDrainMultiplier;                        // 0x01E0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerCharacterStaminaDrainMultiplier;                   // 0x01F0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DinoCharacterStaminaDrainMultiplier;                     // 0x0200(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayerCharacterHealthRecoveryMultiplier;                 // 0x0210(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DinoCharacterHealthRecoveryMultiplier;                   // 0x0220(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DinoCountMultiplier;                                     // 0x0230(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              HarvestHealthMultiplier;                                 // 0x0240(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PvEStructureDecayPeriodMultiplier;                       // 0x0250(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ResourcesRespawnPeriodMultiplier;                        // 0x0260(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EnablePvPGamma;                                          // 0x0270(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisableStructureDecayPvE;                                // 0x0280(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AllowFlyerCarryPvE;                                      // 0x0290(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ActionReportItem
	 * Size -> 0x0050
	 */
	struct FActionReportItem
	{
	public:
		class FString                                              PlayerName;                                              // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TribeName;                                               // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              TimeOfDeath;                                             // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              LevelOfDeath;                                            // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DeathMessage;                                            // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ARKTributeData
	 * Size -> 0x0078
	 */
	struct FARKTributeData
	{
	public:
		struct FGuid                                               ID;                                                      // 0x0000(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPrimalARKTributeDataType                                  DataType;                                                // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RRD5[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      DataBytes;                                               // 0x0018(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              DataClassName;                                           // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DataTagName;                                             // 0x0038(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0048(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      DataStats;                                               // 0x0058(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		double                                                     LastReceiveDataTime;                                     // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   DataID1;                                                 // 0x0070(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   DataID2;                                                 // 0x0074(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.TooltipTextInfo
	 * Size -> 0x0018
	 */
	struct FTooltipTextInfo
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Color;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOnMinimalUI;                                            // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_98BY[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PrimalChatMessage
	 * Size -> 0x0098
	 */
	struct FPrimalChatMessage
	{
	public:
		class FString                                              SenderName;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SenderSteamName;                                         // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              SenderTribeName;                                         // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   SenderId;                                                // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y5P9[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Message;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Receiver;                                                // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SenderTeamIndex;                                         // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZAD2[0x4];                                   // 0x005C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ReceivedTime;                                            // 0x0060(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EChatSendMode                                              SendMode;                                                // 0x0068(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E3LC[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   RadioFrequency;                                          // 0x006C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EChatType                                                  ChatType;                                                // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UWDW[0x7];                                   // 0x0071(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          SenderIcon;                                              // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UserId;                                                  // 0x0080(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SenderIsAdmin : 1;                                       // 0x0090(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SAA8[0x7];                                   // 0x0091(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PaintItem
	 * Size -> 0x0020
	 */
	struct FPaintItem
	{
	public:
		class UPrimalInventoryComponent*                           InventoryComp;                                           // 0x0000(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FItemNetID                                          ItemID;                                                  // 0x0008(0x0008) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              ColorCode;                                               // 0x0010(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G82P[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      X;                                                       // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Y;                                                       // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P8Z0[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.SaveLoadDyePaintingItem
	 * Size -> 0x0038
	 */
	struct FSaveLoadDyePaintingItem
	{
	public:
		struct FItemNetID                                          ItemID;                                                  // 0x0000(0x0008) NoDestructor, NativeAccessSpecifierPublic
		class FString                                              ColorName;                                               // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              DyeColor;                                                // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MissingPercentage;                                       // 0x001C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NeededPercentage;                                        // 0x0020(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int16_t                                                    ArchIndex;                                               // 0x0024(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2A6O[0x2];                                   // 0x0026(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            ColorPixels;                                             // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.FishSnareData
	 * Size -> 0x000C
	 */
	struct FFishSnareData
	{
	public:
		TWeakObjectPtr<class APrimalDinoCharacter>                 DinoCharacter;                                           // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SnareTime;                                               // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.GamePadKeyName
	 * Size -> 0x0030
	 */
	struct FGamePadKeyName
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          KeyIcon;                                                 // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.BlueprintVisualLogEntry
	 * Size -> 0x0030
	 */
	struct FBlueprintVisualLogEntry
	{
	public:
		class FString                                              Category;                                                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Key;                                                     // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Value;                                                   // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.MissionAlertEntry
	 * Size -> 0x0030
	 */
	struct FMissionAlertEntry
	{
	public:
		class UTexture2D*                                          Icon;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Count;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6HSY[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Label;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ItemType;                                                // 0x0020(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowCount : 1;                                          // 0x0028(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C940[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.TekGrenadeLauncherSlot
	 * Size -> 0x0018
	 */
	struct FTekGrenadeLauncherSlot
	{
	public:
		class UClass*                                              AmmoType;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     LastFireTime;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLoaded;                                               // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UEK5[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.HUDElement
	 * Size -> 0x01B0
	 */
	struct FHUDElement
	{
	public:
		EHUDElementType                                            Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JWDU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsVisible : 1;                                          // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsEditorOnly : 1;                                       // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRespectPlayerUIScaleSetting : 1;                        // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTitleIsExtendedInfo : 1;                                // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLabelIsExtendedInfo : 1;                                // 0x0004(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0U2Z[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Title;                                                   // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextJustify                                               TextAlignment_Title;                                     // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H8RO[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Label;                                                   // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextJustify                                               TextAlignment_Label;                                     // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHUDElementHorizontalAlignment                             TextContainerHorizontalAlignment;                        // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHUDElementVerticalAlignment                               TextContainerVerticalAlignment;                          // 0x0032(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4IEY[0x1];                                   // 0x0033(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ZOrder;                                                  // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      progress;                                                // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        TextColor;                                               // 0x003C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TextScale;                                               // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             TextPadding;                                             // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        BackgroundImageColor;                                    // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ProgressColor;                                           // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EProgressBarFillType                                       ProgressBarFillType;                                     // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHUDElementAnchorMode                                      AnchorMode;                                              // 0x0081(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KK0R[0x6];                                   // 0x0082(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAnchors                                            Anchor;                                                  // 0x0088(0x0020) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           Location;                                                // 0x00A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideLocationForUIScaling : 1;                       // 0x00B8(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6EZP[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           LocationAtMinScale;                                      // 0x00C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           LocationAtDefaultScale;                                  // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           LocationAtMaxScale;                                      // 0x00E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Size;                                                    // 0x00F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Scale;                                                   // 0x0100(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          BackgroundImage;                                         // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          ProgressBarFillImage;                                    // 0x0118(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             ProgressBarPadding;                                      // 0x0120(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           ProgressBarScale;                                        // 0x0130(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          Icon;                                                    // 0x0140(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           IconSize;                                                // 0x0148(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           IconScale;                                               // 0x0158(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        IconColor;                                               // 0x0168(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             IconPadding;                                             // 0x0178(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      IconRotation;                                            // 0x0188(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             ProgressBarFillImageMargin;                              // 0x018C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             ProgressBarBackgroundImageMargin;                        // 0x019C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseGamepadIcon : 1;                                     // 0x01AC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AHT4[0x3];                                   // 0x01AD(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.MekBackpackData
	 * Size -> 0x0058
	 */
	struct FMekBackpackData
	{
	public:
		class FName                                                BackpackType;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<bool>                                               BoolData;                                                // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              FloatData;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<double>                                             TimeData;                                                // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     VectorData;                                              // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      StringData;                                              // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.HitMarkerSettings
	 * Size -> 0x0030
	 */
	struct FHitMarkerSettings
	{
	public:
		bool                                                       bIsVisible : 1;                                          // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayHitSound : 1;                                       // 0x0000(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TSTP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Color;                                                   // 0x0004(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DrawDuration;                                            // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Scale;                                                   // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundBase*                                          HitSound;                                                // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.HibernationEntity
	 * Size -> 0x0058
	 */
	struct FHibernationEntity
	{
	public:
		unsigned char                                              UnknownData_IK6E[0x58];                                  // 0x0000(0x0058) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.TrackedActorUpdatedArrayInfoStruct
	 * Size -> 0x0008
	 */
	struct FTrackedActorUpdatedArrayInfoStruct
	{
	public:
		int32_t                                                    MapKey;                                                  // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPlayer;                                               // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C0WO[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.TrackedActorOverallContainer
	 * Size -> 0x0050
	 */
	struct FTrackedActorOverallContainer
	{
	public:
		TMap<int32_t, struct FTrackedActorPlusInfoStruct>          TrackedActorEntriesAsPerCategory;                        // 0x0000(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.NativeDinoHologramEntry
	 * Size -> 0x0018
	 */
	struct FNativeDinoHologramEntry
	{
	public:
		class USkeletalMesh*                                       DinoMesh;                                                // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAnimSequence*                                       Anims;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scales;                                                  // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ZOffset;                                                 // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.TrackItemInfo
	 * Size -> 0x0048
	 */
	struct FTrackItemInfo
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<uint16_t>                                           CraftingRequirements;                                    // 0x0008(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FCraftingResourceRequirement>                BaseCraftingRequirement;                                 // 0x0018(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		class FString                                              ItemName;                                                // 0x0028(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ItemColor;                                               // 0x0038(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ActorWidgetPair
	 * Size -> 0x0010
	 */
	struct FActorWidgetPair
	{
	public:
		int32_t                                                    Key;                                                     // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HG5S[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTrackedDinoListEntryWidget*                         Widget;                                                  // 0x0008(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.ModPreviewData
	 * Size -> 0x0018
	 */
	struct FModPreviewData
	{
	public:
		class UTexture2DDynamic*                                   PreviewImage;                                            // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PreviewDescription;                                      // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.UI_MainMenuLink
	 * Size -> 0x0018
	 */
	struct FUI_MainMenuLink
	{
	public:
		class FString                                              MapName;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              Class;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.JoyAnim
	 * Size -> 0x0010
	 */
	struct FJoyAnim
	{
	public:
		class UAnimMontage*                                        Anim;                                                    // 0x0000(0x0008) Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Chance;                                                  // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DRHG[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ShooterGame.PenetrationTraceHit
	 * Size -> 0x00F8
	 */
	struct FPenetrationTraceHit
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x00F0) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		float                                                      DistanceFromLastHit;                                     // 0x00F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalDistance;                                           // 0x00F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ShooterGame.OverlappedFoliageElement
	 * Size -> 0x0040
	 */
	struct FOverlappedFoliageElement
	{
	public:
		class AActor*                                              HarvestActor;                                            // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInstancedStaticMeshComponent*                       InstancedStaticMeshComponent;                            // 0x0008(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPrimalHarvestingComponent*                          HarvestingComponent;                                     // 0x0010(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             HarvestLocation;                                         // 0x0018(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HitBodyIndex;                                            // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHarvestHealth;                                        // 0x0034(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentHarvestHealth;                                    // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsUnharvestable : 1;                                    // 0x003C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsVisibleAndActive : 1;                                 // 0x003C(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BLEO[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
