#include "pch.h"
#include "Menu.h"
#include "MenuGUI.h"
#include "Config.h"
#include "LocalModule.h"
void DrawStructureTab(bool team);
FVector2D MenuPos = { 100,100 };
FVector2D MenuSize = { 1100,680 };
void DrawAutoArmorBox();
void DrawAutoPopcorn();
void DrawAutoTakeAll();
void DrawResourceEsp();
void DrawTeamAutoPopcorn();
void DrawTeamAutoTakeAll();
FVector2D TabSize = { 240,40 };
std::wstring SearchString = Xors(L"");

std::vector<std::wstring> Bones = { Xors(L"Head"), Xors(L"Chest"), Xors(L"Left Gaunt"), Xors(L"Right Gaunt"), Xors(L"Left Leg"), Xors(L"Right Leg"), Xors(L"Left Boot"), Xors(L"Right Boot"), Xors(L"Smart Bone")};
std::vector<std::wstring> BoxTypes = { Xors(L"2D Box"), Xors(L"2D Corner Box"), Xors(L"3D Turning Box") };
std::vector<std::wstring> BlendModes = { Xors(L"Opaque"), Xors(L"Masked"), Xors(L"Translucent"), Xors(L"Additive"), Xors(L"Modulate"), Xors(L"AlphaComposite"), Xors(L"AlphaHoldout"), Xors(L"TranslucentColored"), Xors(L"MAX"), Xors(L"TranslucentGrey"), Xors(L"ColoredTransmittance") };
std::vector<std::wstring> Structures = { Xors(L"Replicator"), Xors(L"Chem Bench"), Xors(L"Fabricator") };
std::vector<std::wstring> ChemBench = { Xors(L"Sparkpowder"), Xors(L"Gunpowder"), Xors(L"Cementing Paste"), Xors(L"Narcotic") };
std::vector<std::wstring> Replicator = { Xors(L"Advanced Sniper Bullet"), Xors(L"Advanced Rifle Bullet"), Xors(L"Simple Shotgun Ammo"), Xors(L"C4 Charge"), Xors(L"Rocket Propelled Grenade"), Xors(L"Underwater Mine"),Xors(L"Electronics")};
std::vector<std::wstring> Fabricator = { Xors(L"Advanced Sniper Bullet"), Xors(L"Advanced Rifle Bullet"), Xors(L"Simple Shotgun Ammo"), Xors(L"C4 Charge"), Xors(L"Rocket Propelled Grenade"), Xors(L"Underwater Mine"),Xors(L"Electronics")};
std::vector<std::wstring> DupeStructures = { Xors(L"Elevator Track"), Xors(L"Tek Gateway"), Xors(L"Tek Behemoth Gateway"), Xors(L"Metal Gateway"), Xors(L"Metal Behemoth Gateway"), Xors(L"Wardrums"), Xors(L"Tek Dedicated Storage"), Xors(L"Tek Cloning Chamber"), Xors(L"Toilet"), Xors(L"Tek Generator"), Xors(L"Tek Replicator")};

int CurrentStructureTab = 0;
std::wstring PlayerName = Xors(L"");

