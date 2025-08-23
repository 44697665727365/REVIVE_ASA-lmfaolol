#include "pch.h"
#include "ActorBase.h"
#include "UserModule.h"
#include "HookManager.h"
#include "LocalModule.h"

bool TextMode = false;
wchar_t LastKey = L'\0';
bool LastKeyValid = false;
std::unordered_map<int, const wchar_t*> Keyboard::KeyNameMap;
const wchar_t* Keyboard::GetFKeyFromCode(int Code)
{
	if (KeyNameMap.empty())
	{
		KeyNameMap = {
			{VK_OEM_7, L"Quote"},
			{VK_OEM_6, L"RightBracket"},
			{VK_OEM_5, L"Backslash"},
			{VK_OEM_4, L"LeftBracket"},
			{VK_OEM_3, L"Tilde"},
			{VK_OEM_2, L"Slash"},
			{VK_OEM_MINUS, L"Underscore"},
			{VK_OEM_PERIOD, L"Period"},
			{VK_OEM_COMMA, L"Comma"},
			{VK_OEM_PLUS, L"Equals"},
			{VK_OEM_1, L"Semicolon"},
			{VK_RMENU, L"RightAlt"},
			{VK_LMENU, L"LeftAlt"},
			{VK_RCONTROL, L"RightControl"},
			{VK_LCONTROL, L"LeftControl"},
			{VK_RSHIFT, L"RightShift"},
			{VK_LSHIFT, L"LeftShift"},
			{VK_SCROLL, L"ScrollLock"},
			{VK_NUMLOCK, L"NumLock"},
			{VK_F12, L"F12"},
			{VK_F11, L"F11"},
			{VK_F10, L"F10"},
			{VK_F9, L"F9"},
			{VK_F8, L"F8"},
			{VK_F7, L"F7"},
			{VK_F6, L"F6"},
			{VK_F5, L"F5"},
			{VK_F4, L"F4"},
			{VK_F3, L"F3"},
			{VK_F2, L"F2"},
			{VK_F1, L"F1"},
			{VK_DIVIDE, L"Divide"},
			{VK_DECIMAL, L"Decimal"},
			{VK_SUBTRACT, L"Subtract"},
			{VK_ADD, L"Add"},
			{VK_MULTIPLY, L"Multiply"},
			{VK_NUMPAD9, L"NumPadNine"},
			{VK_NUMPAD8, L"NumPadEight"},
			{VK_NUMPAD7, L"NumPadSeven"},
			{VK_NUMPAD6, L"NumPadSix"},
			{VK_NUMPAD5, L"NumPadFive"},
			{VK_NUMPAD4, L"NumPadFour"},
			{VK_NUMPAD3, L"NumPadThree"},
			{VK_NUMPAD2, L"NumPadTwo"},
			{VK_NUMPAD1, L"NumPadOne"},
			{VK_NUMPAD0, L"NumPadZero"},
			{VK_LWIN, L"LeftCommand"},
			{'Z', L"Z"},
			{'Y', L"Y"},
			{'X', L"X"},
			{'W', L"W"},
			{'V', L"V"},
			{'U', L"U"},
			{'T', L"T"},
			{'S', L"S"},
			{'R', L"R"},
			{'Q', L"Q"},
			{'P', L"P"},
			{'O', L"O"},
			{'N', L"N"},
			{'M', L"M"},
			{'L', L"L"},
			{'K', L"K"},
			{'J', L"J"},
			{'I', L"I"},
			{'H', L"H"},
			{'G', L"G"},
			{'F', L"F"},
			{'E', L"E"},
			{'D', L"D"},
			{'C', L"C"},
			{'B', L"B"},
			{'A', L"A"},
			{'9', L"Nine"},
			{'8', L"Eight"},
			{'7', L"Seven"},
			{'6', L"Six"},
			{'5', L"Five"},
			{'4', L"Four"},
			{'3', L"Three"},
			{'2', L"Two"},
			{'1', L"One"},
			{'0', L"Zero"},
			{VK_DELETE, L"Delete"},
			{VK_INSERT, L"Insert"},
			{VK_DOWN, L"Down"},
			{VK_RIGHT, L"Right"},
			{VK_UP, L"Up"},
			{VK_LEFT, L"Left"},
			{VK_HOME, L"Home"},
			{VK_END, L"End"},
			{VK_NEXT, L"PageDown"},
			{VK_PRIOR, L"PageUp"},
			{VK_SPACE, L"SpaceBar"},
			{VK_ESCAPE, L"Escape"},
			{VK_CAPITAL, L"CapsLock"},
			{VK_PAUSE, L"Pause"},
			{VK_CONTROL, L"LeftControl"},
			{VK_MENU, L"LeftAlt"},
			{VK_BACK, L"BackSpace"},
			{VK_TAB, L"Tab"},
			{VK_RETURN, L"Enter"},
			{VK_SHIFT, L"LeftShift"},
			{VK_LBUTTON, L"LeftMouseButton"},
			{VK_RBUTTON, L"RightMouseButton"},
			{VK_MBUTTON, L"MiddleMouseButton"},
			{VK_XBUTTON1, L"ThumbMouseButton"},
			{VK_XBUTTON2, L"ThumbMouseButton2"}
		};
	}
	return KeyNameMap[Code];
}
std::unordered_map<int, Key*> Keyboard::KeyMap;
std::vector<int> Keyboard::Keys;
[[nodiscard]] bool Keyboard::Initialize()
{
	if (KeyMap.size() > 0)
		return true;

	static UKismetStringLibrary* StringLib = nullptr;
	if (!StringLib)
		StringLib = reinterpret_cast<UKismetStringLibrary*>(UKismetStringLibrary::StaticClass());
	Keys = {
	VK_OEM_7,
	VK_OEM_6,
	VK_OEM_5,
	VK_OEM_4,
	VK_OEM_3,
	VK_OEM_2,
	VK_OEM_MINUS,
	VK_OEM_PERIOD,
	VK_OEM_COMMA,
	VK_OEM_PLUS,
	VK_OEM_1,
	VK_RMENU,
	VK_LMENU,
	VK_RCONTROL,
	VK_LCONTROL,
	VK_RSHIFT,
	VK_LSHIFT,
	VK_SCROLL,
	VK_NUMLOCK,
	VK_F12,
	VK_F11,
	VK_F10,
	VK_F9,
	VK_F8,
	VK_F7,
	VK_F6,
	VK_F5,
	VK_F4,
	VK_F3,
	VK_F2,
	VK_F1,
	VK_DIVIDE,
	VK_DECIMAL,
	VK_SUBTRACT,
	VK_ADD,
	VK_MULTIPLY,
	VK_NUMPAD9,
	VK_NUMPAD8,
	VK_NUMPAD7,
	VK_NUMPAD6,
	VK_NUMPAD5,
	VK_NUMPAD4,
	VK_NUMPAD3,
	VK_NUMPAD2,
	VK_NUMPAD1,
	VK_NUMPAD0,
	VK_LWIN,
	'Z',
	'Y',
	'X',
	'W',
	'V',
	'U',
	'T',
	'S',
	'R',
	'Q',
	'P',
	'O',
	'N',
	'M',
	'L',
	'K',
	'J',
	'I',
	'H',
	'G',
	'F',
	'E',
	'D',
	'C',
	'B',
	'A',
	'9',
	'8',
	'7',
	'6',
	'5',
	'4',
	'3',
	'2',
	'1',
	'0',
	VK_DELETE,
	VK_INSERT,
	VK_DOWN,
	VK_RIGHT,
	VK_UP,
	VK_LEFT,
	VK_HOME,
	VK_END,
	VK_NEXT,
	VK_PRIOR,
	VK_SPACE,
	VK_ESCAPE,
	VK_CAPITAL,
	VK_PAUSE,
	VK_CONTROL,
	VK_MENU,
	VK_BACK,
	VK_TAB,
	VK_RETURN,
	VK_SHIFT,
	VK_LBUTTON,
	VK_RBUTTON,
	VK_MBUTTON,
	VK_XBUTTON1,
	VK_XBUTTON2,
	};
	for(int i : Keys)
	{
		std::wstring name = GetFKeyFromCode(i);
		if (!name.c_str())
		{
			//nlog(Xors("Failed to add key: %llx"), i);
			continue;
		}
		FKey* NewKey = new FKey{ StringLib->STATIC_Conv_StringToName(GetFKeyFromCode(i)) };
		InputType type = GetInputType(i);
		Key* InputKey = new Key{i ,NewKey, name,type};
		KeyMap[i] = InputKey;
		if(!NewKey || !InputKey || !KeyMap[i])
		{
			continue;
			//nlog(Xors("Failed to add key: %llx"), i);
		}
	}
	//plog(Xors("Initialized Keyboard"));
	return true;
}
bool Keyboard::Uninitialize()
{
	if (KeyMap.size() < 1 || Keys.size() < 1)
		return true;

	for (auto i : Keys)
	{
		auto key = KeyMap[i];
		delete key->UEKey;
		//free((void*)key->Name);
		delete key;
	}
	KeyMap.clear();
	return true;
}
[[nodiscard]] bool Keyboard::GetState(int Char, int Case)
{
	if (Char == VK_ESCAPE)
	{
		return false;
	}
	if (Renderer::Font == Renderer::MenuFont)
	{
		return false;
	}
	if (settings::menu::ExtraCheatKey.Enabled && settings::menu::ExtraCheatKey.KeyBindForVar > 0 && Char != settings::menu::ShowMenu.keyBindForToggle && Char != VK_MBUTTON && Char != VK_RBUTTON && Case == 0 && !settings::menu::ShowMenu.Enabled)
	{
		auto key = KeyMap[settings::menu::ExtraCheatKey.KeyBindForVar];
		if (!globals::local::PC->IsInputKeyDown(*key->UEKey))
		{
			key->State = 1;
			return false;
		}
	}
	if (globals::local::PC && !TextMode)
	{
		auto key = KeyMap[Char];
		if (!key)
		{
			//nlog(Xors("Failed to get key: %llx"), Char);
			return false;
		}

		if (Case == 0) {
			if (globals::local::PC->WasInputKeyJustPressed(*key->UEKey))
			{
				key->State = 0;
				return true;
			}
		}
		if (Case == 1) {
			if (globals::local::PC->IsInputKeyDown(*key->UEKey))
			{
				key->State = 1;
				return true;
			}
		}
	}

	return false;
}
bool Keyboard::MenuGetState(int Char, int Case)
{
	if (Renderer::Font != Renderer::MenuFont)
	{
		return false;
	}
	if (globals::local::PC)
	{
		auto key = KeyMap[Char];
		if (!key)
		{
			//nlog(Xors("Menu Failed to get key: %llx"), Char);
			return false;
		}

		if (Case == 0) {
			if (globals::local::PC->WasInputKeyJustPressed(*key->UEKey))
			{
				key->State = 0;
				return true;
			}
		}
		if (Case == 1) {
			if (globals::local::PC->IsInputKeyDown(*key->UEKey))
			{
				key->State = 1;
				return true;
			}
		}
	}
	return false;
}
int Keyboard::MenuGetLastPressedKey()
{
	for (auto i : Keys) {
		auto key = KeyMap[i];
		if (!key || !key->UEKey)
		{
			//nlog(Xors("Failed to get key: %llx for Menu Keybind"), i);
			continue;
		}
		if (globals::local::PC->WasInputKeyJustPressed(*key->UEKey))
		{
			key->State = 1;
			return key->Code;
		}
	}
	return -1;
}
void Keyboard::Reset()
{
	ResetKeyStates();
	Keyboard::DisableTextMode();
}
void Keyboard::ResetKeyStates()
{
	APlayerController* PC = APlayerController::Singleton();
	if (PC)
	{
		for (auto i : Keys)
		{
			auto key = KeyMap[i];
			if (key)
			{
				key->State = -1;
			}
			else
			{
				//nlog(Xors("Failed to get key: %llx"), i);
			}
		}
	}
}
void Keyboard::EnableTextMode()
{
	TextMode = true;
	LastKey = -1;
}
void Keyboard::DisableTextMode()
{
	TextMode = false;
	LastKey = -1;
}
bool Between(int a, int lower, int higher)
{
	return a >= lower && a <= higher;
}
InputType Keyboard::GetInputType(int Code)
{
	int ret = 0;
	if (Between(Code, 65, 90) || Code == 0x20)
		ret = InputType_Alphabet;
	else if (Between(Code, 48, 57) || Between(Code, 0x60, 0x69))
		ret = InputType_Numbers;
	else if (Between(Code, 0xBA, 0xBE))
		ret = InputType_Punctuation;
	else if (Code == 0xC0 || Code == 0xBF || Code == 0xBD || Code == 0xBB || Between(Code, 0x6A, 0x6F))
		ret = InputType_Special;
	else if (Between(Code, 0x0C, 0x2F))
		ret = InputType_Function;
	else
		ret = InputType_None;

	return ret;
}

