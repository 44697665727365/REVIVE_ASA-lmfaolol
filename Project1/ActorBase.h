#pragma once
#include "pch.h"
#include "Globals.h"
#include "StructDefs.h"
#include "StructureModule.h"

namespace Actors 
{
	bool ValidateWorld();
	void ProcessActor(CurrentActor* Current, AActor* actor);
	void UpdateGlobals(UCanvas* Canvas);
	bool PWTS(FVector WorldLocation, FVector2D& ScreenLocation);
	void JC();
}

class Key
{
public:
	std::wstring Name;
	int Code;
	FKey* UEKey;
	int State;
	InputType Type;
	Key(int code, FKey* key, std::wstring name,InputType type) : Code(code), UEKey(key), State(-1), Name(name),Type(type) { };
};
namespace Keyboard
{
	extern std::unordered_map<int, const wchar_t*> KeyNameMap;
	extern std::unordered_map<int, Key*> KeyMap;
	extern std::vector<int> Keys;
	[[nodiscard]] bool Initialize();
	bool Uninitialize();
	const wchar_t* GetFKeyFromCode(int Code);
	[[nodiscard]] bool GetState(int Char, int Case);
	[[nodiscard]] bool MenuGetState(int Char, int Case);
	[[nodiscard]] int MenuGetLastPressedKey();
	void Reset();
	void ResetKeyStates();
	void EnableTextMode();
	void DisableTextMode();
	InputType GetInputType(int Code);
	const wchar_t GetLastKeyTextModeOnly(InputType TypeFlags);
}

namespace Images
{
	extern bool ImageSupportInitialized;
	extern UMaterialInterface* DefaultMaterial;
	extern UMaterialInstanceDynamic* MaterialInstance;
	void InitializeImageSupport(UCanvas* Canvas);
	void GuardTexture(UTexture2D* Texture);
	UTexture2D* ImportTextureFromFile(UCanvas* ContextObject, const wchar_t* FilePath);
	UTexture2D* ImportTextureFromFile(UCanvas* ContextObject, const char* FilePath);
	UTexture2D* ImportTexture(UCanvas* ContextObject, const unsigned char* Data, const int32_t DataSize);
}

namespace Util
{
	FHitResult GetTrace();
}