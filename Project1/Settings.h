#pragma once
#include "MenuVars.h"
#include "StructDefs.h"

namespace settings 
{
	extern bool feature1;
	extern bool feature2;

	extern std::vector<VarBase*> MenuVars;
	bool Initialize();
	bool Uninitialize();

	namespace aimbot 
	{
		extern KeyBindVar Aimbot;
		extern ToggleVar OnlyVisible;
		extern ToggleVar TargetTeam;
		extern FloatVar UseFov;
		extern IntVar Tracers;
		extern ToggleVar ShieldBypass;
		extern ToggleVar SpoofHeadshots;
		extern ToggleVar AntiDesync;
		extern ToggleVar EnableCrosshair;
		extern ToggleVar EnablePrediction;
		extern ToggleVar EnableTriggerBot;
		extern ToggleVar TargetDinos;
		extern ToggleVar ServerSilent;
		extern ToggleVar TargetSleepers;
		extern FloatVar PredictionMultiplier;
		extern FloatVar AmmoIndicator;
		extern IntVar CurrentBone;
		extern std::wstring CurrentBoneName;
		extern const wchar_t* Bones[];
		extern KeyBindVar AddToAllyList;
		extern KeyBindVar ClearAllyList;
		extern ToggleVar EnableTargetLine;
		extern ToggleVar ShowTargetingString;
		extern ToggleVar ClientOmniMovement;
		extern ToggleVar ServerOmniMovement;
		extern ToggleVar FakeRotation;
		extern FRotator ClientRotation;
		extern FRotator ServerRotation;
		extern FRotator CameraRotation;
		extern ToggleVar DesyncWalk;
		extern IntVar DesyncStrength;
		extern ToggleVar AdditionalDesync;
		extern KeyBindOptionalVar SpoofTargetPos;
		extern KeyBindOptionalVar RailgunAimbot;
		extern FloatVar RailgunAimbotSpeed;
		extern ToggleVar RailgunHideTrail;
	}; 

	namespace enemyPlayer 
	{
		extern ToggleVar EnableEnemyPlayer;
		extern ToggleVar CenterText;
		extern ToggleVar OutlineText;
		extern ToggleVar Name;
		extern ToggleVar TribeName;
		extern ToggleVar Box;
		extern int BoxType;
		extern ToggleVar Health;
		extern ToggleVar Torpor;
		extern ToggleVar Bones;
		extern ToggleVar Distance;
		extern ToggleVar Snaplines;
		extern ToggleVar HeadDot;
		extern ToggleVar ViewLine;
		extern ToggleVar Armor;
		extern ToggleVar Buffs;
		extern ToggleVar Weapon;
		extern ToggleVar Chams;
		extern ToggleVar OnlyVisible;
		extern ToggleVar EnemySleeping;
		extern ToggleVar EnemyDead;
		extern ToggleVar EnemyWeight;
		extern ToggleVar EnemyExtraInfo;
		extern ColorVar EnemyColor;
		extern ColorVar EnemyNonvisibleColor;
		extern ColorVar EnemySleepingColor;
		extern ColorVar EnemyDeadColor;

		extern ToggleVar EnemyPlayerArmorChams;
		extern ToggleVar EnemyPlayerShieldChams;
		extern ToggleVar EnemyPlayerWeaponChams;

		extern ColorVar EnemyPlayerArmorColor;
		extern ColorVar EnemyPlayerShieldColor;
		extern ColorVar EnemyPlayerWeaponColor;

	};

	namespace teamPlayer 
	{
		extern ToggleVar EnableTeamPlayer;
		extern ToggleVar CenterText;
		extern ToggleVar OutlineText;
		extern ToggleVar Name;
		extern ToggleVar TribeName;
		extern ToggleVar Box;
		extern int BoxType;
		extern ToggleVar Health;
		extern ToggleVar Torpor;
		extern ToggleVar Bones;
		extern ToggleVar Distance;
		extern ToggleVar ViewLine;
		extern ToggleVar Armor;
		extern ToggleVar Buffs;
		extern ToggleVar Weapon;
		extern ToggleVar Chams;
		extern ToggleVar OnlyVisible;
		extern ToggleVar TeamSleeping;
		extern ToggleVar TeamDead;
		extern ToggleVar TeamWeight;
		extern ToggleVar TeamExtraInfo;

