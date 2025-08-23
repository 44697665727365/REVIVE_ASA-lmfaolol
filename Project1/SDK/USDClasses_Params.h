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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function USDClasses.UsdAssetCache2.Reset
	 */
	struct UUsdAssetCache2_Reset_Params
	{	};

	/**
	 * Function USDClasses.UsdAssetCache2.RemoveAssetReference
	 */
	struct UUsdAssetCache2_RemoveAssetReference_Params
	{
	public:
		class UObject*                                             Asset;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             Referencer;                                              // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function USDClasses.UsdAssetCache2.RemoveAsset
	 */
	struct UUsdAssetCache2_RemoveAsset_Params
	{
	public:
		class FString                                              Hash;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function USDClasses.UsdAssetCache2.RemoveAllAssetReferences
	 */
	struct UUsdAssetCache2_RemoveAllAssetReferences_Params
	{
	public:
		class UObject*                                             Referencer;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function USDClasses.UsdAssetCache2.RefreshStorage
	 */
	struct UUsdAssetCache2_RefreshStorage_Params
	{	};

	/**
	 * Function USDClasses.UsdAssetCache2.IsAssetOwnedByCache
	 */
	struct UUsdAssetCache2_IsAssetOwnedByCache_Params
	{
	public:
		class FString                                              AssetPath;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function USDClasses.UsdAssetCache2.GetNumAssets
	 */
	struct UUsdAssetCache2_GetNumAssets_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function USDClasses.UsdAssetCache2.GetHashForAsset
	 */
	struct UUsdAssetCache2_GetHashForAsset_Params
	{
	public:
		class UObject*                                             Asset;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function USDClasses.UsdAssetCache2.GetCachedAsset
	 */
	struct UUsdAssetCache2_GetCachedAsset_Params
	{
	public:
		class FString                                              Hash;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function USDClasses.UsdAssetCache2.GetAllLoadedAssets
	 */
	struct UUsdAssetCache2_GetAllLoadedAssets_Params
	{
	public:
		TArray<class UObject*>                                     ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function USDClasses.UsdAssetCache2.GetAllCachedAssetPaths
	 */
	struct UUsdAssetCache2_GetAllCachedAssetPaths_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function USDClasses.UsdAssetCache2.GetAllAssetHashes
	 */
	struct UUsdAssetCache2_GetAllAssetHashes_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function USDClasses.UsdAssetCache2.CanRemoveAsset
	 */
	struct UUsdAssetCache2_CanRemoveAsset_Params
	{
	public:
		class FString                                              Hash;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function USDClasses.UsdAssetCache2.CacheAsset
	 */
	struct UUsdAssetCache2_CacheAsset_Params
	{
	public:
		class FString                                              Hash;                                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             Asset;                                                   // 0x0010(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             Referencer;                                              // 0x0018(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function USDClasses.UsdAssetCache2.AddAssetReference
	 */
	struct UUsdAssetCache2_AddAssetReference_Params
	{
	public:
		class UObject*                                             Asset;                                                   // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UObject*                                             Referencer;                                              // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