const wchar_t Keyboard::GetLastKeyTextModeOnly(InputType TypeFlags)
{
	if (!TextMode) {
		//nlog(Xors("TextMode is not enabled"));
		return -1;
	}

	for (auto i : Keys) {
		auto key = KeyMap[i];
		if (!key || !key->UEKey)
		{
			//nlog(Xors("Failed to get key: %llx for Text Input"), i);
			continue;
		}
		if (TypeFlags & key->Type)
		{
			if (globals::local::PC->WasInputKeyJustPressed(*key->UEKey))
			{
				key->State = 1;
				return (wchar_t)key->Code;
			}
		}
	}
	return -1;
}

bool Actors::ValidateWorld()
{
	UWorld* world = UWorld::Singleton();

	if (!IsValid(world) ||
        !IsValid(world->OwningGameInstance) ||
		!IsValid(world->OwningGameInstance->LocalPlayers[0]) ||
		!IsValid(world->OwningGameInstance->LocalPlayers[0]->PlayerController) ||
        !IsValid(world->OwningGameInstance->LocalPlayers[0]->PlayerController->AcknowledgedPawn) ||
        !IsValid(world->OwningGameInstance->LocalPlayers[0]->PlayerController->PlayerCameraManager) ||
        !world->GameState||
        !world->PersistentLevel ||
        !&world->PersistentLevel->Actors ||
        !world->PersistentLevel->Actors.Data()||
		!world->OwningGameInstance->LocalPlayers[0]->PlayerController->AcknowledgedPawn->IsA(APrimalCharacter::StaticClass())) 
	{
        return false;
    }

	APrimalCharacter* SelfPlayer = (APrimalCharacter*)world->OwningGameInstance->LocalPlayers[0]->PlayerController->AcknowledgedPawn;
	AShooterPlayerController* SPC = (AShooterPlayerController*)world->OwningGameInstance->LocalPlayers[0]->PlayerController;

	if (!IsValid(SPC))
		return false;

	if (!IsValid(SelfPlayer) || SelfPlayer == SPC->PhotoModeMarkerActor || SelfPlayer->bIsDead)
		return false;

	if (!IsValid(SPC->GetPlayerCharacter()) || SPC->GetPlayerCharacter()->bIsDead)
		return false;

    return true;
}