		extern ColorVar TeamColor;
		extern ColorVar TeamNonvisibleColor;
		extern ColorVar TeamSleepingColor;
		extern ColorVar TeamDeadColor;

		extern ToggleVar TeamPlayerArmorChams;
		extern ToggleVar TeamPlayerShieldChams;
		extern ToggleVar TeamPlayerWeaponChams;

		extern ColorVar TeamPlayerArmorColor;
		extern ColorVar TeamPlayerShieldColor;
		extern ColorVar TeamPlayerWeaponColor;

	};

	namespace enemyDino
	{
		extern ToggleVar EnableEnemyDino;
		extern ToggleVar Name;
		extern ToggleVar Health;
		extern ToggleVar Distance;
		extern ToggleVar Buffs;
		extern ToggleVar Chams;
		extern ToggleVar Aggression;
		extern ToggleVar OnlyVisible;

		extern ColorVar EnemyDinoColor;
	}; 

	namespace teamDino 
	{
		extern ToggleVar EnableTeamDino;
		extern ToggleVar Name;
		extern ToggleVar Health;
		extern ToggleVar Distance;
		extern ToggleVar Buffs;
		extern ToggleVar Chams;
		extern ToggleVar Aggression;
		extern ToggleVar OnlyVisible;

		extern ColorVar TeamDinoColor;
	};

	namespace wildDino 
	{
		extern ToggleVar EnableWildDino;
		extern ToggleVar Name;
		extern ToggleVar Health;
		extern ToggleVar Distance;
		extern ToggleVar Buffs;
		extern ToggleVar Chams;
		extern ToggleVar OnlyVisible;

		extern int CurrentBoss;
		extern ToggleVar Bossfight;

		extern ColorVar WildDinoColor;
		extern std::wstring WildDinoString;
		extern bool EnableFilter;
		extern IntVar LevelFilter;
		extern IntVar LevelFilterType;
	}; 

	namespace enemyStructure 
	{
		extern ToggleVar DrawEStructures;

		extern StructureVar EnemySleepingBag;
		extern StructureVar EnemyBed;
		extern StructureVar EnemyBunkBed;
		extern StructureVar EnemySmallTeleporter;
		extern StructureVar EnemyMediumTeleporter;
		extern StructureVar EnemyLargeTeleporter;
		extern StructureExtraVar EnemyAutoTurret;
		extern StructureExtraVar EnemyHeavyTurret;
		extern StructureExtraVar EnemyTekTurret;
		extern StructureVar EnemySmallCropPlot;
		extern StructureVar EnemyMediumCropPlot;
		extern StructureVar EnemyLargeCropPlot;
		extern StructureVar EnemyElectricalGenerator;
		extern StructureVar EnemyEnemyTekGenerator;
		extern StructureVar EnemyTekTransmitter;
		extern StructureVar EnemyCryoFridge;
		extern StructureVar EnemyCloningChamber;
		extern StructureVar EnemyVacuumCompartment;
		extern StructureVar EnemyFoundation;
		extern StructureVar EnemyWall;
		extern StructureVar EnemyDoor;
		extern StructureVar EnemyDoorFrame;
		extern StructureVar EnemyCeiling;
		extern StructureVar EnemyFenceFoundation;
		extern StructureVar EnemySmallStorageBox;
		extern StructureVar EnemyLargeStorageBox;
		extern StructureVar EnemyVault;
		extern StructureVar EnemyRefrigerator;
		extern StructureVar EnemyAirConditioner;
		extern StructureVar EnemyDedicatedStorage;
		extern StructureVar EnemyTekForceField;
		extern StructureVar EnemyReplicator;
		extern StructureVar EnemyFabricator;
		extern StructureVar EnemySmithy;
		extern StructureVar EnemyMortarAndPestle;
		extern StructureVar EnemyChemistryBench;
		extern StructureVar EnemyIndustrialForge;
		extern StructureVar EnemyIndustrialGrill;
		extern StructureVar EnemyIndustrialCookingPot;
		extern StructureVar EnemyGrinder;
		extern StructureVar EnemyCookingPot;
		extern StructureVar EnemyC4Charge;
		extern StructureVar EnemyBearTrap;
		extern StructureVar EnemyLargeBearTrap;
		extern StructureVar EnemyWaterMine;
		extern StructureVar EnemyItemCache;
		extern StructureVar EnemyCliffPlatform;
		extern StructureVar EnemyPlantX;
		extern StructureVar EnemyLinkedStorageBox;
		extern StructureExtraVar EnemyTeslaCoil;

