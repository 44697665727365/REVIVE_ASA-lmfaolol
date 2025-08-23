#include "pch.h"
#include "DOMBuilder.h"
#include "Menu.h"
#include "Rendering.h"
#include "ActorBase.h"
#include "MenuVars.h"
#include "settings.h"
#include "MenuHelper.h"
#include "TabGroup.h"
#include "Toggle.h"
#include "Keybind.h"
#include "Button.h"
#include "SliderFloat.h"
#include "SliderInt.h"
#include "TextInput.h"
#include "Combo.h"
#include "LocalModule.h"
#include "Config.h"
#include "ColorPicker.h"
#include "UserModule.h"
#include "AimbotModule.h"
std::unordered_map<int, std::vector<MenuItemBase*>> LevelPresetPopups = {};
Combo* CraftingItemsCombo = nullptr;

std::wstring NameStr = Xors(L"");
std::wstring HealthStr = Xors(L"");
std::wstring StaminaStr = Xors(L"");
std::wstring OxygenStr = Xors(L"");
std::wstring FoodStr = Xors(L"");
std::wstring WeightStr = Xors(L"");
std::wstring MeleeStr = Xors(L"");

std::vector<TabGroup*> DOMBuilder::CreateMenu()
{
	DOMBuilder::InitStructureTabs();

	std::vector<TabGroup*> TabGroups = {};
	TabGroup* Aimbot = new TabGroup(Xors(L"Aimbot"), nullptr);

	Aimbot->Tabs.push_back(new Tab(Xors(L"General"), []() {}, {
		CreateItem(&settings::aimbot::Aimbot),
		CreateItem(&settings::aimbot::ServerSilent),
		new Combo(Xors(L"Bone"),Xors(L"Target Bone"), &settings::aimbot::CurrentBone.Val, {
			Xors(L"Head"),
			Xors(L"Chest"),
			Xors(L"Left Gaunt"),
			Xors(L"Right Gaunt"),
			Xors(L"Left Leg"),
			Xors(L"Right Leg"),
			Xors(L"Left Boot"),
			Xors(L"Right Boot"),
			Xors(L"Smart Bone")
		}),
		CreateItem(&settings::aimbot::EnableTriggerBot),
		CreateItem(&settings::aimbot::OnlyVisible),
		CreateItem(&settings::aimbot::TargetDinos),
		CreateItem(&settings::aimbot::TargetSleepers),
		CreateItem(&settings::aimbot::TargetTeam),
		CreateItem(&settings::aimbot::ShieldBypass),
		}, {
			CreateItem(&settings::aimbot::AntiDesync),
			CreateItem(&settings::aimbot::RailgunAimbot)->AddToPopup({CreateItem(&settings::aimbot::RailgunAimbotSpeed),CreateItem(&settings::aimbot::RailgunHideTrail)}),
			CreateItem(&settings::aimbot::SpoofHeadshots),
			CreateItem(&settings::aimbot::EnablePrediction),
			CreateItem(&settings::aimbot::PredictionMultiplier),
			CreateItem(&settings::aimbot::UseFov),

		}));

	Aimbot->Tabs.push_back(new Tab(Xors(L"Misc"), []() {},
	{
		CreateItem(&settings::aimbot::SpoofTargetPos),
		CreateItem(&settings::aimbot::AddToAllyList),
		CreateItem(&settings::aimbot::ClearAllyList),
		CreateItem(&settings::aimbot::EnableCrosshair),
		CreateItem(&settings::aimbot::AmmoIndicator),
		CreateItem(&settings::misc::MouseSmoothing),
		CreateItem(&settings::user::HitMarker3D)->AddToPopup({CreateItem(&settings::user::HitMarker3DSize),CreateItem(&settings::user::HitMarker3DColor)}),
	}, {
		CreateItem(&settings::user::TargetWarning)->AddToPopup(CreateItem(&settings::user::TargetWarningMinimum)),
		CreateItem(&settings::misc::Spyglass),
		CreateItem(&settings::aimbot::Tracers),
		CreateItem(&settings::aimbot::ShowTargetingString),
		CreateItem(&settings::aimbot::EnableTargetLine),
		CreateItem(&settings::aimbot::DesyncWalk)->AddToPopup({CreateItem(&settings::aimbot::DesyncStrength),CreateItem(&settings::aimbot::AdditionalDesync)}),
	}));

	TabGroup* Visual = new TabGroup(Xors(L"Visuals"), nullptr);

	Visual->Tabs.push_back(new Tab(Xors(L"Enemy Players"), []() {},
		{
			CreateItem(&settings::enemyPlayer::EnableEnemyPlayer),
			CreateItem(&settings::enemyPlayer::EnemyColor),
			CreateItem(&settings::enemyPlayer::EnemyNonvisibleColor),
			CreateItem(&settings::enemyPlayer::EnemySleepingColor),
			CreateItem(&settings::enemyPlayer::EnemyDeadColor),
			CreateItem(&settings::enemyPlayer::Name),
			CreateItem(&settings::enemyPlayer::TribeName),
			CreateItem(&settings::enemyPlayer::EnemyExtraInfo),
			CreateItem(&settings::enemyPlayer::Box),
			new Combo(Xors(L"Box Type"), Xors(L""),&settings::enemyPlayer::BoxType, {
				Xors(L"2D Box"),
				Xors(L"2D Corner Box"),
				Xors(L"3D Turning Box")
			}),

		}, {
			CreateItem(&settings::enemyPlayer::Bones),
			CreateItem(&settings::enemyPlayer::Distance),
			CreateItem(&settings::enemyPlayer::Health),
			CreateItem(&settings::enemyPlayer::EnemyWeight),
			CreateItem(&settings::enemyPlayer::ViewLine),
			CreateItem(&settings::enemyPlayer::Armor),
			CreateItem(&settings::enemyPlayer::Weapon),
			CreateItem(&settings::enemyPlayer::Chams)->AddToPopup({CreateItem(&settings::enemyPlayer::EnemyPlayerArmorChams),
				CreateItem(&settings::enemyPlayer::EnemyPlayerArmorColor),
				CreateItem(&settings::enemyPlayer::EnemyPlayerShieldChams),
				CreateItem(&settings::enemyPlayer::EnemyPlayerShieldColor),
				CreateItem(&settings::enemyPlayer::EnemyPlayerWeaponChams),
				CreateItem(&settings::enemyPlayer::EnemyPlayerWeaponColor)
			}),
			CreateItem(&settings::enemyPlayer::EnemySleeping),
			CreateItem(&settings::enemyPlayer::EnemyDead),
		}));

	Visual->Tabs.push_back(new Tab(Xors(L"Tribe Players"), []() {},
		{
			CreateItem(&settings::teamPlayer::EnableTeamPlayer),
			CreateItem(&settings::teamPlayer::TeamColor),
			CreateItem(&settings::teamPlayer::TeamNonvisibleColor),
			CreateItem(&settings::teamPlayer::TeamSleepingColor),
			CreateItem(&settings::teamPlayer::TeamDeadColor),
			CreateItem(&settings::teamPlayer::Name),
			CreateItem(&settings::teamPlayer::TribeName),
			CreateItem(&settings::teamPlayer::TeamExtraInfo),
			CreateItem(&settings::teamPlayer::Box),
			new Combo(Xors(L"Box Type"), Xors(L""),&settings::teamPlayer::BoxType, {
				Xors(L"2D Box"),
				Xors(L"2D Corner Box"),
				Xors(L"3D Turning Box")
			}),

		}, {
			CreateItem(&settings::teamPlayer::Bones),
			CreateItem(&settings::teamPlayer::Distance),
			CreateItem(&settings::teamPlayer::Health),
			CreateItem(&settings::teamPlayer::TeamWeight),
			CreateItem(&settings::teamPlayer::ViewLine),
			CreateItem(&settings::teamPlayer::Armor),
			CreateItem(&settings::teamPlayer::Weapon),
			CreateItem(&settings::teamPlayer::Chams)->AddToPopup({
				CreateItem(&settings::teamPlayer::TeamPlayerArmorChams),
				CreateItem(&settings::teamPlayer::TeamPlayerArmorColor),
				CreateItem(&settings::teamPlayer::TeamPlayerShieldChams),
				CreateItem(&settings::teamPlayer::TeamPlayerShieldColor),
				CreateItem(&settings::teamPlayer::TeamPlayerWeaponChams),
				CreateItem(&settings::teamPlayer::TeamPlayerWeaponColor)
			}),

			CreateItem(&settings::teamPlayer::TeamSleeping),
			CreateItem(&settings::teamPlayer::TeamDead),
		}));

	Visual->Tabs.push_back(new Tab(Xors(L"Enemy Dinos"), []() {},
		{
			CreateItem(&settings::enemyDino::EnableEnemyDino),
			CreateItem(&settings::enemyDino::EnemyDinoColor),
			CreateItem(&settings::enemyDino::Name),
			CreateItem(&settings::enemyDino::Distance),
			CreateItem(&settings::enemyDino::Health),
			CreateItem(&settings::enemyDino::Aggression),
			CreateItem(&settings::enemyDino::Chams),
			CreateItem(&settings::enemyDino::OnlyVisible),
		}, {

		}));

	Visual->Tabs.push_back(new Tab(Xors(L"Tribe Dinos"), []() {},
		{
			CreateItem(&settings::teamDino::EnableTeamDino),
			CreateItem(&settings::teamDino::TeamDinoColor),
			CreateItem(&settings::teamDino::Name),
			CreateItem(&settings::teamDino::Distance),
			CreateItem(&settings::teamDino::Health),
			CreateItem(&settings::teamDino::Aggression),
			CreateItem(&settings::teamDino::Chams),
			CreateItem(&settings::teamDino::OnlyVisible),
		}, {

		}));
	std::vector < std::wstring> LevelFilterOptions = { Xors(L"Below"), Xors(L"Exactly"), Xors(L"Above") };
	Visual->Tabs.push_back(new Tab(Xors(L"Wild Dinos"), []() {},
		{
			CreateItem(&settings::wildDino::EnableWildDino),
			CreateItem(&settings::wildDino::WildDinoColor),
			CreateItem(&settings::wildDino::Name),
			CreateItem(&settings::wildDino::Distance),
			CreateItem(&settings::wildDino::Health),
			CreateItem(&settings::wildDino::Chams),
			CreateItem(&settings::wildDino::OnlyVisible),
			new Toggle(Xors(L"Enable Dino Filter"), Xors(L"Enables Filter For Wild Dinos"), &settings::wildDino::EnableFilter, false),
			new TextInput(Xors(L"Wild Dino Filter"), Xors(L"Filter Name"), &settings::wildDino::WildDinoString, InputType_Alphabet),

		}, {
			CreateItem(&settings::wildDino::LevelFilter)->AddToPopup({
			new Combo(settings::wildDino::LevelFilterType.GetName(), settings::wildDino::LevelFilterType.GetDesc(),&settings::wildDino::LevelFilterType.Val, LevelFilterOptions),
		}),
		CreateItem(&settings::wildDino::Bossfight),
		new Combo(Xors(L"Bossfight Esp"),Xors(L"Selected Bossfight"), &settings::wildDino::CurrentBoss, {
			Xors(L"Monkey"),
			Xors(L"Dragon"),
			Xors(L"Broodmother"),
			Xors(L"Center"),
			Xors(L"Manticore"),
			Xors(L"Rockwell"),
		}),
		}));

	Menu::EnemyStructuresTab = new Tab(Xors(L"Enemy Structs"), []() {},
		{
			new Button(Xors(L"Turrets/Gens"),Xors(L""), []() {
				DOMBuilder::UpdateStructureTab(0, true);
			},0),
			new Button(Xors(L"Tek"),Xors(L""), []() {
				DOMBuilder::UpdateStructureTab(1, true);
			},0),
			new Button(Xors(L"Industrial"),Xors(L""), []() {
				DOMBuilder::UpdateStructureTab(2, true);
			},0),
			new Button(Xors(L"Containers"),Xors(L""), []() {
				DOMBuilder::UpdateStructureTab(3, true);
			},0),
			new Button(Xors(L"Buildings"),Xors(L""), []() {
				DOMBuilder::UpdateStructureTab(4, true);
			},0),
			new Button(Xors(L"Other"),Xors(L""), []() {
				DOMBuilder::UpdateStructureTab(5, true);
			},0),

			CreateItem(&settings::enemyStructure::DrawEStructures),
			CreateItem(&settings::miscStructure::ProcessStructures),
		},
		{
		});

	Visual->Tabs.push_back(Menu::EnemyStructuresTab);

	Menu::TeamStructuresTab = new Tab(Xors(L"Tribe Structs"), []() {},
		{
			new Button(Xors(L"Turrets/Gens"),Xors(L""), []() {
				DOMBuilder::UpdateStructureTab(0, false);
			},0),
			new Button(Xors(L"Tek"),Xors(L""), []() {
				DOMBuilder::UpdateStructureTab(1, false);
			},0),
			new Button(Xors(L"Industrial"),Xors(L""), []() {
				DOMBuilder::UpdateStructureTab(2, false);
			},0),
			new Button(Xors(L"Containers"),Xors(L""), []() {
				DOMBuilder::UpdateStructureTab(3, false);
			},0),
			new Button(Xors(L"Buildings"),Xors(L""), []() {
				DOMBuilder::UpdateStructureTab(4, false);
			},0),
			new Button(Xors(L"Other"),Xors(L""), []() {
				DOMBuilder::UpdateStructureTab(5, false);
			},0),
			CreateItem(&settings::teamStructure::DrawTStructures),
			CreateItem(&settings::miscStructure::ProcessStructures),
		},
		{
		});

	Visual->Tabs.push_back(Menu::TeamStructuresTab);

	Visual->Tabs.push_back(new Tab(Xors(L"Misc Structs"), []() {},
		{
			CreateItem(&settings::miscStructure::CaveDrop),
			CreateItem(&settings::miscStructure::SupplyDrop),
			CreateItem(&settings::miscStructure::Artifact),
			CreateItem(&settings::miscStructure::BeaverDam),
			CreateItem(&settings::miscStructure::BeeHive),
			CreateItem(&settings::miscStructure::Note),
			CreateItem(&settings::miscStructure::ChargeNode),
		},
		{
			CreateItem(&settings::miscStructure::DrawDroppedEggs),
			CreateItem(&settings::miscStructure::DrawDroppedItems),
			CreateItem(&settings::resourceStructure::EnableResource)->AddToPopup({
				new Toggle(Xors(L"Metal"),Xors(L""),&settings::resourceStructure::Metal,false),
				new Toggle(Xors(L"Crystal"),Xors(L""),&settings::resourceStructure::Crystal,false),
				new Toggle(Xors(L"Pearls"),Xors(L""),&settings::resourceStructure::Pearls,false),
				new Toggle(Xors(L"Obsidian"),Xors(L""),&settings::resourceStructure::Obsidian,false),
				new Toggle(Xors(L"Oil"),Xors(L""),&settings::resourceStructure::Oil,false),
				new Toggle(Xors(L"Gems"),Xors(L""),&settings::resourceStructure::Gem,false),
				new SliderInt(Xors(L"Render Distance"),Xors(L"Meters"),&settings::resourceStructure::Distance,100,600),
			}),
			CreateItem(&settings::miscStructure::Nest),
			CreateItem(&settings::miscStructure::BossTeleportEsp),
		}));

	TabGroup* Features = new TabGroup(Xors(L"Features"), nullptr);

	Features->Tabs.push_back(new Tab(Xors(L"Player"), []() {},
		{
			CreateItem(&settings::misc::FovChanger),
			CreateItem(&settings::misc::Ghost),
			CreateItem(&settings::misc::FastPlaceC4),
			CreateItem(&settings::user::CustomCamera)->AddToPopup({
				CreateItem(&settings::user::CustomCameraOffsetX),
				CreateItem(&settings::user::CustomCameraOffsetY),
				CreateItem(&settings::user::CustomCameraOffsetZ),
				CreateItem(&settings::user::CustomCameraCollision),
				CreateItem(&settings::user::CustomCameraUseWeaponOffset),
				CreateItem(&settings::user::CustomCameraWeaponOffsetX),
				CreateItem(&settings::user::CustomCameraWeaponOffsetY),
				CreateItem(&settings::user::CustomCameraWeaponOffsetZ),
				new Combo(settings::user::CustomCameraBone.GetName(),settings::user::CustomCameraBone.GetDesc(),&settings::user::CustomCameraBone.Val,AimbotModule::CameraBonesNames),
			}),
			CreateItem(&settings::misc::TopDownView)->AddToPopup({
				new SliderFloat(Xors(L"Vertical distance"),Xors(L""), &settings::misc::TopDownView.Val, settings::misc::TopDownView.Min, settings::misc::TopDownView.Max),
				new Toggle(Xors(L"Force Distance"),Xors(L"Ignore camera collision"),&settings::misc::TopDownForceDistance),
			}),
			CreateItem(&settings::playerMovement::SpinBot)->AddToPopup({
				CreateItem(&settings::playerMovement::SpinBotSpeed),
				CreateItem(&settings::playerMovement::SpinBotClient),
				new Combo(settings::playerMovement::SpinBotYaw.GetName(),settings::playerMovement::SpinBotYaw.GetDesc(),&settings::playerMovement::SpinBotYaw.Val,
					{
						Xors(L"Spin right"),
						Xors(L"Spin left"),
						Xors(L"Back"),
						Xors(L"Random"),
					}),
				new Combo(settings::playerMovement::SpinBotPitch.GetName(),settings::playerMovement::SpinBotPitch.GetDesc(),&settings::playerMovement::SpinBotPitch.Val,
					{
						Xors(L"Up"),
						Xors(L"Down"),
						Xors(L"Center"),
						Xors(L"Random"),
					}),
			}),
			CreateItem(&settings::misc::TribeLogToChat),
		}, {
			CreateItem(&settings::misc::DmgNumbers)->AddToPopup({
					CreateItem(&settings::user::dmgNumbers::EnemyColor),
					CreateItem(&settings::user::dmgNumbers::TeamColor),
					CreateItem(&settings::user::dmgNumbers::WildColor),
					CreateItem(&settings::user::dmgNumbers::Scale),
					CreateItem(&settings::user::dmgNumbers::LifeSpan),
					CreateItem(&settings::user::dmgNumbers::MinScale),
					CreateItem(&settings::user::dmgNumbers::ZVelocity),
			}),
			CreateItem(&settings::misc::Suicide),
			CreateItem(&settings::misc::FastUse),
			CreateItem(&settings::misc::ShotGunReload),
			CreateItem(&settings::misc::Notes),
			CreateItem(&settings::misc::RemoveBolas)->AddToPopup({
				new Keybind(Xors(L"Toggle Keybind"), &settings::misc::RemoveBolas.keyBindForToggle),
				new Toggle(Xors(L"Players"),Xors(L""),&settings::misc::RemovePlayerBolas),
				new Toggle(Xors(L"Dino"),Xors(L""),&settings::misc::RemoveDinoBolas),
			}),
			CreateItem(&settings::aimbot::FakeRotation),
		}));
	Features->Tabs.push_back(new Tab(Xors(L"Exploits"), []() {},
		{
			CreateItem(&settings::misc::NoRecoil),
			CreateItem(&settings::misc::RapidFire),
			CreateItem(&settings::misc::LongArms),
			CreateItem(&settings::misc::InfiniteArms),
			CreateItem(&settings::misc::NoTekRifleOverheat),
			CreateItem(&settings::misc::NoRailgunOverheat),
			CreateItem(&settings::misc::InfiniteSuitEle),
			CreateItem(&settings::misc::UnlockBTT),
			CreateItem(&settings::misc::FastThrow),
			CreateItem(&settings::misc::ForceAccess),
		}, {
			//CreateItem(&settings::misc::PopcornTarget),

			CreateItem(&settings::misc::BetterPopcorn)->AddToPopup({
				new Keybind(Xors(L"Execute Popcorn Self"), &settings::misc::PopcornSelf.KeyBindForVar),
				new Keybind(Xors(L"Execute Popcorn Dino"), &settings::misc::PopcornDino.KeyBindForVar),
				new Keybind(Xors(L"Execute Popcorn Target"), &settings::misc::PopcornTarget.KeyBindForVar),
				new Keybind(Xors(L"Set Transfer Target"), &settings::misc::TransferTarget.keyBindForToggle),
				new Keybind(Xors(L"Execute Transfer Target"), &settings::misc::TransferTarget.KeyBindForVar),
			}),

			CreateItem(&settings::misc::SelfUpload),
			CreateItem(&settings::misc::InventoryToArk),
			CreateItem(&settings::misc::TransBag),
			CreateItem(&settings::misc::InfiniteC4),
			CreateItem(&settings::misc::SpoofFoundation),
			CreateItem(&settings::misc::InfiniteWeight),
			CreateItem(&settings::misc::UnlockRotation),
			CreateItem(&settings::misc::ForceShoot),
		}));
	Features->Tabs.push_back(new Tab(Xors(L"Movement"), []() {},
		{
			CreateItem(&settings::playerMovement::SpeedHack)->AddToPopup({
				CreateItem(&settings::playerMovement::SpeedHackValue),
				CreateItem(&settings::playerMovement::SpeedHackValueTwo),
			}),
			//CreateItem(&settings::playerMovement::ManualRemountSpeedHack)->AddToPopup(new Keybind(settings::playerMovement::ManualRemountKey.GetName(),&settings::playerMovement::ManualRemountKey.KeyBindForVar,false)),
			CreateItem(&settings::playerMovement::Airstuck),
			CreateItem(&settings::playerMovement::BetterAirstuck),
			CreateItem(&settings::playerMovement::Desync)->AddToPopup(CreateItem(&settings::playerMovement::DelayedPacketCount)),
			CreateItem(&settings::misc::NetLimiter),
			CreateItem(&settings::aimbot::ClientOmniMovement),
		}, {
			CreateItem(&settings::playerMovement::BunnyHop),
			CreateItem(&settings::playerMovement::TekGaunts),
			CreateItem(&settings::playerMovement::TekJump),
			CreateItem(&settings::playerMovement::TekHover),
			CreateItem(&settings::playerMovement::TekLegs),
			CreateItem(&settings::playerMovement::TekGauntsStop),
			CreateItem(&settings::playerMovement::SpoofCrouch),
			CreateItem(&settings::playerMovement::SpoofProne),
		}));

	Features->Tabs.push_back(new Tab(Xors(L"Dino"), []() {},
		{
			CreateItem(&settings::misc::BetterPassenger),
			CreateItem(&settings::dinoFeatures::HardTurn),
			CreateItem(&settings::dinoFeatures::BetterRavager),

			CreateItem(&settings::misc::PyromaneJump)->AddToPopup({
				new SliderInt(Xors(L"Jump Multipler"),Xors(L"Times"), &settings::misc::PyromaneMultiplier,1,30),
			}),
			CreateItem(&settings::dinoFeatures::BetterYiLing)->AddToPopup({
				new SliderFloat(Xors(L"Jump Multipler"),Xors(L"Times"), &settings::dinoFeatures::YiLingMultiplier,1.0f, 100.0f),
			}),

		}, {
		}));

	TabGroup* AutoMation = new TabGroup(Xors(L"Automation"), nullptr);

	AutoMation->Tabs.push_back(new Tab(Xors(L"PVP Automation"), []() {},
		{
			CreateItem(&settings::autoMation::AutoLoot)->AddToPopup({
				new Toggle(Xors(L"Enemy Players"),Xors(L"Auto Loots Players"),&settings::autoMation::AutoTakePlayers.Enabled),
				new Toggle(Xors(L"Enemy Structures"),Xors(L"Auto Loots Structures"),&settings::autoMation::AutoTakeStructures.Enabled),
				new Toggle(Xors(L"Enemy Turrets"),Xors(L"Auto Loots Turrets"),&settings::autoMation::AutoTakeTurrets.Enabled),
				new Toggle(Xors(L"Enemy Bags"),Xors(L"Auto Loots Bags"),&settings::autoMation::AutoTakeBags.Enabled),
			}),
			CreateItem(&settings::autoMation::TeamAutoLoot)->AddToPopup({
				new Toggle(Xors(L"Tribe Players"),Xors(L"Auto Loots Players"),&settings::autoMation::TeamAutoTakePlayers.Enabled),
				new Toggle(Xors(L"Tribe Structures"),Xors(L"Auto Loots Structures"),&settings::autoMation::TeamAutoTakeStructures.Enabled),
				new Toggle(Xors(L"Tribe Turrets"),Xors(L"Auto Loots Turrets"),&settings::autoMation::TeamAutoTakeTurrets.Enabled),
				new Toggle(Xors(L"Tribe Bags"),Xors(L"Auto Loots Bags"),&settings::autoMation::TeamAutoTakeBags.Enabled),
			}),
			CreateItem(&settings::autoMation::AutoPopcorn)->AddToPopup({
				new Toggle(Xors(L"Enemy Players"),Xors(L"Auto Popcorns Players"),&settings::autoMation::AutoPopcornPlayers.Enabled),
				new Toggle(Xors(L"Enemy Structures"),Xors(L"Auto Popcorns Structures"),&settings::autoMation::AutoPopcornStructures.Enabled),
				new Toggle(Xors(L"Enemy Turrets"),Xors(L"Auto Popcorns Turrets"),&settings::autoMation::AutoPopcornTurrets.Enabled),
				new Toggle(Xors(L"Enemy Bags"),Xors(L"Auto Popcorns Bags"),&settings::autoMation::AutoPopcornBags.Enabled),
				}),

			CreateItem(&settings::autoMation::TeamAutoPopcorn)->AddToPopup({
				new Toggle(Xors(L"Tribe Players"),Xors(L"Auto Popcorns Players"),&settings::autoMation::TeamAutoPopcornPlayers.Enabled),
				new Toggle(Xors(L"Tribe Structures"),Xors(L"Auto Popcorns Structures"),&settings::autoMation::TeamAutoPopcornStructures.Enabled),
				new Toggle(Xors(L"Tribe Bags"),Xors(L"Auto Popcorns Bags"),&settings::autoMation::TeamAutoPopcornBags.Enabled),
				}),

			CreateItem(&settings::autoMation::SelfArmor)->AddToPopup({
				new Toggle(Xors(L"Ignore Gaunts"), Xors(L"Dont Swap Gaunts"), &settings::autoMation::IgnoreGaunts.Enabled),
				new Toggle(Xors(L"Ignore Chest"), Xors(L"Dont Swap Chest"), &settings::autoMation::IgnoreChest.Enabled),
				new Toggle(Xors(L"Legit Auto Armor"), Xors(L"Only Swap When Inventory Is Open"), &settings::autoMation::LegitAutoFlak.Enabled),
				new Toggle(Xors(L"Swap to Scuba"),Xors(L"Swaps to Scuba When Underwater"), &settings::autoMation::SwapToScuba.Enabled),
				new Combo(Xors(L"Auto Armor Type"),Xors(L""), &settings::autoMation::AutoArmorType, {
					Xors(L"Swap All"),
					Xors(L"Swap Tek"),
					Xors(L"Swap Flak")
				})
			}),
			CreateItem(&settings::autoMation::PickupItems),
			CreateItem(&settings::autoMation::PickupEggs),
			CreateItem(&settings::autoMation::PickupPoop),

		}, {
			CreateItem(&settings::autoMation::PickupC4),
			CreateItem(&settings::autoMation::PickupTraps),
			CreateItem(&settings::autoMation::PickupWaterMines),
			CreateItem(&settings::autoMation::AutoMedbrew),
			CreateItem(&settings::autoMation::AutoConsumable),
			CreateItem(&settings::autoMation::AutoFood),
			new Toggle(Xors(L"Auto Collect Notes"), Xors(L"Collects Notes In 200M Radius"), &settings::autoMation::UnlockNotes),
		}));
	std::vector<std::wstring> DupeStructures = { Xors(L"Elevator Track"), Xors(L"Tek Gateway"), Xors(L"Tek Behemoth Gateway"), Xors(L"Metal Gateway"), Xors(L"Metal Behemoth Gateway"), Xors(L"Wardrums"), Xors(L"Tek Dedicated Storage"), Xors(L"Tek Cloning Chamber"), Xors(L"Toilet"), Xors(L"Tek Generator"), Xors(L"Tek Replicator"), Xors(L"Tek Behemoth Cellar Door"), Xors(L"Clockface") , Xors(L"Linked Storage Box") };
	std::vector<std::wstring> BlendModes = { Xors(L"Opaque"), Xors(L"Masked"), Xors(L"Translucent"), Xors(L"Additive"), Xors(L"Modulate"), Xors(L"AlphaComposite"), Xors(L"AlphaHoldout"), Xors(L"TranslucentColored"), Xors(L"MAX"), Xors(L"TranslucentGrey"), Xors(L"ColoredTransmittance") };
	std::vector<std::wstring> Structures = { Xors(L"Replicator"), Xors(L"Chem Bench"), Xors(L"Fabricator"),Xors(L"Cooker"), Xors(L"Grinder") };

	AutoMation->Tabs.push_back(new Tab(Xors(L"PVE Automation"), []() {
		std::vector<std::wstring> ChemBench = { Xors(L"Sparkpowder"), Xors(L"Gunpowder"), Xors(L"Cementing Paste"), Xors(L"Narcotic") };
		std::vector<std::wstring> Grinder = { Xors(L"Flint"), Xors(L"Thatch") };
		std::vector<std::wstring> Cooker = { Xors(L"Medical Brew"),Xors(L"Focal Chili"),Xors(L"Shadow Steak Saute"),Xors(L"Lazarus Chowder"),Xors(L"Sweet Vegetable Cake") };
		std::vector<std::wstring> Replicator = { Xors(L"Advanced Sniper Bullet"), Xors(L"Advanced Rifle Bullet"), Xors(L"Simple Shotgun Ammo"), Xors(L"C4 Charge"), Xors(L"Rocket Propelled Grenade"), Xors(L"Underwater Mine"),Xors(L"Electronics"), Xors(L"Metal Arrow") };
		std::vector<std::wstring> Fabricator = { Xors(L"Advanced Sniper Bullet"), Xors(L"Advanced Rifle Bullet"), Xors(L"Simple Shotgun Ammo"), Xors(L"C4 Charge"), Xors(L"Rocket Propelled Grenade"), Xors(L"Underwater Mine"),Xors(L"Electronics") };

		switch (settings::autoCraft::CraftingStructure)
		{
		case 0:
			CraftingItemsCombo->Items = Replicator;
			settings::autoCraft::CraftingItem = min(settings::autoCraft::CraftingItem, Replicator.size() - 1);
			settings::autoCraft::ItemName = Replicator[settings::autoCraft::CraftingItem];
			break;
		case 1:
			CraftingItemsCombo->Items = ChemBench;
			settings::autoCraft::CraftingItem = min(settings::autoCraft::CraftingItem, ChemBench.size() - 1);
			settings::autoCraft::ItemName = ChemBench[settings::autoCraft::CraftingItem];
			break;
		case 2:
			CraftingItemsCombo->Items = Fabricator;
			settings::autoCraft::CraftingItem = min(settings::autoCraft::CraftingItem, Fabricator.size() - 1);
			settings::autoCraft::ItemName = Fabricator[settings::autoCraft::CraftingItem];
			break;
		case 3:
			CraftingItemsCombo->Items = Cooker;
			settings::autoCraft::CraftingItem = min(settings::autoCraft::CraftingItem, Cooker.size() - 1);
			settings::autoCraft::ItemName = Cooker[settings::autoCraft::CraftingItem];
			break;
		case 4:
			CraftingItemsCombo->Items = Grinder;
			settings::autoCraft::CraftingItem = min(settings::autoCraft::CraftingItem, Grinder.size() - 1);
			settings::autoCraft::ItemName = Grinder[settings::autoCraft::CraftingItem];
			break;
		}
		},
		{
			new Toggle(Xors(L"Enable Auto Crafting"), Xors(L"Auto Craft Items In A 10M Area"), &settings::autoCraft::EnableCrafting, false),
			new Combo(Xors(L"Crafting Structure"),Xors(L""), &settings::autoCraft::CraftingStructure, Structures),
			CraftingItemsCombo = new Combo(Xors(L"Crafting Item"), Xors(L""), &settings::autoCraft::CraftingItem, {Xors(L""),Xors(L"")}),
			new Toggle(Xors(L"Auto Demo/Depo"), Xors(L"Auto Depo/Demos Duped Structures"), &settings::autoDemo::EnableDemo, false),
			new Combo(Xors(L"Demolish Item"), Xors(L""), &settings::autoDemo::DemoItem, DupeStructures),
			CreateItem(&settings::autoMation::AutoFillTekTurrets),
			CreateItem(&settings::autoMation::AutoFillHeavyTurrets),
			CreateItem(&settings::autoMation::AutoFillAutoTurrets),
			CreateItem(&settings::autoMation::AutoFillCropPlots),
			CreateItem(&settings::autoMation::AutoSheep),
		}, {
			CreateItem(&settings::autoMation::AutoPincode),
			CreateItem(&settings::autoMation::AutoNameTurrets),
			new TextInput(Xors(L"Turret Name: "), Xors(L"Ice Wall"), &settings::autoMation::TurretName, InputType_Alphabet | InputType_Numbers | InputType_Punctuation | InputType_Special | InputType_Function),
			CreateItem(&settings::autoMation::AutoDepoDedis),
			CreateItem(&settings::autoMation::AutoFillForges),
			new SliderInt(Xors(L"Auto Forge Amount"), Xors(L"Percent of forge to fill"), &settings::autoMation::ForgeFillPercentage, 0, 100),
			CreateItem(&settings::autoMation::AutoTakeAchatina),
			CreateItem(&settings::autoMation::AutoTakeCrops),
			CreateItem(&settings::autoMation::AutoWalk),
			CreateItem(&settings::autoMation::AutoGrindStone),
		}));
	Toggle* Presets = new Toggle(settings::misc::DinoLevel.GetName(), Xors(L"Change Preset Settings"), &settings::misc::DinoLevel.Enabled, true, std::vector<MenuItemBase*>{});

	AutoMation->Tabs.push_back(new Tab(Xors(L"Dino Automation"), [Presets]() {
		//for (int i = 0; i < settings::misc::DinoLevelPresetNames.size(); i++)
		//{
		//	if (settings::misc::DinoLevelPresetNames.size() != settings::misc::DinoLevelPresets[i].Name.size())
		//		settings::misc::DinoLevelPresetNames[i] = settings::misc::DinoLevelPresets[i].Name;
		//}

		},
		{
			CreateItem(&settings::misc::DinoClaim),
			CreateItem(&settings::misc::DinoName),
			new TextInput(Xors(L"Name: "), Xors(L"Name For Babys"), &settings::misc::DinoString, InputType_Alphabet | InputType_Numbers | InputType_Punctuation | InputType_Special | InputType_Function),
			CreateItem(&settings::misc::DinoSaddle),
			CreateItem(&settings::misc::DinoFeed),
			new Toggle(Xors(L"Use Troughs"), Xors(L"Enables/Disables Using Troughs"), &settings::autoMation::FeedTroughs, false),
			CreateItem(&settings::misc::DinoImprint),
		}, {
			CreateItem(&settings::autoMation::AutoMount),
			CreateItem(&settings::autoMation::AutoFeedRawMeat),
			CreateItem(&settings::autoMation::AutoAttack),
			CreateItem(&settings::misc::DinoLevel)->AddToPopup({

				new TextInput(Xors(L"Name Filter"), Xors(L""), &settings::misc::DinoLevelPreset.Name, InputType_Alphabet),
				new TextInput(Xors(L"Health"), Xors(L""), &settings::misc::DinoLevelPreset.Health, InputType_Numbers),
				new TextInput(Xors(L"Stamina"), Xors(L""), &settings::misc::DinoLevelPreset.Stamina, InputType_Numbers),
				new TextInput(Xors(L"Oxygen"), Xors(L""), &settings::misc::DinoLevelPreset.Oxygen, InputType_Numbers),
				new TextInput(Xors(L"Food"), Xors(L""), &settings::misc::DinoLevelPreset.Food, InputType_Numbers),
				new TextInput(Xors(L"Weight"), Xors(L""), &settings::misc::DinoLevelPreset.Weight, InputType_Numbers),
				new TextInput(Xors(L"Meele"), Xors(L""), &settings::misc::DinoLevelPreset.Melee, InputType_Numbers),
			}),

		}));

	TabGroup* Misc = new TabGroup(Xors(L"Misc"), nullptr);

	Misc->Tabs.push_back(new Tab(Xors(L"Radar"), []() {},
		{
			CreateItem(&settings::radar::DrawRadar),
			CreateItem(&settings::radar::RadarSize),
			CreateItem(&settings::radar::RadarZoom),
			CreateItem(&settings::radar::RadarX),
			CreateItem(&settings::radar::RadarY),
			CreateItem(&settings::radar::DrawRadarBackground),
			CreateItem(&settings::radar::RadarBackgroundAlpha),
			CreateItem(&settings::radar::DrawRadarNESW),
		}, {
			CreateItem(&settings::radar::DrawRadarEnemy),
			CreateItem(&settings::radar::DrawRadarEnemyDinos),
			CreateItem(&settings::radar::DrawRadarTeam),
			CreateItem(&settings::radar::DrawRadarTeamDinos),
			//CreateItem(&settings::radar::CrosshairRadar2D)->AddToPopup({
			//	new Toggle(Xors(L"Show Sleeping"), Xors(L""), &settings::radar::ShowSleepingPlayers2D.Enabled),
			//	CreateItem(&settings::radar::CrosshairRadar2DMin),
			//	CreateItem(&settings::radar::CrosshairRadar2DMax),
			//	CreateItem(&settings::radar::CrosshairRadar2DScale),
			//}),
			//new Toggle(settings::radar::CrosshairRadar3D.GetName(),settings::radar::CrosshairRadar3D.GetDesc(),&settings::radar::CrosshairRadar3D.Enabled,true,{
			//	new Keybind(Xors(L"Toggle Keybind"),&settings::radar::CrosshairRadar3D.keyBindForToggle),
			//	new Toggle(Xors(L"Show Sleeping"), Xors(L""), &settings::radar::ShowSleepingPlayers3D.Enabled),
			//	CreateItem(&settings::radar::CrosshairRadar3DMin),
			//	CreateItem(&settings::radar::CrosshairRadar3DMax),
			//	CreateItem(&settings::radar::CrosshairRadar3DScale),
			//}),

			CreateItem(&settings::radar::DrawCrosshairRadar)->AddToPopup({
				new Toggle(Xors(L"Show Sleeping"), Xors(L""), &settings::radar::CrossHairShowSleepingPlayers.Enabled),
				new Toggle(Xors(L"Show Tribe"), Xors(L""), &settings::radar::CrossHairShowTribePlayers.Enabled),
				new SliderFloat(settings::radar::CrossHairMinDistance.GetName(),settings::radar::CrossHairMinDistance.GetDesc(),&settings::radar::CrossHairMinDistance.Val,settings::radar::CrossHairMinDistance.Min,settings::radar::CrossHairMinDistance.Max),
				new SliderFloat(settings::radar::CrossHairMaxDistance.GetName(),settings::radar::CrossHairMaxDistance.GetDesc(),&settings::radar::CrossHairMaxDistance.Val,settings::radar::CrossHairMaxDistance.Min,settings::radar::CrossHairMaxDistance.Max),
				new SliderFloat(settings::radar::CrossHairZoom.GetName(),settings::radar::CrossHairZoom.GetDesc(),&settings::radar::CrossHairZoom.Val,settings::radar::CrossHairZoom.Min,settings::radar::CrossHairZoom.Max),
				new SliderFloat(settings::radar::CrossHairScaleMinDistance.GetName(),settings::radar::CrossHairScaleMinDistance.GetDesc(),&settings::radar::CrossHairScaleMinDistance.Val,settings::radar::CrossHairScaleMinDistance.Min,settings::radar::CrossHairScaleMinDistance.Max),
				new SliderFloat(settings::radar::CrossHairDegreesBetween.GetName(),settings::radar::CrossHairDegreesBetween.GetDesc(),&settings::radar::CrossHairDegreesBetween.Val,settings::radar::CrossHairDegreesBetween.Min,settings::radar::CrossHairDegreesBetween.Max),
			}),
		}));

	Misc->Tabs.push_back(new Tab(Xors(L"Visuals"), []() {},
		{
			CreateItem(&settings::misc::Ini),
			CreateItem(&settings::user::ClearWater),
			CreateItem(&settings::miscStructure::Teleport),
			CreateItem(&settings::user::ChamsWireFrame),
			new Combo(Xors(L"Chams Type"), Xors(L""), &settings::user::MaterialBlendMode.Val, BlendModes),
			CreateItem(&settings::user::ShowFlags::Bloom),
			CreateItem(&settings::user::ShowFlags::Specular),
			CreateItem(&settings::user::ShowFlags::NaniteMeshes),
			CreateItem(&settings::user::ShowFlags::InstancedStaticMeshes),
		}, {
			CreateItem(&settings::user::ShowFlags::InstancedFoliage),
			CreateItem(&settings::user::ShowFlags::InstancedGrass),
			CreateItem(&settings::user::ShowFlags::DynamicShadows),
			CreateItem(&settings::user::ShowFlags::Particles),
			CreateItem(&settings::user::ShowFlags::SkeletalMeshes),
			CreateItem(&settings::user::ShowFlags::Translucency),
			CreateItem(&settings::user::ShowFlags::StaticMeshes),
			CreateItem(&settings::user::ShowFlags::Landscape),
			CreateItem(&settings::user::ShowFlags::Fog),
			CreateItem(&settings::user::ShowFlags::VolumetricFog),
		}));

	Misc->Tabs.push_back(new Tab(Xors(L"Menu"), []() {},
		{
			CreateItem(&settings::menu::ShowMenu),
			CreateItem(&settings::menu::ExtraCheatKey),
			new Button(Xors(L"Copy Config"), Xors(L""), []() {
			ConsoleConfigs::CopyConfigValues();
			Renderer::AddScreenMessage(Xors(L"Config Copied To Console"), { Renderer::GetCanvasSize().X / 2 - 10 , Renderer::GetCanvasSize().Y / 10 }, { 1,1 }, { 1,0,0,1 }, 10.0f);
			}, 300),
		}, {
			CreateItem(&settings::user::KillFeed)->AddToPopup({
				new Toggle(settings::user::DinoKills.GetName(),settings::user::DinoKills.GetDesc(),&settings::user::DinoKills.Enabled),
				new Toggle(settings::user::AllKills.GetName(),settings::user::AllKills.GetDesc(),&settings::user::AllKills.Enabled),
				new SliderFloat(settings::user::KillFeedTime.GetName(),settings::user::KillFeedTime.GetDesc(),&settings::user::KillFeedTime.Val,settings::user::KillFeedTime.Min,settings::user::KillFeedTime.Max)
			}),
			CreateItem(&settings::misc::ExtraInfo),
			CreateItem(&settings::misc::ExtraServerInfo),
			CreateItem(&settings::misc::ShowMeshDetection),
			CreateItem(&settings::user::AntimeshESP)->AddToPopup({
				CreateItem(&settings::user::AntimeshESPRange),
				CreateItem(&settings::user::AntimeshEspUseStaticMesh),
				CreateItem(&settings::user::AntimeshDisableDepth),
				CreateItem(&settings::user::AntimeshColor),
			}),
			CreateItem(&settings::menu::ShowStructureMissingAlerts),
			new Toggle(Xors(L"Toggle message"), Xors(L"Shows message when toggling setting"), &settings::user::ShowToggleMessage.Enabled, false),
			new SliderFloat(Xors(L"Message Time"), Xors(L"Time to show message"), &settings::user::MessageTime.Val, 0.05f, 3.f),
		}));

	TabGroups.push_back(Aimbot);
	TabGroups.push_back(Visual);
	TabGroups.push_back(Features);
	TabGroups.push_back(AutoMation);
	TabGroups.push_back(Misc);

	if (settings::feature1)
	{
		TabGroup* Dev = new TabGroup(Xors(L"Haloss"), nullptr);

		Dev->Tabs.push_back(new Tab(Xors(L"Haloss"), []() {},
			{
				CreateItem(&settings::autoMation::DupeMethod)->AddToPopup({CreateItem(&settings::autoMation::DupeMethodSpeed)}),
			}, {

			}));

		TabGroups.push_back(Dev);
	}

	if (settings::feature2)
	{
		TabGroup* Dev = new TabGroup(Xors(L"Fabster"), nullptr);

		Dev->Tabs.push_back(new Tab(Xors(L"Fabster"), []() {},
			{
				CreateItem(&settings::misc::TekChestDisconnect),
				//CreateItem(&settings::misc::ServerCrash),
			}, {

			}));

		TabGroups.push_back(Dev);
	}

	return TabGroups;
}