void Menu::DrawMenu()
{
	if (!globals::local::PC || !globals::libs::MathLib || !Renderer::canvas || !Renderer::Font || !globals::rendering::canvas)
	{
		nlog(Xors("Menu::DrawMenu() failed to initialize"));
		return;
	}


	if (globals::local::PC) {
		globals::local::PC->bShowMouseCursor = settings::menu::ShowMenu.Enabled;
		if(settings::menu::ShowMenu.Enabled)
			globals::local::PC->DisableInput(globals::local::PC);
		else
			globals::local::PC->EnableInput(globals::local::PC);
	}
	if (globals::local::LP) {
		if (settings::menu::ShowMenu.Enabled)
			globals::local::LP->DisableInput(globals::local::PC);
		else
			globals::local::LP->EnableInput(globals::local::PC);
	}

	if (!Gui::IsInitialized())
		Gui::Initialize(globals::rendering::canvas);

	if (!settings::menu::ShowMenu.Enabled)
		return;

	Renderer::PushFont(Renderer::MenuFont);

	if (Keyboard::GetState(VK_OEM_6, 0))
		Gui::MenuScale += 0.05f;

	if (Keyboard::GetState(VK_OEM_4, 0))
		Gui::MenuScale -= 0.05f;

	Gui::Colors::Slider_Idle = FLinearColor{ 1.f, 1.f, 0.f, 1.0f };
	Gui::Window(Xors(L"Code of Conduct"), &MenuPos, MenuSize, true);

	Gui::SearchBar(Xors(L"Search"), &SearchString, InputType_Alphabet | InputType_Numbers, 20);

	if (Gui::TabGroup(Xors(L"Aimbot"), TabSize, Gui::currentTabgroup == 0, {
		Xors(L"General"),
		Xors(L"Misc") }))
		Gui::currentTabgroup = 0;
	if (Gui::TabGroup(Xors(L"Visuals"), TabSize, Gui::currentTabgroup == 1, {
		Xors(L"Enemy Players"),
		Xors(L"Tribe Players"),
		Xors(L"Enemy Dinos"),
		Xors(L"Team Dinos"),
		Xors(L"Wild Dinos"),
		Xors(L"Radar"),
		Xors(L"Misc") }))
		Gui::currentTabgroup = 1;
	if (Gui::TabGroup(Xors(L"Features"), TabSize, Gui::currentTabgroup == 2, {
		Xors(L"Player"),
		Xors(L"Movement"),
		Xors(L"Dino"),
		Xors(L"PVP Automation"),
		Xors(L"PVE Automation"),
		Xors(L"Misc") }))
		Gui::currentTabgroup = 2;
	if (Gui::TabGroup(Xors(L"Structures"), TabSize, Gui::currentTabgroup == 3, {
		Xors(L"Enemy"),
		Xors(L"Team"),
		Xors(L"Misc") }))
		Gui::currentTabgroup = 3;
	if (Gui::TabGroup(Xors(L"Settings"), TabSize, Gui::currentTabgroup == 4, {
		Xors(L"Menu"),
		Xors(L"Config"),
		Xors(L"Character")}))
	Gui::currentTabgroup = 4;

	Gui::SetContentPos();
	Gui::ComboOpen = Gui::PopupElementID != -1;
	switch (Gui::currentTabgroup)
	{
	case 0:
		switch (Gui::SubTab)
		{
		case 0:
			Gui::DrawVar(&settings::aimbot::Aimbot);
			Gui::DrawVar(&settings::aimbot::ServerSilent);
			Gui::Combo(Xors(L"Bone"), &settings::aimbot::CurrentBone, Bones, 9);
			Gui::DrawVar(&settings::aimbot::EnableTriggerBot);
			Gui::DrawVar(&settings::aimbot::OnlyVisible);
			Gui::DrawVar(&settings::aimbot::TargetDinos);
			Gui::DrawVar(&settings::aimbot::TargetSleepers);
			Gui::DrawVar(&settings::aimbot::TargetTeam);
			Gui::DrawVar(&settings::aimbot::ShieldBypass);
			Gui::SetContentPos(250 /*Tabs width*/ + 410 /*First column width*/ + 5 /*Spacing*/, 0.f /*Top position*/);
			Gui::DrawVar(&settings::aimbot::SpoofHeadshots);
			Gui::DrawVar(&settings::aimbot::EnablePrediction);
			Gui::DrawVar(&settings::aimbot::PredictionMultiplier);
			Gui::DrawVar(&settings::aimbot::UseFov);
			break;

		case 1:
			Gui::DrawVar(&settings::aimbot::AddToAllyList);
			Gui::DrawVar(&settings::aimbot::ClearAllyList);
			Gui::DrawVar(&settings::aimbot::EnableCrosshair);
			Gui::DrawVar(&settings::aimbot::AmmoIndicator);
			Gui::SetContentPos(250 /*Tabs width*/ + 410 /*First column width*/ + 5 /*Spacing*/, 0.f /*Top position*/);
			Gui::DrawVar(&settings::misc::Spyglass);
			Gui::DrawVar(&settings::aimbot::Tracers);
			Gui::DrawVar(&settings::aimbot::ShowTargetingString);
			Gui::DrawVar(&settings::aimbot::EnableTargetLine);
			break;
		}
		break;
	case 1:
		switch (Gui::SubTab)
		{
		case 0:
			Gui::DrawVar(&settings::enemyPlayer::EnableEnemyPlayer);
			Gui::DrawVar(&settings::enemyPlayer::Name);
			Gui::DrawVar(&settings::enemyPlayer::TribeName);
			Gui::DrawVar(&settings::enemyPlayer::Box);
			if (settings::enemyPlayer::Box.Enabled)
				Gui::Combo(Xors(L"Box Type"), &settings::enemyPlayer::BoxType, BoxTypes, 3);
			Gui::DrawVar(&settings::enemyPlayer::Health);
			Gui::DrawVar(&settings::enemyPlayer::Bones);
			Gui::DrawVar(&settings::enemyPlayer::Distance);
			Gui::DrawVar(&settings::enemyPlayer::Snaplines);
			Gui::DrawVar(&settings::enemyPlayer::HeadDot);
			Gui::SetContentPos(250 /*Tabs width*/ + 410 /*First column width*/ + 5 /*Spacing*/, 0.f /*Top position*/);
			Gui::DrawVar(&settings::enemyPlayer::ViewLine);
			Gui::DrawVar(&settings::enemyPlayer::Armor);
			Gui::DrawVar(&settings::enemyPlayer::Weapon);
			Gui::DrawVar(&settings::enemyPlayer::Chams);
			Gui::DrawVar(&settings::enemyPlayer::OnlyVisible);
			Gui::DrawVar(&settings::enemyPlayer::EnemySleeping);
			Gui::DrawVar(&settings::enemyPlayer::EnemyDead);
			break;

		case 1:
			Gui::DrawVar(&settings::teamPlayer::EnableTeamPlayer);
			Gui::DrawVar(&settings::teamPlayer::Name);
			Gui::DrawVar(&settings::teamPlayer::TribeName);
			Gui::DrawVar(&settings::teamPlayer::Box);
			if (settings::teamPlayer::Box.Enabled)
				Gui::Combo(Xors(L"Box Type"), &settings::teamPlayer::BoxType, BoxTypes, 3);
			Gui::DrawVar(&settings::teamPlayer::Health);
			Gui::DrawVar(&settings::teamPlayer::Bones);
			Gui::DrawVar(&settings::teamPlayer::Distance);
			Gui::SetContentPos(250 /*Tabs width*/ + 410 /*First column width*/ + 5 /*Spacing*/, 0.f /*Top position*/);
			Gui::DrawVar(&settings::teamPlayer::ViewLine);
			Gui::DrawVar(&settings::teamPlayer::Armor);
			Gui::DrawVar(&settings::teamPlayer::Weapon);
			Gui::DrawVar(&settings::teamPlayer::Chams);
			Gui::DrawVar(&settings::teamPlayer::OnlyVisible);
			Gui::DrawVar(&settings::teamPlayer::TeamSleeping);
			Gui::DrawVar(&settings::teamPlayer::TeamDead);
			break;
		case 2:
			Gui::DrawVar(&settings::enemyDino::EnableEnemyDino);
			Gui::DrawVar(&settings::enemyDino::Name);
			Gui::DrawVar(&settings::enemyDino::Distance);
			Gui::DrawVar(&settings::enemyDino::Health);
			Gui::DrawVar(&settings::enemyDino::Chams);
			Gui::DrawVar(&settings::enemyDino::OnlyVisible);
			break;
		case 3:
			Gui::DrawVar(&settings::teamDino::EnableTeamDino);
			Gui::DrawVar(&settings::teamDino::Name);
			Gui::DrawVar(&settings::teamDino::Distance);
			Gui::DrawVar(&settings::teamDino::Health);
			Gui::DrawVar(&settings::teamDino::Chams);
			Gui::DrawVar(&settings::teamDino::OnlyVisible);
			break;
		case 4:
			Gui::DrawVar(&settings::wildDino::EnableWildDino);
			Gui::DrawVar(&settings::wildDino::Name);
			Gui::DrawVar(&settings::wildDino::Distance);
			Gui::DrawVar(&settings::wildDino::Health);
			Gui::DrawVar(&settings::wildDino::Chams);
			Gui::DrawVar(&settings::wildDino::OnlyVisible);
			Gui::Checkbox(Xors(L"Enable Dino Filter"), Xors(L"Enables Filter For Wild Dinos"), &settings::wildDino::EnableFilter, false);
			if (settings::wildDino::EnableFilter)
				Gui::InputText(Xors(L"Wild Dino Filter"), Xors(L"Filter Name"), &settings::wildDino::WildDinoString, InputType_Alphabet, 25);
			break;
		case 5:
			Gui::DrawVar(&settings::radar::DrawRadar);
			Gui::DrawVar(&settings::radar::RadarSize);
			Gui::DrawVar(&settings::radar::RadarZoom);
			Gui::DrawVar(&settings::radar::RadarX);
			Gui::DrawVar(&settings::radar::RadarY);
			Gui::DrawVar(&settings::radar::DrawRadarBackground);
			Gui::DrawVar(&settings::radar::RadarBackgroundAlpha);
			Gui::DrawVar(&settings::radar::DrawRadarNESW);
			Gui::SetContentPos(250 /*Tabs width*/ + 410 /*First column width*/ + 5 /*Spacing*/, 0.f /*Top position*/);
			Gui::DrawVar(&settings::radar::DrawRadarEnemy);
			Gui::DrawVar(&settings::radar::DrawRadarEnemyDinos);
			Gui::DrawVar(&settings::radar::DrawRadarTeam);
			Gui::DrawVar(&settings::radar::DrawRadarTeamDinos);
		
			break;
		case 6:
			Gui::DrawVar(&settings::misc::Ini);
			Gui::DrawVar(&settings::user::ClearWater);
			Gui::DrawVar(&settings::miscStructure::Teleport);
			static bool showflags = false;
			Gui::Checkbox(Xors(L"ShowFlag Settings"),Xors(L"More Specific ini settings"), &showflags,false);
			Gui::DrawVar(&settings::user::ChamsWireFrame);
			Gui::Combo(Xors(L"Chams Type"), &settings::user::MaterialBlendMode, BlendModes, 11);
			if (showflags) {
				Gui::DrawVar(&settings::user::ShowFlags::Bloom);
				Gui::DrawVar(&settings::user::ShowFlags::Specular);
				Gui::DrawVar(&settings::user::ShowFlags::NaniteMeshes);
				Gui::DrawVar(&settings::user::ShowFlags::InstancedStaticMeshes);
				Gui::SetContentPos(250 /*Tabs width*/ + 410 /*First column width*/ + 5 /*Spacing*/, 0.f /*Top position*/);
				Gui::DrawVar(&settings::user::ShowFlags::InstancedFoliage);
				Gui::DrawVar(&settings::user::ShowFlags::InstancedGrass);
				Gui::DrawVar(&settings::user::ShowFlags::DynamicShadows);
				Gui::DrawVar(&settings::user::ShowFlags::Particles);
				Gui::DrawVar(&settings::user::ShowFlags::SkeletalMeshes);
				Gui::DrawVar(&settings::user::ShowFlags::Translucency);
				Gui::DrawVar(&settings::user::ShowFlags::StaticMeshes);
				Gui::DrawVar(&settings::user::ShowFlags::Landscape);
				Gui::DrawVar(&settings::user::ShowFlags::Fog);
				Gui::DrawVar(&settings::user::ShowFlags::VolumetricFog);
			}
			break;
		}
		break;
	case 2:
		switch (Gui::SubTab)
		{
		case 0:
			Gui::DrawVar(&settings::misc::NoRecoil);
			Gui::DrawVar(&settings::misc::RapidFire);
			Gui::DrawVar(&settings::misc::LongArms);
			Gui::DrawVar(&settings::misc::InfiniteArms);
			Gui::DrawVar(&settings::misc::NoTekRifleOverheat);
			Gui::DrawVar(&settings::misc::InfiniteSuitEle);
			Gui::DrawVar(&settings::misc::FovChanger);
			Gui::DrawVar(&settings::misc::Ghost);
			Gui::DrawVar(&settings::misc::TribeLogToChat);
			Gui::DrawVar(&settings::misc::DisableRespawnAnim);
			Gui::SetContentPos(250 /*Tabs width*/ + 410 /*First column width*/ + 5 /*Spacing*/, 0.f /*Top position*/);
			Gui::DrawVar(&settings::misc::DmgNumbers);
			Gui::DrawVar(&settings::misc::InfiniteC4);
			Gui::DrawVar(&settings::misc::SpoofFoundation);
			Gui::DrawVar(&settings::misc::SelfC4Placer);
			Gui::DrawVar(&settings::misc::SelfUpload);
			Gui::DrawVar(&settings::misc::InventoryToArk);
			Gui::DrawVar(&settings::misc::Suicide);
			Gui::DrawVar(&settings::misc::InfiniteWeight);
			Gui::DrawVar(&settings::misc::FastUse);
			Gui::DrawVar(&settings::misc::ShotGunReload);
			break;

		case 1:
			Gui::DrawVar(&settings::playerMovement::SpeedHack);
			Gui::DrawVar(&settings::playerMovement::SpeedHackValue);
			Gui::DrawVar(&settings::playerMovement::SpeedHackValueTwo);
			Gui::DrawVar(&settings::playerMovement::Airstuck);
			Gui::DrawVar(&settings::misc::NetLimiter);
			Gui::SetContentPos(250 /*Tabs width*/ + 410 /*First column width*/ + 5 /*Spacing*/, 0.f /*Top position*/);
			Gui::DrawVar(&settings::playerMovement::Desync);
			Gui::DrawVar(&settings::playerMovement::BunnyHop);
			Gui::DrawVar(&settings::playerMovement::TekGaunts);
			Gui::DrawVar(&settings::playerMovement::TekJump);
			Gui::DrawVar(&settings::playerMovement::TekLegs);
			break;
		case 2:
			Gui::DrawVar(&settings::dinoFeatures::InstaTurn);
			Gui::DrawVar(&settings::dinoFeatures::HardTurn);
			Gui::DrawVar(&settings::dinoFeatures::BackwardsFly);
			Gui::DrawVar(&settings::dinoFeatures::OmniFly);
			break;
		case 3:
			DrawAutoTakeAll();
			DrawTeamAutoTakeAll();
			DrawAutoPopcorn();
			DrawTeamAutoPopcorn();
			DrawAutoArmorBox();
			Gui::DrawVar(&settings::autoMation::AutoMount);
			Gui::DrawVar(&settings::autoMation::PickupItems);
			Gui::SetContentPos(250 /*Tabs width*/ + 410 /*First column width*/ + 5 /*Spacing*/, 0.f /*Top position*/);
			Gui::DrawVar(&settings::autoMation::PickupC4);
			Gui::DrawVar(&settings::autoMation::PickupTraps);
			Gui::DrawVar(&settings::autoMation::AutoMedbrew);
			Gui::DrawVar(&settings::autoMation::AutoConsumable);
			Gui::DrawVar(&settings::autoMation::AutoFood);
			Gui::DrawVar(&settings::autoMation::AutoFeedRawMeat);
			Gui::Checkbox(Xors(L"Auto Collect Notes"), Xors(L"Collects Notes In 200M Radius"), &settings::autoMation::UnlockNotes, false);
			break;
		case 4:
			Gui::Checkbox(Xors(L"Enable Auto Crafting"), Xors(L"Auto Craft Items In A 10M Area"), &settings::autoCraft::EnableCrafting, false);
			Gui::Combo(Xors(L"Crafting Structure"), &settings::autoCraft::CraftingStructure, Structures, 3);
			switch (settings::autoCraft::CraftingStructure)
			{
			case 0:
				Gui::Combo(Xors(L"Crafting Item"), &settings::autoCraft::CraftingItem, Replicator, 7);
				settings::autoCraft::ItemName = Replicator[settings::autoCraft::CraftingItem];
				break;
			case 1:
				Gui::Combo(Xors(L"Crafting Item"), &settings::autoCraft::CraftingItem, ChemBench, 4);
				settings::autoCraft::ItemName = ChemBench[settings::autoCraft::CraftingItem];
				break;
			case 2:
				Gui::Combo(Xors(L"Crafting Item"), &settings::autoCraft::CraftingItem, Fabricator, 7);
				settings::autoCraft::ItemName = Fabricator[settings::autoCraft::CraftingItem];
				break;
			}
			Gui::Checkbox(Xors(L"Auto Demo/Depo"), Xors(L"Auto Depo/Demos Duped Structures"), &settings::autoDemo::EnableDemo, false);
			Gui::Combo(Xors(L"Demolish Item"), &settings::autoDemo::DemoItem, DupeStructures, 11);
			settings::autoDemo::ItemName = DupeStructures[settings::autoDemo::DemoItem];
			Gui::DrawVar(&settings::autoMation::AutoFillTekTurrets);
			Gui::DrawVar(&settings::autoMation::AutoFillHeavyTurrets);
			Gui::DrawVar(&settings::autoMation::AutoFillAutoTurrets);
			Gui::DrawVar(&settings::autoMation::AutoFillCropPlots);
			Gui::SetContentPos(250 /*Tabs width*/ + 410 /*First column width*/ + 5 /*Spacing*/, 0.f /*Top position*/);
			Gui::DrawVar(&settings::misc::DinoClaim);
			Gui::DrawVar(&settings::misc::DinoName);
			Gui::InputText(Xors(L"Name : "), Xors(L"Name For Babys"), &settings::misc::DinoString, InputType_Alphabet | InputType_Numbers | InputType_Punctuation | InputType_Special | InputType_Function, 25);
			Gui::DrawVar(&settings::misc::DinoLevel);
			Gui::DrawVar(&settings::misc::DinoSaddle);
			Gui::DrawVar(&settings::misc::DinoFeed);
			if (settings::misc::DinoFeed.Enabled)
				Gui::Checkbox(Xors(L"Use Troughs"), Xors(L"Enables/Disables Using Troughs"), &settings::autoMation::FeedTroughs, false);
			Gui::DrawVar(&settings::misc::DinoImprint);
			Gui::DrawVar(&settings::autoMation::AutoTakeAchatina);
			Gui::DrawVar(&settings::autoMation::AutoTakeCrops);
			break;
		case 5:
			Gui::DrawVar(&settings::misc::ExtraInfo);
			Gui::DrawVar(&settings::misc::ExtraServerInfo);
			Gui::Checkbox(Xors(L"Toggle message"), Xors(L"Shows message when toggling setting"), &settings::user::ShowToggleMessage.Enabled, false);
			Gui::SliderFloat(Xors(L"Message Time"), Xors(L"Time to show message"), &settings::user::MessageTime.Val, 0.05f, 3.f);
			Gui::Checkbox(Xors(L"Dark Mode"), Xors(L"Changes the menu to a dark theme"), &Gui::DarkMode, false);
			Gui::ColorPicker(Xors(L"Menu Color"), &Gui::Colors::Window_Background);
			break;
		}
		break;

	case 3:
		switch (Gui::SubTab)
		{
		case 0:
			if (Gui::Button(Xors(L"Turrets/Gens")))
				CurrentStructureTab = 0;

			if (Gui::Button(Xors(L"Tek")))
				CurrentStructureTab = 1;

			if (Gui::Button(Xors(L"Industrial")))
				CurrentStructureTab = 2;

			if (Gui::Button(Xors(L"Containers")))
				CurrentStructureTab = 3;

			if (Gui::Button(Xors(L"Buildings")))
				CurrentStructureTab = 4;

			if (Gui::Button(Xors(L"Other")))
				CurrentStructureTab = 5;
			
			DrawStructureTab(false);

			break;
		case 1:
			if (Gui::Button(Xors(L"Turrets/Gens")))
				CurrentStructureTab = 0;

			if (Gui::Button(Xors(L"Tek")))
				CurrentStructureTab = 1;

			if (Gui::Button(Xors(L"Industrial")))
				CurrentStructureTab = 2;

			if (Gui::Button(Xors(L"Containers")))
				CurrentStructureTab = 3;

			if(Gui::Button(Xors(L"Buildings")))
				CurrentStructureTab = 4;

			if (Gui::Button(Xors(L"Other")))
				CurrentStructureTab = 5;
			
			DrawStructureTab(true);

			break;
		case 2:
			Gui::DrawVar(&settings::miscStructure::CaveDrop);
			Gui::DrawVar(&settings::miscStructure::SupplyDrop);
			Gui::DrawVar(&settings::miscStructure::Artifact);
			Gui::DrawVar(&settings::miscStructure::BeaverDam);
			Gui::DrawVar(&settings::miscStructure::BeeHive);
			Gui::DrawVar(&settings::miscStructure::Note);
			DrawResourceEsp();
			break;
		}
		break;

	case 4:
		switch (Gui::SubTab)
		{
		case 0:
			Gui::DrawVar(&settings::menu::ShowMenu);
			Gui::DrawVar(&settings::menu::ExtraCheatKey);
			break;
		case 1:
			if (Gui::Button(Xors(L"Save Config")))
				Config::SaveConfig();
			break;
		case 2:
		{
			Gui::DrawVar(&settings::misc::SpamChangeCharacterSize);
			if (Gui::Button(Xors(L"Set to small character")))
			{
				settings::misc::SpamChangeCharacterSize.Enabled = false;
				float smallChar[] = {
					-0.5f, // head size
					-0.5f, // neck size
					-0.5f, // neck length
					-0.5f, // chest size
					-0.5f, // shoulder width
					-0.5f, // arm length
					-0.5f, // upper arm size
					-0.5f, // lower arm size
					-0.5f, // hand size
					-0.5f, // leg length
					-0.5f, // upper leg size
					-0.5f, // lower leg size
					-0.5f, // foot size
					-0.5f, // hip width
					0.0f, // 0.000000
					-0.5f, // upper face size
					-0.5f, // lower face size
					0.0f, // 0.000000
					-0.5f, // neck height
					-0.5f, // head width
					-0.5f, // head depth
					-0.5f, // torso height
					-0.5f, // torso size
					-0.5f, // overall hight
					-0.5f, // eye size
					-0.5f // eye widht
				};
				for (int i = 0; i < 26; i++)
				{
					settings::misc::wantedCharacter[i] = smallChar[i];
				}
				settings::misc::wantsToSetCharacter = true;
				LocalModule::ChangeCharacterSize();
			}
			if (Gui::Button(Xors(L"Set to big hands / long arms")))
			{
				settings::misc::SpamChangeCharacterSize.Enabled = false;
				float smallChar[] = {
					-0.5f, // head size
					-0.5f, // neck size
					-0.5f, // neck length
					-0.5f, // chest size
					-0.5f, // shoulder width
					0.5f, // arm length
					-0.5f, // upper arm size
					-0.5f, // lower arm size
					0.5f, // hand size
					-0.5f, // leg length
					-0.5f, // upper leg size
					-0.5f, // lower leg size
					-0.5f, // foot size
					-0.5f, // hip width
					0.0f, // 0.000000
					-0.5f, // upper face size
					-0.5f, // lower face size
					0.0f, // 0.000000
					-0.5f, // neck height
					-0.5f, // head width
					-0.5f, // head depth
					-0.5f, // torso height
					-0.5f, // torso size
					-0.5f, // overall hight
					-0.5f, // eye size
					-0.5f // eye widht
				};
				for (int i = 0; i < 26; i++)
				{
					settings::misc::wantedCharacter[i] = smallChar[i];
				}
				settings::misc::wantsToSetCharacter = true;
				LocalModule::ChangeCharacterSize();
			}
			Gui::DrawVar(&settings::misc::SpamLastCharacter);
			break;
		}
		}

		break;
	case 69:
		Gui::DrawSearchTab(&SearchString, &settings::MenuVars);
		break;
	}
	Gui::DrawOverlays();
}