		extern std::vector<StructureVar*> EnemyStructureVars;
	};

	namespace teamStructure 
	{
		extern ToggleVar DrawTStructures;

		extern StructureVar TeamSleepingBag;
		extern StructureVar TeamBed;
		extern StructureVar TeamBunkBed;
		extern StructureVar TeamSmallTeleporter;
		extern StructureVar TeamMediumTeleporter;
		extern StructureVar TeamLargeTeleporter;
		extern StructureExtraVar TeamAutoTurret;
		extern StructureExtraVar TeamHeavyTurret;
		extern StructureExtraVar TeamTekTurret;
		extern StructureVar TeamSmallCropPlot;
		extern StructureVar TeamMediumCropPlot;
		extern StructureVar TeamLargeCropPlot;
		extern StructureVar TeamElectricalGenerator;
		extern StructureVar TeamTeamTekGenerator;
		extern StructureVar TeamTekTransmitter;
		extern StructureVar TeamCryoFridge;
		extern StructureVar TeamCloningChamber;
		extern StructureVar TeamVacuumCompartment;
		extern StructureVar TeamFoundation;
		extern StructureVar TeamWall;
		extern StructureVar TeamDoor;
		extern StructureVar TeamDoorFrame;
		extern StructureVar TeamCeiling;
		extern StructureVar TeamFenceFoundation;
		extern StructureVar TeamSmallStorageBox;
		extern StructureVar TeamLargeStorageBox;
		extern StructureVar TeamVault;
		extern StructureVar TeamRefrigerator;
		extern StructureVar TeamAirConditioner;
		extern StructureVar TeamDedicatedStorage;
		extern StructureVar TeamTekForceField;
		extern StructureVar TeamReplicator;
		extern StructureVar TeamFabricator;
		extern StructureVar TeamSmithy;
		extern StructureVar TeamMortarAndPestle;
		extern StructureVar TeamChemistryBench;
		extern StructureVar TeamIndustrialForge;
		extern StructureVar TeamIndustrialGrill;
		extern StructureVar TeamIndustrialCookingPot;
		extern StructureVar TeamGrinder;
		extern StructureVar TeamCookingPot;
		extern StructureVar TeamC4Charge;
		extern StructureVar TeamBearTrap;
		extern StructureVar TeamLargeBearTrap;
		extern StructureVar TeamWaterMine;
		extern StructureVar TeamItemCache;
		extern StructureVar TeamCliffPlatform;
		extern StructureVar TeamPlantX;
		extern StructureVar TeamLinkedStorageBox;
		extern StructureExtraVar TeamTeslaCoil;

		extern std::vector<StructureVar*> TeamStructureVars;

	};

	namespace miscStructure 
	{
		extern StructureVar SupplyDrop;
		extern StructureVar CaveDrop;
		extern StructureVar Artifact;
		extern StructureVar BeaverDam;
		extern StructureVar BeeHive;
		extern StructureVar Note;
		extern ToggleVar DrawDroppedItems;
		extern ToggleVar DrawDroppedEggs;
		extern ToggleVar Teleport;
		extern ToggleVar BossTeleportEsp;
		extern ToggleVar ProcessStructures;
		extern StructureVar ChargeNode;
		extern StructureVar Nest;
	}; 