MenuItemBase* DOMBuilder::CreateItem(VarBase* Var)
{
	if (!Var || !Var->Initialized)
		return nullptr;

	switch (Var->Type)
	{
	case VarT::KeyBind:
	{
		auto KBVar = (KeyBindVar*)Var;

		auto var = new Toggle(KBVar->GetName(), KBVar->GetDesc(), &KBVar->Enabled, true, {
			new Keybind(Xors(L"Execute Keybind"), &KBVar->KeyBindForVar),
			new Keybind(Xors(L"Toggle Keybind"), &KBVar->keyBindForToggle),
			});
		return var;
		break;
	};
	case VarT::KeyBindOptional:
	{
		auto KBOVar = (KeyBindOptionalVar*)Var;

		auto var = new Toggle(KBOVar->GetName(), KBOVar->GetDesc(), &KBOVar->Enabled, true, {
			new Toggle(Xors(L"Only activate on key"), Xors(L"Only activates when holding keybind"), &KBOVar->UseKeyBind),
			new Keybind(Xors(L"Execute Keybind"), &KBOVar->KeyBindForVar),
			new Keybind(Xors(L"Toggle Keybind"), &KBOVar->keyBindForToggle),
			});
		return var;
		break;
	};
	case VarT::NoToggleColor:
	{
		auto VarC = (ColorVar*)Var;
		return new ColorPicker(VarC->GetName(), &VarC->Color);
		break;
	};
	case VarT::Color:
	{
		auto VarC = (ColorVar*)Var;
		auto var = new Toggle(VarC->GetName(), VarC->GetDesc(), &VarC->Enabled, true, {
			new ColorPicker(VarC->GetName(), &VarC->Color),
			});
		return var;
		break;
	};
	case VarT::Int:
	{
		auto VarI = (IntVar*)Var;
		auto var = new Toggle(VarI->GetName(), VarI->GetDesc(), &VarI->Enabled, true, {
			new SliderInt(VarI->GetName(), VarI->GetDesc(), &VarI->Val, VarI->Min, VarI->Max),
			new Keybind(Xors(L"Toggle Keybind"), &VarI->keyBindForToggle),
			});
		return var;
		break;
	};
	case VarT::Float:
	{
		auto VarF = (FloatVar*)Var;
		auto var = new Toggle(VarF->GetName(), VarF->GetDesc(), &VarF->Enabled, true, {
			new SliderFloat(VarF->GetName(), VarF->GetDesc(), &VarF->Val, VarF->Min, VarF->Max),
			new Keybind(Xors(L"Toggle Keybind"), &VarF->keyBindForToggle),
			});
		return var;
		break;
	};
	case VarT::NoToggleInt:
	{
		auto VarI = (IntVar*)Var;
		auto var = new SliderInt(VarI->GetName(), VarI->GetDesc(), &VarI->Val, VarI->Min, VarI->Max);
		return var;
		break;
	};
	case VarT::NoToggleFloat:
	{
		auto VarF = (FloatVar*)Var;
		auto var = new SliderFloat(VarF->GetName(), VarF->GetDesc(), &VarF->Val, VarF->Min, VarF->Max);
		return var;
		break;
	};
	case VarT::Structure:
	{
		auto VarS = (StructureVar*)Var;
		auto var = new Toggle(VarS->GetName(), VarS->GetDesc(), &VarS->Enabled, true, {
			new Keybind(Xors(L"Toggle Keybind"),&VarS->keyBindForToggle),
			new Toggle(Xors(L"Chams"), Xors(L"See structure through walls"), &VarS->Chams),
			new Toggle(Xors(L"Draw Name"), Xors(L"Shows the structure`s name"), &VarS->DrawName),
			new Toggle(Xors(L"Distance"), Xors(L"Shows the distance to structure"), &VarS->Distance),
			new Toggle(Xors(L"Slots"), Xors(L"Shows structures inventory slots"), &VarS->Slots),
			new Toggle(Xors(L"Hide Empty"), Xors(L"Hides Empty Structures"), &VarS->HideEmpty),
			new Toggle(Xors(L"Tribe Name"), Xors(L"Shows the owning tribes name"), &VarS->TribeName),
			new ColorPicker(Xors(L"Color"), &VarS->Color.Color),
			});
		return var;
		break;
	};
	case VarT::Toggle:
	{
		auto var = new Toggle(Var->GetName(), Var->GetDesc(), &Var->Enabled, true, {
			new Keybind(Xors(L"Toggle Keybind"), &Var->keyBindForToggle),
			});
		return var;
		break;
	};
	case VarT::ExtraStructure:
	{
		auto SEV = (StructureExtraVar*)Var;
		auto var = new Toggle(SEV->GetName(), SEV->GetDesc(), &SEV->Enabled, true, {
			new Keybind(Xors(L"Toggle Keybind"), &SEV->keyBindForToggle),
			new Toggle(Xors(L"Chams"), Xors(L"See structure through walls"), &SEV->Chams),
			new Toggle(Xors(L"Draw Name"), Xors(L"Shows the structure`s name"), &SEV->DrawName),
			new Toggle(Xors(L"Distance"), Xors(L"Shows the distance to structure"), &SEV->Distance),
			new Toggle(Xors(L"Slots"), Xors(L"Shows structures inventory slots"), &SEV->Slots),
			new Toggle(Xors(L"Tribe Name"), Xors(L"Shows the owning tribes name"), &SEV->TribeName),
			new ColorPicker(Xors(L"Color"), &SEV->Color.Color),
			new Toggle(Xors(L"Turret Target"), Xors(L"Shows the turrets targeting settings"), &SEV->ExtraOption1),
			new Toggle(Xors(L"Turret Range"), Xors(L"Shows the turrets range settings"), &SEV->ExtraOption2),
			new Toggle(Xors(L"Hide Empty"), Xors(L"Hides Empty Turrets"), &SEV->ExtraOption3),
			new Toggle(Xors(L"Hide Offline"), Xors(L"Hides Offline Turrets"), &SEV->ExtraOption6),
			});
		return var;
		break;
	};

	default:
		return nullptr;
		break;
	};
	return nullptr;
}

