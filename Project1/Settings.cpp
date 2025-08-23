#include "pch.h"
#include "Settings.h"

namespace settings 
{
    bool feature1 = false;
    bool feature2 = false;

    std::vector<VarBase*> MenuVars = {};

    namespace aimbot 
    {
        KeyBindVar Aimbot = KeyBindVar(false, 0, 'Z', Xors(L"Aimbot"), Xors(L"Aims at Players"), false);
        ToggleVar OnlyVisible = ToggleVar(false, 0, Xors(L"Only Visible"), Xors(L"Only Aims at Visible Players"), false);
        ToggleVar TargetTeam = ToggleVar(false, 0, Xors(L"Target Team"), Xors(L"Aims at Teammates"), false);
        FloatVar UseFov = FloatVar(false, 0, 25.f, 1.f, 1000.f, Xors(L"Use FOV"), Xors(L"Aims at Players in FOV"), false, VarT::Float);
        IntVar Tracers = IntVar(false, 0, 2, 0, 10, Xors(L"Tracers"), Xors(L"Draws Shot tracers"), false, VarT::Int);
        ToggleVar ShieldBypass = ToggleVar(false, 0, Xors(L"Anti Shield"), Xors(L"Shoots Boots When Shielding"), true);
        ToggleVar SpoofHeadshots = ToggleVar(false, 0, Xors(L"Spoof Headshots"), Xors(L"Spoof Headshots"), false);
        ToggleVar EnableCrosshair = ToggleVar(false, 0, Xors(L"Enable Crosshair"), Xors(L"Enable Crosshair"), false);
        ToggleVar EnablePrediction = ToggleVar(false, 0, Xors(L"Enable Prediction"), Xors(L"Enable Prediction"), false);
        ToggleVar EnableTriggerBot =   ToggleVar(false, 0, Xors(L"Enable TriggerBot"), Xors(L"Enable TriggerBot"), false);
        ToggleVar TargetDinos = ToggleVar(false, 0, Xors(L"Target Dinos"), Xors(L"Target Dinos"), false);
        ToggleVar ServerSilent = ToggleVar(false, 0, Xors(L"Server Silent"), Xors(L"Server Silent"), false);
        ToggleVar TargetSleepers =  ToggleVar(false, 0, Xors(L"Target Sleepers"), Xors(L"Target Sleepers"), false);
        ToggleVar AntiDesync = ToggleVar(false, 0, Xors(L"Anti Desync"), Xors(L"Disables Desync For Players"), false);
        FloatVar AmmoIndicator = FloatVar(false, 0, 15.f, 0.1f, 50.f, Xors(L"Ammo Indicator"), Xors(L"Draws ammo circle around crosshair"), false, VarT::Float);
        FloatVar PredictionMultiplier = FloatVar(false, 0, 1.f, 0.1f, 7.f, Xors(L"Prediction Multiplier"), Xors(L"Prediction Multiplier"), false, VarT::NoToggleFloat);
        KeyBindVar AddToAllyList = KeyBindVar(false, 0, VK_MBUTTON, Xors(L"Add To Ally List"), Xors(L"Adds tribe currently targeting to ally"), false);
        KeyBindVar ClearAllyList = KeyBindVar(false, 0, VK_END, Xors(L"Clear Ally List"), Xors(L"removes all allies"), false);
        ToggleVar EnableTargetLine = ToggleVar(true, 0, Xors(L"Enable Target Line"), Xors(L"Draw line to aimbot target"), false);
        ToggleVar ShowTargetingString = ToggleVar(true, 0, Xors(L"Show Targeting Info"), Xors(L"Shows extra target info"), false);
        IntVar CurrentBone = IntVar(false, 0, 0, 0, 1000, Xors(L"Current Bone"), Xors(L"Current Bone"), false, VarT::NoToggleInt);
        std::wstring CurrentBoneName = Xors(L"");
        const wchar_t* Bones[] = { Xors(L"Head"), Xors(L"Chest"), Xors(L"Left Gaunt"), Xors(L"Right Gaunt"), Xors(L"Left Leg"), Xors(L"Right Leg"), Xors(L"Left Boot"), Xors(L"Right Boot"), Xors(L"Smart Aim")};
        ToggleVar FakeRotation = ToggleVar(false, 0, Xors(L"Infinite Stam"), Xors(L"Infinite Stam While Running (Bugs Tek Leg)"), false);
        ToggleVar ClientOmniMovement = ToggleVar(false, 0, Xors(L"Client Omni Movement"), Xors(L"For Players"), false);
        ToggleVar ServerOmniMovement = ToggleVar(false, 0, Xors(L"Server Omni Movement"), Xors(L"For Dinos"), false);
        FRotator ClientRotation = { 0.f,0.f,0.f };
        FRotator ServerRotation = { 0.f,0.f,0.f };
        FRotator CameraRotation = { 0.f,0.f,0.f };
        KeyBindOptionalVar SpoofTargetPos = KeyBindOptionalVar(false, 0, 0, 0, Xors(L"Spoof Target Pos"), Xors(L"UNOFFICIAL ONLY/dedi wallbang"), false);
        KeyBindOptionalVar RailgunAimbot = KeyBindOptionalVar(false, 0, 0, 0, Xors(L"Railgun Aimbot"), Xors(L"Fast reloading/no element used"), false);
        FloatVar RailgunAimbotSpeed = FloatVar(false, 0, 0.45f, 0.1f, 0.6f, Xors(L"Railgun Aimbot Speed"), Xors(L"Lower when high ping"), false, VarT::NoToggleFloat);
		ToggleVar RailgunHideTrail = ToggleVar(true, 0, Xors(L"Railgun Hide Trail"), Xors(L"Hide shot particles"), false);
        ToggleVar DesyncWalk = ToggleVar(false, 0, Xors(L"Desync Walk"), Xors(L"Desyncs Player Location Slightly"), false);
        IntVar DesyncStrength = IntVar(false, 0, 1, 1, 15, Xors(L"Desync Strength"), Xors(L"How Strong Desync Is"), false, VarT::NoToggleInt);
        ToggleVar AdditionalDesync = ToggleVar(false, 0, Xors(L"Additional Movement Desync"), Xors(L"Additionally Desyncs"), false);
    };

    namespace enemyPlayer 
    {
        ToggleVar EnableEnemyPlayer = ToggleVar(false, 0, Xors(L"Enable Enemy Player"), Xors(L""), false);
        ToggleVar CenterText = ToggleVar(true, 0, Xors(L"Center Enemy Text"), Xors(L"Center Esp Text"), false);
        ToggleVar OutlineText = ToggleVar(true, 0, Xors(L"Outline Enemy Text"), Xors(L"Outline Esp Text"), false);
        ToggleVar Name = ToggleVar(false, 0, Xors(L"Enemy Name"), Xors(L"Name"), false);
        ToggleVar TribeName = ToggleVar(false, 0, Xors(L"Enemy Tribe Name"), Xors(L""), false);
        ToggleVar Box = ToggleVar(false, 0, Xors(L"Enemy Box"), Xors(L""), false);
        int BoxType = 3;
        ToggleVar Health = ToggleVar(false, 0, Xors(L"Enemy Health"), Xors(L""), false);
        ToggleVar Torpor = ToggleVar(false, 0, Xors(L"Enemy Torpor"), Xors(L""), false);
        ToggleVar Bones = ToggleVar(false, 0, Xors(L"Enemy Bones"), Xors(L""), false);
        ToggleVar Distance = ToggleVar(false, 0, Xors(L"Enemy Distance"), Xors(L""), false);
        ToggleVar Snaplines = ToggleVar(false, 0, Xors(L"Enemy Snaplines"), Xors(L""), false);
        ToggleVar HeadDot = ToggleVar(false, 0, Xors(L"Enemy Head Dot"), Xors(L""), false);
        ToggleVar ViewLine = ToggleVar(false, 0, Xors(L"Enemy View Line"), Xors(L""), false);
        ToggleVar Armor = ToggleVar(false, 0, Xors(L"Enemy Armor"), Xors(L""), false);
        ToggleVar Buffs = ToggleVar(false, 0, Xors(L"Enemy Buffs"), Xors(L""), false);
        ToggleVar Weapon = ToggleVar(false, 0, Xors(L"Enemy Weapon"), Xors(L""), false);
        ToggleVar Chams = ToggleVar(false, 0, Xors(L"Enemy Chams"), Xors(L""), false);
        ToggleVar OnlyVisible = ToggleVar(false, 0, Xors(L"Enemy Only Visible"), Xors(L""), false);
        ToggleVar EnemySleeping = ToggleVar(false, 0, Xors(L"Enemy Sleeping"), Xors(L""), false);
        ToggleVar EnemyDead = ToggleVar(false, 0, Xors(L"Enemy Dead"), Xors(L""), false);
        ToggleVar EnemyWeight = ToggleVar(false, 0, Xors(L"Enemy Weight"), Xors(L""), false);
        ToggleVar EnemyExtraInfo = ToggleVar(false, 0, Xors(L"Enemy Implant / Steam"), Xors(L""), false);

        ColorVar EnemyColor = ColorVar(false, 0, FLinearColor(1.f, 0.f, 0.f, 1.f), Xors(L"Enemy Color"), Xors(L""), false);
        ColorVar EnemyNonvisibleColor = ColorVar(false, 0, FLinearColor(0.f, 1.f, 0.f, 1.f), Xors(L"Enemy Nonvisible Color"), Xors(L""), false);
        ColorVar EnemySleepingColor = ColorVar(false, 0, FLinearColor(1.f, 0.f, 0.f, 0.2f), Xors(L"Enemy Sleeping Color"), Xors(L""), false);
        ColorVar EnemyDeadColor = ColorVar(false, 0, FLinearColor(0.f, 0.f, 0.f, 1.f), Xors(L"Enemy Dead Color"), Xors(L""), false);

        ToggleVar EnemyPlayerArmorChams = ToggleVar(false, 0, Xors(L"Enemy Armor Chams"), Xors(L""), false);
        ToggleVar EnemyPlayerShieldChams = ToggleVar(false, 0, Xors(L"Enemy Shield Chams"), Xors(L""), false);
        ToggleVar EnemyPlayerWeaponChams = ToggleVar(false, 0, Xors(L"Enemy Weapon Chams"), Xors(L""), false);

        ColorVar EnemyPlayerArmorColor = ColorVar(false, 0, FLinearColor(1, 0, 0, 1), Xors(L"Enemy Player Armor Color"), Xors(L""), false);
        ColorVar EnemyPlayerShieldColor = ColorVar(false, 0, FLinearColor(1, 0, 0, 1), Xors(L"Enemy Player Shield Color"), Xors(L""), false);
        ColorVar EnemyPlayerWeaponColor = ColorVar(false, 0, FLinearColor(1, 0, 0, 1), Xors(L"Enemy Player Weapon Color"), Xors(L""), false);
    };

    namespace teamPlayer 
    {
        ToggleVar EnableTeamPlayer = ToggleVar(false, 0, Xors(L"Enable Team Player"), Xors(L""), false);
        ToggleVar CenterText = ToggleVar(true, 0, Xors(L"Center Team Text"), Xors(L"Center Esp Text"), false);
        ToggleVar OutlineText = ToggleVar(true, 0, Xors(L"Outline Team Text"), Xors(L"Outline Esp Text"), false);
        ToggleVar Name = ToggleVar(false, 0, Xors(L"Team Name"), Xors(L"Name"), false);
        ToggleVar TribeName = ToggleVar(false, 0, Xors(L"Team Tribe Name"), Xors(L""), false);
        ToggleVar Box = ToggleVar(false, 0, Xors(L"Team Box"), Xors(L""), false);
        int BoxType = 3;
        ToggleVar Health = ToggleVar(false, 0, Xors(L"Team Health"), Xors(L""), false);
        ToggleVar Torpor = ToggleVar(false, 0, Xors(L"Team Torpor"), Xors(L""), false);
        ToggleVar Bones = ToggleVar(false, 0, Xors(L"Team Bones"), Xors(L""), false);
        ToggleVar Distance = ToggleVar(false, 0, Xors(L"Team Distance"), Xors(L""), false);
        ToggleVar ViewLine = ToggleVar(false, 0, Xors(L"Team View Line"), Xors(L""), false);
        ToggleVar Armor = ToggleVar(false, 0, Xors(L"Team Armor"), Xors(L""), false);
        ToggleVar Weapon = ToggleVar(false, 0, Xors(L"Team Weapon"), Xors(L""), false);
        ToggleVar Buffs = ToggleVar(false, 0, Xors(L"Team Buffs"), Xors(L""), false);
        ToggleVar Chams = ToggleVar(false, 0, Xors(L"Team Chams"), Xors(L""), false);
        ToggleVar OnlyVisible = ToggleVar(false, 0, Xors(L"Team Only Visible"), Xors(L""), false);
        ToggleVar TeamSleeping = ToggleVar(false, 0, Xors(L"Team Sleeping"), Xors(L""), false);
        ToggleVar TeamDead = ToggleVar(false, 0, Xors(L"Team Dead"), Xors(L""), false);
        ToggleVar TeamWeight = ToggleVar(false, 0, Xors(L"Team Weight"), Xors(L""), false);
        ToggleVar TeamExtraInfo = ToggleVar(false, 0, Xors(L"Team Implant / Steam"), Xors(L""), false);

        ColorVar TeamColor = ColorVar(false, 0, FLinearColor(0.f, 0.f, 1.f, 1.f), Xors(L"Team Color"), Xors(L""), false);
        ColorVar TeamNonvisibleColor = ColorVar(false, 0, FLinearColor(0.f, 1.f, 0.f, 1.f), Xors(L"Team Nonvisible Color"), Xors(L""), false);
        ColorVar TeamSleepingColor = ColorVar(false, 0, FLinearColor(0.f, 0.f, 1.f, 0.2f), Xors(L"Team Sleeping Color"), Xors(L""), false);
        ColorVar TeamDeadColor = ColorVar(false, 0, FLinearColor(0.f, 0.f, 0.f, 1.f), Xors(L"Team Dead Color"), Xors(L""), false);

        ToggleVar TeamPlayerArmorChams = ToggleVar(false, 0, Xors(L"Team Armor Chams"), Xors(L""), false);
        ToggleVar TeamPlayerShieldChams = ToggleVar(false, 0, Xors(L"Team Shield Chams"), Xors(L""), false);
        ToggleVar TeamPlayerWeaponChams = ToggleVar(false, 0, Xors(L"Team Weapon Chams"), Xors(L""), false);

        ColorVar TeamPlayerArmorColor = ColorVar(false, 0, FLinearColor::FromRGB(255, 192, 203), Xors(L"Team Player Armor Color"), Xors(L""), false);
        ColorVar TeamPlayerShieldColor = ColorVar(false, 0, FLinearColor::FromRGB(255, 192, 203), Xors(L"Team Player Shield Color"), Xors(L""), false);
        ColorVar TeamPlayerWeaponColor = ColorVar(false, 0, FLinearColor::FromRGB(255, 192, 203), Xors(L"Team Player Weapon Color"), Xors(L""), false);
    };

    namespace enemyDino 
    {
        ToggleVar EnableEnemyDino = ToggleVar(false, 0, Xors(L"Enable Enemy Dino"), Xors(L""), false);
        ToggleVar Name = ToggleVar(false, 0, Xors(L"Enemy Dino Name"), Xors(L""), false);
        ToggleVar Health = ToggleVar(false, 0, Xors(L"Enemy Dino Health"), Xors(L""), false);
        ToggleVar Distance = ToggleVar(false, 0, Xors(L"Enemy Dino Distance"), Xors(L""), false);
        ToggleVar Buffs = ToggleVar(false, 0, Xors(L"Enemy Dino Buffs"), Xors(L""), false);
        ToggleVar Chams = ToggleVar(false, 0, Xors(L"Enemy Dino Chams"), Xors(L""), false);
        ToggleVar Aggression = ToggleVar(false, 0, Xors(L"Enemy Dino Aggression"), Xors(L""), false);
        ToggleVar OnlyVisible = ToggleVar(false, 0, Xors(L"Enemy Dino Only Visible"), Xors(L""), false);

        ColorVar EnemyDinoColor = ColorVar(false, 0, FLinearColor(1.f, 0.f, 0.f, 1.f), Xors(L"Enemy Dino Color"), Xors(L""), false);
    };

    namespace teamDino 
    {
        ToggleVar EnableTeamDino = ToggleVar(false, 0, Xors(L"Enable Team Dino"), Xors(L""), false);
        ToggleVar Name = ToggleVar(false, 0, Xors(L"Team Dino Name"), Xors(L""), false);
        ToggleVar Health = ToggleVar(false, 0, Xors(L"Team Dino Health"), Xors(L""), false);
        ToggleVar Distance = ToggleVar(false, 0, Xors(L"Team Dino Distance"), Xors(L""), false);
        ToggleVar Buffs = ToggleVar(false, 0, Xors(L"Team Dino Buffs"), Xors(L""), false);
        ToggleVar Chams = ToggleVar(false, 0, Xors(L"Team Dino Chams"), Xors(L""), false);
        ToggleVar Aggression = ToggleVar(false, 0, Xors(L"Team Dino Aggression"), Xors(L""), false);
        ToggleVar OnlyVisible = ToggleVar(false, 0, Xors(L"Team Dino Only Visible"), Xors(L""), false);

        ColorVar TeamDinoColor = ColorVar(false, 0, FLinearColor(1.f, 0.f, 0.f, 1.f), Xors(L"Team Dino Color"), Xors(L""), false);
    };

    namespace wildDino 
    {
        ToggleVar EnableWildDino = ToggleVar(false, 0, Xors(L"Enable Wild Dino"), Xors(L"Enable Wild Dino"), false);
        ToggleVar Name = ToggleVar(false, 0, Xors(L"Wild Dino Name"), Xors(L"Name"), false);
        ToggleVar Health = ToggleVar(false, 0, Xors(L"Wild Dino Health"), Xors(L"Health"), false);
        ToggleVar Distance = ToggleVar(false, 0, Xors(L"Wild Dino Distance"), Xors(L"Distance"), false);
        ToggleVar Buffs = ToggleVar(false, 0, Xors(L"Wild Dino Buffs"), Xors(L""), false);
        ToggleVar Chams = ToggleVar(false, 0, Xors(L"Wild Dino Chams"), Xors(L"Chams"), false);
        ToggleVar OnlyVisible = ToggleVar(false, 0, Xors(L"Wild Dino Only Visible"), Xors(L"Only Visible"), false);
        ColorVar WildDinoColor = ColorVar(false, 0, FLinearColor(1.f, 0.f, 0.f, 1.f), Xors(L"Wild Dino Color"), Xors(L"Wild Dino Color"), false);

        int CurrentBoss = 0;
        ToggleVar Bossfight = ToggleVar(false, 0, Xors(L"Bossfight Tribute"), Xors(L"Only Show Bossfight Tribute Dinos"), false);

        bool EnableFilter = false;
        std::wstring WildDinoString = Xors(L"");
        IntVar LevelFilter = IntVar(false, 0, 0, 0, 300, Xors(L"Level Filter"), Xors(L"Level Filter"), false, VarT::Int);
        IntVar LevelFilterType = IntVar(false, 0, 0, 0, 2, Xors(L"Level Filter Type"), Xors(L"Change filter behaviour"), false, VarT::NoToggleInt);
    };
    
    namespace miscStructure 
    {
        StructureVar SupplyDrop = StructureVar(false, 0, Xors(L"Supply Drop"), Xors(L"Draws Supply Drop"), ColorVar(false, 0, { 0,1,1,1 }, Xors(L"Supply Drop Color"), Xors(L"Color for Supply Drop"), false, VarT::NoToggleColor));
        StructureVar CaveDrop = StructureVar(false, 0, Xors(L"Cave Drop"), Xors(L"Draws Cave Drop"), ColorVar(false, 0, { 0,1,1,1 }, Xors(L"Cave Drop Color"), Xors(L"Color for Cave Drop"), false, VarT::NoToggleColor));
        StructureVar Artifact = StructureVar(false, 0, Xors(L"Artifact"), Xors(L"Draws Artifact"), ColorVar(false, 0, { 0,1,1,1 }, Xors(L"Artifact Color"), Xors(L"Color for Artifact"), false, VarT::NoToggleColor));
        StructureVar BeaverDam = StructureVar(false, 0, Xors(L"Beaver Dam"), Xors(L"Draws Beaver Dam"), ColorVar(false, 0, { 0,1,1,1 }, Xors(L"Beaver Dam Color"), Xors(L"Color for Beaver Dam"), false, VarT::NoToggleColor));
        StructureVar BeeHive = StructureVar(false, 0, Xors(L"Bee Hive"), Xors(L"Draws Bee Hive"), ColorVar(false, 0, { 0,1,1,1 }, Xors(L"Bee Hive Color"), Xors(L"Color for Bee Hive"), false, VarT::NoToggleColor));
        StructureVar Note = StructureVar(false, 0, Xors(L"Note"), Xors(L"Draws Explorer Notes"), ColorVar(false, 0, { 0,1,1,1 }, Xors(L"Note Color"), Xors(L"Color for Note"), false, VarT::NoToggleColor));
        ToggleVar Teleport = ToggleVar(false, 0, Xors(L"Teleport Esp"), Xors(L"Draws Teleport Locations"), false);
        ToggleVar DrawDroppedItems = ToggleVar(false, 0, Xors(L"Dropped Items"), Xors(L"Draws dropped items' name"), false);
        ToggleVar DrawDroppedEggs = ToggleVar(false, 0, Xors(L"Dropped Eggs"), Xors(L"Draws eggs"), false);
        ToggleVar BossTeleportEsp = ToggleVar(false, 0, Xors(L"Boss Esp"), Xors(L"Draws Boss Teleport Location"), false);
        ToggleVar ProcessStructures = ToggleVar(true, 0, Xors(L"Process Structures"), Xors(L"Disable to ignore all structures"), false);
        StructureVar ChargeNode = StructureVar(false, 0, Xors(L"Charge Node"), Xors(L"Draws Charge Node"), ColorVar(false, 0, { 0,1,1,1 }, Xors(L"Charge Node Color"), Xors(L"Color for Charge Node"), false, VarT::NoToggleColor));
        StructureVar Nest = StructureVar(false, 0, Xors(L"Nest"), Xors(L"Wyvern / Drake Nest"), ColorVar(false, 0, { 0,1,1,1 }, Xors(L"Nest Color"), Xors(L"Color for Nest"), false, VarT::NoToggleColor));
    };