	namespace radar 
	{
		extern ToggleVar CrosshairRadar2D;
		extern ToggleVar ShowSleepingPlayers2D;
		extern FloatVar CrosshairRadar2DMax;
		extern FloatVar CrosshairRadar2DMin;
		extern FloatVar CrosshairRadar2DScale;
		extern ToggleVar CrosshairRadar3D;
		extern ToggleVar ShowSleepingPlayers3D;
		extern FloatVar CrosshairRadar3DMax;
		extern FloatVar CrosshairRadar3DMin;
		extern FloatVar CrosshairRadar3DScale;
		extern ToggleVar DrawRadar;
		extern ToggleVar DrawRadarBackground;
		extern FloatVar RadarBackgroundAlpha;
		extern ToggleVar DrawRadarNESW;
		extern IntVar RadarSize;
		extern IntVar RadarZoom;
		extern FloatVar RadarX;
		extern FloatVar RadarY;
		extern ToggleVar DrawRadarEnemy;
		extern ToggleVar DrawRadarTeam;
		extern ToggleVar DrawRadarEnemyDinos;
		extern ToggleVar DrawRadarTeamDinos;

		extern ToggleVar DrawCrosshairRadar;
		extern FloatVar CrossHairZoom;
		extern FloatVar CrossHairMinDistance;
		extern FloatVar CrossHairMaxDistance;
		extern FloatVar CrossHairScaleMinDistance;
		extern FloatVar CrossHairDegreesBetween;
		extern ToggleVar CrossHairShowSleepingPlayers;
		extern ToggleVar CrossHairShowTribePlayers;
	}; 

	namespace playerMovement
	{
		extern KeyBindOptionalVar BunnyHop;
		extern ToggleVar Airstuck;
		extern ToggleVar BetterAirstuck;
		extern ToggleVar Desync;
		extern IntVar DelayedPacketCount;
		extern ToggleVar SpeedHack;
		extern KeyBindOptionalVar ManualRemountSpeedHack;
		extern KeyBindVar ManualRemountKey;
		extern FloatVar SpeedHackValue;
		extern FloatVar SpeedHackValueTwo;
		extern KeyBindVar TekJump;
		extern KeyBindVar TekLegs;
		extern KeyBindVar TekHover;
		extern KeyBindVar TekGaunts;
		extern KeyBindVar TekGauntsStop;
		extern KeyBindOptionalVar SpoofCrouch;
		extern KeyBindOptionalVar SpoofProne;
		extern ToggleVar SpinBot;
		extern FloatVar SpinBotSpeed;
		extern IntVar SpinBotYaw;
		extern IntVar SpinBotPitch;
		extern ToggleVar SpinBotClient;
		extern KeyBindOptionalVar AirJump;
	}; 

	namespace dinoFeatures 
	{
		extern ToggleVar BackwardsFly;
		extern ToggleVar OmniFly;
		extern ToggleVar ForceMount;
		extern ToggleVar AutoForceMount;
		extern ToggleVar InstaTurn;
		extern ToggleVar HardTurn;

		extern KeyBindVar BetterRavager;
		extern KeyBindVar BetterYiLing;
		extern float YiLingMultiplier;
	} 

	namespace autoMation 
	{
		extern ToggleVar DupeMethod;
		extern FloatVar DupeMethodSpeed;