void DOMBuilder::InitStructureTabs()
{
	Menu::StructureItems.clear();
	Menu::StructureItems = {
		{
			{CreateItem(&settings::teamStructure::TeamAutoTurret),CreateItem(&settings::enemyStructure::EnemyAutoTurret)},
			{CreateItem(&settings::teamStructure::TeamHeavyTurret),CreateItem(&settings::enemyStructure::EnemyHeavyTurret)},
			{CreateItem(&settings::teamStructure::TeamTekTurret),CreateItem(&settings::enemyStructure::EnemyTekTurret)},
			{CreateItem(&settings::teamStructure::TeamTeslaCoil),CreateItem(&settings::enemyStructure::EnemyTeslaCoil)},
			{CreateItem(&settings::teamStructure::TeamPlantX),CreateItem(&settings::enemyStructure::EnemyPlantX)},
			{CreateItem(&settings::teamStructure::TeamElectricalGenerator),CreateItem(&settings::enemyStructure::EnemyElectricalGenerator)},
			{CreateItem(&settings::teamStructure::TeamTeamTekGenerator),CreateItem(&settings::enemyStructure::EnemyEnemyTekGenerator)},
		},
		{
			{CreateItem(&settings::teamStructure::TeamSmallTeleporter),CreateItem(&settings::enemyStructure::EnemySmallTeleporter)},
			{CreateItem(&settings::teamStructure::TeamMediumTeleporter),CreateItem(&settings::enemyStructure::EnemyMediumTeleporter)},
			{CreateItem(&settings::teamStructure::TeamLargeTeleporter),CreateItem(&settings::enemyStructure::EnemyLargeTeleporter)},
			{CreateItem(&settings::teamStructure::TeamTekTransmitter),CreateItem(&settings::enemyStructure::EnemyTekTransmitter)},
			{CreateItem(&settings::teamStructure::TeamCryoFridge),CreateItem(&settings::enemyStructure::EnemyCryoFridge)},
			{CreateItem(&settings::teamStructure::TeamCloningChamber),CreateItem(&settings::enemyStructure::EnemyCloningChamber)},
			{CreateItem(&settings::teamStructure::TeamVacuumCompartment),CreateItem(&settings::enemyStructure::EnemyVacuumCompartment)},
			{CreateItem(&settings::teamStructure::TeamDedicatedStorage),CreateItem(&settings::enemyStructure::EnemyDedicatedStorage)},
			{CreateItem(&settings::teamStructure::TeamTekForceField),CreateItem(&settings::enemyStructure::EnemyTekForceField)},
			{CreateItem(&settings::teamStructure::TeamReplicator),CreateItem(&settings::enemyStructure::EnemyReplicator)},
		},
		{
			{CreateItem(&settings::teamStructure::TeamChemistryBench),CreateItem(&settings::enemyStructure::EnemyChemistryBench)},
			{CreateItem(&settings::teamStructure::TeamIndustrialForge),CreateItem(&settings::enemyStructure::EnemyIndustrialForge)},
			{CreateItem(&settings::teamStructure::TeamIndustrialGrill),CreateItem(&settings::enemyStructure::EnemyIndustrialGrill)},
			{CreateItem(&settings::teamStructure::TeamIndustrialCookingPot),CreateItem(&settings::enemyStructure::EnemyIndustrialCookingPot)},
			{CreateItem(&settings::teamStructure::TeamGrinder),CreateItem(&settings::enemyStructure::EnemyGrinder)},
			{CreateItem(&settings::teamStructure::TeamCookingPot),CreateItem(&settings::enemyStructure::EnemyCookingPot)},
			{CreateItem(&settings::teamStructure::TeamAirConditioner),CreateItem(&settings::enemyStructure::EnemyAirConditioner)},
		},
		{
			{CreateItem(&settings::teamStructure::TeamSmallStorageBox),CreateItem(&settings::enemyStructure::EnemySmallStorageBox)},
			{CreateItem(&settings::teamStructure::TeamLargeStorageBox),CreateItem(&settings::enemyStructure::EnemyLargeStorageBox)},
			{CreateItem(&settings::teamStructure::TeamVault),CreateItem(&settings::enemyStructure::EnemyVault)},
			{CreateItem(&settings::teamStructure::TeamRefrigerator),CreateItem(&settings::enemyStructure::EnemyRefrigerator)},
			{CreateItem(&settings::teamStructure::TeamFabricator),CreateItem(&settings::enemyStructure::EnemyFabricator)},
			{CreateItem(&settings::teamStructure::TeamSmithy),CreateItem(&settings::enemyStructure::EnemySmithy)},
			{CreateItem(&settings::teamStructure::TeamMortarAndPestle),CreateItem(&settings::enemyStructure::EnemyMortarAndPestle)},
			{CreateItem(&settings::teamStructure::TeamLinkedStorageBox),CreateItem(&settings::enemyStructure::EnemyLinkedStorageBox)},
		},
		{
			{CreateItem(&settings::teamStructure::TeamFoundation),CreateItem(&settings::enemyStructure::EnemyFoundation)},
			{CreateItem(&settings::teamStructure::TeamWall),CreateItem(&settings::enemyStructure::EnemyWall)},
			{CreateItem(&settings::teamStructure::TeamCliffPlatform),CreateItem(&settings::enemyStructure::EnemyCliffPlatform)},
			{CreateItem(&settings::teamStructure::TeamDoor),CreateItem(&settings::enemyStructure::EnemyDoor)},
			{CreateItem(&settings::teamStructure::TeamDoorFrame),CreateItem(&settings::enemyStructure::EnemyDoorFrame)},
			{CreateItem(&settings::teamStructure::TeamCeiling),CreateItem(&settings::enemyStructure::EnemyCeiling)},
			{CreateItem(&settings::teamStructure::TeamFenceFoundation),CreateItem(&settings::enemyStructure::EnemyFenceFoundation)},
		},
		{
			{CreateItem(&settings::teamStructure::TeamSleepingBag),CreateItem(&settings::enemyStructure::EnemySleepingBag)},
			{CreateItem(&settings::teamStructure::TeamBed),CreateItem(&settings::enemyStructure::EnemyBed)},
			{CreateItem(&settings::teamStructure::TeamBunkBed),CreateItem(&settings::enemyStructure::EnemyBunkBed)},
			{CreateItem(&settings::teamStructure::TeamC4Charge),CreateItem(&settings::enemyStructure::EnemyC4Charge)},
			{CreateItem(&settings::teamStructure::TeamBearTrap),CreateItem(&settings::enemyStructure::EnemyBearTrap)},
			{CreateItem(&settings::teamStructure::TeamLargeBearTrap),CreateItem(&settings::enemyStructure::EnemyLargeBearTrap)},
			{CreateItem(&settings::teamStructure::TeamWaterMine),CreateItem(&settings::enemyStructure::EnemyWaterMine)},
			{CreateItem(&settings::teamStructure::TeamItemCache),CreateItem(&settings::enemyStructure::EnemyItemCache)},
			{CreateItem(&settings::teamStructure::TeamSmallCropPlot),CreateItem(&settings::enemyStructure::EnemySmallCropPlot)},
			{CreateItem(&settings::teamStructure::TeamMediumCropPlot),CreateItem(&settings::enemyStructure::EnemyMediumCropPlot)},
			{CreateItem(&settings::teamStructure::TeamLargeCropPlot),CreateItem(&settings::enemyStructure::EnemyLargeCropPlot)},
		}
	};
}