    namespace enemyStructure 
    {
        ToggleVar DrawEStructures = ToggleVar(false, 0,Xors(L"Draw EStructures"),Xors(L"Draws EStructures"), false);
        StructureVar EnemySleepingBag = StructureVar(false, 0,Xors(L"Enemy Sleeping Bag"),Xors(L"Draws Sleeping Bag"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Sleeping Bag EColor"),Xors(L"EColorfor Sleeping Bag"), false, VarT::NoToggleColor));
        StructureVar EnemyBed = StructureVar(false, 0,Xors(L"Enemy Bed"),Xors(L"Draws Bed"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Bed EColor"),Xors(L"EColorfor Bed"), false, VarT::NoToggleColor));
        StructureVar EnemyBunkBed = StructureVar(false, 0,Xors(L"Enemy Bunk Bed"),Xors(L"Draws Bunk Bed"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Bunk Bed EColor"),Xors(L"EColorfor Bunk Bed"), false, VarT::NoToggleColor));
        StructureVar EnemySmallTeleporter = StructureVar(false, 0,Xors(L"Enemy Small Teleporter"),Xors(L"Draws Small Teleporter"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Small Teleporter EColor"),Xors(L"EColorfor Small Teleporter"), false, VarT::NoToggleColor));
        StructureVar EnemyMediumTeleporter = StructureVar(false, 0,Xors(L"Enemy Medium Teleporter"),Xors(L"Draws Medium Teleporter"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Medium Teleporter EColor"),Xors(L"EColorfor Medium Teleporter"), false, VarT::NoToggleColor));
        StructureVar EnemyLargeTeleporter = StructureVar(false, 0,Xors(L"Enemy Large Teleporter"),Xors(L"Draws Large Teleporter"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Large Teleporter EColor"),Xors(L"EColorfor Large Teleporter"), false, VarT::NoToggleColor));
        StructureExtraVar EnemyAutoTurret = StructureExtraVar(false, 0,Xors(L"Enemy Auto Turret"),Xors(L"Draws Auto Turret"), ColorVar(false, 0, { 0.78f,0.03f,0.08f,1.f },Xors(L"Auto Turret EColor"),Xors(L"EColorfor Auto Turret"), false, VarT::NoToggleColor));
        StructureExtraVar EnemyHeavyTurret = StructureExtraVar(false, 0,Xors(L"Enemy Heavy Turret"),Xors(L"Draws Heavy Turret"), ColorVar(false, 0, { 0.78f,0.03f,0.08f,1.f },Xors(L"Heavy Turret EColor"),Xors(L"EColorfor Heavy Turret"), false, VarT::NoToggleColor));
        StructureExtraVar EnemyTekTurret = StructureExtraVar(false, 0,Xors(L"Enemy Tek Turret"),Xors(L"Draws Tek Turret"), ColorVar(false, 0, { 0.11f,0.56f,1.f,1.f },Xors(L"Tek Turret EColor"),Xors(L"EColorfor Tek Turret"), false, VarT::NoToggleColor));
        StructureVar EnemySmallCropPlot = StructureVar(false, 0,Xors(L"Enemy Small Crop Plot"),Xors(L"Draws Small Crop Plot"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Small Crop Plot EColor"),Xors(L"EColorfor Small Crop Plot"), false, VarT::NoToggleColor));
        StructureVar EnemyMediumCropPlot = StructureVar(false, 0,Xors(L"Enemy Medium Crop Plot"),Xors(L"Draws Medium Crop Plot"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Medium Crop Plot EColor"),Xors(L"EColorfor Medium Crop Plot"), false, VarT::NoToggleColor));
        StructureVar EnemyLargeCropPlot = StructureVar(false, 0,Xors(L"Enemy Large Crop Plot"),Xors(L"Draws Large Crop Plot"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Large Crop Plot EColor"),Xors(L"EColorfor Large Crop Plot"), false, VarT::NoToggleColor));
        StructureVar EnemyElectricalGenerator = StructureVar(false, 0,Xors(L"Enemy Electrical Generator"),Xors(L"Draws Electrical Generator"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Electrical Generator EColor"),Xors(L"EColorfor Electrical Generator"), false, VarT::NoToggleColor));
        StructureVar EnemyEnemyTekGenerator = StructureVar(false, 0,Xors(L"Enemy Tek Generator"),Xors(L"Draws Tek Generator"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Tek Generator EColor"),Xors(L"EColorfor Tek Generator"), false, VarT::NoToggleColor));
        StructureVar EnemyTekTransmitter = StructureVar(false, 0,Xors(L"Enemy Tek Transmitter"),Xors(L"Draws TeK Transmitter"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Tek Transmitter TColor"),Xors(L"Color for Tek Transmitter"), false, VarT::NoToggleColor));
        StructureVar EnemyCryoFridge = StructureVar(false, 0,Xors(L"Enemy Cryo Fridge"),Xors(L"Draws Cryo Fridge"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Cryo Fridge EColor"),Xors(L"EColorfor Cryo Fridge"), false, VarT::NoToggleColor));
        StructureVar EnemyCloningChamber = StructureVar(false, 0,Xors(L"Enemy Cloning Chamber"),Xors(L"Draws Cloning Chamber"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Cloning Chamber EColor"),Xors(L"EColorfor Cloning Chamber"), false, VarT::NoToggleColor));
        StructureVar EnemyVacuumCompartment = StructureVar(false, 0,Xors(L"Enemy Vacuum Compartment"),Xors(L"Draws Vacuum Compartment"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Vacuum Compartment EColor"),Xors(L"EColorfor Vacuum Compartment"), false, VarT::NoToggleColor));
        StructureVar EnemyFoundation = StructureVar(false, 0,Xors(L"Enemy Foundation"),Xors(L"Draws Foundation"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Foundation EColor"),Xors(L"EColorfor Foundation"), false, VarT::NoToggleColor));
        StructureVar EnemyWall = StructureVar(false, 0,Xors(L"Enemy Wall"),Xors(L"Draws Wall"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Wall EColor"),Xors(L"EColorfor Wall"), false, VarT::NoToggleColor));
        StructureVar EnemyDoor = StructureVar(false, 0,Xors(L"Enemy Door"),Xors(L"Draws Door"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Door EColor"),Xors(L"EColorfor Door"), false, VarT::NoToggleColor));
        StructureVar EnemyDoorFrame = StructureVar(false, 0,Xors(L"Enemy Door Frame"),Xors(L"Draws Door Frame"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Door Frame EColor"),Xors(L"EColorfor Door Frame"), false, VarT::NoToggleColor));
        StructureVar EnemyCeiling = StructureVar(false, 0,Xors(L"Enemy Ceiling"),Xors(L"Draws Ceiling"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Ceiling EColor"),Xors(L"EColorfor Ceiling"), false, VarT::NoToggleColor));
        StructureVar EnemyFenceFoundation = StructureVar(false, 0,Xors(L"Enemy Fence Foundation"),Xors(L"Draws Fence Foundation"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Fence Foundation EColor"),Xors(L"EColorfor Fence Foundation"), false, VarT::NoToggleColor));
        StructureVar EnemySmallStorageBox = StructureVar(false, 0,Xors(L"Enemy Small Storage Box"),Xors(L"Draws Small Storage Box"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Small Storage Box EColor"),Xors(L"EColorfor Small Storage Box"), false, VarT::NoToggleColor));
        StructureVar EnemyLargeStorageBox = StructureVar(false, 0,Xors(L"Enemy Large Storage Box"),Xors(L"Draws Large Storage Box"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Large Storage Box EColor"),Xors(L"EColorfor Large Storage Box"), false, VarT::NoToggleColor));
        StructureVar EnemyVault = StructureVar(false, 0,Xors(L"Enemy Vault"),Xors(L"Draws Vault"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Vault EColor"),Xors(L"EColorfor Vault"), false, VarT::NoToggleColor));
        StructureVar EnemyRefrigerator = StructureVar(false, 0,Xors(L"Enemy Refrigerator"),Xors(L"Draws Refrigerator"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Refrigerator EColor"),Xors(L"EColorfor Refrigerator"), false, VarT::NoToggleColor));
        StructureVar EnemyAirConditioner = StructureVar(false, 0,Xors(L"Enemy Air Conditioner"),Xors(L"Draws Air Conditioner"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Air Conditioner EColor"),Xors(L"EColorfor Air Conditioner"), false, VarT::NoToggleColor));
        StructureVar EnemyDedicatedStorage = StructureVar(false, 0,Xors(L"Enemy Dedicated Storage"),Xors(L"Draws Dedicated Storage"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Dedicated Storage EColor"),Xors(L"EColorfor Dedicated Storage"), false, VarT::NoToggleColor));
        StructureVar EnemyTekForceField = StructureVar(false, 0,Xors(L"Enemy Tek Force Field"),Xors(L"Draws Tek Force Field"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Tek Force Field EColor"),Xors(L"EColorfor Tek Force Field"), false, VarT::NoToggleColor));
        StructureVar EnemyReplicator = StructureVar(false, 0,Xors(L"Enemy Replicator"),Xors(L"Draws Replicator"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Replicator EColor"),Xors(L"EColorfor Replicator"), false, VarT::NoToggleColor));
        StructureVar EnemyFabricator = StructureVar(false, 0,Xors(L"Enemy Fabricator"),Xors(L"Draws Fabricator"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Fabricator EColor"),Xors(L"EColorfor Fabricator"), false, VarT::NoToggleColor));
        StructureVar EnemySmithy = StructureVar(false, 0,Xors(L"Enemy Smithy"),Xors(L"Draws Smithy"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Smithy EColor"),Xors(L"EColorfor Smithy"), false, VarT::NoToggleColor));
        StructureVar EnemyMortarAndPestle = StructureVar(false, 0,Xors(L"Enemy Mortar And Pestle"),Xors(L"Draws Mortar And Pestle"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Mortar And Pestle EColor"),Xors(L"EColorfor Mortar And Pestle"), false, VarT::NoToggleColor));
        StructureVar EnemyChemistryBench = StructureVar(false, 0,Xors(L"Enemy Chemistry Bench"),Xors(L"Draws Chemistry Bench"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Chemistry Bench EColor"),Xors(L"EColorfor Chemistry Bench"), false, VarT::NoToggleColor));
        StructureVar EnemyIndustrialForge = StructureVar(false, 0,Xors(L"Enemy Industrial Forge"),Xors(L"Draws Industrial Forge"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Industrial Forge EColor"),Xors(L"EColorfor Industrial Forge"), false, VarT::NoToggleColor));
        StructureVar EnemyIndustrialGrill = StructureVar(false, 0,Xors(L"Enemy Industrial Grill"),Xors(L"Draws Industrial Grill"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Industrial Grill EColor"),Xors(L"EColorfor Industrial Grill"), false, VarT::NoToggleColor));
        StructureVar EnemyIndustrialCookingPot = StructureVar(false, 0,Xors(L"Enemy Industrial Cooking Pot"),Xors(L"Draws Industrial Cooking Pot"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Industrial Cooking Pot EColor"),Xors(L"EColorfor Industrial Cooking Pot"), false, VarT::NoToggleColor));
        StructureVar EnemyGrinder = StructureVar(false, 0,Xors(L"Enemy Grinder"),Xors(L"Draws Grinder"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Grinder EColor"),Xors(L"EColorfor Grinder"), false, VarT::NoToggleColor));
        StructureVar EnemyCookingPot = StructureVar(false, 0,Xors(L"Enemy Cooking Pot"),Xors(L"Draws Cooking Pot"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Cooking Pot EColor"),Xors(L"EColorfor Cooking Pot"), false, VarT::NoToggleColor));
        StructureVar EnemyC4Charge = StructureVar(false, 0,Xors(L"Enemy C4 Charge"),Xors(L"Draws C4 Charge"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"C4 Charge EColor"),Xors(L"EColorfor C4 Charge"), false, VarT::NoToggleColor));
        StructureVar EnemyBearTrap = StructureVar(false, 0,Xors(L"Enemy Bear Trap"),Xors(L"Draws Bear Trap"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Bear Trap EColor"),Xors(L"EColorfor Bear Trap"), false, VarT::NoToggleColor));
        StructureVar EnemyLargeBearTrap = StructureVar(false, 0,Xors(L"Enemy Large Bear Trap"),Xors(L"Draws Large Bear Trap"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Large Bear Trap EColor"),Xors(L"EColorfor Large Bear Trap"), false, VarT::NoToggleColor));
        StructureVar EnemyWaterMine = StructureVar(false, 0,Xors(L"Enemy Water Mine"),Xors(L"Draws Water Mine"), ColorVar(false, 0, { 1,0,1,1 },Xors(L"Water Mine EColor"),Xors(L"EColorfor Water Mine"), false, VarT::NoToggleColor));
        StructureVar EnemyItemCache = StructureVar(false, 0, Xors(L"Enemy Item Cache"), Xors(L"Draws Item Cache"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Item Cache EColor"), Xors(L"EColorfor Item Cache"), false, VarT::NoToggleColor));
        StructureVar EnemyCliffPlatform = StructureVar(false, 0, Xors(L"Enemy Cliff Platform"), Xors(L"Draws Cliff Platform"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Cliff Platform EColor"), Xors(L"EColorfor Cliff Platform"), false, VarT::NoToggleColor));
        StructureVar EnemyLinkedStorageBox = StructureVar(false, 0, Xors(L"Enemy Linked Storage Box"), Xors(L"Enemy Linked Storage Box"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Linked Storage Box EColor"), Xors(L"Color for Linked Storage Box"), false, VarT::NoToggleColor));
        StructureVar EnemyPlantX = StructureVar(false, 0, Xors(L"Enemy Plant X"), Xors(L"Draws Plant X"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Plant X EColor"), Xors(L"Color for Plant X"), false, VarT::NoToggleColor));
        StructureExtraVar EnemyTeslaCoil = StructureExtraVar(false, 0, Xors(L"Enemy Tesla Coil"), Xors(L"Draws Tesla Coil"), ColorVar(false, 0, { 0.11f,0.56f,1.f,1.f }, Xors(L"Tesla Coil EColor"), Xors(L"EColorfor Tesla Coil"), false, VarT::NoToggleColor));

        std::vector<StructureVar*> EnemyStructureVars = {};
    };

    namespace teamStructure
    {
        ToggleVar DrawTStructures = ToggleVar(false, 0,Xors(L"Draw TStructures"),Xors(L"Draws TStructures"), false);
        StructureVar TeamSleepingBag = StructureVar(false, 0,Xors(L"Team Sleeping Bag"),Xors(L"Draws Sleeping Bag"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Sleeping Bag TColor"),Xors(L"Color for Sleeping Bag"), false, VarT::NoToggleColor));
        StructureVar TeamBed = StructureVar(false, 0,Xors(L"Team Bed"),Xors(L"Draws Bed"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Bed TColor"),Xors(L"Color for Bed"), false, VarT::NoToggleColor));
        StructureVar TeamBunkBed = StructureVar(false, 0,Xors(L"Team Bunk Bed"),Xors(L"Draws Bunk Bed"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Bunk Bed TColor"),Xors(L"Color for Bunk Bed"), false, VarT::NoToggleColor));
        StructureVar TeamSmallTeleporter = StructureVar(false, 0,Xors(L"Team Small Teleporter"),Xors(L"Draws Small Teleporter"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Small Teleporter TColor"),Xors(L"Color for Small Teleporter"), false, VarT::NoToggleColor));
        StructureVar TeamMediumTeleporter = StructureVar(false, 0,Xors(L"Team Medium Teleporter"),Xors(L"Draws Medium Teleporter"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Medium Teleporter TColor"),Xors(L"Color for Medium Teleporter"), false, VarT::NoToggleColor));
        StructureVar TeamLargeTeleporter = StructureVar(false, 0,Xors(L"Team Large Teleporter"),Xors(L"Draws Large Teleporter"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Large Teleporter TColor"),Xors(L"Color for Large Teleporter"), false, VarT::NoToggleColor));
        StructureExtraVar TeamAutoTurret = StructureExtraVar(false, 0,Xors(L"Team Auto Turret"),Xors(L"Draws Auto Turret"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Auto Turret TColor"),Xors(L"Color for Auto Turret"), false, VarT::NoToggleColor));
        StructureExtraVar TeamHeavyTurret = StructureExtraVar(false, 0,Xors(L"Team Heavy Turret"),Xors(L"Draws Heavy Turret"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Heavy Turret TColor"),Xors(L"Color for Heavy Turret"), false, VarT::NoToggleColor));
        StructureExtraVar TeamTekTurret = StructureExtraVar(false, 0,Xors(L"Team Tek Turret"),Xors(L"Draws Tek Turret"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Tek Turret TColor"),Xors(L"Color for Tek Turret"), false, VarT::NoToggleColor));
        StructureVar TeamSmallCropPlot = StructureVar(false, 0,Xors(L"Team Small Crop Plot"),Xors(L"Draws Small Crop Plot"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Small Crop Plot TColor"),Xors(L"Color for Small Crop Plot"), false, VarT::NoToggleColor));
        StructureVar TeamMediumCropPlot = StructureVar(false, 0,Xors(L"Team Medium Crop Plot"),Xors(L"Draws Medium Crop Plot"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Medium Crop Plot TColor"),Xors(L"Color for Medium Crop Plot"), false, VarT::NoToggleColor));
        StructureVar TeamLargeCropPlot = StructureVar(false, 0,Xors(L"Team Large Crop Plot"),Xors(L"Draws Large Crop Plot"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Large Crop Plot TColor"),Xors(L"Color for Large Crop Plot"), false, VarT::NoToggleColor));
        StructureVar TeamElectricalGenerator = StructureVar(false, 0,Xors(L"Team Electrical Generator"),Xors(L"Draws Electrical Generator"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Electrical Generator TColor"),Xors(L"Color for Electrical Generator"), false, VarT::NoToggleColor));
        StructureVar TeamTeamTekGenerator = StructureVar(false, 0,Xors(L"Team Tek Generator"),Xors(L"Draws Tek Generator"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Tek Generator TColor"),Xors(L"Color for Tek Generator"), false, VarT::NoToggleColor));
        StructureVar TeamTekTransmitter = StructureVar(false, 0,Xors(L"Team Tek Transmitter"),Xors(L"Draws TeK Transmitter"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Tek Transmitter TColor"),Xors(L"Color for Tek Transmitter"), false, VarT::NoToggleColor));
        StructureVar TeamCryoFridge = StructureVar(false, 0,Xors(L"Team Cryo Fridge"),Xors(L"Draws Cryo Fridge"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Cryo Fridge TColor"),Xors(L"Color for Cryo Fridge"), false, VarT::NoToggleColor));
        StructureVar TeamCloningChamber = StructureVar(false, 0,Xors(L"Team Cloning Chamber"),Xors(L"Draws Cloning Chamber"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Cloning Chamber TColor"),Xors(L"Color for Cloning Chamber"), false, VarT::NoToggleColor));
        StructureVar TeamVacuumCompartment = StructureVar(false, 0,Xors(L"Team Vacuum Compartment"),Xors(L"Draws Vacuum Compartment"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Vacuum Compartment TColor"),Xors(L"Color for Vacuum Compartment"), false, VarT::NoToggleColor));
        StructureVar TeamFoundation = StructureVar(false, 0,Xors(L"Team Foundation"),Xors(L"Draws Foundation"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Foundation TColor"),Xors(L"Color for Foundation"), false, VarT::NoToggleColor));
        StructureVar TeamWall = StructureVar(false, 0,Xors(L"Team Wall"),Xors(L"Draws Wall"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Wall TColor"),Xors(L"Color for Wall"), false, VarT::NoToggleColor));
        StructureVar TeamDoor = StructureVar(false, 0,Xors(L"Team Door"),Xors(L"Draws Door"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Door TColor"),Xors(L"Color for Door"), false, VarT::NoToggleColor));
        StructureVar TeamDoorFrame = StructureVar(false, 0,Xors(L"Team Door Frame"),Xors(L"Draws Door Frame"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Door Frame TColor"),Xors(L"Color for Door Frame"), false, VarT::NoToggleColor));
        StructureVar TeamCeiling = StructureVar(false, 0,Xors(L"Team Ceiling"),Xors(L"Draws Ceiling"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Ceiling TColor"),Xors(L"Color for Ceiling"), false, VarT::NoToggleColor));
        StructureVar TeamFenceFoundation = StructureVar(false, 0,Xors(L"Team Fence Foundation"),Xors(L"Draws Fence Foundation"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Fence Foundation TColor"),Xors(L"Color for Fence Foundation"), false, VarT::NoToggleColor));
        StructureVar TeamSmallStorageBox = StructureVar(false, 0,Xors(L"Team Small Storage Box"),Xors(L"Draws Small Storage Box"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Small Storage Box TColor"),Xors(L"Color for Small Storage Box"), false, VarT::NoToggleColor));
        StructureVar TeamLargeStorageBox = StructureVar(false, 0,Xors(L"Team Large Storage Box"),Xors(L"Draws Large Storage Box"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Large Storage Box TColor"),Xors(L"Color for Large Storage Box"), false, VarT::NoToggleColor));
        StructureVar TeamVault = StructureVar(false, 0,Xors(L"Team Vault"),Xors(L"Draws Vault"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Vault TColor"),Xors(L"Color for Vault"), false, VarT::NoToggleColor));
        StructureVar TeamRefrigerator = StructureVar(false, 0,Xors(L"Team Refrigerator"),Xors(L"Draws Refrigerator"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Refrigerator TColor"),Xors(L"Color for Refrigerator"), false, VarT::NoToggleColor));
        StructureVar TeamAirConditioner = StructureVar(false, 0,Xors(L"Team Air Conditioner"),Xors(L"Draws Air Conditioner"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Air Conditioner TColor"),Xors(L"Color for Air Conditioner"), false, VarT::NoToggleColor));
        StructureVar TeamDedicatedStorage = StructureVar(false, 0,Xors(L"Team Dedicated Storage"),Xors(L"Draws Dedicated Storage"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Dedicated Storage TColor"),Xors(L"Color for Dedicated Storage"), false, VarT::NoToggleColor));
        StructureVar TeamTekForceField = StructureVar(false, 0,Xors(L"Team Tek Force Field"),Xors(L"Draws Tek Force Field"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Tek Force Field TColor"),Xors(L"Color for Tek Force Field"), false, VarT::NoToggleColor));
        StructureVar TeamReplicator = StructureVar(false, 0,Xors(L"Team Replicator"),Xors(L"Draws Replicator"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Replicator TColor"),Xors(L"Color for Replicator"), false, VarT::NoToggleColor));
        StructureVar TeamFabricator = StructureVar(false, 0,Xors(L"Team Fabricator"),Xors(L"Draws Fabricator"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Fabricator TColor"),Xors(L"Color for Fabricator"), false, VarT::NoToggleColor));
        StructureVar TeamSmithy = StructureVar(false, 0,Xors(L"Team Smithy"),Xors(L"Draws Smithy"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Smithy TColor"),Xors(L"Color for Smithy"), false, VarT::NoToggleColor));
        StructureVar TeamMortarAndPestle = StructureVar(false, 0,Xors(L"Team Mortar And Pestle"),Xors(L"Draws Mortar And Pestle"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Mortar And Pestle TColor"),Xors(L"Color for Mortar And Pestle"), false, VarT::NoToggleColor));
        StructureVar TeamChemistryBench = StructureVar(false, 0,Xors(L"Team Chemistry Bench"),Xors(L"Draws Chemistry Bench"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Chemistry Bench TColor"),Xors(L"Color for Chemistry Bench"), false, VarT::NoToggleColor));
        StructureVar TeamIndustrialForge = StructureVar(false, 0,Xors(L"Team Industrial Forge"),Xors(L"Draws Industrial Forge"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Industrial Forge TColor"),Xors(L"Color for Industrial Forge"), false, VarT::NoToggleColor));
        StructureVar TeamIndustrialGrill = StructureVar(false, 0,Xors(L"Team Industrial Grill"),Xors(L"Draws Industrial Grill"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Industrial Grill TColor"),Xors(L"Color for Industrial Grill"), false, VarT::NoToggleColor));
        StructureVar TeamIndustrialCookingPot = StructureVar(false, 0,Xors(L"Team Industrial Cooking Pot"),Xors(L"Draws Industrial Cooking Pot"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Industrial Cooking Pot TColor"),Xors(L"Color for Industrial Cooking Pot"), false, VarT::NoToggleColor));
        StructureVar TeamGrinder = StructureVar(false, 0,Xors(L"Team Grinder"),Xors(L"Draws Grinder"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Grinder TColor"),Xors(L"Color for Grinder"), false, VarT::NoToggleColor));
        StructureVar TeamCookingPot = StructureVar(false, 0,Xors(L"Team Cooking Pot"),Xors(L"Draws Cooking Pot"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Cooking Pot TColor"),Xors(L"Color for Cooking Pot"), false, VarT::NoToggleColor));
        StructureVar TeamC4Charge = StructureVar(false, 0,Xors(L"Team C4 Charge"),Xors(L"Draws C4 Charge"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"C4 Charge TColor"),Xors(L"Color for C4 Charge"), false, VarT::NoToggleColor));
        StructureVar TeamBearTrap = StructureVar(false, 0,Xors(L"Team Bear Trap"),Xors(L"Draws Bear Trap"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Bear Trap TColor"),Xors(L"Color for Bear Trap"), false, VarT::NoToggleColor));
        StructureVar TeamLargeBearTrap = StructureVar(false, 0,Xors(L"Team Large Bear Trap"),Xors(L"Draws Large Bear Trap"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Large Bear Trap TColor"),Xors(L"Color for Large Bear Trap"), false, VarT::NoToggleColor));
        StructureVar TeamWaterMine = StructureVar(false, 0,Xors(L"Team Water Mine"),Xors(L"Draws Water Mine"), ColorVar(false, 0, { 0,1,0,1 },Xors(L"Water Mine TColor"),Xors(L"Color for Water Mine"), false, VarT::NoToggleColor));
        StructureVar TeamItemCache = StructureVar(false, 0, Xors(L"Team Item Cache"), Xors(L"Draws Item Cache"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Item Cache TColor"), Xors(L"Color for Item Cache"), false, VarT::NoToggleColor));
        StructureVar TeamCliffPlatform = StructureVar(false, 0, Xors(L"Team Cliff Platform"), Xors(L"Draws Cliff Platform"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Cliff Platform TColor"), Xors(L"Color for Cliff Platform"), false, VarT::NoToggleColor));
        StructureVar TeamLinkedStorageBox = StructureVar(false, 0, Xors(L"Team Linked Storage Box"), Xors(L"Draws Linked Storage Box"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Linked Storage Box TColor"), Xors(L"Color for Linked Storage Box"), false, VarT::NoToggleColor));
        StructureVar TeamPlantX = StructureVar(false, 0, Xors(L"Team Plant X"), Xors(L"Draws Plant X"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Plant X TColor"), Xors(L"Color for Plant X"), false, VarT::NoToggleColor));
        StructureExtraVar TeamTeslaCoil = StructureExtraVar(false, 0, Xors(L"Team Tesla Coil"), Xors(L"Draws Tesla Coil"), ColorVar(false, 0, { 0.11f,0.56f,1.f,1.f }, Xors(L"Tesla Coil TColor"), Xors(L"TColorfor Tesla Coil"), false, VarT::NoToggleColor));

        std::vector<StructureVar*> TeamStructureVars = {};
    };

    namespace radar 
    {
		ToggleVar DrawRadar = ToggleVar(false, 0, Xors(L"Draw Radar"), Xors(L"Draw Radar"), false);
		ToggleVar DrawRadarBackground = ToggleVar(false, 0, Xors(L"Draw Radar Background"), Xors(L"Draw Radar Background"), false);
        FloatVar RadarBackgroundAlpha = FloatVar(false, 0, 0.5f, 0.f, 1.f, Xors(L"Radar Background Alpha"), Xors(L"Radar Background Alpha"), false, VarT::NoToggleFloat);
		ToggleVar DrawRadarNESW = ToggleVar(false, 0, Xors(L"Radar Directions"), Xors(L"Show North/East/South/West"), false);
		IntVar RadarSize = IntVar(false, 0, 1, 1, 100, Xors(L"Radar Size"), Xors(L"Change Radar Size"), false, VarT::NoToggleInt);
		IntVar RadarZoom = IntVar(false, 0, 1, 1, 200, Xors(L"Radar Zoom"), Xors(L"Change Zoom for seeing less or more"), false, VarT::NoToggleInt);
        FloatVar RadarX = FloatVar(false, 0, 0.05f, 0.f, 1.f, Xors(L"Radar X"), Xors(L"Radar X"), false, VarT::NoToggleFloat);
        FloatVar RadarY = FloatVar(false, 0, 0.6f, 0.f, 1.f, Xors(L"Radar Y"), Xors(L"Radar Y"), false, VarT::NoToggleFloat);
		ToggleVar DrawRadarEnemy = ToggleVar(false, 0, Xors(L"Draw Enemy Players"), Xors(L"Show Enemy Players on Radar"), false);
		ToggleVar DrawRadarTeam = ToggleVar(false, 0, Xors(L"Draw Team Players"), Xors(L"Show Team Players on Radar"), false);
		ToggleVar DrawRadarEnemyDinos = ToggleVar(false, 0, Xors(L"Draw Enemy Dinos"), Xors(L"Show Enemy Dinos on Radar"), false);
		ToggleVar DrawRadarTeamDinos = ToggleVar(false, 0, Xors(L"Draw Team Dinos"), Xors(L"Show Team Dinos on Radar"), false);
        ToggleVar CrosshairRadar2D = ToggleVar(false, 0, Xors(L"Crosshair Radar 2D"), Xors(L"2D Indicator For Enemy Players"), false);
        ToggleVar ShowSleepingPlayers2D = ToggleVar(false, 0, Xors(L"Show Sleeping Players 2D"), Xors(L""), false);
        FloatVar CrosshairRadar2DMax = FloatVar(false, 0, 1000.f, 0.f, 10000.f, Xors(L"Crosshair Radar 2D Max"), Xors(L""), false, VarT::NoToggleFloat);
        FloatVar CrosshairRadar2DMin = FloatVar(false, 0, 0.f, 0.f, 10000.f, Xors(L"Crosshair Radar 2D Min"), Xors(L""), false, VarT::NoToggleFloat);
        FloatVar CrosshairRadar2DScale = FloatVar(false, 0, 1.f, 0.f, 10.f, Xors(L"Crosshair Radar 2D Scale"), Xors(L""), false, VarT::NoToggleFloat);
        ToggleVar CrosshairRadar3D  = ToggleVar(false, 0, Xors(L"Crosshair Radar 3D"), Xors(L"3D Indicator For Enemy Players"), false);
        ToggleVar ShowSleepingPlayers3D = ToggleVar(false, 0, Xors(L"Show Sleeping Players 3D"), Xors(L""), false);
        FloatVar CrosshairRadar3DMax    = FloatVar(false, 0, 1000.f, 0.f, 10000.f, Xors(L"Crosshair Radar 3D Max"), Xors(L""), false, VarT::NoToggleFloat);
        FloatVar CrosshairRadar3DMin   = FloatVar(false, 0, 0.f, 0.f, 10000.f, Xors(L"Crosshair Radar 3D Min"), Xors(L""), false, VarT::NoToggleFloat);
        FloatVar CrosshairRadar3DScale = FloatVar(false, 0, 1.f, 0.f, 10.f, Xors(L"Crosshair Radar 3D Scale"), Xors(L""), false, VarT::NoToggleFloat);
        

        ToggleVar DrawCrosshairRadar = ToggleVar(false, 0, Xors(L"Draw Crosshair Radar"), Xors(L"Enemy player indicator"), false);
        FloatVar CrossHairZoom = FloatVar(false, 0, 1.f, 1.f, 200.f, Xors(L"Zoom"), Xors(L""), false, VarT::NoToggleFloat);
        FloatVar CrossHairMinDistance = FloatVar(false, 0, 50.f, 0.f, 100.f, Xors(L"Min Distance"), Xors(L""), false, VarT::NoToggleFloat);
        FloatVar CrossHairMaxDistance = FloatVar(false, 0, 150.f, 100.f, 300.f, Xors(L"Max Distance"), Xors(L""), false, VarT::NoToggleFloat);
        FloatVar CrossHairScaleMinDistance = FloatVar(false, 0, 50.f, 0.f, 100.f, Xors(L"Scale Min Distance"), Xors(L""), false, VarT::NoToggleFloat);
        FloatVar CrossHairDegreesBetween = FloatVar(false, 0, 50.f, 0.f, 100.f, Xors(L"Arrow Width"), Xors(L""), false, VarT::NoToggleFloat);
        ToggleVar CrossHairShowSleepingPlayers = ToggleVar(false, 0, Xors(L"Show Sleeping Players"), Xors(L""), false);
        ToggleVar CrossHairShowTribePlayers = ToggleVar(false, 0, Xors(L"Show Tribe Players"), Xors(L""), false);
    };

    namespace playerMovement
    {
        KeyBindOptionalVar BunnyHop = KeyBindOptionalVar(false, 0, VK_SPACE, true, Xors(L"Bunny Hop"), Xors(L"Bunny Hop"), false);
        ToggleVar Airstuck = ToggleVar(false, 'Q', Xors(L"Airstuck"), Xors(L"Airstuck"), false);
        ToggleVar BetterAirstuck = ToggleVar(false, 'Q', Xors(L"Better Airstuck"), Xors(L"Better Airstuck"), false);
        ToggleVar Desync = ToggleVar(false, 'Q', Xors(L"Better Airstuck"), Xors(L"Better Airstuck"), false);
        ToggleVar SpeedHack = ToggleVar(false, VK_TAB, Xors(L"Speed Hack"), Xors(L"Speed Hack"), false);
		KeyBindOptionalVar ManualRemountSpeedHack = KeyBindOptionalVar(false, 0, VK_TAB, false, Xors(L"Manual Remount Speed Hack"), Xors(L"Will wait for you to remount"), false);
		KeyBindVar ManualRemountKey = KeyBindVar(false, 0, VK_TAB, Xors(L"Manual Remount Key"), Xors(L""), false);
        FloatVar SpeedHackValue = FloatVar(false, 0, 1.f, 1.f, 10.f, Xors(L"Speed Hack Value"), Xors(L"Speed Hack Value"), false, VarT::NoToggleFloat);
        FloatVar SpeedHackValueTwo = FloatVar(false, 0, 1.f, 1.f, 25.f, Xors(L"Speed Hack Fix"), Xors(L"Speed Hack Fix"), false, VarT::NoToggleFloat);
        KeyBindVar TekJump = KeyBindVar(false, 0, VK_SPACE, Xors(L"Instant Jump"), Xors(L"Tek Jump"), false);
        KeyBindVar TekHover = KeyBindVar(false, 0, VK_LSHIFT, Xors(L"Chest Hover"), Xors(L"Hover with the tek chest"), false);
        KeyBindVar TekLegs = KeyBindVar(false, 0, VK_XBUTTON2, Xors(L"Instant Legs"), Xors(L"Tek Legs"), false);
        KeyBindVar TekGaunts = KeyBindVar(false, 0, VK_RBUTTON, Xors(L"Instant Gaunt"), Xors(L"Tek Gaunts"), false);
        KeyBindVar TekGauntsStop = KeyBindVar(false, 0, 0, Xors(L"Gaunts stop"), Xors(L"Removes all velocity"), false);
        KeyBindOptionalVar SpoofCrouch = KeyBindOptionalVar(false, 0, 0, false, Xors(L"Spoof Crouch"), Xors(L"Crouch on serverside"), false);
        KeyBindOptionalVar SpoofProne = KeyBindOptionalVar(false, 0, 0, false, Xors(L"Spoof Prone"), Xors(L"Prone on serverside"), false);
		ToggleVar SpinBot = ToggleVar(false, 0, Xors(L"SpinBot"), Xors(L"Serverside spinbot"), false);
		FloatVar SpinBotSpeed = FloatVar(false, 0, 0.5f, 0.f, 1.f, Xors(L"SpinBot Speed"), Xors(L"too fast = not visible"), false, VarT::NoToggleFloat);
		IntVar SpinBotYaw = IntVar(false, 0, 0, 0, 5, Xors(L"Yaw Type"), Xors(L""), false, VarT::NoToggleInt);
		IntVar SpinBotPitch = IntVar(false, 0, 0, 0, 5, Xors(L"Pitch Type"), Xors(L""), false, VarT::NoToggleInt);
		ToggleVar SpinBotClient = ToggleVar(false, 0, Xors(L"SpinBot Client"), Xors(L"Show spin on client"), false);
		IntVar DelayedPacketCount = IntVar(false, 0, 5, 0, 15, Xors(L"Delayed Packet Count"), Xors(L""), false, VarT::NoToggleInt);
		KeyBindOptionalVar AirJump = KeyBindOptionalVar(false, 0, VK_SPACE, false, Xors(L"Air Jump"), Xors(L"Force jump in air"), false);
    };

    namespace dinoFeatures
    {
        ToggleVar BackwardsFly = ToggleVar(false, 0, Xors(L"BackwardsFly"), Xors(L"BackwardsFly"), false);
        ToggleVar OmniFly = ToggleVar(false, 0, Xors(L"OmniFly"), Xors(L"OmniFly"), false);
        ToggleVar ForceMount = ToggleVar(false, 0, Xors(L"ForceMount"), Xors(L"ForceMount"), false);
        ToggleVar AutoForceMount = ToggleVar(false, 0, Xors(L"AutoForceMount"), Xors(L"AutoForceMount"), false);
        ToggleVar InstaTurn = ToggleVar(false, 0, Xors(L"InstaTurn"), Xors(L"InstaTurn"), false);
        ToggleVar HardTurn = ToggleVar(false, 0, Xors(L"HardTurn"), Xors(L"HardTurn"), false);
        KeyBindVar BetterRavager = KeyBindVar(false, 0,0, Xors(L"Better Ravager"), Xors(L"Jump On Ziplines From A Far Distance"), false);
        KeyBindVar BetterYiLing = KeyBindVar(false, 0, 0,Xors(L"Better Yi Ling"), Xors(L"Improves Yi Ling Flight Greatly"), false);
        float YiLingMultiplier = 1.0f;
    }

    namespace autoMation 
    {
        ToggleVar DupeMethod = ToggleVar(false, 0, Xors(L"Dupe Method"), Xors(L"Dupe Method"), false);
        FloatVar DupeMethodSpeed = FloatVar(false, 0, 0.45f, 0.1f, 0.95f, Xors(L"Dupe Method Speed"), Xors(L"Dupe Method Speed"), false, VarT::NoToggleFloat);

        ToggleVar AutoWalk = ToggleVar(false, 0, Xors(L"Auto Walk"), Xors(L"Auto Walks Forward"), false);
        ToggleVar AutoAttack = ToggleVar(false, 0, Xors(L"Auto Attack"), Xors(L"Auto Attacks On Dinos"), false);
        ToggleVar PickupC4 = ToggleVar(false, 0, Xors(L"Pickup C4"), Xors(L"Pickup C4"), false);
        ToggleVar PickupTraps = ToggleVar(false, 0, Xors(L"Pickup Traps"), Xors(L"Pickup Traps"), false);
        ToggleVar PickupWaterMines = ToggleVar(false, 0, Xors(L"Pickup Water Mines"), Xors(L"Pickup Water Mines"), false);
        IntVar AutoFillTekTurrets = IntVar(false, 0, 0, 0, 100, Xors(L"Fill Tek Turrets"), Xors(L"Put ammo in % of slots"), false, VarT::Int);
        IntVar AutoFillHeavyTurrets = IntVar(false, 0, 0, 0, 100, Xors(L"Fill Heavy Turrets"), Xors(L"Put ammo in % of slots"), false, VarT::Int);
        IntVar AutoFillAutoTurrets = IntVar(false, 0, 0, 0, 100, Xors(L"Fill Auto Turrets"), Xors(L"Put ammo in % of slots"), false, VarT::Int);
        IntVar AutoFillCropPlots = IntVar(false, 0, 5, 0, 10, Xors(L"Fill Crop Plots"), Xors(L"Put fertilizer in slots"), false, VarT::Int);
        ToggleVar AutoMedbrew = ToggleVar(false, 0, Xors(L"AutoMedbrew"), Xors(L"AutoMedbrew"), false);
        ToggleVar AutoConsumable = ToggleVar(false, 0, Xors(L"AutoConsumable"), Xors(L"AutoConsumable"), false);
        ToggleVar AutoFood = ToggleVar(false, 0, Xors(L"AutoFood"), Xors(L"AutoFood"), false);
        ToggleVar AutoPopcornDinoResources = ToggleVar(false, 0, Xors(L"AutoPopcornDinoResources"), Xors(L"AutoPopcornDinoResources"), false);
        ToggleVar AutoFeedRawMeat = ToggleVar(false, 0, Xors(L"Auto Force Feed"), Xors(L"Force feeds ridden dino meat"), false);
        ToggleVar AutoTakeAchatina = ToggleVar(false, 0, Xors(L"Auto Take Paste"), Xors(L"Takes Paste From Achatinas"), false);
        ToggleVar AutoTakeCrops = ToggleVar(false, 0, Xors(L"Auto Take Crops"), Xors(L"Takes Crops From Crop Plots"), false);
        KeyBindOptionalVar AutoPick = KeyBindOptionalVar(false, 0, VK_F4, false, Xors(L"Auto Pick"), Xors(L"Auto Pick Players with Flyers"), false);
        KeyBindOptionalVar SelfArmor = KeyBindOptionalVar(false, VK_F2, VK_F3, false, Xors(L"Auto Armor"), Xors(L"Swapps Armor when available"), false);
        ToggleVar IgnoreGaunts = ToggleVar(false, 0, Xors(L"Ignore Gaunts"), Xors(L"Ignores Gaunts"), false);
        ToggleVar IgnoreChest = ToggleVar(false, 0, Xors(L"Ignore Chest"), Xors(L"Ignores Chest"), false);
        ToggleVar LegitAutoFlak = ToggleVar(false, 0, Xors(L"Legit Auto Flak"), Xors(L"Legit Auto Flak"), false);
        ToggleVar SwapToScuba = ToggleVar(false, 0, Xors(L"Swap To Scuba"), Xors(L"Swaps to scuba when underwater"), false);
        int AutoArmorType = 2;
        KeyBindOptionalVar AutoLoot = KeyBindOptionalVar(false, 0, VK_F1, false, Xors(L"Auto Loot"), Xors(L"Auto Loots Inventorys"), false);
        KeyBindOptionalVar AutoPopcorn = KeyBindOptionalVar(false, 0, VK_F2, false, Xors(L"Auto Popcorn"), Xors(L"Auto Popcorns Inventorys"), false);
        KeyBindOptionalVar AutoMount = KeyBindOptionalVar(false, 0, VK_CAPITAL, false, Xors(L"Auto Mount"), Xors(L"Auto Mounts Dinos"), false);
        ToggleVar AutoPopcornPlayers = ToggleVar(false, 0, Xors(L"AutoPopcornPlayers"), Xors(L"AutoPopcorns Players Inventorys"), false);
        ToggleVar AutoPopcornStructures = ToggleVar(false, 0, Xors(L"AutoPopcornStructures"), Xors(L"AutoPopcorns Structures Inventorys"), false);
        ToggleVar AutoPopcornTurrets = ToggleVar(false, 0, Xors(L"AutoPopcornTurrets"), Xors(L"AutoPopcorns Turrets Inventorys"), false);
        ToggleVar AutoPopcornBags = ToggleVar(false, 0, Xors(L"AutoPopcornBags"), Xors(L"AutoPopcorns Bags Inventorys"), false);
        ToggleVar AutoTakePlayers = ToggleVar(false, 0, Xors(L"AutoTakePlayers"), Xors(L"AutoTake Players Inventorys"), false);
        ToggleVar AutoTakeStructures = ToggleVar(false, 0, Xors(L"AutoTakeStructures"), Xors(L"AutoTake Structures Inventorys"), false);
        ToggleVar AutoTakeTurrets = ToggleVar(false, 0, Xors(L"AutoTakeTurrets"), Xors(L"AutoTake Turrets Inventorys"), false);
        ToggleVar AutoTakeBags = ToggleVar(false, 0, Xors(L"AutoTakeBags"), Xors(L"AutoTake Bags Inventorys"), false);
        bool FeedTroughs = false;
        bool UnlockNotes = false;
        bool TekTurretLoaded = false;
        bool HeavyTurretLoaded = false;
        bool AutoTurretLoaded = false;
        bool CropPlotLoaded = false;
        KeyBindOptionalVar TeamAutoPopcorn = KeyBindOptionalVar(false, 0, 0, false, Xors(L"Team Auto Popcorn"), Xors(L"Auto Popcorns Team Inventorys"), false);
        ToggleVar TeamAutoPopcornPlayers = ToggleVar(false, 0, Xors(L"Team Auto Popcorn Players"), Xors(L"Auto Popcorns Team Players Inventorys"), false);
        ToggleVar TeamAutoPopcornStructures = ToggleVar(false, 0, Xors(L"Team Auto Popcorn Structures"), Xors(L"Auto Popcorns Team Structures Inventorys"), false);
        ToggleVar TeamAutoPopcornBags = ToggleVar(false, 0, Xors(L"Team Auto Popcorn Bags"), Xors(L"Auto Popcorns Team Bags Inventorys"), false);
        KeyBindOptionalVar TeamAutoLoot = KeyBindOptionalVar(false, 0, 0, false, Xors(L"Team Auto Loot"), Xors(L"Auto Loots Team Inventorys"), false);
        ToggleVar TeamAutoTakePlayers = ToggleVar(false, 0, Xors(L"Team Auto Take Players"), Xors(L"Auto Take Team Players Inventorys"), false);
        ToggleVar TeamAutoTakeStructures = ToggleVar(false, 0, Xors(L"Team Auto Take Structures"), Xors(L"Auto Take Team Structures Inventorys"), false);
        ToggleVar TeamAutoTakeTurrets = ToggleVar(false, 0, Xors(L"Team Auto Take Turrets"), Xors(L"Auto Take Team Turrets Inventorys"), false);
        ToggleVar TeamAutoTakeBags = ToggleVar(false, 0, Xors(L"Team Auto Take Bags"), Xors(L"Auto Take Team Bags Inventorys"), false);
        KeyBindOptionalVar PickupItems = KeyBindOptionalVar(false, 0, 0, false, Xors(L"Pickup Items"), Xors(L"Collects dropped items"), false);
        KeyBindOptionalVar PickupPoop = KeyBindOptionalVar(false, 0, 0, false, Xors(L"Pickup Poop"), Xors(L"Collects Poop"), false);
        KeyBindOptionalVar PickupEggs = KeyBindOptionalVar(false, 0, 0, false, Xors(L"Pickup Eggs"), Xors(L"Collects all Eggs"), false);
        
        ToggleVar AutoPincode = ToggleVar(false, 0, Xors(L"Auto Pincode"), Xors(L"Pincode all structures"), false);
        ToggleVar AutoNameTurrets = ToggleVar(false, 0, Xors(L"Auto Name Turrets"), Xors(L"Name nearby turrets"), false);
        std::wstring TurretName = L"";
        ToggleVar AutoTurretSettings = ToggleVar(false, 0, Xors(L"Auto Turret Settings"), Xors(L"Auto turret settings"), false);
        int TurretRange = -1;
        int TurretTarget = -1;
        ToggleVar AutoDepoDedis = ToggleVar(false, 0, Xors(L"Auto Depo Dedis"), Xors(L"Fill inventory into Dedis"), false);
        ToggleVar AutoFillForges = ToggleVar(false, 0, Xors(L"Auto Fill Forges"), Xors(L"Fill Metal / Wood"), false);
        int ForgeFillPercentage = 0;
        ToggleVar AutoFish = ToggleVar(false, 0, Xors(L"Auto Fish"), Xors(L"Do fishing minigame"), false);
        ToggleVar AutoTamePassive = ToggleVar(false, 0, Xors(L"Auto Tame Passive"), Xors(L"Feed nearby passive Dinos"), false);
        ToggleVar AutoGrindStone = ToggleVar(false, 0, Xors(L"Auto Grind Stone"), Xors(L"Auto Grinds Stone In Grinder"), false);
        ToggleVar AutoSheep = ToggleVar(false, 0, Xors(L"Auto Drop Mutton / Pelt"), Xors(L"Drops Mutton And Pelt"), false);
    };

    namespace resourceStructure
    {
        ToggleVar EnableResource = ToggleVar(false, 0, Xors(L"Enable Resource ESP"), Xors(L"Enables Resource ESP"), false);
        bool Crystal = false;
        bool Pearls = false;
        bool Metal = false;
        bool Oil = false;
        bool Obsidian = false;
        bool Gem = false;
        int Distance = 100;
    }

    namespace misc 
    {
        ToggleVar MouseSmoothing = ToggleVar(false, 0, Xors(L"Disable Mouse Smoothing"), Xors(L"Remove 3p mouse smoothing"), false);
        KeyBindOptionalVar Spyglass = KeyBindOptionalVar(false, 0, 0, false, Xors(L"Spyglass"), Xors(L"Show extra information about target"), false);
        int SpyglassLockTargetBind = 0;
        ToggleVar ShotGunReload = ToggleVar(false, 0, Xors(L"Shotgun reload"), Xors(L"Reload Shotgun after every shot"), false);
        ToggleVar InfiniteC4 = ToggleVar(false, 0, Xors(L"Infinite C4"), Xors(L"Infinite C4"), false);
        ToggleVar SelfC4Placer = ToggleVar(false, 0, Xors(L"Self C4 Placer"), Xors(L"Self C4 Placer"), false);
        ToggleVar DmgNumbers = ToggleVar(false, 0, Xors(L"Dmg Numbers"), Xors(L"Dmg Numbers"), false);
        ToggleVar ExtraServerInfo = ToggleVar(false, 0, Xors(L"Extra Server Info"), Xors(L"Shows information about the server"), false);
        ToggleVar TribeLogToChat = ToggleVar(false, 0, Xors(L"Tribe log to chat"), Xors(L"Send tribelog messages in ally chat"), false);
        IntVar FovChanger = IntVar(false, 0, 120, 70, 150, Xors(L"FovChanger"), Xors(L"FovChanger"), false, VarT::Int);
        ToggleVar LongArms = ToggleVar(false, 0, Xors(L"LongArms"), Xors(L"LongArms"), false);
        ToggleVar InfiniteArms = ToggleVar(false, 0, Xors(L"InfiniteArms"), Xors(L"InfiniteArms"), false);
        ToggleVar InfiniteSuitEle = ToggleVar(false, 0, Xors(L"InfiniteSuitEle"), Xors(L"InfiniteSuitEle"), false);
        ToggleVar NoRecoil = ToggleVar(false, 0, Xors(L"No Recoil"), Xors(L"No Recoil"), false);
        ToggleVar NoTekRifleOverheat = ToggleVar(false, 0, Xors(L"No Tek Rifle Overheat"), Xors(L"No Tek Rifle Overheat"), false);
        ToggleVar NoRailgunOverheat = ToggleVar(false, 0, Xors(L"No Railgun Overheat"), Xors(L"No Railgun Overheat"), false);
        FloatVar RapidFire = FloatVar(false, 0, 0.3f, 0.f, 1.f, Xors(L"Rapid Fire"), Xors(L"Rapid Fire"), false, VarT::Float);
        IntVar Ini = IntVar(false, 0, 1, 0, 50, Xors(L"Ini"), Xors(L"Prevviewmode like ASE"), false, VarT::Int);
        ToggleVar Notes = ToggleVar(false, 0, Xors(L"Notes"), Xors(L"Notes"), false);
        ToggleVar Ghost = ToggleVar(false, VK_DELETE, Xors(L"Ghost"), Xors(L"Ghost Mode"), false);
        ToggleVar Suicide = ToggleVar(false, VK_F6, Xors(L"Suicide"), Xors(L"Instantly Die"), false);
        KeyBindOptionalVar ForceJump = KeyBindOptionalVar(false, 0,VK_F1,false, Xors(L"ForceJump"), Xors(L"Force Jump"), false);
        KeyBindVar RenderCrash = KeyBindVar(false, 0,VK_END, Xors(L"RenderCrash"), Xors(L"Crash Players In Render"), false);
        KeyBindVar ServerCrash = KeyBindVar(false, 0,0, Xors(L"ServerCrash"), Xors(L"Crash Server"), false);
        KeyBindVar InventoryToArk = KeyBindVar(false, 0, 'G', Xors(L"Inventory To Ark"), Xors(L"Open Upload To Upload / Download Items"), false);
        KeyBindVar LadderExploit = KeyBindVar(false, 0, VK_F9, Xors(L"Ladder Exploit"), Xors(L"Exploit With Ladder"), false);
        ToggleVar RemoveBolas = ToggleVar(false, 0, Xors(L"Remove Bolas"), Xors(L"Auto remove tribe bolas"), false);
        bool RemovePlayerBolas = true;
        bool RemoveDinoBolas = true;
        bool RemoveSelfBolas = true;
        bool BolaPackageLoaded = false;
        int LadderPositionKeyBind = VK_F10;
        int LadderJumpInViewDirSpeed = 100;
        int LadderJumpInViewDirKeyBind = VK_F8;
        KeyBindVar XpExploit = KeyBindVar(false, 0, 0, Xors(L"XP Exploit"), Xors(L"Xp Exploit"), false);
        KeyBindVar SelfUpload = KeyBindVar(false, 0, VK_F9, Xors(L"Self Upload"), Xors(L"Upload Character Within 100M of Drop"), false);
        ToggleVar ExtraInfo = ToggleVar(false, 0, Xors(L"ExtraInfo"), Xors(L"ExtraInfo"), false);
        ToggleVar ShowMeshDetection = ToggleVar(false, 0, Xors(L"Mesh Detection"), Xors(L"Show warning when under mesh"), false);
        ToggleVar SpoofFoundation = ToggleVar(false, 0, Xors(L"Floating Foundation"), Xors(L"Place C4 On Dodo With Foundy In Inv"),false);
        ToggleVar FastUse = ToggleVar(false, 0, Xors(L"Fast Use"), Xors(L"Fast Use Any Multiuse"), false);
        ToggleVar DisableRespawnAnim = ToggleVar(false, 0, Xors(L"Disable Respawn Anim"), Xors(L"Disables Respawn Animation"), false);
        ToggleVar DinoClaim = ToggleVar(false, 0, Xors(L"Dino Claim"), Xors(L"Claims Dinos Near You"), false);
        ToggleVar DinoName = ToggleVar(false, 0, Xors(L"Dino Name"), Xors(L"Names Dinos Near You"), false);
        ToggleVar DinoLevel = ToggleVar(false, 0, Xors(L"Dino Level"), Xors(L"Levels Dinos Near You"), false);

        DinoLevelPresetzzz DinoLevelPreset = {};

        ToggleVar DinoSaddle = ToggleVar(false, 0, Xors(L"Dino Saddle"), Xors(L"Saddles Dinos Near You"), false);
        ToggleVar DinoFeed = ToggleVar(false, 0, Xors(L"Dino Feed"), Xors(L"Feeds Dinos Near You"), false);
        ToggleVar DinoImprint = ToggleVar(false, 0, Xors(L"Dino Imprint"), Xors(L"Imprints Dinos Near You"), false);
        ToggleVar InfiniteWeight = ToggleVar(false, 0, Xors(L"Infinite Weight"), Xors(L"Can Walk No Matter What Weight"), false);
        ToggleVar UploadAll = ToggleVar(false, 0, Xors(L"Uploads All Items"), Xors(L"Uploads All Items(Max 50)"), false);
        ToggleVar DownloadAll = ToggleVar(false, 0, Xors(L"Download All Items"), Xors(L"Downloads All Items(Max 50)"), false);
        KeyBindVar NetLimiter = KeyBindVar(false, 0, 'G', Xors(L"Packet Teleport"), Xors(L"Hold It And Run To Teleport Places"), false);
        IntVar TekChestDisconnect = IntVar(false, 0, 1000, 500, 2000, Xors(L"Tek Chest Disconnect"), Xors(L"have no element in inv, will desync you"), false, VarT::Int);
        IntVar SpamChangeCharacterSize = IntVar(false, 0,8,0,10,Xors(L"Spam Change Character Size"), Xors(L"Spam Changes Character Size to big/small"), false, VarT::Int);
        IntVar SpamLastCharacter = IntVar(false, 0, 8, 0, 10, Xors(L"Spam Last Character"), Xors(L"Spam last selected character"), false, VarT::Int);
        ToggleVar UnlockBTT = ToggleVar(false, 0, Xors(L"Unlock DLCs"), Xors(L"Unlock most DLCs"), false);
        ToggleVar BetterPassenger = ToggleVar(false, 0, Xors(L"Better Passenger"), Xors(L"Improve dino passenger riding"), false);
        ToggleVar UnlockRotation = ToggleVar(false, 0, Xors(L"Unlock Rotation"), Xors(L"Unlock camera yaw"), false);
        KeyBindVar FastThrow = KeyBindVar(false, 0, VK_RBUTTON, Xors(L"Fast Throw"), Xors(L"Throw grenades/bolas instantly"), false);
        KeyBindVar ForceAccess = KeyBindVar(false, 0, 'F', Xors(L"Force Access"), Xors(L"Access every inventory (can use rank 10)"), false);
        KeyBindVar ForceShoot = KeyBindVar(false, 0, VK_LBUTTON, Xors(L"Force Shoot"), Xors(L"skip client checks"), false);
        KeyBindOptionalVar FastPlaceC4 = KeyBindOptionalVar(false, 0, VK_F1, false, Xors(L"Fast Place C4"), Xors(L"Place C4 instantly"), false);
        ToggleVar PointExploit = ToggleVar(false, 0, Xors(L"Point Exploit"), Xors(L"Club Ark Point Exploit"), false);
        FloatVar TopDownView = FloatVar(false, 0,100.f,10.f,1000.f, Xors(L"Top Down View"), Xors(L"Radar camera view"), false);
        bool TopDownForceDistance = false;
        float wantedCharacter[26]{0};
        bool wantsToSetCharacter = false;
        bool BattleMode = false;
        std::wstring DinoString = Xors(L"");
        KeyBindVar PyromaneJump = KeyBindVar(false, 0, 0,Xors(L"Enable Pyromane Jump"), Xors(L"Enables Pyromane Exploit"), false);
        int PyromaneMultiplier = 10;
        ToggleVar TransBag = ToggleVar(false, 0,Xors(L"Transmitter Bag"),Xors(L"Up/Down-load dinos from bags"),false);
        ToggleVar BetterPopcorn = ToggleVar(false, 0, Xors(L"Better Popcorn"), Xors(L"Enables Options For Popcorning"), false);
        KeyBindVar PopcornSelf = KeyBindVar(false, 0, 0, Xors(L"Popcorn Self"), Xors(L"Popcorn your inventory"), false);
        KeyBindVar PopcornDino = KeyBindVar(false, 0, 0, Xors(L"Popcorn Dino"), Xors(L"Popcorn dino inventory"), false);
        KeyBindVar PopcornTarget = KeyBindVar(false, 0, 0, Xors(L"Popcorn Target"), Xors(L"Popcorn what youre looking at"), false);
        KeyBindVar TransferTarget = KeyBindVar(false, 0, 0, Xors(L"Transfer Target"), Xors(L"Transfer from one thing to another"), false);
    };

    namespace autoCraft
    {
        bool EnableCrafting = false;
        int CraftingStructure = 0;
        int CraftingItem = 0;
        std::wstring ItemName = Xors(L"");
    };

    namespace autoDemo
    {
        bool EnableDemo = false;
        int DemoItem = 0;
        std::wstring ItemName = Xors(L"");
    };
    
    namespace user 
    {
        FloatVar HitMarker3D = FloatVar(false, 0, 1.f, 0.f, 5.f, Xors(L"HitMarker 3D"), Xors(L"Enemy hit indicator"), false, VarT::Float);
		FloatVar HitMarker3DSize = FloatVar(false, 0, 5.f, 0.f, 10.f, Xors(L"Cross size"), Xors(L""), false, VarT::NoToggleFloat);
		ColorVar HitMarker3DColor = ColorVar(false, 0, FLinearColor(1.f, 0.f, 0.f, 1.f), Xors(L"Cross color"), Xors(L""), false, VarT::NoToggleColor);
		float MaxDistance = 300.f;
		float MinDistance = -300.f;
		ToggleVar CustomCamera = ToggleVar(false, 0, Xors(L"Custom Camera"), Xors(L"Customizeable camera component"), false);
		FloatVar CustomCameraOffsetX = FloatVar(false, 0, 0.f, MinDistance, MaxDistance, Xors(L"Offset X"), Xors(L""), false, VarT::NoToggleFloat);
		FloatVar CustomCameraOffsetY = FloatVar(false, 0, 0.f, MinDistance, MaxDistance, Xors(L"Offset Y"), Xors(L""), false, VarT::NoToggleFloat);
		FloatVar CustomCameraOffsetZ = FloatVar(false, 0, 0.f, MinDistance, MaxDistance, Xors(L"Offset Z"), Xors(L""), false, VarT::NoToggleFloat);
		ToggleVar CustomCameraUseWeaponOffset = ToggleVar(false, 0, Xors(L"Use Weapon Offset"), Xors(L"Change to weapon offset"), false);
		FloatVar CustomCameraWeaponOffsetX = FloatVar(false, 0, 0.f, MinDistance, MaxDistance, Xors(L"Weapon Offset X"), Xors(L""), false, VarT::NoToggleFloat);
		FloatVar CustomCameraWeaponOffsetY = FloatVar(false, 0, 0.f, MinDistance, MaxDistance, Xors(L"Weapon Offset Y"), Xors(L""), false, VarT::NoToggleFloat);
		FloatVar CustomCameraWeaponOffsetZ = FloatVar(false, 0, 0.f, MinDistance, MaxDistance, Xors(L"Weapon Offset Z"), Xors(L""), false, VarT::NoToggleFloat);
		ToggleVar CustomCameraCollision = ToggleVar(false, 0, Xors(L"Collision"), Xors(L"Don't ignore walls"), false);
		IntVar CustomCameraBone = IntVar(false, 0, 0, 0, 100, Xors(L"Bone"), Xors(L"Bone to attach to"), false, VarT::NoToggleInt);

        KeyBindOptionalVar AntimeshESP = KeyBindOptionalVar(false, 0, 0, false, Xors(L"Antimesh ESP"), Xors(L"Draw kill/tp borders"), false);
        FloatVar AntimeshESPRange = FloatVar(false, 0, 1000.f, 100.f, 10000.f, Xors(L"Antimesh ESP Range"), Xors(L"300 = 1 Render Distance"), false, VarT::NoToggleFloat);
        ToggleVar AntimeshEspUseStaticMesh = ToggleVar(false, 0, Xors(L"Better Antimesh ESP"), Xors(L"Better, but more expensive drawing"), false);
        ColorVar AntimeshColor = ColorVar(false, 0, FLinearColor(1.f, 1.f, 0.f, 1.f), Xors(L"Antimesh Color"), Xors(L"Color for esp"), false, VarT::NoToggleColor);
        ToggleVar AntimeshDisableDepth = ToggleVar(true, 0, Xors(L"Visible through walls"), Xors(L"Better antimesh only"), false);
        ToggleVar KillFeed = ToggleVar(false, 0, Xors(L"Kill Feed"), Xors(L"Shows kill feed"), false);
        ToggleVar AllKills = ToggleVar(false, 0, Xors(L"Enemy Kills"), Xors(L"Show kills by others"), false);
        ToggleVar DinoKills = ToggleVar(false, 0, Xors(L"Dino Kills"), Xors(L"Show dino kills"), false);
        FloatVar KillFeedTime = FloatVar(false, 0, 5.f, 0.5f, 10.f, Xors(L"Kill Feed Time"), Xors(L"Time to show kill feed"), false, VarT::NoToggleFloat);
        ToggleVar TargetWarning = ToggleVar(false, 0, Xors(L"Target Warning"), Xors(L"Shows warning when being looked at"), false);
        FloatVar TargetWarningMinimum = FloatVar(false, 0, 0.5f, 0.f, 1.f, Xors(L"Target Warning Minimum"), Xors(L"Minimum distance to show warning"), false, VarT::NoToggleFloat);
        ToggleVar ClearWater = ToggleVar(false, 0, Xors(L"Clear Water"), Xors(L"Removes underwater effects, removes AA"), false);
        ToggleVar ChamsWireFrame = ToggleVar(false, 0, Xors(L"Wireframe Chams"), Xors(L"Changes all chams to wireframe"), false);
		IntVar MaterialBlendMode = IntVar(false, 0, (int)EBlendMode::BLEND_AlphaComposite, 0, 100, Xors(L"Material Blend Mode"), Xors(L""), false, VarT::NoToggleInt);
        ToggleVar ShowToggleMessage = ToggleVar(false, 0, Xors(L"Toggle message"), Xors(L"Shows message when toggling setting"), false);
        FloatVar MessageTime = FloatVar(false,0,1.f,0.05f,5.f,Xors(L"Message lenght"),Xors(L"Change time the message stays"),false,VarT::NoToggleFloat);
        namespace dmgNumbers {
			FloatVar Scale = FloatVar(false, 0, 1.f, 0.1f, 5.f, Xors(L"Scale"), Xors(L"Size of the numbers"), false, VarT::NoToggleFloat);
			FloatVar LifeSpan = FloatVar(false, 0, 1.f, 0.1f, 5.f, Xors(L"Life Span"), Xors(L"Life span of the numbers"), false, VarT::NoToggleFloat);
			FloatVar MinScale = FloatVar(false, 0, 0.5f, 0.1f, 5.f, Xors(L"Min Scale"), Xors(L"Minimum size of the numbers"), false, VarT::NoToggleFloat);
			FloatVar ZVelocity = FloatVar(false, 0, 1.f, 0.1f, 5.f, Xors(L"Z Velocity"), Xors(L"Upwards speed"), false, VarT::NoToggleFloat);
			ColorVar EnemyColor = ColorVar(false, 0, FLinearColor(1.f, 0.f, 0.f, 1.f), Xors(L"Enemy Color"), Xors(L"Color of enemy hit numbers"), false, VarT::NoToggleColor);
			ColorVar TeamColor = ColorVar(false, 0, FLinearColor(0.f, 1.f, 0.f, 1.f), Xors(L"Team Color"), Xors(L"Color of team hit numbers"), false, VarT::NoToggleColor);
			ColorVar WildColor = ColorVar(false, 0, FLinearColor(0.f, 0.f, 1.f, 1.f), Xors(L"Wild Color"), Xors(L"Color of wild hit numbers"), false, VarT::NoToggleColor);
        }; // namespace dmgNumbers
        namespace ShowFlags 
        {
            ToggleVar PostProcessing = ToggleVar(false, 0,Xors(L"PostProcessing"),Xors(L"PostProcessing"), false);
            ToggleVar Bloom = ToggleVar(false, 0,Xors(L"Bloom"),Xors(L"Bloom"), false);
            ToggleVar LocalExposure = ToggleVar(false, 0,Xors(L"LocalExposure"),Xors(L"LocalExposure"), false);
            ToggleVar AntiAliasing = ToggleVar(false, 0,Xors(L"AntiAliasing"),Xors(L"AntiAliasing"), false);
            ToggleVar TemporalAA = ToggleVar(false, 0,Xors(L"TemporalAA"),Xors(L"TemporalAA"), false);
            ToggleVar AmbientCubemap = ToggleVar(false, 0,Xors(L"AmbientCubemap"),Xors(L"AmbientCubemap"), false);
            ToggleVar EyeAdaptation = ToggleVar(false, 0,Xors(L"EyeAdaptation"),Xors(L"EyeAdaptation"), false);
            ToggleVar GlobalIllumination = ToggleVar(false, 0,Xors(L"GlobalIllumination"),Xors(L"GlobalIllumination"), false);
            ToggleVar Vignette = ToggleVar(false, 0,Xors(L"Vignette"),Xors(L"Vignette"), false);
            ToggleVar AmbientOcclusion = ToggleVar(false, 0,Xors(L"AmbientOcclusion"),Xors(L"AmbientOcclusion"), false);
            ToggleVar Decals = ToggleVar(false, 0,Xors(L"Decals"),Xors(L"Decals"), false);
            ToggleVar OnScreenDebug = ToggleVar(false, 0,Xors(L"OnScreenDebug"),Xors(L"OnScreenDebug"), false);
            ToggleVar VisualizeNanite = ToggleVar(false, 0,Xors(L"VisualizeNanite"),Xors(L"VisualizeNanite"), false);
            ToggleVar VisualizeLumen = ToggleVar(false, 0,Xors(L"VisualizeLumen"),Xors(L"VisualizeLumen"), false);
            ToggleVar VisualizeSubstrate = ToggleVar(false, 0,Xors(L"VisualizeSubstrate"),Xors(L"VisualizeSubstrate"), false);
            ToggleVar VisualizeGroom = ToggleVar(false, 0,Xors(L"VisualizeGroom"),Xors(L"VisualizeGroom"), false);
            ToggleVar VisualizeVirtualShadowMap = ToggleVar(false, 0,Xors(L"VisualizeVirtualShadowMap"),Xors(L"VisualizeVirtualShadowMap"), false);
            ToggleVar PointLights = ToggleVar(false, 0,Xors(L"PointLights"),Xors(L"PointLights"), false);
            ToggleVar SpotLights = ToggleVar(false, 0,Xors(L"SpotLights"),Xors(L"SpotLights"), false);
            ToggleVar RectLights = ToggleVar(false, 0,Xors(L"RectLights"),Xors(L"RectLights"), false);
            ToggleVar DepthOfField = ToggleVar(false, 0,Xors(L"DepthOfField"),Xors(L"DepthOfField"), false);
            ToggleVar MotionBlur = ToggleVar(false, 0,Xors(L"MotionBlur"),Xors(L"MotionBlur"), false);
            ToggleVar CameraInterpolation = ToggleVar(false, 0,Xors(L"CameraInterpolation"),Xors(L"CameraInterpolation"), false);
            ToggleVar ToneCurve = ToggleVar(false, 0,Xors(L"ToneCurve"),Xors(L"ToneCurve"), false);
            ToggleVar SeparateTranslucency = ToggleVar(false, 0,Xors(L"SeparateTranslucency"),Xors(L"SeparateTranslucency"), false);
            ToggleVar ScreenPercentage = ToggleVar(false, 0,Xors(L"ScreenPercentage"),Xors(L"ScreenPercentage"), false);
            ToggleVar ReflectionEnvironment = ToggleVar(false, 0,Xors(L"ReflectionEnvironment"),Xors(L"ReflectionEnvironment"), false);
            ToggleVar Specular = ToggleVar(false, 0,Xors(L"Specular"),Xors(L"Specular"), false);
            ToggleVar ScreenSpaceReflections = ToggleVar(false, 0,Xors(L"ScreenSpaceReflections"),Xors(L"ScreenSpaceReflections"), false);
            ToggleVar LumenReflections = ToggleVar(false, 0,Xors(L"LumenReflections"),Xors(L"LumenReflections"), false);
            ToggleVar ContactShadows = ToggleVar(false, 0,Xors(L"ContactShadows"),Xors(L"ContactShadows"), false);
            ToggleVar RayTracedDistanceFieldShadows = ToggleVar(false, 0,Xors(L"RayTracedDistanceFieldShadows"),Xors(L"RayTracedDistanceFieldShadows"), false);
            ToggleVar CapsuleShadows = ToggleVar(false, 0,Xors(L"CapsuleShadows"),Xors(L"CapsuleShadows"), false);
            ToggleVar VolumetricLightmap = ToggleVar(false, 0,Xors(L"VolumetricLightmap"),Xors(L"VolumetricLightmap"), false);
            ToggleVar IndirectLightingCache = ToggleVar(false, 0,Xors(L"IndirectLightingCache"),Xors(L"IndirectLightingCache"), false);
            ToggleVar TexturedLightProfiles = ToggleVar(false, 0,Xors(L"TexturedLightProfiles"),Xors(L"TexturedLightProfiles"), false);
            ToggleVar LightFunctions = ToggleVar(false, 0,Xors(L"LightFunctions"),Xors(L"LightFunctions"), false);
            ToggleVar NaniteMeshes = ToggleVar(false, 0,Xors(L"NaniteMeshes"),Xors(L"NaniteMeshes"), false);
            ToggleVar InstancedStaticMeshes = ToggleVar(false, 0,Xors(L"InstancedStaticMeshes"),Xors(L"InstancedStaticMeshes"), false);
            ToggleVar InstancedFoliage = ToggleVar(false, 0,Xors(L"InstancedFoliage"),Xors(L"InstancedFoliage"), false);
            ToggleVar InstancedGrass = ToggleVar(false, 0,Xors(L"InstancedGrass"),Xors(L"InstancedGrass"), false);
            ToggleVar DynamicShadows = ToggleVar(false, 0,Xors(L"DynamicShadows"),Xors(L"DynamicShadows"), false);
            ToggleVar Particles = ToggleVar(false, 0,Xors(L"Particles"),Xors(L"Particles"), false);
            ToggleVar SkeletalMeshes = ToggleVar(false, 0,Xors(L"SkeletalMeshes"),Xors(L"SkeletalMeshes"), false);
            ToggleVar Translucency = ToggleVar(false, 0,Xors(L"TransLucency"),Xors(L"TransLucency"), false);
            ToggleVar LOD = ToggleVar(false, 0,Xors(L"LOD"),Xors(L"LOD"), false);
            ToggleVar Lighting = ToggleVar(false, 0,Xors(L"Lighting"),Xors(L"Lighting"), false);
            ToggleVar DeferredLighting = ToggleVar(false, 0,Xors(L"DeferredLighting"),Xors(L"DeferredLighting"), false);
            ToggleVar StaticMeshes = ToggleVar(false, 0,Xors(L"StaticMeshes"),Xors(L"StaticMeshes"), false);
            ToggleVar Landscape = ToggleVar(false, 0,Xors(L"Landscape"),Xors(L"Landscape"), false);
            ToggleVar Fog = ToggleVar(false, 0,Xors(L"Fog"),Xors(L"Fog"), false);
            ToggleVar Game = ToggleVar(false, 0,Xors(L"Game"),Xors(L"Game"), false);
            ToggleVar BSP = ToggleVar(false, 0,Xors(L"BSP"),Xors(L"BSP"), false);
            ToggleVar LightShafts = ToggleVar(false, 0,Xors(L"LightShafts"),Xors(L"LightShafts"), false);
            ToggleVar Atmosphere = ToggleVar(false, 0,Xors(L"Atmosphere"),Xors(L"Atmosphere"), false);
            ToggleVar TextRender = ToggleVar(false, 0,Xors(L"TextRender"),Xors(L"TextRender"), false);
            ToggleVar Rendering = ToggleVar(false, 0,Xors(L"Rendering"),Xors(L"Rendering"), false);
            ToggleVar HMDDistortion = ToggleVar(false, 0,Xors(L"HMDDistortion"),Xors(L"HMDDistortion"), false);
            ToggleVar StereoRendering = ToggleVar(false, 0,Xors(L"StereoRendering"),Xors(L"StereoRendering"), false);
            ToggleVar DistanceCulledPrimitives = ToggleVar(false, 0,Xors(L"DistanceCulledPrimitives"),Xors(L"DistanceCulledPrimitives"), false);
            ToggleVar SkyLighting = ToggleVar(false, 0,Xors(L"SkyLighting"),Xors(L"SkyLighting"), false);
            ToggleVar Paper2DSprites = ToggleVar(false, 0,Xors(L"Paper2DSprites"),Xors(L"Paper2DSprites"), false);
            ToggleVar ScreenSpaceAO = ToggleVar(false, 0,Xors(L"ScreenSpaceAO"),Xors(L"ScreenSpaceAO"), false);
            ToggleVar DistanceFieldAO = ToggleVar(false, 0,Xors(L"DistanceFieldAO"),Xors(L"DistanceFieldAO"), false);
            ToggleVar LumenGlobalIllumination = ToggleVar(false, 0,Xors(L"LumenGlobalIllumination"),Xors(L"LumenGlobalIllumination"), false);
            ToggleVar VolumetricFog = ToggleVar(false, 0,Xors(L"VolumetricFog"),Xors(L"VolumetricFog"), false);
            ToggleVar WidgetComponents = ToggleVar(false, 0,Xors(L"WidgetComponents"),Xors(L"WidgetComponents"), false);
            ToggleVar MediaPlanes = ToggleVar(false, 0,Xors(L"MediaPlanes"),Xors(L"MediaPlanes"), false);
            ToggleVar PathTracing = ToggleVar(false, 0,Xors(L"PathTracing"),Xors(L"PathTracing"), false);
            ToggleVar VisualizeCalibrationColor = ToggleVar(false, 0,Xors(L"VisualizeCalibrationColor"),Xors(L"VisualizeCalibrationColor"), false);
            ToggleVar VisualizeCalibrationGrayscale = ToggleVar(false, 0,Xors(L"VisualizeCalibrationGrayscale"),Xors(L"VisualizeCalibrationGrayscale"), false);
            ToggleVar VisualizeCalibrationCustom = ToggleVar(false, 0,Xors(L"VisualizeCalibrationCustom"),Xors(L"VisualizeCalibrationCustom"), false);
            ToggleVar LumenScreenTraces = ToggleVar(false, 0,Xors(L"LumenScreenTraces"),Xors(L"LumenScreenTraces"), false);
            ToggleVar LumenDetailTraces = ToggleVar(false, 0,Xors(L"LumenDetailTraces"),Xors(L"LumenDetailTraces"), false);
            ToggleVar LumenGlobalTraces = ToggleVar(false, 0,Xors(L"LumenGlobalTraces"),Xors(L"LumenGlobalTraces"), false);
            ToggleVar LumenFarFieldTraces = ToggleVar(false, 0,Xors(L"LumenFarFieldTraces"),Xors(L"LumenFarFieldTraces"), false);
            ToggleVar LumenSecondaryBounces = ToggleVar(false, 0,Xors(L"LumenSecondaryBounces"),Xors(L"LumenSecondaryBounces"), false);
            ToggleVar LumenShortRangeAmbientOcclusion = ToggleVar(false, 0,Xors(L"LumenShortRangeAmbientOcclusion"),Xors(L"LumenShortRangeAmbientOcclusion"), false);
            ToggleVar ShaderPrint = ToggleVar(false, 0,Xors(L"ShaderPrint"),Xors(L"ShaderPrint"), false);
        };

        namespace sound 
        {
             ToggleVar ChangeHitMarkerSound = ToggleVar(false, 0,Xors(L"Change HitMarker Sound"),Xors(L"Changes HitMarker Sound"), false);
             ToggleVar IsUiSound = ToggleVar(false, 0,Xors(L"Is Ui Sound"),Xors(L"Is Ui Sound"), false);
             FloatVar TeamHitMarkerSoundVolume = FloatVar(false, 0, 1.f, 0.f, 3.f,Xors(L"Team HitMarker Sound Volume"),Xors(L"Team HitMarker Sound Volume"), false, VarT::NoToggleFloat);
             FloatVar EnemyHitMarkerSoundVolume = FloatVar(false, 0, 1.f, 0.f, 3.f,Xors(L"Enemy HitMarker Sound Volume"),Xors(L"Enemy HitMarker Sound Volume"), false, VarT::NoToggleFloat);
             FloatVar TeamHitMarkerSoundPitch = FloatVar(false, 0, 1.f, 0.f, 3.f,Xors(L"Team HitMarker Sound Pitch"),Xors(L"Team HitMarker Sound Pitch"), false, VarT::NoToggleFloat);
             FloatVar EnemyHitMarkerSoundPitch = FloatVar(false, 0, 1.f, 0.f, 3.f,Xors(L"Enemy HitMarker Sound Pitch"),Xors(L"Enemy HitMarker Sound Pitch"), false, VarT::NoToggleFloat);
             FloatVar ShootSoundVolume = FloatVar(false, 0, 1.f, 0.f, 3.f,Xors(L"Shoot Sound Volume"),Xors(L"Shoot Sound Volume"), false, VarT::NoToggleFloat);
             const wchar_t* TeamSoundPrev =Xors(L"SoundWave Engine.Default__SoundWave");
             const wchar_t* EnemySoundPrev =Xors(L"SoundWave Engine.Default__SoundWave");
             const wchar_t* ShootSoundPrev =Xors(L"SoundWave Engine.Default__SoundWave");
             bool SoundChanged = false;
             const wchar_t* TeamHitMarkerSound =Xors(L"SoundWave Engine.Default__SoundWave");
             const wchar_t* EnemyHitMarkerSound =Xors(L"SoundWave Engine.Default__SoundWave");
             const wchar_t* ShootSound = nullptr;
        };
    };

    namespace menu 
    {
        ToggleVar ShowMenu = ToggleVar(false, VK_F5, Xors(L"Show Menu"), Xors(L"Menu Keybind"), false);
        KeyBindVar ExtraCheatKey = KeyBindVar(false, 0, VK_CAPITAL, Xors(L"Extra Cheat Key"), Xors(L"Extra key to press for cheat keybinds"), false);
        ToggleVar Uninject = ToggleVar(false, 0, Xors(L"Uninject"), Xors(L"Uninject the cheat"), false);
        ToggleVar ShowStructureMissingAlerts = ToggleVar(true, 0, Xors(L"Show Structure Missing Alerts"), Xors(L"Toggle red alert for missing structure"), false);
        ToggleVar HudMenu = ToggleVar(false, 0, Xors(L"Hud Menu"), Xors(L"Simple, minimalistic menu on hud"), false);
        KeyBindVar ForwardKey = KeyBindVar(false, 0, 'D', Xors(L"Select Key"), Xors(L""), false);
        KeyBindVar BackwardKey = KeyBindVar(false, 0, 'A', Xors(L"Back Key"), Xors(L""), false);
        KeyBindVar DownKey = KeyBindVar(false, 0, 'S', Xors(L"Down Key"), Xors(L""), false);
        KeyBindVar UpKey = KeyBindVar(false, 0, 'W', Xors(L"Up Key"), Xors(L""), false);
    }; 
};

bool settings::Initialize()
{
    aimbot::Aimbot = KeyBindVar(false, 0, 'G', Xors(L"Aimbot"), Xors(L"Aims at Players"), false);
    aimbot::OnlyVisible = ToggleVar(false, 0, Xors(L"Only Visible"), Xors(L"Only Aims at Visible Players"), false);
    aimbot::TargetTeam = ToggleVar(false, 0, Xors(L"Target Team"), Xors(L"Aims at Teammates"), false);
    aimbot::UseFov = FloatVar(false, 0, 25.f, 1.f, 1000.f, Xors(L"Use FOV"), Xors(L"Aims at Players in FOV"), false, VarT::Float);
    aimbot::Tracers = IntVar(false, 0, 2, 0, 10, Xors(L"Tracers"), Xors(L"Draws Shot tracers"), false, VarT::Int);
    aimbot::ShieldBypass = ToggleVar(false, 0, Xors(L"Anti Shield"), Xors(L"Shoots Boots When Shielding"), true);
    aimbot::SpoofHeadshots = ToggleVar(false, 0, Xors(L"Spoof Headshots"), Xors(L"Spoof Headshots"), false);
    aimbot::AntiDesync = ToggleVar(false, 0, Xors(L"Anti Desync"), Xors(L"Disables Desync For Players"), false);
    aimbot::EnableCrosshair = ToggleVar(false, 0, Xors(L"Enable Crosshair"), Xors(L"Enable Crosshair"), false);
    aimbot::EnablePrediction = ToggleVar(false, 0, Xors(L"Enable Prediction"), Xors(L"Enable Prediction"), false);
    aimbot::EnableTriggerBot = ToggleVar(false, 0, Xors(L"Enable TriggerBot"), Xors(L"Enable TriggerBot"), false);
    aimbot::TargetDinos = ToggleVar(false, 0, Xors(L"Target Dinos"), Xors(L"Target Dinos"), false);
    aimbot::ServerSilent = ToggleVar(false, 0, Xors(L"Server Silent"), Xors(L"Server Silent"), false);
    aimbot::TargetSleepers = ToggleVar(false, 0, Xors(L"Target Sleepers"), Xors(L"Target Sleepers"), false);
    aimbot::AmmoIndicator = FloatVar(false, 0, 15.f, 0.1f, 50.f, Xors(L"Ammo Indicator"), Xors(L"Draws ammo circle around crosshair"), false, VarT::Float);
    aimbot::PredictionMultiplier = FloatVar(false, 0, 1.f, 0.1f, 7.f, Xors(L"Prediction Multiplier"), Xors(L"Prediction Multiplier"), false, VarT::NoToggleFloat);
    aimbot::AddToAllyList = KeyBindVar(false, 0, VK_MBUTTON, Xors(L"Add To Ally List"), Xors(L"Adds tribe currently targeting to ally"), false);
    aimbot::ClearAllyList = KeyBindVar(false, 0, VK_END, Xors(L"Clear Ally List"), Xors(L"removes all allies"), false);
    aimbot::EnableTargetLine = ToggleVar(true, 0, Xors(L"Enable Target Line"), Xors(L"Draw line to aimbot target"), false);
    aimbot::ShowTargetingString = ToggleVar(true, 0, Xors(L"Show Targeting Info"), Xors(L"Shows extra target info"), false);
    aimbot::CurrentBone = IntVar(false, 0, 0, 0, 1000, Xors(L"Current Bone"), Xors(L"Current Bone"), false, VarT::NoToggleInt);
    aimbot::CurrentBoneName = Xors(L"");
    aimbot::FakeRotation = ToggleVar(false, 0, Xors(L"Infinite Stam"), Xors(L"Infinite Stam While Running (Bugs Tek Leg)"), false);
    aimbot::ClientOmniMovement = ToggleVar(false, 0, Xors(L"Client Omni Movement"), Xors(L"For Players"), false);
    aimbot::ServerOmniMovement = ToggleVar(false, 0, Xors(L"Server Omni Movement"), Xors(L"For Dinos"), false);
    aimbot::SpoofTargetPos = KeyBindOptionalVar(false, 0, 0, 0, Xors(L"Spoof Target Pos"), Xors(L"UNOFFICIAL ONLY/dedi wallbang"), false);
    aimbot::RailgunAimbot = KeyBindOptionalVar(false, 0, 0, 0, Xors(L"Railgun Aimbot"), Xors(L"Railgun Aimbot"), false);
    aimbot::RailgunAimbotSpeed = FloatVar(false, 0, 0.45f, 0.1f, 0.6f, Xors(L"Railgun Aimbot Speed"), Xors(L"Lower when high ping"), false, VarT::NoToggleFloat);
    aimbot::RailgunHideTrail = ToggleVar(true, 0, Xors(L"Railgun Hide Trail"), Xors(L"Hide shot particles"), false);
    aimbot::DesyncWalk = ToggleVar(false, 0, Xors(L"Desync Walk"), Xors(L"Desyncs Player Location Slightly"), false);
    aimbot::DesyncStrength = IntVar(false, 0, 1, 1, 15, Xors(L"Desync Strength"), Xors(L"How Strong Desync Is"), false, VarT::NoToggleInt);
    aimbot::AdditionalDesync = ToggleVar(false, 0, Xors(L"Additional Movement Desync"), Xors(L"Additionally Desyncs"), false);

    enemyPlayer::EnableEnemyPlayer = ToggleVar(false, 0, Xors(L"Enable Enemy Player"), Xors(L""), false);
    enemyPlayer::CenterText = ToggleVar(true, 0, Xors(L"Center Enemy Text"), Xors(L"Center Esp Text"), false);
    enemyPlayer::OutlineText = ToggleVar(true, 0, Xors(L"Outline Enemy Text"), Xors(L"Outline Esp Text"), false);
    enemyPlayer::Name = ToggleVar(false, 0, Xors(L"Enemy Name"), Xors(L""), false);
    enemyPlayer::TribeName = ToggleVar(false, 0, Xors(L"Enemy Tribe Name"), Xors(L""), false);
    enemyPlayer::Box = ToggleVar(false, 0, Xors(L"Enemy Box"), Xors(L""), false);
    enemyPlayer::BoxType = 2;
    enemyPlayer::Health = ToggleVar(false, 0, Xors(L"Enemy Health"), Xors(L""), false);
    enemyPlayer::Torpor = ToggleVar(false, 0, Xors(L"Enemy Torpor"), Xors(L""), false);
    enemyPlayer::Bones = ToggleVar(false, 0, Xors(L"Enemy Bones"), Xors(L""), false);
    enemyPlayer::Distance = ToggleVar(false, 0, Xors(L"Enemy Distance"), Xors(L""), false);
    enemyPlayer::Snaplines = ToggleVar(false, 0, Xors(L"Enemy Snaplines"), Xors(L""), false);
    enemyPlayer::HeadDot = ToggleVar(false, 0, Xors(L"Enemy Head Dot"), Xors(L""), false);
    enemyPlayer::ViewLine = ToggleVar(false, 0, Xors(L"Enemy View Line"), Xors(L""), false);
    enemyPlayer::Armor = ToggleVar(false, 0, Xors(L"Enemy Armor"), Xors(L""), false);
    enemyPlayer::Buffs = ToggleVar(false, 0, Xors(L"Enemy Buffs"), Xors(L""), false);
    enemyPlayer::Weapon = ToggleVar(false, 0, Xors(L"Enemy Weapon"), Xors(L""), false);
    enemyPlayer::Chams = ToggleVar(false, 0, Xors(L"Enemy Chams"), Xors(L""), false);
    enemyPlayer::OnlyVisible = ToggleVar(false, 0, Xors(L"Enemy Only Visible"), Xors(L""), false);
    enemyPlayer::EnemySleeping = ToggleVar(false, 0, Xors(L"Enemy Sleeping"), Xors(L""), false);
    enemyPlayer::EnemyDead = ToggleVar(false, 0, Xors(L"Enemy Dead"), Xors(L""), false);
    enemyPlayer::EnemyWeight = ToggleVar(false, 0, Xors(L"Enemy Weight"), Xors(L""), false);
    enemyPlayer::EnemyExtraInfo = ToggleVar(false, 0, Xors(L"Enemy Implant / Steam"), Xors(L""), false);

    enemyPlayer::EnemyColor = ColorVar(false, 0, FLinearColor(1.f, 0.f, 0.f, 1.f), Xors(L"Enemy Color"), Xors(L""), false);
    enemyPlayer::EnemyNonvisibleColor = ColorVar(false, 0, FLinearColor(1.f, 0.f, 1.f, 1.f), Xors(L"Enemy Nonvisible Color"), Xors(L""), false);
    enemyPlayer::EnemySleepingColor = ColorVar(false, 0, FLinearColor(1.f, 0.f, 0.f, 0.2f), Xors(L"Enemy Sleeping Color"), Xors(L""), false);
    enemyPlayer::EnemyDeadColor = ColorVar(false, 0, FLinearColor(0.f, 0.f, 0.f, 1.f), Xors(L"Enemy Dead Color"), Xors(L""), false);

    enemyPlayer::EnemyPlayerArmorChams = ToggleVar(false, 0, Xors(L"Enemy Armor Chams"), Xors(L""), false);
    enemyPlayer::EnemyPlayerShieldChams = ToggleVar(false, 0, Xors(L"Enemy Shield Chams"), Xors(L""), false);
    enemyPlayer::EnemyPlayerWeaponChams = ToggleVar(false, 0, Xors(L"Enemy Weapon Chams"), Xors(L""), false);

    enemyPlayer::EnemyPlayerArmorColor = ColorVar(false, 0, FLinearColor(1, 0, 0, 1), Xors(L"Enemy Player Armor Color"), Xors(L""), false);
    enemyPlayer::EnemyPlayerShieldColor = ColorVar(false, 0, FLinearColor(1, 0, 0, 1), Xors(L"Enemy Player Shield Color"), Xors(L""), false);
    enemyPlayer::EnemyPlayerWeaponColor = ColorVar(false, 0, FLinearColor(1, 0, 0, 1), Xors(L"Enemy Player Weapon Color"), Xors(L""), false);

    teamPlayer::EnableTeamPlayer = ToggleVar(false, 0, Xors(L"Enable Team Player"), Xors(L""), false);
    teamPlayer::CenterText = ToggleVar(true, 0, Xors(L"Center Team Text"), Xors(L"Center Esp Text"), false);
    teamPlayer::OutlineText = ToggleVar(true, 0, Xors(L"Outline Team Text"), Xors(L"Outline Esp Text"), false);
    teamPlayer::Name = ToggleVar(false, 0, Xors(L"Team Name"), Xors(L""), false);
    teamPlayer::TribeName = ToggleVar(false, 0, Xors(L"Team Tribe Name"), Xors(L""), false);
    teamPlayer::Box = ToggleVar(false, 0, Xors(L"Team Box"), Xors(L""), false);
    teamPlayer::BoxType = 2;
    teamPlayer::Health = ToggleVar(false, 0, Xors(L"Team Health"), Xors(L""), false);
    teamPlayer::Torpor = ToggleVar(false, 0, Xors(L"Team Torpor"), Xors(L""), false);
    teamPlayer::Bones = ToggleVar(false, 0, Xors(L"Team Bones"), Xors(L""), false);
    teamPlayer::Distance = ToggleVar(false, 0, Xors(L"Team Distance"), Xors(L""), false);
    teamPlayer::ViewLine = ToggleVar(false, 0, Xors(L"Team View Line"), Xors(L""), false);
    teamPlayer::Armor = ToggleVar(false, 0, Xors(L"Team Armor"), Xors(L""), false);
    teamPlayer::Buffs = ToggleVar(false, 0, Xors(L"Team Buffs"), Xors(L""), false);
    teamPlayer::Weapon = ToggleVar(false, 0, Xors(L"Team Weapon"), Xors(L""), false);
    teamPlayer::Chams = ToggleVar(false, 0, Xors(L"Team Chams"), Xors(L""), false);
    teamPlayer::OnlyVisible = ToggleVar(false, 0, Xors(L"Team Only Visible"), Xors(L""), false);
    teamPlayer::TeamSleeping = ToggleVar(false, 0, Xors(L"Team Sleeping"), Xors(L""), false);
    teamPlayer::TeamDead = ToggleVar(false, 0, Xors(L"Team Dead"), Xors(L""), false);
    teamPlayer::TeamWeight = ToggleVar(false, 0, Xors(L"Team Weight"), Xors(L""), false);
    teamPlayer::TeamExtraInfo = ToggleVar(false, 0, Xors(L"Team Implant / Steam"), Xors(L""), false);

    teamPlayer::TeamColor = ColorVar(false, 0, FLinearColor(0.f, 0.f, 1.f, 1.f), Xors(L"Team Color"), Xors(L""), false);
    teamPlayer::TeamNonvisibleColor = ColorVar(false, 0, FLinearColor(0.f, 1.f, 0.f, 1.f), Xors(L"Team Nonvisible Color"), Xors(L""), false);
    teamPlayer::TeamSleepingColor = ColorVar(false, 0, FLinearColor(0.f, 0.f, 1.f, 0.2f), Xors(L"Team Sleeping Color"), Xors(L""), false);
    teamPlayer::TeamDeadColor = ColorVar(false, 0, FLinearColor(0.f, 0.f, 0.f, 1.f), Xors(L"Team Dead Color"), Xors(L""), false);

    teamPlayer::TeamPlayerArmorChams = ToggleVar(false, 0, Xors(L"Team Armor Chams"), Xors(L""), false);
    teamPlayer::TeamPlayerShieldChams = ToggleVar(false, 0, Xors(L"Team Shield Chams"), Xors(L""), false);
    teamPlayer::TeamPlayerWeaponChams = ToggleVar(false, 0, Xors(L"Team Weapon Chams"), Xors(L""), false);

    teamPlayer::TeamPlayerArmorColor = ColorVar(false, 0, FLinearColor::FromRGB(255, 192, 203), Xors(L"Team Player Armor Color"), Xors(L""), false);
    teamPlayer::TeamPlayerShieldColor = ColorVar(false, 0, FLinearColor::FromRGB(255, 192, 203), Xors(L"Team Player Shield Color"), Xors(L""), false);
    teamPlayer::TeamPlayerWeaponColor = ColorVar(false, 0, FLinearColor::FromRGB(255, 192, 203), Xors(L"Team Player Weapon Color"), Xors(L""), false);


    enemyDino::EnableEnemyDino = ToggleVar(false, 0, Xors(L"Enable Enemy Dino"), Xors(L""), false);
    enemyDino::Name = ToggleVar(false, 0, Xors(L"Enemy Dino Name"), Xors(L""), false);
    enemyDino::Health = ToggleVar(false, 0, Xors(L"Enemy Dino Health"), Xors(L""), false);
    enemyDino::Distance = ToggleVar(false, 0, Xors(L"Enemy Dino Distance"), Xors(L""), false);
    enemyDino::Buffs = ToggleVar(false, 0, Xors(L"Enemy Dino Buffs"), Xors(L""), false);
    enemyDino::Chams = ToggleVar(false, 0, Xors(L"Enemy Dino Chams"), Xors(L""), false);
    enemyDino::Aggression = ToggleVar(false, 0, Xors(L"Enemy Dino Aggression"), Xors(L""), false);
    enemyDino::OnlyVisible = ToggleVar(false, 0, Xors(L"Enemy Dino Only Visible"), Xors(L""), false);
    enemyDino::EnemyDinoColor = ColorVar(false, 0, FLinearColor(1.f, 0.f, 0.f, 1.f), Xors(L"Enemy Dino Color"), Xors(L""), false);

    teamDino::EnableTeamDino = ToggleVar(false, 0, Xors(L"Enable Team Dino"), Xors(L""), false);
    teamDino::Name = ToggleVar(false, 0, Xors(L"Team Dino Name"), Xors(L""), false);
    teamDino::Health = ToggleVar(false, 0, Xors(L"Team Dino Health"), Xors(L""), false);
    teamDino::Distance = ToggleVar(false, 0, Xors(L"Team Dino Distance"), Xors(L""), false);
    teamDino::Buffs = ToggleVar(false, 0, Xors(L"Team Dino Buffs"), Xors(L""), false);
    teamDino::Chams = ToggleVar(false, 0, Xors(L"Team Dino Chams"), Xors(L""), false);
    teamDino::Aggression = ToggleVar(false, 0, Xors(L"Team Dino Aggression"), Xors(L""), false);
    teamDino::OnlyVisible = ToggleVar(false, 0, Xors(L"Team Dino Only Visible"), Xors(L""), false);
    teamDino::TeamDinoColor = ColorVar(false, 0, FLinearColor(0.f, 1.f, 0.f, 1.f), Xors(L"Team Dino Color"), Xors(L""), false);

    wildDino::EnableWildDino = ToggleVar(false, 0, Xors(L"Enable Wild Dino"), Xors(L"Enable Wild Dino"), false);
    wildDino::Name = ToggleVar(false, 0, Xors(L"Wild Dino Name"), Xors(L"Name"), false);
    wildDino::Health = ToggleVar(false, 0, Xors(L"Wild Dino Health"), Xors(L"Health"), false);
    wildDino::Distance = ToggleVar(false, 0, Xors(L"Wild Dino Distance"), Xors(L"Distance"), false);
    wildDino::Buffs = ToggleVar(false, 0, Xors(L"Wild Dino Buffs"), Xors(L""), false);
    wildDino::Chams = ToggleVar(false, 0, Xors(L"Wild Dino Chams"), Xors(L"Chams"), false);
    wildDino::OnlyVisible = ToggleVar(false, 0, Xors(L"Wild Dino Only Visible"), Xors(L"Only Visible"), false);
    wildDino::WildDinoColor = ColorVar(false, 0, FLinearColor(1.f, 1.f, 1.f, 1.f), Xors(L"Wild Dino Color"), Xors(L"Wild Dino Color"), false);
    wildDino::CurrentBoss = 0;
    wildDino::Bossfight = ToggleVar(false, 0, Xors(L"Bossfight Tribute"), Xors(L"Only Show Bossfight Tribute Dinos"), false);
    wildDino::EnableFilter = false;
    wildDino::WildDinoString = Xors(L"");
    wildDino::LevelFilter = IntVar(false, 0, 0, 0, 300, Xors(L"Level Filter"), Xors(L"Level Filter"), false, VarT::Int);
    wildDino::LevelFilterType = IntVar(false, 0, 2, 0, 2, Xors(L"Level Filter Type"), Xors(L"Change filter behaviour"), false, VarT::NoToggleInt);

    radar::DrawRadar = ToggleVar(false, 0, Xors(L"Draw Radar"), Xors(L"Draw Radar"), false);
    radar::DrawRadarBackground = ToggleVar(false, 0, Xors(L"Draw Radar Background"), Xors(L"Draw Radar Background"), false);
    radar::RadarBackgroundAlpha = FloatVar(false, 0, 0.5f, 0.f, 1.f, Xors(L"Radar Background Alpha"), Xors(L"Radar Background Alpha"), false, VarT::NoToggleFloat);
    radar::DrawRadarNESW = ToggleVar(false, 0, Xors(L"Radar Directions"), Xors(L"Show North/East/South/West"), false);
    radar::RadarSize = IntVar(false, 0, 40, 1, 100, Xors(L"Radar Size"), Xors(L"Change Radar Size"), false, VarT::NoToggleInt);
    radar::RadarZoom = IntVar(false, 0, 60, 1, 200, Xors(L"Radar Zoom"), Xors(L"Change Zoom for seeing less or more"), false, VarT::NoToggleInt);
    radar::RadarX = FloatVar(false, 0, 0.05f, 0.f, 1.f, Xors(L"Radar X"), Xors(L"Radar X"), false, VarT::NoToggleFloat);
    radar::RadarY = FloatVar(false, 0, 0.6f, 0.f, 1.f, Xors(L"Radar Y"), Xors(L"Radar Y"), false, VarT::NoToggleFloat);
    radar::DrawRadarEnemy = ToggleVar(false, 0, Xors(L"Draw Enemy Players"), Xors(L"Show Enemy Players on Radar"), false);
    radar::DrawRadarTeam = ToggleVar(false, 0, Xors(L"Draw Team Players"), Xors(L"Show Team Players on Radar"), false);
    radar::DrawRadarEnemyDinos = ToggleVar(false, 0, Xors(L"Draw Enemy Dinos"), Xors(L"Show Enemy Dinos on Radar"), false);
    radar::DrawRadarTeamDinos = ToggleVar(false, 0, Xors(L"Draw Team Dinos"), Xors(L"Show Team Dinos on Radar"), false);
    radar::CrosshairRadar2D = ToggleVar(false, 0, Xors(L"Crosshair Radar 2D"), Xors(L"2D Indicator For Enemy Players"), false);
    radar::ShowSleepingPlayers2D = ToggleVar(false, 0, Xors(L"Show Sleeping Players 2D"), Xors(L""), false);
    radar::CrosshairRadar2DMax = FloatVar(false, 0, 1000.f, 0.f, 10000.f, Xors(L"Crosshair Radar 2D Max"), Xors(L""), false, VarT::NoToggleFloat);
    radar::CrosshairRadar2DMin = FloatVar(false, 0, 0.f, 0.f, 10000.f, Xors(L"Crosshair Radar 2D Min"), Xors(L""), false, VarT::NoToggleFloat);
    radar::CrosshairRadar2DScale = FloatVar(false, 0, 1.f, 0.f, 10.f, Xors(L"Crosshair Radar 2D Scale"), Xors(L""), false, VarT::NoToggleFloat);
    radar::CrosshairRadar3D = ToggleVar(false, 0, Xors(L"Crosshair Radar 3D"), Xors(L"3D Indicator For Enemy Players"), false);
    radar::ShowSleepingPlayers3D = ToggleVar(false, 0, Xors(L"Show Sleeping Players 3D"), Xors(L""), false);
    radar::CrosshairRadar3DMax = FloatVar(false, 0, 1000.f, 0.f, 10000.f, Xors(L"Crosshair Radar 3D Max"), Xors(L""), false, VarT::NoToggleFloat);
    radar::CrosshairRadar3DMin = FloatVar(false, 0, 0.f, 0.f, 10000.f, Xors(L"Crosshair Radar 3D Min"), Xors(L""), false, VarT::NoToggleFloat);
    radar::CrosshairRadar3DScale = FloatVar(false, 0, 1.f, 0.f, 10.f, Xors(L"Crosshair Radar 3D Scale"), Xors(L""), false, VarT::NoToggleFloat);
   
    radar::DrawCrosshairRadar = ToggleVar(false, 0, Xors(L"Draw Crosshair Radar"), Xors(L"Enemy player indicator"), false);
    radar::CrossHairZoom = FloatVar(false, 0, 1.f, 1.f, 200.f, Xors(L"Zoom"), Xors(L""), false, VarT::NoToggleFloat);
    radar::CrossHairMinDistance = FloatVar(false, 0, 50.f, 0.f, 100.f, Xors(L"Min Distance"), Xors(L""), false, VarT::NoToggleFloat);
    radar::CrossHairMaxDistance = FloatVar(false, 0, 150.f, 100.f, 300.f, Xors(L"Max Distance"), Xors(L""), false, VarT::NoToggleFloat);
    radar::CrossHairScaleMinDistance = FloatVar(false, 0, 50.f, 0.f, 100.f, Xors(L"Scale Min Distance"), Xors(L""), false, VarT::NoToggleFloat);
    radar::CrossHairDegreesBetween = FloatVar(false, 0, 50.f, 0.f, 100.f, Xors(L"Arrow Width"), Xors(L""), false, VarT::NoToggleFloat);
    radar::CrossHairShowSleepingPlayers = ToggleVar(false, 0, Xors(L"Show Sleeping Players"), Xors(L""), false);
    radar::CrossHairShowTribePlayers = ToggleVar(false, 0, Xors(L"Show Tribe Players"), Xors(L""), false);
    miscStructure::SupplyDrop = StructureVar(false, 0, Xors(L"Supply Drop"), Xors(L"Draws Supply Drop"), ColorVar(false, 0, { 0,1,1,1 }, Xors(L"Supply Drop Color"), Xors(L"Color for Supply Drop"), false, VarT::NoToggleColor));
    miscStructure::CaveDrop = StructureVar(false, 0, Xors(L"Cave Drop"), Xors(L"Draws Cave Drop"), ColorVar(false, 0, { 0,1,1,1 }, Xors(L"Cave Drop Color"), Xors(L"Color for Cave Drop"), false, VarT::NoToggleColor));
    miscStructure::Artifact = StructureVar(false, 0, Xors(L"Artifact"), Xors(L"Draws Artifact"), ColorVar(false, 0, { 0,1,1,1 }, Xors(L"Artifact Color"), Xors(L"Color for Artifact"), false, VarT::NoToggleColor));
    miscStructure::BeaverDam = StructureVar(false, 0, Xors(L"Beaver Dam"), Xors(L"Draws Beaver Dam"), ColorVar(false, 0, { 0,1,1,1 }, Xors(L"Beaver Dam Color"), Xors(L"Color for Beaver Dam"), false, VarT::NoToggleColor));
    miscStructure::BeeHive = StructureVar(false, 0, Xors(L"Bee Hive"), Xors(L"Draws Bee Hive"), ColorVar(false, 0, { 0,1,1,1 }, Xors(L"Bee Hive Color"), Xors(L"Color for Bee Hive"), false, VarT::NoToggleColor));
    miscStructure::Note = StructureVar(false, 0, Xors(L"Note"), Xors(L"Draws Note"), ColorVar(false, 0, { 0,1,1,1 }, Xors(L"Note Color"), Xors(L"Color for Note"), false, VarT::NoToggleColor));
    miscStructure::Teleport = ToggleVar(false, 0, Xors(L"Teleport Esp"), Xors(L"Draws Teleport Locations"), false);
    miscStructure::DrawDroppedItems = ToggleVar(false, 0, Xors(L"Dropped Items"), Xors(L"Draws dropped items' name"), false);
    miscStructure::DrawDroppedEggs = ToggleVar(false, 0, Xors(L"Dropped Eggs"), Xors(L"Draws eggs"), false);
    miscStructure::BossTeleportEsp = ToggleVar(false, 0, Xors(L"Boss Esp"), Xors(L"Draws Boss Teleport Location"), false);
    miscStructure::ProcessStructures = ToggleVar(true, 0, Xors(L"Process Structures"), Xors(L"Disable to ignore all structures"), false);
    miscStructure::ChargeNode = StructureVar(false, 0, Xors(L"Charge Node"), Xors(L"Draws Charge Node"), ColorVar(false, 0, { 0,1,1,1 }, Xors(L"Charge Node Color"), Xors(L"Color for Charge Node"), false, VarT::NoToggleColor));
    miscStructure::Nest = StructureVar(false, 0, Xors(L"Nest"), Xors(L"Wyvern / Drake Nest"), ColorVar(false, 0, { 0,1,1,1 }, Xors(L"Nest Color"), Xors(L"Color for Nest"), false, VarT::NoToggleColor));

    enemyStructure::DrawEStructures = ToggleVar(true, 0, Xors(L"Draw Enemy Structures"), Xors(L"Toggle all Enemy Structures"), false);
    enemyStructure::EnemySleepingBag = StructureVar(false, 0, Xors(L"Enemy Sleeping Bag"), Xors(L"Draws Sleeping Bag"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Sleeping Bag EColor"), Xors(L"EColorfor Sleeping Bag"), false, VarT::NoToggleColor));
    enemyStructure::EnemyBed = StructureVar(false, 0, Xors(L"Enemy Bed"), Xors(L"Draws Bed"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Bed EColor"), Xors(L"EColorfor Bed"), false, VarT::NoToggleColor));
    enemyStructure::EnemyBunkBed = StructureVar(false, 0, Xors(L"Enemy Bunk Bed"), Xors(L"Draws Bunk Bed"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Bunk Bed EColor"), Xors(L"EColorfor Bunk Bed"), false, VarT::NoToggleColor));
    enemyStructure::EnemySmallTeleporter = StructureVar(false, 0, Xors(L"Enemy Small Teleporter"), Xors(L"Draws Small Teleporter"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Small Teleporter EColor"), Xors(L"EColorfor Small Teleporter"), false, VarT::NoToggleColor));
    enemyStructure::EnemyMediumTeleporter = StructureVar(false, 0, Xors(L"Enemy Medium Teleporter"), Xors(L"Draws Medium Teleporter"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Medium Teleporter EColor"), Xors(L"EColorfor Medium Teleporter"), false, VarT::NoToggleColor));
    enemyStructure::EnemyLargeTeleporter = StructureVar(false, 0, Xors(L"Enemy Large Teleporter"), Xors(L"Draws Large Teleporter"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Large Teleporter EColor"), Xors(L"EColorfor Large Teleporter"), false, VarT::NoToggleColor));
    enemyStructure::EnemyAutoTurret = StructureExtraVar(false, 0, Xors(L"Enemy Auto Turret"), Xors(L"Draws Auto Turret"), ColorVar(false, 0, { 0.78f,0.03f,0.08f,1.f }, Xors(L"Auto Turret EColor"), Xors(L"EColorfor Auto Turret"), false, VarT::NoToggleColor));
    enemyStructure::EnemyHeavyTurret = StructureExtraVar(false, 0, Xors(L"Enemy Heavy Turret"), Xors(L"Draws Heavy Turret"), ColorVar(false, 0, { 0.78f,0.03f,0.08f,1.f }, Xors(L"Heavy Turret EColor"), Xors(L"EColorfor Heavy Turret"), false, VarT::NoToggleColor));
    enemyStructure::EnemyTekTurret = StructureExtraVar(false, 0, Xors(L"Enemy Tek Turret"), Xors(L"Draws Tek Turret"), ColorVar(false, 0, { 0.11f,0.56f,1.f,1.f }, Xors(L"Tek Turret EColor"), Xors(L"EColorfor Tek Turret"), false, VarT::NoToggleColor));
    enemyStructure::EnemySmallCropPlot = StructureVar(false, 0, Xors(L"Enemy Small Crop Plot"), Xors(L"Draws Small Crop Plot"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Small Crop Plot EColor"), Xors(L"EColorfor Small Crop Plot"), false, VarT::NoToggleColor));
    enemyStructure::EnemyMediumCropPlot = StructureVar(false, 0, Xors(L"Enemy Medium Crop Plot"), Xors(L"Draws Medium Crop Plot"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Medium Crop Plot EColor"), Xors(L"EColorfor Medium Crop Plot"), false, VarT::NoToggleColor));
    enemyStructure::EnemyLargeCropPlot = StructureVar(false, 0, Xors(L"Enemy Large Crop Plot"), Xors(L"Draws Large Crop Plot"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Large Crop Plot EColor"), Xors(L"EColorfor Large Crop Plot"), false, VarT::NoToggleColor));
    enemyStructure::EnemyElectricalGenerator = StructureVar(false, 0, Xors(L"Enemy Electrical Generator"), Xors(L"Draws Electrical Generator"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Electrical Generator EColor"), Xors(L"EColorfor Electrical Generator"), false, VarT::NoToggleColor));
    enemyStructure::EnemyEnemyTekGenerator = StructureVar(false, 0, Xors(L"Enemy Tek Generator"), Xors(L"Draws Tek Generator"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Tek Generator EColor"), Xors(L"EColorfor Tek Generator"), false, VarT::NoToggleColor));
    enemyStructure::EnemyTekTransmitter = StructureVar(false, 0, Xors(L"Enemy Tek Transmitter"), Xors(L"Draws TeK Transmitter"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Tek Transmitter TColor"), Xors(L"Color for Tek Transmitter"), false, VarT::NoToggleColor));
    enemyStructure::EnemyCryoFridge = StructureVar(false, 0, Xors(L"Enemy Cryo Fridge"), Xors(L"Draws Cryo Fridge"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Cryo Fridge EColor"), Xors(L"EColorfor Cryo Fridge"), false, VarT::NoToggleColor));
    enemyStructure::EnemyCloningChamber = StructureVar(false, 0, Xors(L"Enemy Cloning Chamber"), Xors(L"Draws Cloning Chamber"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Cloning Chamber EColor"), Xors(L"EColorfor Cloning Chamber"), false, VarT::NoToggleColor));
    enemyStructure::EnemyVacuumCompartment = StructureVar(false, 0, Xors(L"Enemy Vacuum Compartment"), Xors(L"Draws Vacuum Compartment"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Vacuum Compartment EColor"), Xors(L"EColorfor Vacuum Compartment"), false, VarT::NoToggleColor));
    enemyStructure::EnemyFoundation = StructureVar(false, 0, Xors(L"Enemy Foundation"), Xors(L"Draws Foundation"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Foundation EColor"), Xors(L"EColorfor Foundation"), false, VarT::NoToggleColor));
    enemyStructure::EnemyWall = StructureVar(false, 0, Xors(L"Enemy Wall"), Xors(L"Draws Wall"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Wall EColor"), Xors(L"EColorfor Wall"), false, VarT::NoToggleColor));
    enemyStructure::EnemyDoor = StructureVar(false, 0, Xors(L"Enemy Door"), Xors(L"Draws Door"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Door EColor"), Xors(L"EColorfor Door"), false, VarT::NoToggleColor));
    enemyStructure::EnemyDoorFrame = StructureVar(false, 0, Xors(L"Enemy Door Frame"), Xors(L"Draws Door Frame"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Door Frame EColor"), Xors(L"EColorfor Door Frame"), false, VarT::NoToggleColor));
    enemyStructure::EnemyCeiling = StructureVar(false, 0, Xors(L"Enemy Ceiling"), Xors(L"Draws Ceiling"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Ceiling EColor"), Xors(L"EColorfor Ceiling"), false, VarT::NoToggleColor));
    enemyStructure::EnemyFenceFoundation = StructureVar(false, 0, Xors(L"Enemy Fence Foundation"), Xors(L"Draws Fence Foundation"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Fence Foundation EColor"), Xors(L"EColorfor Fence Foundation"), false, VarT::NoToggleColor));
    enemyStructure::EnemySmallStorageBox = StructureVar(false, 0, Xors(L"Enemy Small Storage Box"), Xors(L"Draws Small Storage Box"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Small Storage Box EColor"), Xors(L"EColorfor Small Storage Box"), false, VarT::NoToggleColor));
    enemyStructure::EnemyLargeStorageBox = StructureVar(false, 0, Xors(L"Enemy Large Storage Box"), Xors(L"Draws Large Storage Box"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Large Storage Box EColor"), Xors(L"EColorfor Large Storage Box"), false, VarT::NoToggleColor));
    enemyStructure::EnemyVault = StructureVar(false, 0, Xors(L"Enemy Vault"), Xors(L"Draws Vault"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Vault EColor"), Xors(L"EColorfor Vault"), false, VarT::NoToggleColor));
    enemyStructure::EnemyRefrigerator = StructureVar(false, 0, Xors(L"Enemy Refrigerator"), Xors(L"Draws Refrigerator"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Refrigerator EColor"), Xors(L"EColorfor Refrigerator"), false, VarT::NoToggleColor));
    enemyStructure::EnemyAirConditioner = StructureVar(false, 0, Xors(L"Enemy Air Conditioner"), Xors(L"Draws Air Conditioner"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Air Conditioner EColor"), Xors(L"EColorfor Air Conditioner"), false, VarT::NoToggleColor));
    enemyStructure::EnemyDedicatedStorage = StructureVar(false, 0, Xors(L"Enemy Dedicated Storage"), Xors(L"Draws Dedicated Storage"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Dedicated Storage EColor"), Xors(L"EColorfor Dedicated Storage"), false, VarT::NoToggleColor));
    enemyStructure::EnemyTekForceField = StructureVar(false, 0, Xors(L"Enemy Tek Force Field"), Xors(L"Draws Tek Force Field"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Tek Force Field EColor"), Xors(L"EColorfor Tek Force Field"), false, VarT::NoToggleColor));
    enemyStructure::EnemyReplicator = StructureVar(false, 0, Xors(L"Enemy Replicator"), Xors(L"Draws Replicator"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Replicator EColor"), Xors(L"EColorfor Replicator"), false, VarT::NoToggleColor));
    enemyStructure::EnemyFabricator = StructureVar(false, 0, Xors(L"Enemy Fabricator"), Xors(L"Draws Fabricator"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Fabricator EColor"), Xors(L"EColorfor Fabricator"), false, VarT::NoToggleColor));
    enemyStructure::EnemySmithy = StructureVar(false, 0, Xors(L"Enemy Smithy"), Xors(L"Draws Smithy"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Smithy EColor"), Xors(L"EColorfor Smithy"), false, VarT::NoToggleColor));
    enemyStructure::EnemyMortarAndPestle = StructureVar(false, 0, Xors(L"Enemy Mortar And Pestle"), Xors(L"Draws Mortar And Pestle"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Mortar And Pestle EColor"), Xors(L"EColorfor Mortar And Pestle"), false, VarT::NoToggleColor));
    enemyStructure::EnemyChemistryBench = StructureVar(false, 0, Xors(L"Enemy Chemistry Bench"), Xors(L"Draws Chemistry Bench"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Chemistry Bench EColor"), Xors(L"EColorfor Chemistry Bench"), false, VarT::NoToggleColor));
    enemyStructure::EnemyIndustrialForge = StructureVar(false, 0, Xors(L"Enemy Industrial Forge"), Xors(L"Draws Industrial Forge"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Industrial Forge EColor"), Xors(L"EColorfor Industrial Forge"), false, VarT::NoToggleColor));
    enemyStructure::EnemyIndustrialGrill = StructureVar(false, 0, Xors(L"Enemy Industrial Grill"), Xors(L"Draws Industrial Grill"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Industrial Grill EColor"), Xors(L"EColorfor Industrial Grill"), false, VarT::NoToggleColor));
    enemyStructure::EnemyIndustrialCookingPot = StructureVar(false, 0, Xors(L"Enemy Industrial Cooking Pot"), Xors(L"Draws Industrial Cooking Pot"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Industrial Cooking Pot EColor"), Xors(L"EColorfor Industrial Cooking Pot"), false, VarT::NoToggleColor));
    enemyStructure::EnemyGrinder = StructureVar(false, 0, Xors(L"Enemy Grinder"), Xors(L"Draws Grinder"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Grinder EColor"), Xors(L"EColorfor Grinder"), false, VarT::NoToggleColor));
    enemyStructure::EnemyCookingPot = StructureVar(false, 0, Xors(L"Enemy Cooking Pot"), Xors(L"Draws Cooking Pot"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Cooking Pot EColor"), Xors(L"EColorfor Cooking Pot"), false, VarT::NoToggleColor));
    enemyStructure::EnemyC4Charge = StructureVar(false, 0, Xors(L"Enemy C4 Charge"), Xors(L"Draws C4 Charge"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"C4 Charge EColor"), Xors(L"EColorfor C4 Charge"), false, VarT::NoToggleColor));
    enemyStructure::EnemyBearTrap = StructureVar(false, 0, Xors(L"Enemy Bear Trap"), Xors(L"Draws Bear Trap"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Bear Trap EColor"), Xors(L"EColorfor Bear Trap"), false, VarT::NoToggleColor));
    enemyStructure::EnemyLargeBearTrap = StructureVar(false, 0, Xors(L"Enemy Large Bear Trap"), Xors(L"Draws Large Bear Trap"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Large Bear Trap EColor"), Xors(L"EColorfor Large Bear Trap"), false, VarT::NoToggleColor));
    enemyStructure::EnemyWaterMine = StructureVar(false, 0, Xors(L"Enemy Water Mine"), Xors(L"Draws Water Mine"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Water Mine EColor"), Xors(L"EColorfor Water Mine"), false, VarT::NoToggleColor));
    enemyStructure::EnemyItemCache = StructureVar(false, 0, Xors(L"Enemy Item Cache"), Xors(L"Draws Item Cache"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Item Cache EColor"), Xors(L"EColorfor Item Cache"), false, VarT::NoToggleColor));
    enemyStructure::EnemyCliffPlatform = StructureVar(false, 0, Xors(L"Enemy Cliff Platform"), Xors(L"Draws Cliff Platform"), ColorVar(false, 0, { 1,0,1,1 }, Xors(L"Cliff Platform EColor"), Xors(L"EColorfor Cliff Platform"), false, VarT::NoToggleColor));
    enemyStructure::EnemyLinkedStorageBox = StructureVar(false, 0, Xors(L"Enemy Linked Storage Box"), Xors(L"Enemy Linked Storage Box"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Linked Storage Box EColor"), Xors(L"Color for Linked Storage Box"), false, VarT::NoToggleColor));
    enemyStructure::EnemyPlantX = StructureVar(false, 0, Xors(L"Enemy Plant X"), Xors(L"Draws Plant X"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Plant X EColor"), Xors(L"Color for Plant X"), false, VarT::NoToggleColor));
    enemyStructure::EnemyTeslaCoil = StructureExtraVar(false, 0, Xors(L"Enemy Tesla Coil"), Xors(L"Draws Tesla Coil"), ColorVar(false, 0, { 0.11f,0.56f,1.f,1.f }, Xors(L"Tesla Coil EColor"), Xors(L"EColorfor Tesla Coil"), false, VarT::NoToggleColor));

    enemyStructure::EnemyStructureVars = {
    &enemyStructure::EnemySleepingBag,
    &enemyStructure::EnemyBed,
    &enemyStructure::EnemyBunkBed,
    &enemyStructure::EnemySmallTeleporter,
    &enemyStructure::EnemyMediumTeleporter,
    &enemyStructure::EnemyLargeTeleporter,
    &enemyStructure::EnemyAutoTurret,
    &enemyStructure::EnemyHeavyTurret,
    &enemyStructure::EnemyTekTurret,
    &enemyStructure::EnemySmallCropPlot,
    &enemyStructure::EnemyMediumCropPlot,
    &enemyStructure::EnemyLargeCropPlot,
    &enemyStructure::EnemyElectricalGenerator,
    &enemyStructure::EnemyEnemyTekGenerator,
    &enemyStructure::EnemyTekTransmitter,
    &enemyStructure::EnemyCryoFridge,
    &enemyStructure::EnemyCloningChamber,
    &enemyStructure::EnemyVacuumCompartment,
    &enemyStructure::EnemyFoundation,
    &enemyStructure::EnemyWall,
    &enemyStructure::EnemyDoor,
    &enemyStructure::EnemyDoorFrame,
    &enemyStructure::EnemyCeiling,
    &enemyStructure::EnemyFenceFoundation,
    &enemyStructure::EnemySmallStorageBox,
    &enemyStructure::EnemyLargeStorageBox,
    &enemyStructure::EnemyVault,
    &enemyStructure::EnemyRefrigerator,
    &enemyStructure::EnemyAirConditioner,
    &enemyStructure::EnemyDedicatedStorage,
    &enemyStructure::EnemyTekForceField,
    &enemyStructure::EnemyReplicator,
    &enemyStructure::EnemyFabricator,
    &enemyStructure::EnemySmithy,
    &enemyStructure::EnemyMortarAndPestle,
    &enemyStructure::EnemyChemistryBench,
    &enemyStructure::EnemyIndustrialForge,
    &enemyStructure::EnemyIndustrialGrill,
    &enemyStructure::EnemyIndustrialCookingPot,
    &enemyStructure::EnemyGrinder,
    &enemyStructure::EnemyCookingPot,
    &enemyStructure::EnemyC4Charge,
    &enemyStructure::EnemyBearTrap,
    &enemyStructure::EnemyLargeBearTrap,
    &enemyStructure::EnemyWaterMine,
    &miscStructure::SupplyDrop,
    &miscStructure::CaveDrop,
    &miscStructure::Artifact,
    &miscStructure::BeaverDam,
    &miscStructure::BeeHive,
    &miscStructure::Note,
    &miscStructure::ChargeNode,
    &enemyStructure::EnemyItemCache,
    &enemyStructure::EnemyCliffPlatform,
    &miscStructure::Nest,
    &enemyStructure::EnemyPlantX,
    &enemyStructure::EnemyLinkedStorageBox,
    &enemyStructure::EnemyTeslaCoil,
    };

    teamStructure::DrawTStructures = ToggleVar(true, 0, Xors(L"Draw Team Structures"), Xors(L"Toggle all Team Structures"), false);
    teamStructure::TeamSleepingBag = StructureVar(false, 0, Xors(L"Team Sleeping Bag"), Xors(L"Draws Sleeping Bag"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Sleeping Bag TColor"), Xors(L"Color for Sleeping Bag"), false, VarT::NoToggleColor));
    teamStructure::TeamBed = StructureVar(false, 0, Xors(L"Team Bed"), Xors(L"Draws Bed"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Bed TColor"), Xors(L"Color for Bed"), false, VarT::NoToggleColor));
    teamStructure::TeamBunkBed = StructureVar(false, 0, Xors(L"Team Bunk Bed"), Xors(L"Draws Bunk Bed"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Bunk Bed TColor"), Xors(L"Color for Bunk Bed"), false, VarT::NoToggleColor));
    teamStructure::TeamSmallTeleporter = StructureVar(false, 0, Xors(L"Team Small Teleporter"), Xors(L"Draws Small Teleporter"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Small Teleporter TColor"), Xors(L"Color for Small Teleporter"), false, VarT::NoToggleColor));
    teamStructure::TeamMediumTeleporter = StructureVar(false, 0, Xors(L"Team Medium Teleporter"), Xors(L"Draws Medium Teleporter"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Medium Teleporter TColor"), Xors(L"Color for Medium Teleporter"), false, VarT::NoToggleColor));
    teamStructure::TeamLargeTeleporter = StructureVar(false, 0, Xors(L"Team Large Teleporter"), Xors(L"Draws Large Teleporter"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Large Teleporter TColor"), Xors(L"Color for Large Teleporter"), false, VarT::NoToggleColor));
    teamStructure::TeamAutoTurret = StructureExtraVar(false, 0, Xors(L"Team Auto Turret"), Xors(L"Draws Auto Turret"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Auto Turret TColor"), Xors(L"Color for Auto Turret"), false, VarT::NoToggleColor));
    teamStructure::TeamHeavyTurret = StructureExtraVar(false, 0, Xors(L"Team Heavy Turret"), Xors(L"Draws Heavy Turret"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Heavy Turret TColor"), Xors(L"Color for Heavy Turret"), false, VarT::NoToggleColor));
    teamStructure::TeamTekTurret = StructureExtraVar(false, 0, Xors(L"Team Tek Turret"), Xors(L"Draws Tek Turret"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Tek Turret TColor"), Xors(L"Color for Tek Turret"), false, VarT::NoToggleColor));
    teamStructure::TeamSmallCropPlot = StructureVar(false, 0, Xors(L"Team Small Crop Plot"), Xors(L"Draws Small Crop Plot"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Small Crop Plot TColor"), Xors(L"Color for Small Crop Plot"), false, VarT::NoToggleColor));
    teamStructure::TeamMediumCropPlot = StructureVar(false, 0, Xors(L"Team Medium Crop Plot"), Xors(L"Draws Medium Crop Plot"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Medium Crop Plot TColor"), Xors(L"Color for Medium Crop Plot"), false, VarT::NoToggleColor));
    teamStructure::TeamLargeCropPlot = StructureVar(false, 0, Xors(L"Team Large Crop Plot"), Xors(L"Draws Large Crop Plot"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Large Crop Plot TColor"), Xors(L"Color for Large Crop Plot"), false, VarT::NoToggleColor));
    teamStructure::TeamElectricalGenerator = StructureVar(false, 0, Xors(L"Team Electrical Generator"), Xors(L"Draws Electrical Generator"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Electrical Generator TColor"), Xors(L"Color for Electrical Generator"), false, VarT::NoToggleColor));
    teamStructure::TeamTeamTekGenerator = StructureVar(false, 0, Xors(L"Team Tek Generator"), Xors(L"Draws Tek Generator"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Tek Generator TColor"), Xors(L"Color for Tek Generator"), false, VarT::NoToggleColor));
    teamStructure::TeamTekTransmitter = StructureVar(false, 0, Xors(L"Team Tek Transmitter"), Xors(L"Draws TeK Transmitter"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Tek Transmitter TColor"), Xors(L"Color for Tek Transmitter"), false, VarT::NoToggleColor));
    teamStructure::TeamCryoFridge = StructureVar(false, 0, Xors(L"Team Cryo Fridge"), Xors(L"Draws Cryo Fridge"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Cryo Fridge TColor"), Xors(L"Color for Cryo Fridge"), false, VarT::NoToggleColor));
    teamStructure::TeamCloningChamber = StructureVar(false, 0, Xors(L"Team Cloning Chamber"), Xors(L"Draws Cloning Chamber"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Cloning Chamber TColor"), Xors(L"Color for Cloning Chamber"), false, VarT::NoToggleColor));
    teamStructure::TeamVacuumCompartment = StructureVar(false, 0, Xors(L"Team Vacuum Compartment"), Xors(L"Draws Vacuum Compartment"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Vacuum Compartment TColor"), Xors(L"Color for Vacuum Compartment"), false, VarT::NoToggleColor));
    teamStructure::TeamFoundation = StructureVar(false, 0, Xors(L"Team Foundation"), Xors(L"Draws Foundation"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Foundation TColor"), Xors(L"Color for Foundation"), false, VarT::NoToggleColor));
    teamStructure::TeamWall = StructureVar(false, 0, Xors(L"Team Wall"), Xors(L"Draws Wall"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Wall TColor"), Xors(L"Color for Wall"), false, VarT::NoToggleColor));
    teamStructure::TeamDoor = StructureVar(false, 0, Xors(L"Team Door"), Xors(L"Draws Door"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Door TColor"), Xors(L"Color for Door"), false, VarT::NoToggleColor));
    teamStructure::TeamDoorFrame = StructureVar(false, 0, Xors(L"Team Door Frame"), Xors(L"Draws Door Frame"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Door Frame TColor"), Xors(L"Color for Door Frame"), false, VarT::NoToggleColor));
    teamStructure::TeamCeiling = StructureVar(false, 0, Xors(L"Team Ceiling"), Xors(L"Draws Ceiling"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Ceiling TColor"), Xors(L"Color for Ceiling"), false, VarT::NoToggleColor));
    teamStructure::TeamFenceFoundation = StructureVar(false, 0, Xors(L"Team Fence Foundation"), Xors(L"Draws Fence Foundation"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Fence Foundation TColor"), Xors(L"Color for Fence Foundation"), false, VarT::NoToggleColor));
    teamStructure::TeamSmallStorageBox = StructureVar(false, 0, Xors(L"Team Small Storage Box"), Xors(L"Draws Small Storage Box"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Small Storage Box TColor"), Xors(L"Color for Small Storage Box"), false, VarT::NoToggleColor));
    teamStructure::TeamLargeStorageBox = StructureVar(false, 0, Xors(L"Team Large Storage Box"), Xors(L"Draws Large Storage Box"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Large Storage Box TColor"), Xors(L"Color for Large Storage Box"), false, VarT::NoToggleColor));
    teamStructure::TeamVault = StructureVar(false, 0, Xors(L"Team Vault"), Xors(L"Draws Vault"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Vault TColor"), Xors(L"Color for Vault"), false, VarT::NoToggleColor));
    teamStructure::TeamRefrigerator = StructureVar(false, 0, Xors(L"Team Refrigerator"), Xors(L"Draws Refrigerator"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Refrigerator TColor"), Xors(L"Color for Refrigerator"), false, VarT::NoToggleColor));
    teamStructure::TeamAirConditioner = StructureVar(false, 0, Xors(L"Team Air Conditioner"), Xors(L"Draws Air Conditioner"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Air Conditioner TColor"), Xors(L"Color for Air Conditioner"), false, VarT::NoToggleColor));
    teamStructure::TeamDedicatedStorage = StructureVar(false, 0, Xors(L"Team Dedicated Storage"), Xors(L"Draws Dedicated Storage"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Dedicated Storage TColor"), Xors(L"Color for Dedicated Storage"), false, VarT::NoToggleColor));
    teamStructure::TeamTekForceField = StructureVar(false, 0, Xors(L"Team Tek Force Field"), Xors(L"Draws Tek Force Field"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Tek Force Field TColor"), Xors(L"Color for Tek Force Field"), false, VarT::NoToggleColor));
    teamStructure::TeamReplicator = StructureVar(false, 0, Xors(L"Team Replicator"), Xors(L"Draws Replicator"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Replicator TColor"), Xors(L"Color for Replicator"), false, VarT::NoToggleColor));
    teamStructure::TeamFabricator = StructureVar(false, 0, Xors(L"Team Fabricator"), Xors(L"Draws Fabricator"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Fabricator TColor"), Xors(L"Color for Fabricator"), false, VarT::NoToggleColor));
    teamStructure::TeamSmithy = StructureVar(false, 0, Xors(L"Team Smithy"), Xors(L"Draws Smithy"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Smithy TColor"), Xors(L"Color for Smithy"), false, VarT::NoToggleColor));
    teamStructure::TeamMortarAndPestle = StructureVar(false, 0, Xors(L"Team Mortar And Pestle"), Xors(L"Draws Mortar And Pestle"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Mortar And Pestle TColor"), Xors(L"Color for Mortar And Pestle"), false, VarT::NoToggleColor));
    teamStructure::TeamChemistryBench = StructureVar(false, 0, Xors(L"Team Chemistry Bench"), Xors(L"Draws Chemistry Bench"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Chemistry Bench TColor"), Xors(L"Color for Chemistry Bench"), false, VarT::NoToggleColor));
    teamStructure::TeamIndustrialForge = StructureVar(false, 0, Xors(L"Team Industrial Forge"), Xors(L"Draws Industrial Forge"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Industrial Forge TColor"), Xors(L"Color for Industrial Forge"), false, VarT::NoToggleColor));
    teamStructure::TeamIndustrialGrill = StructureVar(false, 0, Xors(L"Team Industrial Grill"), Xors(L"Draws Industrial Grill"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Industrial Grill TColor"), Xors(L"Color for Industrial Grill"), false, VarT::NoToggleColor));
    teamStructure::TeamIndustrialCookingPot = StructureVar(false, 0, Xors(L"Team Industrial Cooking Pot"), Xors(L"Draws Industrial Cooking Pot"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Industrial Cooking Pot TColor"), Xors(L"Color for Industrial Cooking Pot"), false, VarT::NoToggleColor));
    teamStructure::TeamGrinder = StructureVar(false, 0, Xors(L"Team Grinder"), Xors(L"Draws Grinder"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Grinder TColor"), Xors(L"Color for Grinder"), false, VarT::NoToggleColor));
    teamStructure::TeamCookingPot = StructureVar(false, 0, Xors(L"Team Cooking Pot"), Xors(L"Draws Cooking Pot"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Cooking Pot TColor"), Xors(L"Color for Cooking Pot"), false, VarT::NoToggleColor));
    teamStructure::TeamC4Charge = StructureVar(false, 0, Xors(L"Team C4 Charge"), Xors(L"Draws C4 Charge"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"C4 Charge TColor"), Xors(L"Color for C4 Charge"), false, VarT::NoToggleColor));
    teamStructure::TeamBearTrap = StructureVar(false, 0, Xors(L"Team Bear Trap"), Xors(L"Draws Bear Trap"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Bear Trap TColor"), Xors(L"Color for Bear Trap"), false, VarT::NoToggleColor));
    teamStructure::TeamLargeBearTrap = StructureVar(false, 0, Xors(L"Team Large Bear Trap"), Xors(L"Draws Large Bear Trap"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Large Bear Trap TColor"), Xors(L"Color for Large Bear Trap"), false, VarT::NoToggleColor));
    teamStructure::TeamWaterMine = StructureVar(false, 0, Xors(L"Team Water Mine"), Xors(L"Draws Water Mine"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Water Mine TColor"), Xors(L"Color for Water Mine"), false, VarT::NoToggleColor));
    teamStructure::TeamItemCache = StructureVar(false, 0, Xors(L"Team Item Cache"), Xors(L"Draws Item Cache"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Item Cache TColor"), Xors(L"Color for Item Cache"), false, VarT::NoToggleColor));
    teamStructure::TeamCliffPlatform = StructureVar(false, 0, Xors(L"Team Cliff Platform"), Xors(L"Draws Cliff Platform"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Cliff Platform TColor"), Xors(L"Color for Cliff Platform"), false, VarT::NoToggleColor));
    teamStructure::TeamLinkedStorageBox = StructureVar(false, 0, Xors(L"Team Linked Storage Box"), Xors(L"Draws Linked Storage Box"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Linked Storage Box TColor"), Xors(L"Color for Linked Storage Box"), false, VarT::NoToggleColor));
    teamStructure::TeamPlantX = StructureVar(false, 0, Xors(L"Team Plant X"), Xors(L"Draws Plant X"), ColorVar(false, 0, { 0,1,0,1 }, Xors(L"Plant X TColor"), Xors(L"Color for Plant X"), false, VarT::NoToggleColor));
    teamStructure::TeamTeslaCoil = StructureExtraVar(false, 0, Xors(L"Team Tesla Coil"), Xors(L"Draws Tesla Coil"), ColorVar(false, 0, { 0.11f,0.56f,1.f,1.f }, Xors(L"Tesla Coil TColor"), Xors(L"TColorfor Tesla Coil"), false, VarT::NoToggleColor));

    teamStructure::TeamStructureVars = {
    &teamStructure::TeamSleepingBag,
    &teamStructure::TeamBed,
    &teamStructure::TeamBunkBed,
    &teamStructure::TeamSmallTeleporter,
    &teamStructure::TeamMediumTeleporter,
    &teamStructure::TeamLargeTeleporter,
    &teamStructure::TeamAutoTurret,
    &teamStructure::TeamHeavyTurret,
    &teamStructure::TeamTekTurret,
    &teamStructure::TeamSmallCropPlot,
    &teamStructure::TeamMediumCropPlot,
    &teamStructure::TeamLargeCropPlot,
    &teamStructure::TeamElectricalGenerator,
    &teamStructure::TeamTeamTekGenerator,
    &teamStructure::TeamTekTransmitter,
    &teamStructure::TeamCryoFridge,
    &teamStructure::TeamCloningChamber,
    &teamStructure::TeamVacuumCompartment,
    &teamStructure::TeamFoundation,
    &teamStructure::TeamWall,
    &teamStructure::TeamDoor,
    &teamStructure::TeamDoorFrame,
    &teamStructure::TeamCeiling,
    &teamStructure::TeamFenceFoundation,
    &teamStructure::TeamSmallStorageBox,
    &teamStructure::TeamLargeStorageBox,
    &teamStructure::TeamVault,
    &teamStructure::TeamRefrigerator,
    &teamStructure::TeamAirConditioner,
    &teamStructure::TeamDedicatedStorage,
    &teamStructure::TeamTekForceField,
    &teamStructure::TeamReplicator,
    &teamStructure::TeamFabricator,
    &teamStructure::TeamSmithy,
    &teamStructure::TeamMortarAndPestle,
    &teamStructure::TeamChemistryBench,
    &teamStructure::TeamIndustrialForge,
    &teamStructure::TeamIndustrialGrill,
    &teamStructure::TeamIndustrialCookingPot,
    &teamStructure::TeamGrinder,
    &teamStructure::TeamCookingPot,
    &teamStructure::TeamC4Charge,
    &teamStructure::TeamBearTrap,
    &teamStructure::TeamLargeBearTrap,
    &teamStructure::TeamWaterMine,
    &miscStructure::SupplyDrop,
    &miscStructure::CaveDrop,
    &miscStructure::Artifact,
    &miscStructure::BeaverDam,
    &miscStructure::BeeHive,
    &miscStructure::Note,
    &miscStructure::ChargeNode,
    &teamStructure::TeamItemCache,
    &teamStructure::TeamCliffPlatform,
    &miscStructure::Nest,
    &teamStructure::TeamPlantX,
    &teamStructure::TeamLinkedStorageBox,
    &teamStructure::TeamTeslaCoil,
    };

    playerMovement::BunnyHop = KeyBindOptionalVar(false, 0, VK_SPACE, true, Xors(L"Bunny Hop"), Xors(L"Bunny Hop"), false);
    playerMovement::Airstuck = ToggleVar(false, 'Q', Xors(L"Airstuck"), Xors(L"Airstuck"), false);
    playerMovement::Desync = ToggleVar(false, 0, Xors(L"Fake Lag"), Xors(L"Delay movement, anti-prediction"), false);
    playerMovement::BetterAirstuck = ToggleVar(false, 'Q', Xors(L"Better Airstuck"), Xors(L"Better Airstuck"), false);
    playerMovement::SpeedHack = ToggleVar(false, VK_TAB, Xors(L"Speed Hack"), Xors(L"Speed Hack"), false);
    playerMovement::ManualRemountSpeedHack = KeyBindOptionalVar(false, 0, VK_TAB, false, Xors(L"Manual Remount Speed Hack"), Xors(L"Will wait for you to remount"), false);
    playerMovement::ManualRemountKey = KeyBindVar(false, 0, VK_TAB, Xors(L"Manual Remount Key"), Xors(L""), false);
    playerMovement::SpeedHackValue = FloatVar(false, 0, 8.f, 1.f, 10.f, Xors(L"Speed Hack Value"), Xors(L"Speed Hack Value"), false, VarT::NoToggleFloat);
    playerMovement::SpeedHackValueTwo = FloatVar(false, 0, 10.f, 1.f, 15.f, Xors(L"Speed Hack Fix"), Xors(L"Speed Hack Fix"), false, VarT::NoToggleFloat);
    playerMovement::TekJump = KeyBindVar(false, 0, VK_SPACE, Xors(L"Instant Jump"), Xors(L"Tek Jump"), false);
    playerMovement::TekHover = KeyBindVar(false, 0, VK_LSHIFT, Xors(L"Chest Hover"), Xors(L"Hover with the tek chest"), false);
    playerMovement::TekLegs = KeyBindVar(false, 0, VK_XBUTTON2, Xors(L"Instant Legs"), Xors(L"Tek Legs"), false);
    playerMovement::TekGaunts = KeyBindVar(false, 0, VK_RBUTTON, Xors(L"Instant Gaunt"), Xors(L"Tek Gaunts"), false);
    playerMovement::TekGauntsStop = KeyBindVar(false, 0, 0, Xors(L"Gaunts stop"), Xors(L"Removes all velocity"), false);
    playerMovement::SpoofCrouch = KeyBindOptionalVar(false, 0, 0, false, Xors(L"Spoof Crouch"), Xors(L"Crouch on serverside"), false);
    playerMovement::SpoofProne = KeyBindOptionalVar(false, 0, 0, false, Xors(L"Spoof Prone"), Xors(L"Prone on serverside"), false);
    playerMovement::SpinBot = ToggleVar(false, 0, Xors(L"SpinBot"), Xors(L"Serverside spinbot"), false);
    playerMovement::SpinBotSpeed = FloatVar(false, 0, 0.5f, 0.f, 1.f, Xors(L"SpinBot Speed"), Xors(L"too fast = not visible"), false, VarT::NoToggleFloat);
    playerMovement::SpinBotYaw = IntVar(false, 0, 0, 0, 5, Xors(L"Yaw Type"), Xors(L""), false, VarT::NoToggleInt);
    playerMovement::SpinBotPitch = IntVar(false, 0, 0, 0, 5, Xors(L"Pitch Type"), Xors(L""), false, VarT::NoToggleInt);
    playerMovement::SpinBotClient = ToggleVar(false, 0, Xors(L"SpinBot Client"), Xors(L"Show spin on client"), false);
    playerMovement::DelayedPacketCount = IntVar(false, 0, 5, 0, 15, Xors(L"Delayed Packet Count"), Xors(L""), false, VarT::NoToggleInt);
    playerMovement::AirJump = KeyBindOptionalVar(false, 0, VK_SPACE, false, Xors(L"Air Jump"), Xors(L"Force jump in air"), false);

    dinoFeatures::BackwardsFly = ToggleVar(false, 0, Xors(L"BackwardsFly"), Xors(L"BackwardsFly"), false);
    dinoFeatures::OmniFly = ToggleVar(false, 0, Xors(L"OmniFly"), Xors(L"OmniFly"), false);
    dinoFeatures::ForceMount = ToggleVar(false, 0, Xors(L"ForceMount"), Xors(L"ForceMount"), false);
    dinoFeatures::AutoForceMount = ToggleVar(false, 0, Xors(L"AutoForceMount"), Xors(L"AutoForceMount"), false);
    dinoFeatures::InstaTurn = ToggleVar(false, 0, Xors(L"InstaTurn"), Xors(L"InstaTurn"), false);
    dinoFeatures::HardTurn = ToggleVar(false, 0, Xors(L"HardTurn"), Xors(L"HardTurn"), false);

    dinoFeatures::BetterRavager = KeyBindVar(false, 0,0, Xors(L"Better Ravager"), Xors(L"Jump On Ziplines From A Far Distance"), false);
    dinoFeatures::BetterYiLing = KeyBindVar(false, 0, 0,Xors(L"Better Yi Ling"), Xors(L"Improves Yi Ling Flight Greatly"), false);
    dinoFeatures::YiLingMultiplier = 1.0f;

    autoMation::DupeMethod = ToggleVar(false, 0, Xors(L"Dupe Method"), Xors(L"Dupe Method"), false);
    autoMation::DupeMethodSpeed = FloatVar(false, 0, 0.45f, 0.1f, 0.95f, Xors(L"Dupe Method Speed"), Xors(L"Dupe Method Speed"), false, VarT::NoToggleFloat);
    autoMation::AutoWalk = ToggleVar(false, 0, Xors(L"Auto Walk"), Xors(L"Auto Walks Forward"), false);
    autoMation::AutoAttack = ToggleVar(false, 0, Xors(L"Auto Attack"), Xors(L"Auto Attacks On Dinos"), false);
    autoMation::PickupC4 = ToggleVar(false, 0, Xors(L"Pickup C4"), Xors(L"Pickup C4"), false);
    autoMation::PickupTraps = ToggleVar(false, 0, Xors(L"Pickup Traps"), Xors(L"Pickup Traps"), false);
    autoMation::PickupWaterMines = ToggleVar(false, 0, Xors(L"Pickup Water Mines"), Xors(L"Pickup Water Mines"), false);
    autoMation::AutoFillTekTurrets = IntVar(false, 0, 0, 0, 100, Xors(L"Fill Tek Turrets"), Xors(L"Put ammo in % of slots"), false, VarT::Int);
    autoMation::AutoFillHeavyTurrets = IntVar(false, 0, 0, 0, 100, Xors(L"Fill Heavy Turrets"), Xors(L"Put ammo in % of slots"), false, VarT::Int);
    autoMation::AutoFillAutoTurrets = IntVar(false, 0, 0, 0, 100, Xors(L"Fill Auto Turrets"), Xors(L"Put ammo in % of slots"), false, VarT::Int);
    autoMation::AutoFillCropPlots = IntVar(false, 0, 5, 0, 10, Xors(L"Fill Crop Plots"), Xors(L"Put fertilizer in slots"), false, VarT::Int);
    autoMation::AutoMedbrew = ToggleVar(false, 0, Xors(L"AutoMedbrew"), Xors(L"AutoMedbrew"), false);
    autoMation::AutoConsumable = ToggleVar(false, 0, Xors(L"AutoConsumable"), Xors(L"AutoConsumable"), false);
    autoMation::AutoFood = ToggleVar(false, 0, Xors(L"AutoFood"), Xors(L"AutoFood"), false);
    autoMation::AutoPopcornDinoResources = ToggleVar(false, 0, Xors(L"AutoPopcornDinoResources"), Xors(L"AutoPopcornDinoResources"), false);
    autoMation::AutoFeedRawMeat = ToggleVar(false, 0, Xors(L"Auto Force Feed"), Xors(L"Force feeds ridden dino meat"), false);
    autoMation::AutoTakeAchatina = ToggleVar(false, 0, Xors(L"Auto Take Paste"), Xors(L"Takes Paste From Achatinas"), false);
    autoMation::AutoTakeCrops = ToggleVar(false, 0, Xors(L"Auto Take Crops"), Xors(L"Takes Crops From Crop Plots"), false);
    autoMation::AutoPick = KeyBindOptionalVar(false, 0, VK_F4, false, Xors(L"Auto Pick"), Xors(L"Auto Pick Players with Flyers"), false);
    autoMation::SelfArmor = KeyBindOptionalVar(false, VK_F2, VK_F3, false, Xors(L"Auto Armor"), Xors(L"Swapps Armor when available"), false);
    autoMation::IgnoreGaunts = ToggleVar(false, 0, Xors(L"Ignore Gaunts"), Xors(L"Ignores Gaunts"), false);
    autoMation::IgnoreChest = ToggleVar(false, 0, Xors(L"Ignore Chest"), Xors(L"Ignores Chest"), false);
    autoMation::LegitAutoFlak = ToggleVar(false, 0, Xors(L"Legit Auto Flak"), Xors(L"Legit Auto Flak"), false);
    autoMation::SwapToScuba = ToggleVar(false, 0, Xors(L"Swap To Scuba"), Xors(L"Swaps to scuba when underwater"), false);
    autoMation::AutoArmorType = 2;
    autoMation::AutoLoot = KeyBindOptionalVar(false, 0, VK_F1, false, Xors(L"Auto Loot"), Xors(L"Auto Loots Inventorys"), false);
    autoMation::AutoPopcorn = KeyBindOptionalVar(false, 0, VK_F1, false, Xors(L"Auto Popcorn"), Xors(L"Auto Popcorns Inventorys"), false);
    autoMation::AutoMount = KeyBindOptionalVar(false, 0, VK_CAPITAL, false, Xors(L"Auto Mount"), Xors(L"Auto Mounts Dinos"), false);
    autoMation::AutoPopcornPlayers = ToggleVar(false, 0, Xors(L"AutoPopcornPlayers"), Xors(L"AutoPopcorns Players Inventorys"), false);
    autoMation::AutoPopcornStructures = ToggleVar(false, 0, Xors(L"AutoPopcornStructures"), Xors(L"AutoPopcorns Structures Inventorys"), false);
    autoMation::AutoPopcornTurrets = ToggleVar(false, 0, Xors(L"AutoPopcornTurrets"), Xors(L"AutoPopcorns Turrets Inventorys"), false);
    autoMation::AutoPopcornBags = ToggleVar(false, 0, Xors(L"AutoPopcornBags"), Xors(L"AutoPopcorns Bags Inventorys"), false);
    autoMation::AutoTakePlayers = ToggleVar(false, 0, Xors(L"AutoTakePlayers"), Xors(L"AutoTake Players Inventorys"), false);
    autoMation::AutoTakeStructures = ToggleVar(false, 0, Xors(L"AutoTakeStructures"), Xors(L"AutoTake Structures Inventorys"), false);
    autoMation::AutoTakeTurrets = ToggleVar(false, 0, Xors(L"AutoTakeTurrets"), Xors(L"AutoTake Turrets Inventorys"), false);
    autoMation::AutoTakeBags = ToggleVar(false, 0, Xors(L"AutoTakeBags"), Xors(L"AutoTake Bags Inventorys"), false);
    autoMation::FeedTroughs = false;
    autoMation::PickupItems = KeyBindOptionalVar(false, 0, 0, false, Xors(L"Pickup Items"), Xors(L"Collects dropped items"), false);
    autoMation::PickupPoop = KeyBindOptionalVar(false, 0, 0, false, Xors(L"Pickup Poop"), Xors(L"Collects Poop"), false);
    autoMation::PickupEggs = KeyBindOptionalVar(false, 0, 0, false, Xors(L"Pickup Eggs"), Xors(L"Collects all Eggs"), false);
    autoMation::TeamAutoPopcorn = KeyBindOptionalVar(false, 0, 0, false, Xors(L"Team Auto Popcorn"), Xors(L"Auto Popcorns Team Inventorys"), false);
    autoMation::TeamAutoLoot = KeyBindOptionalVar(false, 0, 0, false, Xors(L"Team Auto Loot"), Xors(L"Auto Loots Team Inventorys"), false);
    autoMation::TeamAutoPopcornPlayers = ToggleVar(false, 0, Xors(L"Team Auto Popcorn Players"), Xors(L"Auto Popcorns Team Players Inventorys"), false);
    autoMation::TeamAutoPopcornStructures = ToggleVar(false, 0, Xors(L"Team Auto Popcorn Structures"), Xors(L"Auto Popcorns Team Structures Inventorys"), false);
    autoMation::TeamAutoPopcornBags = ToggleVar(false, 0, Xors(L"Team Auto Popcorn Bags"), Xors(L"Auto Popcorns Team Bags Inventorys"), false);
    autoMation::TeamAutoTakePlayers = ToggleVar(false, 0, Xors(L"Team Auto Take Players"), Xors(L"Auto Take Team Players Inventorys"), false);
    autoMation::TeamAutoTakeStructures = ToggleVar(false, 0, Xors(L"Team Auto Take Structures"), Xors(L"Auto Take Team Structures Inventorys"), false);
    autoMation::TeamAutoTakeTurrets = ToggleVar(false, 0, Xors(L"Team Auto Take Turrets"), Xors(L"Auto Take Team Turrets Inventorys"), false);
    autoMation::TeamAutoTakeBags = ToggleVar(false, 0, Xors(L"Team Auto Take Bags"), Xors(L"Auto Take Team Bags Inventorys"), false);
    autoMation::AutoPincode = ToggleVar(false, 0, Xors(L"Auto Pincode"), Xors(L"Pincode all structures"), false);
    autoMation::AutoNameTurrets = ToggleVar(false, 0, Xors(L"Auto Name Turrets"), Xors(L"Name nearby turrets"), false);
    autoMation::AutoTurretSettings = ToggleVar(false, 0, Xors(L"Auto Turret Settings"), Xors(L"Auto turret settings"), false);
    autoMation::AutoDepoDedis = ToggleVar(false, 0, Xors(L"Auto Depo Dedis"), Xors(L"Fill inventory into Dedis"), false);
    autoMation::AutoFillForges = ToggleVar(false, 0, Xors(L"Auto Fill Forges"), Xors(L"Fill Metal / Wood"), false);
    autoMation::AutoFish = ToggleVar(false, 0, Xors(L"Auto Fish"), Xors(L"Do fishing minigame"), false);
    autoMation::AutoTamePassive = ToggleVar(false, 0, Xors(L"Auto Tame Passive"), Xors(L"Feed nearby passive Dinos"), false);
    autoMation::AutoGrindStone = ToggleVar(false, 0, Xors(L"Auto Grind Stone"), Xors(L"Auto Grinds Stone In Grinder"), false);
    autoMation::AutoSheep = ToggleVar(false, 0, Xors(L"Auto Drop Mutton / Pelt"), Xors(L"Drops Mutton And Pelt"), false);

    misc::MouseSmoothing = ToggleVar(false, 0, Xors(L"Disable Mouse Smoothing"), Xors(L"Remove 3p mouse smoothing"), false);
    misc::Spyglass = KeyBindOptionalVar(false, 0, 0, false, Xors(L"Spyglass"), Xors(L"Show extra information about target"), false);
    misc::ShotGunReload = ToggleVar(false, 0, Xors(L"Shotgun reload"), Xors(L"Reload Shotgun after every shot"), false);
    misc::InfiniteC4 = ToggleVar(false, 0, Xors(L"Infinite C4"), Xors(L"Infinite C4"), false);
    misc::SelfC4Placer = ToggleVar(false, 0, Xors(L"Self C4 Placer"), Xors(L"Self C4 Placer"), false);
    misc::DmgNumbers = ToggleVar(false, 0, Xors(L"Dmg Numbers"), Xors(L"Dmg Numbers"), false);
    misc::LadderExploit = KeyBindVar(false, 0, 0, Xors(L"Ladder Exploit"), Xors(L"Exploit With Ladder"), false);
    misc::XpExploit = KeyBindVar(false, 0, 0, Xors(L"XP Exploit"), Xors(L"Xp Exploit"), false);
    misc::ExtraServerInfo = ToggleVar(false, 0, Xors(L"ExtraServerInfo"), Xors(L"ExtraServerInfo"), false);
    misc::RemoveBolas = ToggleVar(false, 0, Xors(L"Remove Bolas"), Xors(L"Auto remove tribe bolas"), false);
    misc::TribeLogToChat = ToggleVar(false, 0, Xors(L"Tribe log to chat"), Xors(L"Send tribelog messages in ally chat"), false);
    misc::FovChanger = IntVar(false, 0, 120, 70, 150, Xors(L"FovChanger"), Xors(L"FovChanger"), false, VarT::Int);
    misc::LongArms = ToggleVar(false, 0, Xors(L"LongArms"), Xors(L"LongArms"), false);
    misc::InfiniteArms = ToggleVar(false, 0, Xors(L"InfiniteArms"), Xors(L"InfiniteArms"), false);
    misc::InfiniteSuitEle = ToggleVar(false, 0, Xors(L"InfiniteSuitEle"), Xors(L"InfiniteSuitEle"), false);
    misc::NoRecoil = ToggleVar(false, 0, Xors(L"No Recoil"), Xors(L"No Recoil"), false);
    misc::NoTekRifleOverheat = ToggleVar(false, 0, Xors(L"No Tek Rifle Overheat"), Xors(L"No Tek Rifle Overheat"), false);
    misc::NoRailgunOverheat = ToggleVar(false, 0, Xors(L"No Railgun Overheat"), Xors(L"No Railgun Overheat"), false);
    misc::RapidFire = FloatVar(false, 0, 0.3f, 0.f, 1.f, Xors(L"Rapid Fire"), Xors(L"Rapid Fire"), false, VarT::Float);
    misc::Ini = IntVar(false, 0, 1, 0, 50, Xors(L"Ini"), Xors(L"Prevviewmode like ASE"), false, VarT::Int);
    misc::Notes = ToggleVar(false, 0, Xors(L"Notes"), Xors(L"Notes"), false);
    misc::Ghost = ToggleVar(false, VK_DELETE, Xors(L"Ghost"), Xors(L"Ghost Mode"), false);
    misc::Suicide = ToggleVar(false, VK_F6, Xors(L"Suicide"), Xors(L"Instantly Die"), false);
    misc::ForceJump = KeyBindOptionalVar(false, 0, VK_F1, false, Xors(L"ForceJump"), Xors(L"Force Jump"), false);
    misc::RenderCrash = KeyBindVar(false, 0, VK_END, Xors(L"RenderCrash"), Xors(L"Crash Players In Render"), false);
    misc::ServerCrash = KeyBindVar(false, 0, 0, Xors(L"ServerCrash"), Xors(L"Crash Server"), false);
    misc::ExtraInfo = ToggleVar(false, 0, Xors(L"ExtraInfo"), Xors(L"ExtraInfo"), false);
    misc::ShowMeshDetection = ToggleVar(false, 0, Xors(L"Mesh Detection"), Xors(L"Show warning when under mesh"), false);
    misc::SpoofFoundation = ToggleVar(false, 0, Xors(L"SpoofFoundation"), Xors(L"Change placed c4 to foundation"), false);
    misc::InventoryToArk = KeyBindVar(false, 0, 'G', Xors(L"Inventory To Ark"), Xors(L"Open Upload To Upload / Download Items"), false);
    misc::SelfUpload = KeyBindVar(false, 0, VK_F9, Xors(L"Self Upload"), Xors(L"Upload Character Within 100M of Drop"), false);
    misc::FastUse = ToggleVar(false, 0, Xors(L"Fast Use"), Xors(L"Fast Use Any Multiuse"), false);
    misc::DisableRespawnAnim = ToggleVar(false, 0, Xors(L"Disable Respawn Anim"), Xors(L"Disables Respawn Animation"), false);
    misc::DinoClaim = ToggleVar(false, 0, Xors(L"Dino Claim"), Xors(L"Claims Dinos Near You"), false);
    misc::DinoName = ToggleVar(false, 0, Xors(L"Dino Name"), Xors(L"Names Dinos Near You"), false);
    misc::DinoLevel = ToggleVar(false, 0, Xors(L"Dino Level"), Xors(L"Levels Dinos Near You"), false);
    misc::DinoSaddle = ToggleVar(false, 0, Xors(L"Dino Saddle"), Xors(L"Saddles Dinos Near You"), false);
    misc::DinoFeed = ToggleVar(false, 0, Xors(L"Dino Feed"), Xors(L"Feeds Dinos Near You"), false);
    misc::DinoImprint = ToggleVar(false, 0, Xors(L"Dino Imprint"), Xors(L"Imprints Dinos Near You"), false);
    misc::InfiniteWeight = ToggleVar(false, 0, Xors(L"Infinite Weight"), Xors(L"Can Walk No Matter What Weight"), false);
    misc::BattleMode = false;
    misc::UploadAll = ToggleVar(false, 0, Xors(L"Uploads All Items"), Xors(L"Uploads All Items(Max 50)"), false);
    misc::DownloadAll = ToggleVar(false, 0, Xors(L"Download All Items"), Xors(L"Downloads All Items(Max 50)"), false);
    misc::NetLimiter = KeyBindVar(false, 0, 'G', Xors(L"Packet Teleport"), Xors(L"Hold It And Run To Teleport Places"), false);
    misc::SpamChangeCharacterSize = IntVar(false, 0, 8, 0, 10, Xors(L"Spam Change Character Size"), Xors(L"Spam Changes Character Size to big/small"), false,VarT::Int);
    misc::SpamLastCharacter = IntVar(false, 0, 8, 0, 10, Xors(L"Spam Last Character"), Xors(L"Spam last selected character"), false, VarT::Int);
    misc::TekChestDisconnect = IntVar(false, 0, 1000, 500, 2000, Xors(L"Tek Chest Disconnect"), Xors(L"have no element in inv, will desync you"), false, VarT::Int);
    misc::UnlockBTT = ToggleVar(false, 0, Xors(L"Unlock DLCs"), Xors(L"Unlock most DLCs"), false);
    misc::UnlockRotation = ToggleVar(false, 0, Xors(L"Unlock Rotation"), Xors(L"Unlock camera yaw"), false);
    misc::BetterPassenger = ToggleVar(false, 0, Xors(L"Better Passenger"), Xors(L"Improve dino passenger riding"), false);
    misc::FastThrow = KeyBindVar(false, 0, VK_RBUTTON, Xors(L"Fast Throw"), Xors(L"Throw grenades/bolas instantly"), false);
    misc::ForceAccess = KeyBindVar(false, 0, 'F', Xors(L"Force Access"), Xors(L"Access every inventory (can use rank 10)"), false);
    misc::PopcornTarget = KeyBindVar(false, 0, 0, Xors(L"Popcorn Target"), Xors(L"Popcorn what youre looking at"), false);
    misc::ForceShoot = KeyBindVar(false, 0, VK_LBUTTON, Xors(L"Force Shoot"), Xors(L"skip client checks"), false);
    misc::FastPlaceC4 = KeyBindOptionalVar(false, 0, VK_F1, false, Xors(L"Fast Place C4"), Xors(L"Place C4 instantly"), false);
    misc::TopDownView = FloatVar(false, 0, 100.f, 10.f, 1000.f, Xors(L"Top Down View"), Xors(L"Radar camera view"), false,VarT::Float);
    misc::PointExploit = ToggleVar(false, 0, Xors(L"Point Exploit"), Xors(L"Club Ark Point Exploit"), false);
    misc::TransBag = ToggleVar(false, 0, Xors(L"Transmitter Bag"), Xors(L"Up/Down-load dinos from bags"), false);\
    misc::BetterPopcorn = ToggleVar(false, 0, Xors(L"Better Popcorn"), Xors(L"Enables Options For Popcorning"), false);
    misc::PopcornSelf = KeyBindVar(false, 0, 0, Xors(L"Popcorn Self"), Xors(L"Popcorn your inventory"), false);
    misc::PopcornDino = KeyBindVar(false, 0, 0, Xors(L"Popcorn Dino"), Xors(L"Popcorn dino inventory"), false);
    misc::TransferTarget = KeyBindVar(false, 0, 0, Xors(L"Transfer Target"), Xors(L"Transfer from one thing to another"), false);

    resourceStructure::EnableResource = ToggleVar(false, 0, Xors(L"Enable Resource ESP"), Xors(L"Enables Resource ESP"), false);
    resourceStructure::Crystal = false;
    resourceStructure::Pearls = false;
    resourceStructure::Metal = false;
    resourceStructure::Oil = false;
    resourceStructure::Obsidian = false;
    resourceStructure::Gem = false;
    resourceStructure::Distance = 100;

    misc::PyromaneJump = KeyBindVar(false, 0, 0, Xors(L"Enable Pyromane Jump"), Xors(L"Enables Pyromane Exploit"), false);
    misc::PyromaneMultiplier = 10;

    autoCraft::EnableCrafting = false;
    autoCraft::CraftingStructure = 0;
    autoCraft::CraftingItem = 0;
    autoCraft::ItemName = Xors(L"");

    autoDemo::EnableDemo = false;
    autoDemo::DemoItem = 0;
    autoDemo::ItemName = Xors(L"");
    
    user::HitMarker3D = FloatVar(false, 0, 1.f, 0.f, 5.f, Xors(L"HitMarker 3D"), Xors(L"Enemy hit indicator"), false, VarT::Float);
    user::HitMarker3DSize = FloatVar(false, 0, 5.f, 0.f, 10.f, Xors(L"Cross size"), Xors(L""), false, VarT::NoToggleFloat);
    user::HitMarker3DColor = ColorVar(false, 0, FLinearColor(1.f, 0.f, 0.f, 1.f), Xors(L"Cross color"), Xors(L""), false, VarT::NoToggleColor);
    user::CustomCamera = ToggleVar(false, 0, Xors(L"Custom Camera"), Xors(L"Customizeable camera component"), false);
    user::CustomCameraOffsetX = FloatVar(false, 0, 0.f, -1000.f, 1000.f, Xors(L"Offset X"), Xors(L""), false, VarT::NoToggleFloat);
    user::CustomCameraOffsetY = FloatVar(false, 0, 0.f, -1000.f, 1000.f, Xors(L"Offset Y"), Xors(L""), false, VarT::NoToggleFloat);
    user::CustomCameraOffsetZ = FloatVar(false, 0, 0.f, -1000.f, 1000.f, Xors(L"Offset Z"), Xors(L""), false, VarT::NoToggleFloat);
    user::CustomCameraUseWeaponOffset = ToggleVar(false, 0, Xors(L"Use Weapon Offset"), Xors(L"Change to weapon offset"), false);
    user::CustomCameraWeaponOffsetX = FloatVar(false, 0, 0.f, -1000.f, 1000.f, Xors(L"Weapon Offset X"), Xors(L""), false, VarT::NoToggleFloat);
    user::CustomCameraWeaponOffsetY = FloatVar(false, 0, 0.f, -1000.f, 1000.f, Xors(L"Weapon Offset Y"), Xors(L""), false, VarT::NoToggleFloat);
    user::CustomCameraWeaponOffsetZ = FloatVar(false, 0, 0.f, -1000.f, 1000.f, Xors(L"Weapon Offset Z"), Xors(L""), false, VarT::NoToggleFloat);
    user::CustomCameraCollision = ToggleVar(false, 0, Xors(L"Collision"), Xors(L"Don't ignore walls"), false);
    user::CustomCameraBone = IntVar(false, 0, 0, 0, 100, Xors(L"Bone"), Xors(L"Bone to attach to"), false, VarT::NoToggleInt);

    user::AntimeshESP = KeyBindOptionalVar(false, 0, 0, false, Xors(L"Antimesh ESP"), Xors(L"Draw kill/tp borders"), false);
    user::AntimeshESPRange = FloatVar(false, 0, 1000.f, 100.f, 10000.f, Xors(L"Antimesh ESP Range"), Xors(L"300 = 1 Render Distance"), false, VarT::NoToggleFloat);
    user::AntimeshEspUseStaticMesh = ToggleVar(false, 0, Xors(L"Better Antimesh ESP"), Xors(L"Better, but more expensive drawing"), false);
    user::AntimeshColor = ColorVar(false, 0, FLinearColor(1.f, 1.f, 0.f, 1.f), Xors(L"Antimesh Color"), Xors(L"Color for esp"), false, VarT::NoToggleColor);
    user::AntimeshDisableDepth = ToggleVar(true, 0, Xors(L"Visible through walls"), Xors(L"Better antimesh only"), false);
    user::KillFeed = ToggleVar(false, 0, Xors(L"Kill Feed"), Xors(L"Shows kill feed"), false);
    user::AllKills = ToggleVar(false, 0, Xors(L"Enemy Kills"), Xors(L"Show kills by others"), false);
    user::DinoKills = ToggleVar(false, 0, Xors(L"Dino Kills"), Xors(L"Show dino kills"), false);
    user::KillFeedTime = FloatVar(false, 0, 5.f, 0.5f, 10.f, Xors(L"Kill Feed Time"), Xors(L"Time to show kill feed"), false, VarT::NoToggleFloat);
    user::TargetWarning = ToggleVar(false, 0, Xors(L"Target Warning"), Xors(L"Shows warning when being looked at"), false);
    user::TargetWarningMinimum = FloatVar(false, 0, 0.5f, 0.f, 1.f, Xors(L"Target Warning Minimum"), Xors(L"Minimum distance to show warning"), false, VarT::NoToggleFloat);
    user::ClearWater = ToggleVar(false, 0, Xors(L"Clear Water"), Xors(L"Removes underwater effects, removes AA"), false);
    user::ChamsWireFrame = ToggleVar(false, 0, Xors(L"Wireframe Chams"), Xors(L"Changes all chams to wireframe"), false);
    user::MaterialBlendMode = IntVar(false, 0, (int)EBlendMode::BLEND_AlphaComposite, 0, 100, Xors(L"Material Blend Mode"), Xors(L""), false, VarT::NoToggleInt);
    user::ShowToggleMessage = ToggleVar(false, 0, Xors(L"Toggle message"), Xors(L"Shows message when toggling setting"), false);
    user::MessageTime = FloatVar(false, 0, 1.f, 0.05f, 5.f, Xors(L"Message lenght"), Xors(L"Change time the message stays"), false, VarT::NoToggleFloat);
    user::dmgNumbers::Scale = FloatVar(false, 0, 1.f, 0.05f, 1.5f, Xors(L"Scale"), Xors(L"Size of the numbers"), false, VarT::NoToggleFloat);
    user::dmgNumbers::LifeSpan = FloatVar(false, 0, 1.f, 0.1f, 10.f, Xors(L"Life Span"), Xors(L"Life span of the numbers"), false, VarT::NoToggleFloat);
    user::dmgNumbers::MinScale = FloatVar(false, 0, 0.5f, 0.05f, 1.5f, Xors(L"Min Scale"), Xors(L"Minimum size of the numbers"), false, VarT::NoToggleFloat);
    user::dmgNumbers::ZVelocity = FloatVar(false, 0, 10.f, 0.1f, 50.f, Xors(L"Z Velocity"), Xors(L"Upwards speed"), false, VarT::NoToggleFloat);
    user::dmgNumbers::EnemyColor = ColorVar(false, 0, FLinearColor(0.f, 1.f, 0.f, 1.f), Xors(L"Enemy Color"), Xors(L"Color of enemy hit numbers"), false, VarT::NoToggleColor);
    user::dmgNumbers::TeamColor = ColorVar(false, 0, FLinearColor(1.f, 0.f, 0.f, 1.f), Xors(L"Team Color"), Xors(L"Color of team hit numbers"), false, VarT::NoToggleColor);
    user::dmgNumbers::WildColor = ColorVar(false, 0, FLinearColor(1.f, 1.f, 1.f, 1.f), Xors(L"Wild Color"), Xors(L"Color of wild hit numbers"), false, VarT::NoToggleColor);
    user::ShowFlags::PostProcessing = ToggleVar(false, 0, Xors(L"PostProcessing"), Xors(L"PostProcessing"), false);
    user::ShowFlags::Bloom = ToggleVar(false, 0, Xors(L"Bloom"), Xors(L"Bloom"), false);
    user::ShowFlags::LocalExposure = ToggleVar(false, 0, Xors(L"LocalExposure"), Xors(L"LocalExposure"), false);
    user::ShowFlags::AntiAliasing = ToggleVar(false, 0, Xors(L"AntiAliasing"), Xors(L"AntiAliasing"), false);
    user::ShowFlags::TemporalAA = ToggleVar(false, 0, Xors(L"TemporalAA"), Xors(L"TemporalAA"), false);
    user::ShowFlags::AmbientCubemap = ToggleVar(false, 0, Xors(L"AmbientCubemap"), Xors(L"AmbientCubemap"), false);
    user::ShowFlags::EyeAdaptation = ToggleVar(false, 0, Xors(L"EyeAdaptation"), Xors(L"EyeAdaptation"), false);
    user::ShowFlags::GlobalIllumination = ToggleVar(false, 0, Xors(L"GlobalIllumination"), Xors(L"GlobalIllumination"), false);
    user::ShowFlags::Vignette = ToggleVar(false, 0, Xors(L"Vignette"), Xors(L"Vignette"), false);
    user::ShowFlags::AmbientOcclusion = ToggleVar(false, 0, Xors(L"AmbientOcclusion"), Xors(L"AmbientOcclusion"), false);
    user::ShowFlags::Decals = ToggleVar(false, 0, Xors(L"Decals"), Xors(L"Decals"), false);
    user::ShowFlags::OnScreenDebug = ToggleVar(false, 0, Xors(L"OnScreenDebug"), Xors(L"OnScreenDebug"), false);
    user::ShowFlags::VisualizeNanite = ToggleVar(false, 0, Xors(L"VisualizeNanite"), Xors(L"VisualizeNanite"), false);
    user::ShowFlags::VisualizeLumen = ToggleVar(false, 0, Xors(L"VisualizeLumen"), Xors(L"VisualizeLumen"), false);
    user::ShowFlags::VisualizeSubstrate = ToggleVar(false, 0, Xors(L"VisualizeSubstrate"), Xors(L"VisualizeSubstrate"), false);
    user::ShowFlags::VisualizeGroom = ToggleVar(false, 0, Xors(L"VisualizeGroom"), Xors(L"VisualizeGroom"), false);
    user::ShowFlags::VisualizeVirtualShadowMap = ToggleVar(false, 0, Xors(L"VisualizeVirtualShadowMap"), Xors(L"VisualizeVirtualShadowMap"), false);
    user::ShowFlags::PointLights = ToggleVar(false, 0, Xors(L"PointLights"), Xors(L"PointLights"), false);
    user::ShowFlags::SpotLights = ToggleVar(false, 0, Xors(L"SpotLights"), Xors(L"SpotLights"), false);
    user::ShowFlags::RectLights = ToggleVar(false, 0, Xors(L"RectLights"), Xors(L"RectLights"), false);
    user::ShowFlags::DepthOfField = ToggleVar(false, 0, Xors(L"DepthOfField"), Xors(L"DepthOfField"), false);
    user::ShowFlags::MotionBlur = ToggleVar(false, 0, Xors(L"MotionBlur"), Xors(L"MotionBlur"), false);
    user::ShowFlags::CameraInterpolation = ToggleVar(false, 0, Xors(L"CameraInterpolation"), Xors(L"CameraInterpolation"), false);
    user::ShowFlags::ToneCurve = ToggleVar(false, 0, Xors(L"ToneCurve"), Xors(L"ToneCurve"), false);
    user::ShowFlags::SeparateTranslucency = ToggleVar(false, 0, Xors(L"SeparateTranslucency"), Xors(L"SeparateTranslucency"), false);
    user::ShowFlags::ScreenPercentage = ToggleVar(false, 0, Xors(L"ScreenPercentage"), Xors(L"ScreenPercentage"), false);
    user::ShowFlags::ReflectionEnvironment = ToggleVar(false, 0, Xors(L"ReflectionEnvironment"), Xors(L"ReflectionEnvironment"), false);
    user::ShowFlags::Specular = ToggleVar(false, 0, Xors(L"Specular"), Xors(L"Specular"), false);
    user::ShowFlags::ScreenSpaceReflections = ToggleVar(false, 0, Xors(L"ScreenSpaceReflections"), Xors(L"ScreenSpaceReflections"), false);
    user::ShowFlags::LumenReflections = ToggleVar(false, 0, Xors(L"LumenReflections"), Xors(L"LumenReflections"), false);
    user::ShowFlags::ContactShadows = ToggleVar(false, 0, Xors(L"ContactShadows"), Xors(L"ContactShadows"), false);
    user::ShowFlags::RayTracedDistanceFieldShadows = ToggleVar(false, 0, Xors(L"RayTracedDistanceFieldShadows"), Xors(L"RayTracedDistanceFieldShadows"), false);
    user::ShowFlags::CapsuleShadows = ToggleVar(false, 0, Xors(L"CapsuleShadows"), Xors(L"CapsuleShadows"), false);
    user::ShowFlags::VolumetricLightmap = ToggleVar(false, 0, Xors(L"VolumetricLightmap"), Xors(L"VolumetricLightmap"), false);
    user::ShowFlags::IndirectLightingCache = ToggleVar(false, 0, Xors(L"IndirectLightingCache"), Xors(L"IndirectLightingCache"), false);
    user::ShowFlags::TexturedLightProfiles = ToggleVar(false, 0, Xors(L"TexturedLightProfiles"), Xors(L"TexturedLightProfiles"), false);
    user::ShowFlags::LightFunctions = ToggleVar(false, 0, Xors(L"LightFunctions"), Xors(L"LightFunctions"), false);
    user::ShowFlags::NaniteMeshes = ToggleVar(false, 0, Xors(L"NaniteMeshes"), Xors(L"NaniteMeshes"), false);
    user::ShowFlags::InstancedStaticMeshes = ToggleVar(false, 0, Xors(L"InstancedStaticMeshes"), Xors(L"InstancedStaticMeshes"), false);
    user::ShowFlags::InstancedFoliage = ToggleVar(false, 0, Xors(L"InstancedFoliage"), Xors(L"InstancedFoliage"), false);
    user::ShowFlags::InstancedGrass = ToggleVar(false, 0, Xors(L"InstancedGrass"), Xors(L"InstancedGrass"), false);
    user::ShowFlags::DynamicShadows = ToggleVar(false, 0, Xors(L"DynamicShadows"), Xors(L"DynamicShadows"), false);
    user::ShowFlags::Particles = ToggleVar(false, 0, Xors(L"Particles"), Xors(L"Particles"), false);
    user::ShowFlags::SkeletalMeshes = ToggleVar(false, 0, Xors(L"SkeletalMeshes"), Xors(L"SkeletalMeshes"), false);
    user::ShowFlags::Translucency = ToggleVar(false, 0, Xors(L"TransLucency"), Xors(L"TransLucency"), false);
    user::ShowFlags::LOD = ToggleVar(false, 0, Xors(L"LOD"), Xors(L"LOD"), false);
    user::ShowFlags::Lighting = ToggleVar(false, 0, Xors(L"Lighting"), Xors(L"Lighting"), false);
    user::ShowFlags::DeferredLighting = ToggleVar(false, 0, Xors(L"DeferredLighting"), Xors(L"DeferredLighting"), false);
    user::ShowFlags::StaticMeshes = ToggleVar(false, 0, Xors(L"StaticMeshes"), Xors(L"StaticMeshes"), false);
    user::ShowFlags::Landscape = ToggleVar(false, 0, Xors(L"Landscape"), Xors(L"Landscape"), false);
    user::ShowFlags::Fog = ToggleVar(false, 0, Xors(L"Fog"), Xors(L"Fog"), false);
    user::ShowFlags::Game = ToggleVar(false, 0, Xors(L"Game"), Xors(L"Game"), false);
    user::ShowFlags::BSP = ToggleVar(false, 0, Xors(L"BSP"), Xors(L"BSP"), false);
    user::ShowFlags::LightShafts = ToggleVar(false, 0, Xors(L"LightShafts"), Xors(L"LightShafts"), false);
    user::ShowFlags::Atmosphere = ToggleVar(false, 0, Xors(L"Atmosphere"), Xors(L"Atmosphere"), false);
    user::ShowFlags::TextRender = ToggleVar(false, 0, Xors(L"TextRender"), Xors(L"TextRender"), false);
    user::ShowFlags::Rendering = ToggleVar(false, 0, Xors(L"Rendering"), Xors(L"Rendering"), false);
    user::ShowFlags::HMDDistortion = ToggleVar(false, 0, Xors(L"HMDDistortion"), Xors(L"HMDDistortion"), false);
    user::ShowFlags::StereoRendering = ToggleVar(false, 0, Xors(L"StereoRendering"), Xors(L"StereoRendering"), false);
    user::ShowFlags::DistanceCulledPrimitives = ToggleVar(false, 0, Xors(L"DistanceCulledPrimitives"), Xors(L"DistanceCulledPrimitives"), false);
    user::ShowFlags::SkyLighting = ToggleVar(false, 0, Xors(L"SkyLighting"), Xors(L"SkyLighting"), false);
    user::ShowFlags::Paper2DSprites = ToggleVar(false, 0, Xors(L"Paper2DSprites"), Xors(L"Paper2DSprites"), false);
    user::ShowFlags::ScreenSpaceAO = ToggleVar(false, 0, Xors(L"ScreenSpaceAO"), Xors(L"ScreenSpaceAO"), false);
    user::ShowFlags::DistanceFieldAO = ToggleVar(false, 0, Xors(L"DistanceFieldAO"), Xors(L"DistanceFieldAO"), false);
    user::ShowFlags::LumenGlobalIllumination = ToggleVar(false, 0, Xors(L"LumenGlobalIllumination"), Xors(L"LumenGlobalIllumination"), false);
    user::ShowFlags::VolumetricFog = ToggleVar(false, 0, Xors(L"VolumetricFog"), Xors(L"VolumetricFog"), false);
    user::ShowFlags::WidgetComponents = ToggleVar(false, 0, Xors(L"WidgetComponents"), Xors(L"WidgetComponents"), false);
    user::ShowFlags::MediaPlanes = ToggleVar(false, 0, Xors(L"MediaPlanes"), Xors(L"MediaPlanes"), false);
    user::ShowFlags::PathTracing = ToggleVar(false, 0, Xors(L"PathTracing"), Xors(L"PathTracing"), false);
    user::ShowFlags::VisualizeCalibrationColor = ToggleVar(false, 0, Xors(L"VisualizeCalibrationColor"), Xors(L"VisualizeCalibrationColor"), false);
    user::ShowFlags::VisualizeCalibrationGrayscale = ToggleVar(false, 0, Xors(L"VisualizeCalibrationGrayscale"), Xors(L"VisualizeCalibrationGrayscale"), false);
    user::ShowFlags::VisualizeCalibrationCustom = ToggleVar(false, 0, Xors(L"VisualizeCalibrationCustom"), Xors(L"VisualizeCalibrationCustom"), false);
    user::ShowFlags::LumenScreenTraces = ToggleVar(false, 0, Xors(L"LumenScreenTraces"), Xors(L"LumenScreenTraces"), false);
    user::ShowFlags::LumenDetailTraces = ToggleVar(false, 0, Xors(L"LumenDetailTraces"), Xors(L"LumenDetailTraces"), false);
    user::ShowFlags::LumenGlobalTraces = ToggleVar(false, 0, Xors(L"LumenGlobalTraces"), Xors(L"LumenGlobalTraces"), false);
    user::ShowFlags::LumenFarFieldTraces = ToggleVar(false, 0, Xors(L"LumenFarFieldTraces"), Xors(L"LumenFarFieldTraces"), false);
    user::ShowFlags::LumenSecondaryBounces = ToggleVar(false, 0, Xors(L"LumenSecondaryBounces"), Xors(L"LumenSecondaryBounces"), false);
    user::ShowFlags::LumenShortRangeAmbientOcclusion = ToggleVar(false, 0, Xors(L"LumenShortRangeAmbientOcclusion"), Xors(L"LumenShortRangeAmbientOcclusion"), false);
    user::ShowFlags::ShaderPrint = ToggleVar(false, 0, Xors(L"ShaderPrint"), Xors(L"ShaderPrint"), false);

    user::sound::ChangeHitMarkerSound = ToggleVar(false, 0, Xors(L"Change HitMarker Sound"), Xors(L"Changes HitMarker Sound"), false);
    user::sound::IsUiSound = ToggleVar(false, 0, Xors(L"Is Ui Sound"), Xors(L"Is Ui Sound"), false);
    user::sound::TeamHitMarkerSoundVolume = FloatVar(false, 0, 1.f, 0.f, 3.f, Xors(L"Team HitMarker Sound Volume"), Xors(L"Team HitMarker Sound Volume"), false, VarT::NoToggleFloat);
    user::sound::EnemyHitMarkerSoundVolume = FloatVar(false, 0, 1.f, 0.f, 3.f, Xors(L"Enemy HitMarker Sound Volume"), Xors(L"Enemy HitMarker Sound Volume"), false, VarT::NoToggleFloat);
    user::sound::TeamHitMarkerSoundPitch = FloatVar(false, 0, 1.f, 0.f, 3.f, Xors(L"Team HitMarker Sound Pitch"), Xors(L"Team HitMarker Sound Pitch"), false, VarT::NoToggleFloat);
    user::sound::EnemyHitMarkerSoundPitch = FloatVar(false, 0, 1.f, 0.f, 3.f, Xors(L"Enemy HitMarker Sound Pitch"), Xors(L"Enemy HitMarker Sound Pitch"), false, VarT::NoToggleFloat);
    user::sound::ShootSoundVolume = FloatVar(false, 0, 1.f, 0.f, 3.f, Xors(L"Shoot Sound Volume"), Xors(L"Shoot Sound Volume"), false, VarT::NoToggleFloat);
    user::sound::TeamSoundPrev = Xors(L"SoundWave Engine.Default__SoundWave");
    user::sound::EnemySoundPrev = Xors(L"SoundWave Engine.Default__SoundWave");
    user::sound::ShootSoundPrev = Xors(L"SoundWave Engine.Default__SoundWave");
    user::sound::SoundChanged = false;
    user::sound::TeamHitMarkerSound = Xors(L"SoundWave Engine.Default__SoundWave");
    user::sound::EnemyHitMarkerSound = Xors(L"SoundWave Engine.Default__SoundWave");
    user::sound::ShootSound = nullptr;

    menu::ShowMenu = ToggleVar(false, VK_F5, Xors(L"Show Menu"), Xors(L"Menu Keybind"), false);
    menu::ExtraCheatKey = KeyBindVar(false, 0, VK_CAPITAL, Xors(L"Extra Cheat Key"), Xors(L"Extra key to press for cheat keybinds"), false);
    menu::Uninject = ToggleVar(false, 0, Xors(L"Uninject"), Xors(L"Uninject the cheat"), false);
    menu::ShowStructureMissingAlerts = ToggleVar(true, 0, Xors(L"Show Structure Missing Alerts"), Xors(L"Toggle red alert for missing structure"), false);
    menu::HudMenu = ToggleVar(false, 0, Xors(L"Hud Menu"), Xors(L"Simple, minimalistic menu on hud"), false);
    menu::ForwardKey = KeyBindVar(false, 0, 'D', Xors(L"Select Key"), Xors(L""), false);
    menu::BackwardKey = KeyBindVar(false, 0, 'A', Xors(L"Back Key"), Xors(L""), false);
    menu::DownKey = KeyBindVar(false, 0, 'S', Xors(L"Down Key"), Xors(L""), false);
    menu::UpKey = KeyBindVar(false, 0, 'W', Xors(L"Up Key"), Xors(L""), false);
    MenuVars = {
        &aimbot::Aimbot ,
        &aimbot::OnlyVisible ,
        &aimbot::TargetTeam ,
        &aimbot::UseFov ,
        &aimbot::Tracers ,
        &aimbot::ShieldBypass ,
        &aimbot::SpoofHeadshots ,
        &aimbot::AntiDesync,
        &aimbot::EnableCrosshair ,
        &aimbot::EnablePrediction ,
        &aimbot::EnableTriggerBot ,
        &aimbot::TargetDinos ,
        &aimbot::ServerSilent ,
        &aimbot::TargetSleepers ,
        &aimbot::PredictionMultiplier ,
        &aimbot::AmmoIndicator,
        &aimbot::AddToAllyList,
        &aimbot::ClearAllyList,
        &aimbot::EnableTargetLine,
        &aimbot::ShowTargetingString,
        &aimbot::FakeRotation,
        &aimbot::ClientOmniMovement,
        &aimbot::ServerOmniMovement,
        &aimbot::CurrentBone,
        &aimbot::SpoofTargetPos,
        &aimbot::RailgunAimbot,
        &aimbot::RailgunAimbotSpeed,
        &aimbot::RailgunHideTrail,
        &aimbot::DesyncWalk,
        &aimbot::DesyncStrength,
        &aimbot::AdditionalDesync,

        &enemyPlayer::EnableEnemyPlayer ,
        &enemyPlayer::OutlineText ,
        &enemyPlayer::CenterText,
        &enemyPlayer::Name ,
        &enemyPlayer::TribeName,
        &enemyPlayer::Box ,
        &enemyPlayer::Health ,
        &enemyPlayer::Torpor,
        &enemyPlayer::Bones ,
        &enemyPlayer::Distance ,
        &enemyPlayer::Snaplines ,
        &enemyPlayer::HeadDot ,
        &enemyPlayer::ViewLine ,
        &enemyPlayer::Armor ,
        &enemyPlayer::Buffs,
        &enemyPlayer::Weapon ,
        &enemyPlayer::Chams ,
        &enemyPlayer::OnlyVisible ,
        &enemyPlayer::EnemySleeping ,
        &enemyPlayer::EnemyDead ,
        &enemyPlayer::EnemyWeight ,
        &enemyPlayer::EnemyExtraInfo ,

        &enemyPlayer::EnemyColor ,
        &enemyPlayer::EnemyNonvisibleColor ,
        &enemyPlayer::EnemySleepingColor ,
        &enemyPlayer::EnemyDeadColor ,

        &enemyPlayer::EnemyPlayerArmorChams,
        &enemyPlayer::EnemyPlayerShieldChams,
        &enemyPlayer::EnemyPlayerWeaponChams,

        &enemyPlayer::EnemyPlayerArmorColor,
        &enemyPlayer::EnemyPlayerShieldColor,
        &enemyPlayer::EnemyPlayerWeaponColor,

        &teamPlayer::EnableTeamPlayer ,
        &teamPlayer::OutlineText ,
        &teamPlayer::CenterText,
        &teamPlayer::Name ,
        &teamPlayer::TribeName,
        &teamPlayer::Box ,
        &teamPlayer::Health ,
        &teamPlayer::Torpor,
        &teamPlayer::Bones ,
        &teamPlayer::Distance ,
        &teamPlayer::ViewLine ,
        &teamPlayer::Armor ,
        &teamPlayer::Buffs,
        &teamPlayer::Weapon ,
        &teamPlayer::Chams ,
        &teamPlayer::OnlyVisible ,
        &teamPlayer::TeamSleeping ,
        &teamPlayer::TeamDead ,
        &teamPlayer::TeamWeight ,
        &teamPlayer::TeamExtraInfo ,

        &teamPlayer::TeamColor ,
        &teamPlayer::TeamNonvisibleColor ,
        &teamPlayer::TeamSleepingColor ,
        &teamPlayer::TeamDeadColor ,

        &teamPlayer::TeamPlayerArmorChams,
        &teamPlayer::TeamPlayerShieldChams,
        &teamPlayer::TeamPlayerWeaponChams,

        &teamPlayer::TeamPlayerArmorColor,
        &teamPlayer::TeamPlayerShieldColor,
        &teamPlayer::TeamPlayerWeaponColor,

        &enemyDino::EnableEnemyDino ,
        &enemyDino::Name ,
        &enemyDino::Health ,
        &enemyDino::Distance ,
        &enemyDino::Buffs,
        &enemyDino::Chams ,
        &enemyDino::OnlyVisible ,
        &enemyDino::Aggression ,
        &enemyDino::EnemyDinoColor ,

        &teamDino::EnableTeamDino ,
        &teamDino::Name ,
        &teamDino::Health ,
        &teamDino::Distance ,
        &teamDino::Buffs,
        &teamDino::Chams ,
        &teamDino::OnlyVisible ,
        &teamDino::Aggression ,
        &teamDino::TeamDinoColor ,

        &wildDino::EnableWildDino ,
        &wildDino::Name ,
        &wildDino::Health ,
        &wildDino::Distance ,
        &wildDino::Buffs,
        &wildDino::Chams ,
        &wildDino::Bossfight,
        &wildDino::OnlyVisible ,
        &wildDino::WildDinoColor ,
        &wildDino::LevelFilter,
        &wildDino::LevelFilterType,

	    &radar::DrawRadar,
	    &radar::DrawRadarBackground,
        &radar::RadarBackgroundAlpha,
	    &radar::DrawRadarNESW,
	    &radar::RadarSize,
	    &radar::RadarZoom,
	    &radar::RadarX,
	    &radar::RadarY,
	    &radar::DrawRadarEnemy,
	    &radar::DrawRadarTeam,
	    &radar::DrawRadarEnemyDinos,
	    &radar::DrawRadarTeamDinos,
        &radar::CrosshairRadar2D,
        &radar::ShowSleepingPlayers2D,
        &radar::CrosshairRadar2DMax,
        &radar::CrosshairRadar2DMin,
        &radar::CrosshairRadar2DScale,
        &radar::CrosshairRadar3D,
        &radar::ShowSleepingPlayers3D,
        &radar::CrosshairRadar3DMax,
        &radar::CrosshairRadar3DMin ,
        &radar::CrosshairRadar3DScale,
        &radar::DrawCrosshairRadar,
        &radar::CrossHairZoom ,
        &radar::CrossHairMinDistance,
        &radar::CrossHairMaxDistance,
        &radar::CrossHairScaleMinDistance,
        &radar::CrossHairDegreesBetween ,
        &radar::CrossHairShowSleepingPlayers,
        &radar::CrossHairShowTribePlayers,
        
        &miscStructure::SupplyDrop,
        &miscStructure::CaveDrop,
        &miscStructure::Artifact,
        &miscStructure::BeaverDam,
        &miscStructure::BeeHive,
        &miscStructure::Note, 
        &miscStructure::Teleport,
        &miscStructure::DrawDroppedItems,
        &miscStructure::DrawDroppedEggs,
        &miscStructure::BossTeleportEsp,
        &miscStructure::ProcessStructures,
        &miscStructure::ChargeNode,
        &miscStructure::Nest,

        &enemyStructure::DrawEStructures,
        &enemyStructure::EnemySleepingBag,
        &enemyStructure::EnemyBed,
        &enemyStructure::EnemyBunkBed,
        &enemyStructure::EnemySmallTeleporter,
        &enemyStructure::EnemyMediumTeleporter,
        &enemyStructure::EnemyLargeTeleporter,
        &enemyStructure::EnemyAutoTurret,
        &enemyStructure::EnemyHeavyTurret,
        &enemyStructure::EnemyTekTurret,
        &enemyStructure::EnemySmallCropPlot,
        &enemyStructure::EnemyMediumCropPlot,
        &enemyStructure::EnemyLargeCropPlot,
        &enemyStructure::EnemyElectricalGenerator,
        &enemyStructure::EnemyEnemyTekGenerator,
        &enemyStructure::EnemyTekTransmitter,
        &enemyStructure::EnemyCryoFridge,
        &enemyStructure::EnemyCloningChamber,
        &enemyStructure::EnemyVacuumCompartment,
        &enemyStructure::EnemyFoundation,
        &enemyStructure::EnemyWall,
        &enemyStructure::EnemyDoor,
        &enemyStructure::EnemyDoorFrame,
        &enemyStructure::EnemyCeiling,
        &enemyStructure::EnemyFenceFoundation,
        &enemyStructure::EnemySmallStorageBox,
        &enemyStructure::EnemyLargeStorageBox,
        &enemyStructure::EnemyVault,
        &enemyStructure::EnemyRefrigerator,
        &enemyStructure::EnemyAirConditioner,
        &enemyStructure::EnemyDedicatedStorage,
        &enemyStructure::EnemyTekForceField,
        &enemyStructure::EnemyReplicator,
        &enemyStructure::EnemyFabricator,
        &enemyStructure::EnemySmithy,
        &enemyStructure::EnemyMortarAndPestle,
        &enemyStructure::EnemyChemistryBench,
        &enemyStructure::EnemyIndustrialForge,
        &enemyStructure::EnemyIndustrialGrill,
        &enemyStructure::EnemyIndustrialCookingPot,
        &enemyStructure::EnemyGrinder,
        &enemyStructure::EnemyCookingPot,
        &enemyStructure::EnemyC4Charge,
        &enemyStructure::EnemyBearTrap,
        &enemyStructure::EnemyLargeBearTrap,
        &enemyStructure::EnemyWaterMine,
        &enemyStructure::EnemyItemCache,
        &enemyStructure::EnemyCliffPlatform,
        &enemyStructure::EnemyPlantX,
        &enemyStructure::EnemyLinkedStorageBox,
        &enemyStructure::EnemyTeslaCoil,

        &teamStructure::DrawTStructures,
        &teamStructure::TeamSleepingBag,
        &teamStructure::TeamBed,
        &teamStructure::TeamBunkBed,
        &teamStructure::TeamSmallTeleporter,
        &teamStructure::TeamMediumTeleporter,
        &teamStructure::TeamLargeTeleporter,
        &teamStructure::TeamAutoTurret,
        &teamStructure::TeamHeavyTurret,
        &teamStructure::TeamTekTurret,
        &teamStructure::TeamSmallCropPlot,
        &teamStructure::TeamMediumCropPlot,
        &teamStructure::TeamLargeCropPlot,
        &teamStructure::TeamElectricalGenerator,
        &teamStructure::TeamTeamTekGenerator,
        &teamStructure::TeamTekTransmitter,
        &teamStructure::TeamCryoFridge,
        &teamStructure::TeamCloningChamber,
        &teamStructure::TeamVacuumCompartment,
        &teamStructure::TeamFoundation,
        &teamStructure::TeamWall,
        &teamStructure::TeamDoor,
        &teamStructure::TeamDoorFrame,
        &teamStructure::TeamCeiling,
        &teamStructure::TeamFenceFoundation,
        &teamStructure::TeamSmallStorageBox,
        &teamStructure::TeamLargeStorageBox,
        &teamStructure::TeamVault,
        &teamStructure::TeamRefrigerator,
        &teamStructure::TeamAirConditioner,
        &teamStructure::TeamDedicatedStorage,
        &teamStructure::TeamTekForceField,
        &teamStructure::TeamReplicator,
        &teamStructure::TeamFabricator,
        &teamStructure::TeamSmithy,
        &teamStructure::TeamMortarAndPestle,
        &teamStructure::TeamChemistryBench,
        &teamStructure::TeamIndustrialForge,
        &teamStructure::TeamIndustrialGrill,
        &teamStructure::TeamIndustrialCookingPot,
        &teamStructure::TeamGrinder,
        &teamStructure::TeamCookingPot,
        &teamStructure::TeamC4Charge,
        &teamStructure::TeamBearTrap,
        &teamStructure::TeamLargeBearTrap,
        &teamStructure::TeamWaterMine,
        &teamStructure::TeamItemCache,
        &teamStructure::TeamCliffPlatform,
        &teamStructure::TeamPlantX,
        &teamStructure::TeamLinkedStorageBox,
        &teamStructure::TeamTeslaCoil,

        &playerMovement::BunnyHop ,
        &playerMovement::Airstuck ,
        &playerMovement::BetterAirstuck,
        &playerMovement::Desync ,
        &playerMovement::SpeedHack ,
        &playerMovement::ManualRemountSpeedHack,
        &playerMovement::ManualRemountKey,
        &playerMovement::SpeedHackValue ,
        &playerMovement::SpeedHackValueTwo,
        &playerMovement::TekJump ,
        &playerMovement::TekHover ,
        &playerMovement::TekLegs ,
        &playerMovement::TekGaunts ,
        &playerMovement::TekGauntsStop,
        &playerMovement::SpoofCrouch,
        &playerMovement::SpoofProne,
        &playerMovement::SpinBot,
        &playerMovement::SpinBotSpeed,
        &playerMovement::SpinBotYaw,
        &playerMovement::SpinBotPitch,
        &playerMovement::SpinBotClient,
        &playerMovement::DelayedPacketCount,
        &playerMovement::AirJump,
        
        &dinoFeatures::BackwardsFly ,
        &dinoFeatures::OmniFly ,
        &dinoFeatures::ForceMount ,
        &dinoFeatures::AutoForceMount ,
        &dinoFeatures::InstaTurn ,
        &dinoFeatures::HardTurn ,
        &dinoFeatures::BetterRavager ,
        &dinoFeatures::BetterYiLing ,

        &autoMation::DupeMethod,
        &autoMation::DupeMethodSpeed,
        &autoMation::AutoWalk,
        &autoMation::AutoAttack,
        &autoMation::PickupC4 ,
        &autoMation::PickupTraps ,
        &autoMation::PickupWaterMines ,
        &autoMation::AutoFillTekTurrets,
        &autoMation::AutoFillHeavyTurrets,
        &autoMation::AutoFillAutoTurrets,
        &autoMation::AutoFillCropPlots,
        &autoMation::AutoMedbrew ,
        &autoMation::AutoConsumable ,
        &autoMation::AutoFood ,
        &autoMation::AutoPopcornDinoResources ,
        &autoMation::AutoTakeAchatina ,
        &autoMation::AutoTakeCrops ,
        &autoMation::AutoFeedRawMeat ,
        &autoMation::AutoPick ,
        &autoMation::SelfArmor ,
        &autoMation::IgnoreGaunts,
        &autoMation::IgnoreChest ,
        &autoMation::LegitAutoFlak,
        &autoMation::AutoLoot ,
        &autoMation::AutoPopcorn ,
        &autoMation::AutoMount ,
        &autoMation::PickupItems,
        &autoMation::TeamAutoPopcorn,
        &autoMation::TeamAutoLoot,
        &autoMation::AutoPopcornPlayers,
        &autoMation::AutoPopcornStructures,
        &autoMation::AutoPopcornTurrets,
        &autoMation::AutoPopcornBags,
        &autoMation::AutoTakePlayers,
        &autoMation::AutoTakeStructures,
        &autoMation::AutoTakeTurrets,
        &autoMation::AutoTakeBags,
        &autoMation::PickupPoop,
        &autoMation::PickupEggs,
        &autoMation::TeamAutoPopcornPlayers ,
        &autoMation::TeamAutoPopcornStructures ,
        &autoMation::TeamAutoPopcornBags ,
        &autoMation::TeamAutoTakePlayers ,
        &autoMation::TeamAutoTakeStructures ,
        &autoMation::TeamAutoTakeTurrets,
        &autoMation::TeamAutoTakeBags,
        &autoMation::SwapToScuba,
        &autoMation::AutoPincode,
        &autoMation::AutoNameTurrets,
        &autoMation::AutoTurretSettings ,
        &autoMation::AutoDepoDedis,
        &autoMation::AutoFillForges,
        &autoMation::AutoFish ,
        &autoMation::AutoTamePassive ,
        &autoMation::AutoGrindStone ,
        &autoMation::AutoSheep ,
        
        &misc::MouseSmoothing,
        &misc::ShotGunReload,
        &misc::Spyglass,
        &misc::InfiniteC4 ,
        &misc::SelfC4Placer ,
        &misc::DmgNumbers ,
        &misc::ExtraServerInfo ,
        &misc::RemoveBolas,
        &misc::TribeLogToChat ,
        &misc::FovChanger ,
        &misc::LongArms ,
        &misc::InfiniteArms ,
        &misc::InfiniteSuitEle ,
        &misc::NoRecoil ,
        &misc::NoTekRifleOverheat ,
        &misc::NoRailgunOverheat ,
        &misc::RapidFire ,
        &misc::Ini ,
        &misc::Notes ,
        &misc::Ghost ,
        &misc::ForceJump,
        &misc::RenderCrash,
        &misc::ServerCrash,
        &misc::ExtraInfo,
        &misc::ShowMeshDetection,
        &misc::SpoofFoundation,
        &misc::InventoryToArk,
        &misc::SelfUpload,
        &misc::Suicide,
        &misc::DisableRespawnAnim,
        &misc::TekChestDisconnect,
        &misc::LadderExploit,
        &misc::XpExploit,
        &misc::PointExploit,
        //&misc::BattleMode,
        &misc::FastUse,
        &misc::DinoClaim,
        &misc::DinoName,
        &misc::DinoLevel,
        &misc::DinoSaddle,
        &misc::DinoFeed,
        &misc::DinoImprint,
        &misc::InfiniteWeight,
        &misc::UploadAll,
        &misc::DownloadAll,
        &misc::NetLimiter,
        &misc::SpamChangeCharacterSize,
        &misc::SpamLastCharacter,
        &misc::UnlockBTT,
        &misc::BetterPassenger,
        &misc::UnlockRotation,
        &misc::FastThrow,
        &misc::ForceAccess,
        &misc::PopcornTarget,
        &misc::ForceShoot,
        &misc::FastPlaceC4,
        &misc::TopDownView,
        &misc::PyromaneJump,
        &misc::TransBag,
        &misc::BetterPopcorn,
        &misc::PopcornSelf,
        &misc::PopcornDino,
        &misc::TransferTarget,


        &user::HitMarker3D,
        &user::HitMarker3DSize,
        &user::HitMarker3DColor,
        &user::CustomCamera,
        &user::CustomCameraOffsetX,
        &user::CustomCameraOffsetY,
        &user::CustomCameraOffsetZ,
        &user::CustomCameraUseWeaponOffset,
        &user::CustomCameraWeaponOffsetX,
        &user::CustomCameraWeaponOffsetY,
        &user::CustomCameraWeaponOffsetZ,
        &user::CustomCameraCollision,
        &user::CustomCameraBone,

        &user::MaterialBlendMode,
        &user::AntimeshESP,
        &user::AntimeshESPRange,
        &user::AntimeshEspUseStaticMesh,
        &user::AntimeshColor,
        &user::AntimeshDisableDepth,
        &user::KillFeed,
        &user::AllKills,
        &user::DinoKills,
        &user::KillFeedTime,
        &user::TargetWarning,
        &user::TargetWarningMinimum,
        &user::ClearWater,
        &user::ShowToggleMessage,
        &user::MessageTime,
        &user::ChamsWireFrame,
        &user::dmgNumbers::Scale,
        &user::dmgNumbers::LifeSpan,
        &user::dmgNumbers::MinScale,
        &user::dmgNumbers::ZVelocity,
        &user::dmgNumbers::EnemyColor,
        &user::dmgNumbers::TeamColor,
        &user::dmgNumbers::WildColor,
        &user::ShowFlags::PostProcessing ,
        &user::ShowFlags::Bloom ,
        &user::ShowFlags::LocalExposure ,
        &user::ShowFlags::AntiAliasing ,
        &user::ShowFlags::TemporalAA ,
        &user::ShowFlags::AmbientCubemap ,
        &user::ShowFlags::EyeAdaptation ,
        &user::ShowFlags::GlobalIllumination ,
        &user::ShowFlags::Vignette ,
        &user::ShowFlags::AmbientOcclusion ,
        &user::ShowFlags::Decals ,
        &user::ShowFlags::OnScreenDebug ,
        &user::ShowFlags::VisualizeNanite ,
        &user::ShowFlags::VisualizeLumen ,
        &user::ShowFlags::VisualizeSubstrate ,
        &user::ShowFlags::VisualizeGroom ,
        &user::ShowFlags::VisualizeVirtualShadowMap ,
        &user::ShowFlags::PointLights ,
        &user::ShowFlags::SpotLights ,
        &user::ShowFlags::RectLights ,
        &user::ShowFlags::DepthOfField ,
        &user::ShowFlags::MotionBlur ,
        &user::ShowFlags::CameraInterpolation ,
        &user::ShowFlags::ToneCurve ,
        &user::ShowFlags::SeparateTranslucency ,
        &user::ShowFlags::ScreenPercentage ,
        &user::ShowFlags::ReflectionEnvironment ,
        &user::ShowFlags::Specular ,
        &user::ShowFlags::ScreenSpaceReflections ,
        &user::ShowFlags::LumenReflections ,
        &user::ShowFlags::ContactShadows ,
        &user::ShowFlags::RayTracedDistanceFieldShadows ,
        &user::ShowFlags::CapsuleShadows ,
        &user::ShowFlags::VolumetricLightmap ,
        &user::ShowFlags::IndirectLightingCache ,
        &user::ShowFlags::TexturedLightProfiles ,
        &user::ShowFlags::LightFunctions ,
        &user::ShowFlags::NaniteMeshes ,
        &user::ShowFlags::InstancedStaticMeshes ,
        &user::ShowFlags::InstancedFoliage ,
        &user::ShowFlags::InstancedGrass ,
        &user::ShowFlags::DynamicShadows ,
        &user::ShowFlags::Particles ,
        &user::ShowFlags::SkeletalMeshes ,
        &user::ShowFlags::Translucency ,
        &user::ShowFlags::LOD ,
        &user::ShowFlags::Lighting ,
        &user::ShowFlags::DeferredLighting ,
        &user::ShowFlags::StaticMeshes ,
        &user::ShowFlags::Landscape ,
        &user::ShowFlags::Fog ,
        &user::ShowFlags::Game ,
        &user::ShowFlags::BSP ,
        &user::ShowFlags::LightShafts ,
        &user::ShowFlags::Atmosphere ,
        &user::ShowFlags::TextRender ,
        &user::ShowFlags::Rendering ,
        &user::ShowFlags::HMDDistortion ,
        &user::ShowFlags::StereoRendering ,
        &user::ShowFlags::DistanceCulledPrimitives ,
        &user::ShowFlags::SkyLighting ,
        &user::ShowFlags::Paper2DSprites ,
        &user::ShowFlags::ScreenSpaceAO ,
        &user::ShowFlags::DistanceFieldAO ,
        &user::ShowFlags::LumenGlobalIllumination ,
        &user::ShowFlags::VolumetricFog ,
        &user::ShowFlags::WidgetComponents ,
        &user::ShowFlags::MediaPlanes ,
        &user::ShowFlags::PathTracing ,
        &user::ShowFlags::VisualizeCalibrationColor ,
        &user::ShowFlags::VisualizeCalibrationGrayscale ,
        &user::ShowFlags::VisualizeCalibrationCustom ,
        &user::ShowFlags::LumenScreenTraces ,
        &user::ShowFlags::LumenDetailTraces ,
        &user::ShowFlags::LumenGlobalTraces ,
        &user::ShowFlags::LumenFarFieldTraces ,
        &user::ShowFlags::LumenSecondaryBounces ,
        &user::ShowFlags::LumenShortRangeAmbientOcclusion ,
        &user::ShowFlags::ShaderPrint ,

        &user::sound::ChangeHitMarkerSound ,
        &user::sound::IsUiSound ,
        &user::sound::TeamHitMarkerSoundVolume ,
        &user::sound::EnemyHitMarkerSoundVolume ,
        &user::sound::TeamHitMarkerSoundPitch ,
        &user::sound::EnemyHitMarkerSoundPitch ,
        &user::sound::ShootSoundVolume,

        &resourceStructure::EnableResource,
        &menu::ShowMenu,
        &menu::ExtraCheatKey,
        &menu::Uninject,
        &menu::ShowStructureMissingAlerts,
        &menu::HudMenu ,
        &menu::ForwardKey ,
        &menu::BackwardKey,
        &menu::DownKey ,
        &menu::UpKey
    };

    misc::DinoLevelPreset = {};

    if (MenuVars.size() < 1)
        return false;

    for (auto* Var : MenuVars)
        if (Var)
            Var->Initialize();

    return true;
}

bool settings::Uninitialize()
{
    for (auto* Var : MenuVars)
        if (Var)
            Var->Uninitialize();
    
    return true;
}