		extern ToggleVar PickupC4;
		extern ToggleVar PickupTraps;
		extern ToggleVar AutoWalk;
		extern ToggleVar AutoAttack;
		extern ToggleVar PickupWaterMines;
		extern ToggleVar AutoMedbrew;
		extern ToggleVar AutoConsumable;
		extern ToggleVar AutoFood;
		extern ToggleVar AutoPopcornDinoResources;
		extern ToggleVar AutoFeedRawMeat;
		extern ToggleVar AutoTakeAchatina;
		extern KeyBindOptionalVar AutoPick;
		extern KeyBindOptionalVar SelfArmor;
		extern IntVar AutoFillTekTurrets;
		extern IntVar AutoFillHeavyTurrets;
		extern IntVar AutoFillAutoTurrets;
		extern IntVar AutoFillCropPlots;
		extern ToggleVar IgnoreGaunts;
		extern ToggleVar IgnoreChest;
		extern ToggleVar LegitAutoFlak;
		extern ToggleVar SwapToScuba;
		extern int AutoArmorType;
		extern KeyBindOptionalVar AutoLoot;
		extern KeyBindOptionalVar AutoPopcorn;
		extern KeyBindOptionalVar AutoMount;
		extern ToggleVar AutoPopcornPlayers;
		extern ToggleVar AutoPopcornStructures;
		extern ToggleVar AutoPopcornTurrets;
		extern ToggleVar AutoPopcornBags;
		extern ToggleVar AutoTakePlayers;
		extern ToggleVar AutoTakeStructures;
		extern ToggleVar AutoTakeTurrets;
		extern ToggleVar AutoTakeBags;
		extern KeyBindOptionalVar TeamAutoPopcorn;
		extern ToggleVar TeamAutoPopcornPlayers;
		extern ToggleVar TeamAutoPopcornStructures;
		extern ToggleVar TeamAutoPopcornBags;
		extern KeyBindOptionalVar TeamAutoLoot;
		extern ToggleVar TeamAutoTakePlayers;
		extern ToggleVar TeamAutoTakeStructures;
		extern ToggleVar TeamAutoTakeTurrets;
		extern ToggleVar TeamAutoTakeBags;
		extern bool TekTurretLoaded;
		extern bool HeavyTurretLoaded;
		extern bool AutoTurretLoaded;
		extern bool CropPlotLoaded;
		extern bool FeedTroughs;
		extern bool UnlockNotes;
		extern KeyBindOptionalVar PickupItems;
		extern KeyBindOptionalVar PickupPoop;
		extern KeyBindOptionalVar PickupEggs;
		extern ToggleVar AutoTakeCrops;
		extern ToggleVar AutoPincode;
		extern ToggleVar AutoNameTurrets;
		extern std::wstring TurretName;
		extern ToggleVar AutoTurretSettings;
		extern int TurretRange;
		extern int TurretTarget;
		extern ToggleVar AutoDepoDedis;
		extern ToggleVar AutoFillForges;
		extern int ForgeFillPercentage;
		extern ToggleVar AutoFish;
		extern ToggleVar AutoTamePassive;
		extern ToggleVar AutoGrindStone;
		extern ToggleVar AutoSheep;
	};

	namespace resourceStructure
	{
		extern ToggleVar EnableResource;
		extern bool Crystal;
		extern bool Pearls;
		extern bool Metal;
		extern bool Oil;
		extern bool Obsidian;
		extern bool Gem;
		extern int Distance;
	}

	namespace misc 
	{
		extern ToggleVar MouseSmoothing;
		extern KeyBindOptionalVar Spyglass;
		extern int SpyglassLockTargetBind;
		extern ToggleVar ShotGunReload;
		extern ToggleVar InfiniteC4;
		extern ToggleVar SelfC4Placer;
		extern ToggleVar DmgNumbers;
		extern ToggleVar ExtraServerInfo;
		extern ToggleVar TribeLogToChat;
		extern IntVar FovChanger;
		extern ToggleVar LongArms;
		extern ToggleVar InfiniteArms;
		extern ToggleVar InfiniteSuitEle;
		extern ToggleVar NoRecoil;
		extern ToggleVar NoTekRifleOverheat;
		extern ToggleVar NoRailgunOverheat;
		extern FloatVar RapidFire;
		extern IntVar Ini;
		extern ToggleVar Notes;
		extern ToggleVar Ghost;
		extern ToggleVar Suicide;
		extern ToggleVar PointExploit;
		extern KeyBindOptionalVar ForceJump;
		extern KeyBindVar RenderCrash;
		extern KeyBindVar LadderExploit;
		extern int LadderPositionKeyBind;
		extern int LadderJumpInViewDirSpeed;
		extern int LadderJumpInViewDirKeyBind;
		extern KeyBindVar XpExploit;
		extern KeyBindVar ServerCrash;
		extern KeyBindVar ForceAccess;
		extern ToggleVar ExtraInfo;
		extern ToggleVar ShowMeshDetection;
		extern ToggleVar SpoofFoundation;
		extern bool BattleMode;
		extern KeyBindVar SelfUpload;
		extern KeyBindVar InventoryToArk;
		extern KeyBindVar NetLimiter;
		extern ToggleVar DinoClaim;
		extern ToggleVar DinoName;
		extern ToggleVar DinoLevel;
		extern DinoLevelPresetzzz DinoLevelPreset;
		extern ToggleVar DinoSaddle;
		extern ToggleVar DinoFeed;
		extern ToggleVar DinoImprint;
		extern ToggleVar InfiniteWeight;
		extern ToggleVar FastUse;
		extern ToggleVar DisableRespawnAnim;
		extern ToggleVar UploadAll;
		extern IntVar TekChestDisconnect;
		extern ToggleVar DownloadAll;
		extern std::wstring DinoString;
		extern IntVar SpamChangeCharacterSize;
		extern IntVar SpamLastCharacter;
		extern ToggleVar UnlockBTT;
		extern float wantedCharacter[26];
		extern bool wantsToSetCharacter;
		extern ToggleVar BetterPassenger;
		extern ToggleVar UnlockRotation;
		extern KeyBindVar FastThrow;
		extern KeyBindVar ForceAccess;
		extern KeyBindVar PopcornTarget;
		extern KeyBindVar ForceShoot;
		extern KeyBindOptionalVar FastPlaceC4;
		extern FloatVar TopDownView;
		extern bool TopDownForceDistance;
		extern ToggleVar RemoveBolas;
		extern bool RemovePlayerBolas;
		extern bool RemoveDinoBolas;
		extern bool RemoveSelfBolas;
		extern bool BolaPackageLoaded;
		extern KeyBindVar PyromaneJump;
		extern int PyromaneMultiplier;
		extern ToggleVar TransBag;
		extern ToggleVar BetterPopcorn;
		extern KeyBindVar PopcornSelf;
		extern KeyBindVar PopcornDino;
		extern KeyBindVar TransferTarget;
	};