typedef struct VarInfo
{
	bool ToggleState;
	float MessageTime;
	const wchar_t* Name;
}VarInfo;
std::vector<VarInfo> ShownMessages;
void Menu::UpdateMenuVars()
{
	for (int i = 0; i < settings::MenuVars.size();i++)
	{

		auto Var = settings::MenuVars[i];
		if (Var->keyBindForToggle <= 0 || Var->keyBindForToggle > 300)
			continue;
		if (Keyboard::GetState(Var->keyBindForToggle,0))
		{
			Var->Enabled = !Var->Enabled;
			if (settings::user::ShowToggleMessage.Enabled)
			{
				VarInfo vi{
				.ToggleState = Var->Enabled,
				.MessageTime = settings::user::MessageTime.Val,
				.Name = Var->GetName()};
				if(lstrcmpW(Var->GetName(), Xors(L"Show Menu")) != 0)
					ShownMessages.push_back(vi);
			}
		}
	}
	if (!settings::user::ShowToggleMessage.Enabled)
		return;

	for (int i = 0;i < ShownMessages.size();i++)
	{
		FVector2D Pos = { (double)globals::rendering::canvas->SizeX / 2, (double)(globals::rendering::canvas->SizeY / 1.8f) + 50 + (i * 20) };
		std::wstring fmt = ShownMessages[i].Name;
		fmt += Xors(L"[");
		fmt += ShownMessages[i].ToggleState ? Xors(L"ON") : Xors(L"OFF");
		fmt += Xors(L"]");
		Renderer::DrawString(fmt, Pos, { 0.80f, 0.80f }, ShownMessages[i].ToggleState ? FLinearColor{ 0.f,1.f,0.f,1.f } : FLinearColor{ 1.f,0.f,0.f,1.f }, true, {0.f,0.f,0.f,0.5f}, true, true);
		ShownMessages[i].MessageTime -= 1.f / 45.f;
		if (ShownMessages[i].MessageTime <= 0)
		{
			ShownMessages.erase(ShownMessages.begin() + i);
		}
	}
}
void DrawAutoArmorBox()
{
	VarBase* Var = &settings::autoMation::SelfArmor;
	Gui::Checkbox(Var->GetName(), Var->GetDesc(), &Var->Enabled, true);
	auto state = Gui::PopupStates[Gui::elements_count];
	if (state)
	{
		state->var = Var;
		state->var->Type = VarT(420);
	}
}
void DrawResourceEsp()
{
	VarBase* Var = &settings::resourceStructure::EnableResource;
	Gui::Checkbox(Var->GetName(), Var->GetDesc(), &Var->Enabled, true);
	auto state = Gui::PopupStates[Gui::elements_count];
	if (state)
	{
		state->var = Var;
		state->var->Type = VarT(45);
	}
}
void DrawAutoPopcorn()
{
	VarBase* Var = &settings::autoMation::AutoPopcorn;
	Gui::Checkbox(Var->GetName(), Var->GetDesc(), &Var->Enabled, true);
	auto state = Gui::PopupStates[Gui::elements_count];
	if (state)
	{
		state->var = Var;
		state->var->Type = VarT(42);
	}
}
void DrawAutoTakeAll()
{
	VarBase* Var = &settings::autoMation::AutoLoot;
	Gui::Checkbox(Var->GetName(), Var->GetDesc(), &Var->Enabled, true);
	auto state = Gui::PopupStates[Gui::elements_count];
	if (state)
	{
		state->var = Var;
		state->var->Type = VarT(43);
	}
}
void DrawTurretOption(VarBase* Var)
{
	Gui::Checkbox(Var->GetName(), Var->GetDesc(), &Var->Enabled, true);
	auto state = Gui::PopupStates[Gui::elements_count];
	if (state)
	{
		state->var = Var;
		state->var->Type = VarT(44);
	}

}
void DrawTeamAutoPopcorn()
{
	VarBase* Var = &settings::autoMation::TeamAutoPopcorn;
	Gui::Checkbox(Var->GetName(), Var->GetDesc(), &Var->Enabled, true);
	auto state = Gui::PopupStates[Gui::elements_count];
	if (state)
	{
		state->var = Var;
		state->var->Type = VarT(46);
	}
}
void DrawTeamAutoTakeAll()
{
	VarBase* Var = &settings::autoMation::TeamAutoLoot;
	Gui::Checkbox(Var->GetName(), Var->GetDesc(), &Var->Enabled, true);
	auto state = Gui::PopupStates[Gui::elements_count];
	if (state)
	{
		state->var = Var;
		state->var->Type = VarT(47);
	}
}
void DrawStructureTab(bool team)
{
	
	if (team)
	{
		Gui::DrawVar(&settings::teamStructure::DrawTStructures);
		Gui::SetContentPos(250 /*Tabs width*/ + 410 /*First column width*/ + 5 /*Spacing*/, 0.f /*Top position*/);
		switch (CurrentStructureTab)
		{
		case 0:
			DrawTurretOption(&settings::teamStructure::TeamAutoTurret);
			DrawTurretOption(&settings::teamStructure::TeamHeavyTurret);
			DrawTurretOption(&settings::teamStructure::TeamTekTurret);
			Gui::DrawVar(&settings::teamStructure::TeamElectricalGenerator);
			Gui::DrawVar(&settings::teamStructure::TeamTeamTekGenerator);
			break;
		case 1:
			Gui::DrawVar(&settings::teamStructure::TeamSmallTeleporter);
			Gui::DrawVar(&settings::teamStructure::TeamMediumTeleporter);
			Gui::DrawVar(&settings::teamStructure::TeamLargeTeleporter);
			Gui::DrawVar(&settings::teamStructure::TeamTekTransmitter);
			Gui::DrawVar(&settings::teamStructure::TeamCryoFridge);
			Gui::DrawVar(&settings::teamStructure::TeamCloningChamber);
			Gui::DrawVar(&settings::teamStructure::TeamVacuumCompartment);
			Gui::DrawVar(&settings::teamStructure::TeamDedicatedStorage);
			Gui::DrawVar(&settings::teamStructure::TeamTekForceField);
			Gui::DrawVar(&settings::teamStructure::TeamReplicator);

			break;
		case 2:
			Gui::DrawVar(&settings::teamStructure::TeamChemistryBench);
			Gui::DrawVar(&settings::teamStructure::TeamIndustrialForge);
			Gui::DrawVar(&settings::teamStructure::TeamIndustrialGrill);
			Gui::DrawVar(&settings::teamStructure::TeamIndustrialCookingPot);
			Gui::DrawVar(&settings::teamStructure::TeamGrinder);
			Gui::DrawVar(&settings::teamStructure::TeamCookingPot);
			Gui::DrawVar(&settings::teamStructure::TeamAirConditioner);
			break;
		case 3:
			Gui::DrawVar(&settings::teamStructure::TeamSmallStorageBox);
			Gui::DrawVar(&settings::teamStructure::TeamLargeStorageBox);
			Gui::DrawVar(&settings::teamStructure::TeamVault);
			Gui::DrawVar(&settings::teamStructure::TeamRefrigerator);
			Gui::DrawVar(&settings::teamStructure::TeamFabricator);
			Gui::DrawVar(&settings::teamStructure::TeamSmithy);
			Gui::DrawVar(&settings::teamStructure::TeamMortarAndPestle);
			Gui::DrawVar(&settings::teamStructure::TeamSmallCropPlot);
			Gui::DrawVar(&settings::teamStructure::TeamMediumCropPlot);
			Gui::DrawVar(&settings::teamStructure::TeamLargeCropPlot);
			break;
		case 4:
			Gui::DrawVar(&settings::teamStructure::TeamFoundation);
			Gui::DrawVar(&settings::teamStructure::TeamWall);
			Gui::DrawVar(&settings::teamStructure::TeamDoor);
			Gui::DrawVar(&settings::teamStructure::TeamDoorFrame);
			Gui::DrawVar(&settings::teamStructure::TeamCeiling);
			Gui::DrawVar(&settings::teamStructure::TeamFenceFoundation);
			break;
		case 5:
			Gui::DrawVar(&settings::teamStructure::TeamSleepingBag);
			Gui::DrawVar(&settings::teamStructure::TeamBed);
			Gui::DrawVar(&settings::teamStructure::TeamBunkBed);
			Gui::DrawVar(&settings::teamStructure::TeamC4Charge);
			Gui::DrawVar(&settings::teamStructure::TeamBearTrap);
			Gui::DrawVar(&settings::teamStructure::TeamLargeBearTrap);
			Gui::DrawVar(&settings::teamStructure::TeamWaterMine);
			Gui::DrawVar(&settings::teamStructure::TeamItemCache);
			break;
		}
		
	}
	else
	{
		Gui::DrawVar(&settings::enemyStructure::DrawEStructures);
		Gui::SetContentPos(250 /*Tabs width*/ + 410 /*First column width*/ + 5 /*Spacing*/, 0.f /*Top position*/);
		switch (CurrentStructureTab)
		{
		case 0:
			DrawTurretOption(&settings::enemyStructure::EnemyAutoTurret);
			DrawTurretOption(&settings::enemyStructure::EnemyHeavyTurret);
			DrawTurretOption(&settings::enemyStructure::EnemyTekTurret);
			Gui::DrawVar(&settings::enemyStructure::EnemyElectricalGenerator);
			Gui::DrawVar(&settings::enemyStructure::EnemyEnemyTekGenerator);
			break;
		case 1:
			Gui::DrawVar(&settings::enemyStructure::EnemySmallTeleporter);
			Gui::DrawVar(&settings::enemyStructure::EnemyMediumTeleporter);
			Gui::DrawVar(&settings::enemyStructure::EnemyLargeTeleporter);
			Gui::DrawVar(&settings::enemyStructure::EnemyTekTransmitter);
			Gui::DrawVar(&settings::enemyStructure::EnemyCryoFridge);
			Gui::DrawVar(&settings::enemyStructure::EnemyCloningChamber);
			Gui::DrawVar(&settings::enemyStructure::EnemyVacuumCompartment);
			Gui::DrawVar(&settings::enemyStructure::EnemyDedicatedStorage);
			Gui::DrawVar(&settings::enemyStructure::EnemyTekForceField);
			Gui::DrawVar(&settings::enemyStructure::EnemyReplicator);
			break;
		case 2:

			Gui::DrawVar(&settings::enemyStructure::EnemyChemistryBench);
			Gui::DrawVar(&settings::enemyStructure::EnemyIndustrialForge);
			Gui::DrawVar(&settings::enemyStructure::EnemyIndustrialGrill);
			Gui::DrawVar(&settings::enemyStructure::EnemyIndustrialCookingPot);
			Gui::DrawVar(&settings::enemyStructure::EnemyGrinder);
			Gui::DrawVar(&settings::enemyStructure::EnemyCookingPot);
			Gui::DrawVar(&settings::enemyStructure::EnemyAirConditioner);
			break;
		case 3:
			Gui::DrawVar(&settings::enemyStructure::EnemySmallStorageBox);
			Gui::DrawVar(&settings::enemyStructure::EnemyLargeStorageBox);
			Gui::DrawVar(&settings::enemyStructure::EnemyVault);
			Gui::DrawVar(&settings::enemyStructure::EnemyRefrigerator);
			Gui::DrawVar(&settings::enemyStructure::EnemyFabricator);
			Gui::DrawVar(&settings::enemyStructure::EnemySmithy);
			Gui::DrawVar(&settings::enemyStructure::EnemyMortarAndPestle);
			Gui::DrawVar(&settings::enemyStructure::EnemySmallCropPlot);
			Gui::DrawVar(&settings::enemyStructure::EnemyMediumCropPlot);
			Gui::DrawVar(&settings::enemyStructure::EnemyLargeCropPlot);
			break;
		case 4:
			Gui::DrawVar(&settings::enemyStructure::EnemyFoundation);
			Gui::DrawVar(&settings::enemyStructure::EnemyWall);
			Gui::DrawVar(&settings::enemyStructure::EnemyDoor);
			Gui::DrawVar(&settings::enemyStructure::EnemyDoorFrame);
			Gui::DrawVar(&settings::enemyStructure::EnemyCeiling);
			Gui::DrawVar(&settings::enemyStructure::EnemyFenceFoundation);
			break;
		case 5:
			Gui::DrawVar(&settings::enemyStructure::EnemySleepingBag);
			Gui::DrawVar(&settings::enemyStructure::EnemyBed);
			Gui::DrawVar(&settings::enemyStructure::EnemyBunkBed);
			Gui::DrawVar(&settings::enemyStructure::EnemyC4Charge);
			Gui::DrawVar(&settings::enemyStructure::EnemyBearTrap);
			Gui::DrawVar(&settings::enemyStructure::EnemyLargeBearTrap);
			Gui::DrawVar(&settings::enemyStructure::EnemyWaterMine);
			Gui::DrawVar(&settings::enemyStructure::EnemyItemCache);
			break;
		}
		
	}
}