void Actors::ProcessActor(CurrentActor* Current, AActor* actor)
{
	bool IsPlayer = actor->IsA(AShooterCharacter::StaticClass());
	bool IsDino = actor->IsA(APrimalDinoCharacter::StaticClass());
	bool IsStructure = actor->IsA(APrimalStructure::StaticClass());
	bool IsItem = actor->IsA(ADroppedItem::StaticClass());
	bool IsProjectile = actor->IsA(AShooterProjectile::StaticClass());

	if (actor->IsA(ABossTeleporter_C::StaticClass()) && settings::miscStructure::BossTeleportEsp.Enabled)
	{
		ABossTeleporter_C* BossTeleport = (ABossTeleporter_C*)actor;
		LocalModule::CachedBossFightLocation = BossTeleport->RootComponent->RelativeLocation;
		return;
	}

	if (!settings::miscStructure::ProcessStructures.Enabled && IsStructure)
		return;

	if (!IsPlayer && !IsDino && !IsStructure && !IsItem && !IsProjectile)
		return;

	if (IsProjectile)
	{
		if (!settings::misc::BolaPackageLoaded && actor->GetName().find(Xors("ProjBola_C")) != std::string::npos)
			settings::misc::BolaPackageLoaded = true;

		return;
	}

	Current->Actor = actor;

	Current->Type == ActorType::Other;

	if (IsItem)
		Current->Type = ActorType::Item;

	if (IsPlayer)
	{
		Hooks::ProcessEvent.HookObject(actor);

		Current->Type = ActorType::Player;
		
		AShooterCharacter* Char = (AShooterCharacter*)actor;

		if (settings::user::KillFeed.Enabled && !Char->bIsDead)
			Hooks::PlayDying.HookObject(actor);
		
		if (settings::misc::DmgNumbers.Enabled)
		{
			int32 cachedHealth = actor->CustomActorFlags;
			int32 currentHealth = (int32)Char->ReplicatedCurrentHealth;

			if (cachedHealth > currentHealth)
			{
				int32 dmg = cachedHealth - currentHealth;
				UserModule::DrawDamageNumber(Current, globals::libs::StringLib->STATIC_Conv_IntToString(dmg));
			}

			actor->CustomActorFlags = currentHealth;
		}
	}

	if (IsDino) 
	{
		Hooks::ProcessEvent.HookObject(actor);

		Current->Type = ActorType::Dino;

		APrimalDinoCharacter* Dino = (APrimalDinoCharacter*)actor;

		if (settings::user::KillFeed.Enabled && settings::user::DinoKills.Enabled && !Dino->bIsDead)
			Hooks::PlayDying.HookObject(actor);

		if (settings::misc::DmgNumbers.Enabled)
		{
			int32 cachedHealth = actor->CustomActorFlags;
			int32 currentHealth = (int32)Dino->ReplicatedCurrentHealth;

			if (cachedHealth > currentHealth)
			{
				int32 dmg = cachedHealth - currentHealth;
				UserModule::DrawDamageNumber(Current, globals::libs::StringLib->STATIC_Conv_IntToString(dmg));
			}

			actor->CustomActorFlags = currentHealth;
		}
	}
   
	if (IsStructure)
	{
		Current->Type = ActorType::Structure;

		APrimalStructure* Structure = (APrimalStructure*)actor;

		if (!Structure->IsA(APrimalStructureItemContainer_SupplyCrate::StaticClass()) && settings::misc::DmgNumbers.Enabled)
		{
			int32 cachedHealth = actor->CustomActorFlags;
			int32 currentHealth = (int32)Structure->ReplicatedHealth;

			if (cachedHealth > currentHealth)
			{
				int32 dmg = cachedHealth - currentHealth;
				UserModule::DrawDamageNumber(Current, globals::libs::StringLib->STATIC_Conv_IntToString(dmg));
			}

			actor->CustomActorFlags = currentHealth;
		}
	}
}