	namespace autoCraft
	{
		extern bool EnableCrafting;
		extern int CraftingStructure;
		extern int CraftingItem;
		extern std::wstring ItemName;
	};

	namespace autoDemo 
	{
		extern bool EnableDemo;
		extern int DemoItem;
		extern std::wstring ItemName;
	}; 

	namespace user 
	{
		extern FloatVar HitMarker3D;
		extern FloatVar HitMarker3DSize;
		extern ColorVar HitMarker3DColor;
		extern ToggleVar CustomCamera;
		extern FloatVar CustomCameraOffsetX;
		extern FloatVar CustomCameraOffsetY;
		extern FloatVar CustomCameraOffsetZ;
		extern ToggleVar CustomCameraUseWeaponOffset;
		extern FloatVar CustomCameraWeaponOffsetX;
		extern FloatVar CustomCameraWeaponOffsetY;
		extern FloatVar CustomCameraWeaponOffsetZ;
		extern ToggleVar CustomCameraCollision;
		extern IntVar CustomCameraBone;
		extern KeyBindOptionalVar AntimeshESP;
		extern FloatVar AntimeshESPRange;
		extern ToggleVar AntimeshEspUseStaticMesh;
		extern ColorVar AntimeshColor;
		extern ToggleVar AntimeshDisableDepth;
		extern ToggleVar KillFeed;
		extern ToggleVar AllKills;
		extern ToggleVar DinoKills;
		extern FloatVar KillFeedTime;
		extern ToggleVar TargetWarning;
		extern FloatVar TargetWarningMinimum;
		extern ToggleVar ClearWater;
		extern ToggleVar ChamsWireFrame;
		extern IntVar MaterialBlendMode;
		extern ToggleVar ShowToggleMessage;
		extern FloatVar MessageTime;
	
		namespace dmgNumbers 
		{
			extern FloatVar Scale;
			extern FloatVar LifeSpan;
			extern FloatVar MinScale;
			extern FloatVar ZVelocity;
			extern ColorVar EnemyColor;
			extern ColorVar TeamColor;
			extern ColorVar WildColor;
		}; 

