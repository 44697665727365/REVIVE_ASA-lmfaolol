#include "pch.h"
#include "AssetLoader.h"
bool Assets::AssetsInitialized = false;

typedef void (*StaticLoadObject_t)(
    UClass* ObjectClass,
    UObject* InOuter,
    const wchar_t* InName,
    const wchar_t* Filename,
    unsigned int LoadFlags,
    UPackageMap* Sandbox,
    __int64 a7,
    void* InstancingContext);
StaticLoadObject_t StaticLoadObject = nullptr;

void Assets::InitAssets()
{
}

UClass* Assets::LoadAsset(const std::string& path)
{
    return nullptr;
}

std::string Assets::GetAssetPath(UObject* object)
{
    std::wstring path = globals::libs::VictoryCore->STATIC_GetObjectPathName(object).wc_str();
    return std::string(path.begin(), path.end());
}