void Actors::UpdateGlobals(UCanvas* Canvas)
{
	UWorld* world = *UWorld::GWorld;

	globals::local::PC = (AShooterPlayerController*)world->OwningGameInstance->LocalPlayers[0]->PlayerController;
	globals::local::CM = (AShooterPlayerCameraManager*)world->OwningGameInstance->LocalPlayers[0]->PlayerController->PlayerCameraManager;

	globals::local::LP = globals::local::PC->GetPlayerCharacter();
	globals::local::PINV = globals::local::LP->MyInventoryComponent;

	globals::local::AP = (APrimalCharacter*)globals::local::PC->AcknowledgedPawn;
	globals::local::WP = globals::local::LP->CurrentWeapon;

	globals::local::POS = globals::local::LP->K2_GetActorLocation();

	if (globals::local::AP->IsA(APrimalDinoCharacter::StaticClass()))
	{
		globals::local::DP = (APrimalDinoCharacter*)globals::local::PC->AcknowledgedPawn;
		globals::local::DINV = globals::local::DP->MyInventoryComponent;
	}
	else
	{
		globals::local::DP = nullptr;
		globals::local::DINV = nullptr;
	}
}

bool Actors::PWTS(FVector WorldLocation, FVector2D& ScreenLocation)
{
	FVector Pos;

	static uint64_t K2_Project = 0;
	if (!K2_Project)
		K2_Project = signature(Xors("48 83 EC 68 F2 41 0F 10 48 10")).GetPointer();

	auto Fn = reinterpret_cast<void* (__fastcall*)(UCanvas* _this, FVector* result, FVector* WorldLocation)>(K2_Project);
	spoof_call(Fn, globals::rendering::canvas, &Pos, &WorldLocation);

	if (Pos.Z == 0)
		return false;

	ScreenLocation = { Pos.X, Pos.Y };

	return true;
}