void DOMBuilder::UpdateStructureTab(int TabIndex, bool Enemy)
{
	if (TabIndex == -1)
	{
		return;
	}

	Tab* structureTab = Enemy ? Menu::EnemyStructuresTab : Menu::TeamStructuresTab;

	if (!structureTab)
	{
		return;
	}

	if (TabIndex >= Menu::StructureItems.size())
	{
		return;
	}

	for (int x = 0; x < 10; x++)
		structureTab->Grid->Items[1][x] = nullptr;

	if (Enemy)
	{
		for (int i = 0; i < 10 && i < Menu::StructureItems[TabIndex].size(); i++)
		{
			if (Menu::StructureItems[TabIndex][i].second)
				structureTab->Grid->Items[1][i] = Menu::StructureItems[TabIndex][i].second;
		}
	}
	else
	{
		for (int i = 0; i < 10 && i < Menu::StructureItems[TabIndex].size(); i++)
		{
			if (Menu::StructureItems[TabIndex][i].first)
				structureTab->Grid->Items[1][i] = Menu::StructureItems[TabIndex][i].first;
		}
	}
}

void DOMBuilder::UpdateLevelPresetItem(Toggle* toggle)
{
	//if (!toggle || settings::misc::DinoLevelPresets.empty())
	//	return;

	//if (settings::misc::SelectedLevelPreset.Val > settings::misc::DinoLevelPresets.size())
	//	settings::misc::SelectedLevelPreset.Val = 0;

	//if (settings::misc::DinoLevelPresets.size() <= 0)
	//	return;

	//DinoLevelPreset* SelectedPreset = &settings::misc::DinoLevelPresets[settings::misc::SelectedLevelPreset.Val];

	//if (!SelectedPreset)
	//	return;

	//if (LevelPresetPopups.find(settings::misc::SelectedLevelPreset.Val) != LevelPresetPopups.end() && !LevelPresetPopups[settings::misc::SelectedLevelPreset.Val].empty())
	//{
	//	if (toggle->MyPopup->Items.size() != LevelPresetPopups[settings::misc::SelectedLevelPreset.Val].size())
	//		toggle->MyPopup->Items = LevelPresetPopups[settings::misc::SelectedLevelPreset.Val];
	//}
	//else
	//{
	//	TextInput* name = new TextInput(Xors(L"Name Filter"), Xors(L""), &SelectedPreset->Name, InputType_Alphabet);

	//	Combo* selectLevel = new Combo(Xors(L"Level "), Xors(L""), &Level::NextStat, Level::StatNames);

	//	Button* addLevel = new Button(Xors(L"Add Level"), Xors(L""), []() {
	//		settings::misc::DinoLevelPresets[settings::misc::SelectedLevelPreset.Val].ActiveLevels++;
	//		settings::misc::DinoLevelPresets[settings::misc::SelectedLevelPreset.Val].Levels[settings::misc::DinoLevelPresets[settings::misc::SelectedLevelPreset.Val].ActiveLevels - 1] = {};
	//		settings::misc::DinoLevelPresets[settings::misc::SelectedLevelPreset.Val].Levels[settings::misc::DinoLevelPresets[settings::misc::SelectedLevelPreset.Val].ActiveLevels - 1].Stat = Level::NextStat;
	//		if (LevelPresetPopups.find(settings::misc::SelectedLevelPreset.Val) != LevelPresetPopups.end() && !LevelPresetPopups[settings::misc::SelectedLevelPreset.Val].empty()) {
	//			for (auto& Item : LevelPresetPopups[settings::misc::SelectedLevelPreset.Val])
	//			{
	//				if (Item)
	//					delete Item;
	//			}
	//		}
	//		LevelPresetPopups[settings::misc::SelectedLevelPreset.Val].clear();
	//		LevelPresetPopups.erase(settings::misc::SelectedLevelPreset.Val);
	//		}, 250);

	//	Button* removeLevel = new Button(Xors(L"Remove Level"), Xors(L""), []() {
	//		if (settings::misc::DinoLevelPresets[settings::misc::SelectedLevelPreset.Val].ActiveLevels > 0)
	//		{
	//			if (LevelPresetPopups.find(settings::misc::SelectedLevelPreset.Val) != LevelPresetPopups.end() && !LevelPresetPopups[settings::misc::SelectedLevelPreset.Val].empty()) {
	//				for (auto& Item : LevelPresetPopups[settings::misc::SelectedLevelPreset.Val])
	//				{
	//					if (Item)
	//						delete Item;
	//				}
	//			}
	//			LevelPresetPopups[settings::misc::SelectedLevelPreset.Val].clear();
	//			LevelPresetPopups.erase(settings::misc::SelectedLevelPreset.Val);
	//			settings::misc::DinoLevelPresets[settings::misc::SelectedLevelPreset.Val].Levels[settings::misc::DinoLevelPresets[settings::misc::SelectedLevelPreset.Val].ActiveLevels - 1] = {};
	//			settings::misc::DinoLevelPresets[settings::misc::SelectedLevelPreset.Val].ActiveLevels--;
	//		}
	//		}, 250);

	//	if (LevelPresetPopups.find(settings::misc::SelectedLevelPreset.Val) != LevelPresetPopups.end() && !LevelPresetPopups[settings::misc::SelectedLevelPreset.Val].empty()) {
	//		for (auto& Item : LevelPresetPopups[settings::misc::SelectedLevelPreset.Val])
	//		{
	//			if (Item)
	//				delete Item;
	//		}
	//	}
	//	LevelPresetPopups.insert_or_assign(settings::misc::SelectedLevelPreset.Val, std::vector<MenuItemBase*>());

	//	LevelPresetPopups[settings::misc::SelectedLevelPreset.Val].clear();

	//	LevelPresetPopups[settings::misc::SelectedLevelPreset.Val].push_back(name);

	//	for (int i = 0; i < settings::misc::DinoLevelPresets[settings::misc::SelectedLevelPreset.Val].ActiveLevels; i++)
	//	{
	//		Level* level = &settings::misc::DinoLevelPresets[settings::misc::SelectedLevelPreset.Val].Levels[i];
	//		LevelPresetPopups[settings::misc::SelectedLevelPreset.Val].push_back(new TextInput(Level::StatNames[level->Stat] + Xors(L" Points"), Xors(L""), &level->LevelsBuffer, InputType_Numbers));
	//	}

	//	LevelPresetPopups[settings::misc::SelectedLevelPreset.Val].push_back(selectLevel);
	//	LevelPresetPopups[settings::misc::SelectedLevelPreset.Val].push_back(addLevel);
	//	LevelPresetPopups[settings::misc::SelectedLevelPreset.Val].push_back(removeLevel);
	//	for (auto& Item : LevelPresetPopups[settings::misc::SelectedLevelPreset.Val])
	//	{
	//		if (Item)
	//			Item->ParentItemID = toggle->ItemID;
	//	}

	//	toggle->MyPopup->Items = LevelPresetPopups[settings::misc::SelectedLevelPreset.Val];
	//	//plog(Xors("Popup items created %zu"), toggle->MyPopup->Items.size());
	//}
}