		namespace ShowFlags 
		{
			extern ToggleVar PostProcessing;
			extern ToggleVar Bloom;
			extern ToggleVar LocalExposure;
			extern ToggleVar AntiAliasing;
			extern ToggleVar TemporalAA;
			extern ToggleVar AmbientCubemap;
			extern ToggleVar EyeAdaptation;
			extern ToggleVar GlobalIllumination;
			extern ToggleVar Vignette;
			extern ToggleVar AmbientOcclusion;
			extern ToggleVar Decals;
			extern ToggleVar OnScreenDebug;
			extern ToggleVar VisualizeNanite;
			extern ToggleVar VisualizeLumen;
			extern ToggleVar VisualizeSubstrate;
			extern ToggleVar VisualizeGroom;
			extern ToggleVar VisualizeVirtualShadowMap;
			extern ToggleVar PointLights;
			extern ToggleVar SpotLights;
			extern ToggleVar RectLights;
			extern ToggleVar DepthOfField;
			extern ToggleVar MotionBlur;
			extern ToggleVar CameraInterpolation;
			extern ToggleVar ToneCurve;
			extern ToggleVar SeparateTranslucency;
			extern ToggleVar ScreenPercentage;
			extern ToggleVar ReflectionEnvironment;
			extern ToggleVar Specular;
			extern ToggleVar ScreenSpaceReflections;
			extern ToggleVar LumenReflections;
			extern ToggleVar ContactShadows;
			extern ToggleVar RayTracedDistanceFieldShadows;
			extern ToggleVar CapsuleShadows;
			extern ToggleVar VolumetricLightmap;
			extern ToggleVar IndirectLightingCache;
			extern ToggleVar TexturedLightProfiles;
			extern ToggleVar LightFunctions;
			extern ToggleVar NaniteMeshes;
			extern ToggleVar InstancedStaticMeshes;
			extern ToggleVar InstancedFoliage;
			extern ToggleVar InstancedGrass;
			extern ToggleVar DynamicShadows;
			extern ToggleVar Particles;
			extern ToggleVar SkeletalMeshes;
			extern ToggleVar Translucency;
			extern ToggleVar LOD;
			extern ToggleVar Lighting;
			extern ToggleVar DeferredLighting;
			extern ToggleVar StaticMeshes;
			extern ToggleVar Landscape;
			extern ToggleVar Fog;
			extern ToggleVar Game;
			extern ToggleVar BSP;
			extern ToggleVar LightShafts;
			extern ToggleVar Atmosphere;
			extern ToggleVar TextRender;
			extern ToggleVar Rendering;
			extern ToggleVar HMDDistortion;
			extern ToggleVar StereoRendering;
			extern ToggleVar DistanceCulledPrimitives;
			extern ToggleVar SkyLighting;
			extern ToggleVar Paper2DSprites;
			extern ToggleVar ScreenSpaceAO;
			extern ToggleVar DistanceFieldAO;
			extern ToggleVar LumenGlobalIllumination;
			extern ToggleVar VolumetricFog;
			extern ToggleVar WidgetComponents;
			extern ToggleVar MediaPlanes;
			extern ToggleVar PathTracing;
			extern ToggleVar VisualizeCalibrationColor;
			extern ToggleVar VisualizeCalibrationGrayscale;
			extern ToggleVar VisualizeCalibrationCustom;
			extern ToggleVar LumenScreenTraces;
			extern ToggleVar LumenDetailTraces;
			extern ToggleVar LumenGlobalTraces;
			extern ToggleVar LumenFarFieldTraces;
			extern ToggleVar LumenSecondaryBounces;
			extern ToggleVar LumenShortRangeAmbientOcclusion;
			extern ToggleVar ShaderPrint;
		}; 
		
		namespace sound 
		{
			extern ToggleVar ChangeHitMarkerSound;
			extern ToggleVar IsUiSound;
			extern FloatVar TeamHitMarkerSoundVolume;
			extern FloatVar EnemyHitMarkerSoundVolume;
			extern FloatVar TeamHitMarkerSoundPitch;
			extern FloatVar EnemyHitMarkerSoundPitch;
			extern FloatVar ShootSoundVolume;
			extern const wchar_t* TeamSoundPrev;
			extern const wchar_t* EnemySoundPrev;
			extern const wchar_t* ShootSoundPrev;
			extern bool SoundChanged;
			extern const wchar_t* TeamHitMarkerSound;
			extern const wchar_t* EnemyHitMarkerSound;
			extern const wchar_t* ShootSound;
		}; 
	}; 
	
	namespace menu 
	{
		extern ToggleVar ShowMenu;
		extern KeyBindVar ExtraCheatKey;
		extern ToggleVar Uninject;
		extern ToggleVar ShowStructureMissingAlerts;
		extern ToggleVar HudMenu;
		extern KeyBindVar ForwardKey;
		extern KeyBindVar BackwardKey;
		extern KeyBindVar DownKey;
		extern KeyBindVar UpKey;
	}; 
}; 