bool Images::ImageSupportInitialized = false;
CG::UMaterialInterface* Images::DefaultMaterial = nullptr;
CG::UMaterialInstanceDynamic* Images::MaterialInstance = nullptr;

void Images::InitializeImageSupport(UCanvas* Canvas)
{
	if (!Images::ImageSupportInitialized)
	{
		ImageSupportInitialized = true;
		DefaultMaterial = UObject::FindObject<UMaterialInterface>(Xors("MaterialInterface Engine.Default__MaterialInterface"));
		MaterialInstance = ((UKismetMaterialLibrary*)UKismetMaterialLibrary::StaticClass())->STATIC_CreateDynamicMaterialInstance(Canvas, DefaultMaterial, FName(), EMIDCreationFlags(0));
		Canvas->GradientTexture0 = (UTexture2D*)MaterialInstance;
	}
}
void Images::GuardTexture(UTexture2D* Texture)
{
	if (!MaterialInstance)
		return;

	static int32_t NameIndex = 0;
	FName name;
	name.Index = NameIndex;
	MaterialInstance->SetTextureParameterValue(name, Texture);
	NameIndex++;
}
UTexture2D* Images::ImportTextureFromFile(UCanvas* ContextObject, const wchar_t* FilePath)
{
	UTexture2D* NewTexture = ((UKismetRenderingLibrary*)UKismetRenderingLibrary::StaticClass())->STATIC_ImportFileAsTexture2D(ContextObject, FString(FilePath));
	GuardTexture(NewTexture);
	return NewTexture;
}
UTexture2D* Images::ImportTextureFromFile(UCanvas* ContextObject, const char* FilePath)
{
	std::string s(FilePath);
	return ImportTextureFromFile(ContextObject, std::wstring(s.begin(), s.end()).c_str());
}
UTexture2D* Images::ImportTexture(UCanvas* ContextObject, const unsigned char* Data, const int32_t DataSize)
{
	TArray<uint8_t> ImageData = {};
	ImageData.Reserve(DataSize);

	for (size_t s = 0; s < DataSize; ++s)
		ImageData.Add(static_cast<uint8_t>(Data[s]));

	UTexture2D* NewTexture = ((UKismetRenderingLibrary*)UKismetRenderingLibrary::StaticClass())->STATIC_ImportBufferAsTexture2D(ContextObject, ImageData);
	GuardTexture(NewTexture);
	return NewTexture;
}

