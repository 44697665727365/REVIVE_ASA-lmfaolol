#pragma once
class Assets
{
	static bool AssetsInitialized;
	public:
	static void InitAssets();
	static UClass* LoadAsset(const std::string& path);
	static std::string GetAssetPath(UObject* object);
};