FHitResult Util::GetTrace()
{
	FVector TraceStart = globals::local::LP->Mesh->GetBoneLocation(8);
	FRotator CamRotaion = globals::local::CM->GetCameraRotation();
	FVector TraceEnd = TraceStart + globals::libs::MathLib->STATIC_Conv_RotatorToVector(CamRotaion) * 10000;
	FHitResult Result;
	globals::libs::VictoryCore->STATIC_VTraceSingleBP(UWorld::Singleton(), &Result, TraceStart, TraceEnd, ECollisionChannel::ECC_GameTraceChannel1, 0, FName(), false, globals::local::LP, 0);
	return Result;
}

void Actors::JC() 
{
	int junkVariable1 = rand() % 1000;
	int junkVariable2 = rand() % 1000;
	int junkVariable3 = rand() % 1000;

	junkVariable1 += junkVariable2;
	junkVariable2 -= junkVariable3;
	junkVariable3 *= junkVariable1;

	for (int i = 0; i < junkVariable1; i++) 
		junkVariable2 += junkVariable3;
	

	switch (junkVariable3 % 3) 
	{
	case 0:
		junkVariable1 -= junkVariable2;
		break;
	case 1:
		junkVariable1 *= junkVariable3;
		break;
	case 2:
		junkVariable2 += junkVariable1;
		break;
	}

	if (junkVariable1 < junkVariable2) 
		junkVariable1 += junkVariable3;
	else 
		junkVariable2 -= junkVariable1;
}