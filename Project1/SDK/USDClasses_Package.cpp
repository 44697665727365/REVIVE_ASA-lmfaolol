/**
 * Name: Ark_Survival_Ascended
 * Version: 0.1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUsdAssetCache.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUsdAssetCache::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class USDClasses.UsdAssetCache");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C71030
	 * 		Name   -> Function USDClasses.UsdAssetCache2.Reset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUsdAssetCache2::Reset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDClasses.UsdAssetCache2.Reset");
		
		UUsdAssetCache2_Reset_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C71F50
	 * 		Name   -> Function USDClasses.UsdAssetCache2.RemoveAssetReference
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Asset                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Referencer                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUsdAssetCache2::RemoveAssetReference(class UObject* Asset, class UObject* Referencer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDClasses.UsdAssetCache2.RemoveAssetReference");
		
		UUsdAssetCache2_RemoveAssetReference_Params params {};
		params.Asset = Asset;
		params.Referencer = Referencer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C728C0
	 * 		Name   -> Function USDClasses.UsdAssetCache2.RemoveAsset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Hash                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UUsdAssetCache2::RemoveAsset(const class FString& Hash)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDClasses.UsdAssetCache2.RemoveAsset");
		
		UUsdAssetCache2_RemoveAsset_Params params {};
		params.Hash = Hash;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C71CB0
	 * 		Name   -> Function USDClasses.UsdAssetCache2.RemoveAllAssetReferences
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Referencer                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUsdAssetCache2::RemoveAllAssetReferences(class UObject* Referencer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDClasses.UsdAssetCache2.RemoveAllAssetReferences");
		
		UUsdAssetCache2_RemoveAllAssetReferences_Params params {};
		params.Referencer = Referencer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C71010
	 * 		Name   -> Function USDClasses.UsdAssetCache2.RefreshStorage
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 */
	void UUsdAssetCache2::RefreshStorage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDClasses.UsdAssetCache2.RefreshStorage");
		
		UUsdAssetCache2_RefreshStorage_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C71570
	 * 		Name   -> Function USDClasses.UsdAssetCache2.IsAssetOwnedByCache
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class FString                                      AssetPath                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUsdAssetCache2::IsAssetOwnedByCache(const class FString& AssetPath)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDClasses.UsdAssetCache2.IsAssetOwnedByCache");
		
		UUsdAssetCache2_IsAssetOwnedByCache_Params params {};
		params.AssetPath = AssetPath;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C71540
	 * 		Name   -> Function USDClasses.UsdAssetCache2.GetNumAssets
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	int32_t UUsdAssetCache2::GetNumAssets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDClasses.UsdAssetCache2.GetNumAssets");
		
		UUsdAssetCache2_GetNumAssets_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C718B0
	 * 		Name   -> Function USDClasses.UsdAssetCache2.GetHashForAsset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		class UObject*                                     Asset                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUsdAssetCache2::GetHashForAsset(class UObject* Asset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDClasses.UsdAssetCache2.GetHashForAsset");
		
		UUsdAssetCache2_GetHashForAsset_Params params {};
		params.Asset = Asset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C727B0
	 * 		Name   -> Function USDClasses.UsdAssetCache2.GetCachedAsset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Hash                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UUsdAssetCache2::GetCachedAsset(const class FString& Hash)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDClasses.UsdAssetCache2.GetCachedAsset");
		
		UUsdAssetCache2_GetCachedAsset_Params params {};
		params.Hash = Hash;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C71310
	 * 		Name   -> Function USDClasses.UsdAssetCache2.GetAllLoadedAssets
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class UObject*> UUsdAssetCache2::GetAllLoadedAssets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDClasses.UsdAssetCache2.GetAllLoadedAssets");
		
		UUsdAssetCache2_GetAllLoadedAssets_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C71130
	 * 		Name   -> Function USDClasses.UsdAssetCache2.GetAllCachedAssetPaths
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class FString> UUsdAssetCache2::GetAllCachedAssetPaths()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDClasses.UsdAssetCache2.GetAllCachedAssetPaths");
		
		UUsdAssetCache2_GetAllCachedAssetPaths_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C71390
	 * 		Name   -> Function USDClasses.UsdAssetCache2.GetAllAssetHashes
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	TArray<class FString> UUsdAssetCache2::GetAllAssetHashes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDClasses.UsdAssetCache2.GetAllAssetHashes");
		
		UUsdAssetCache2_GetAllAssetHashes_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C729D0
	 * 		Name   -> Function USDClasses.UsdAssetCache2.CanRemoveAsset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Hash                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUsdAssetCache2::CanRemoveAsset(const class FString& Hash)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDClasses.UsdAssetCache2.CanRemoveAsset");
		
		UUsdAssetCache2_CanRemoveAsset_Params params {};
		params.Hash = Hash;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C72AE0
	 * 		Name   -> Function USDClasses.UsdAssetCache2.CacheAsset
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      Hash                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Asset                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Referencer                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UUsdAssetCache2::CacheAsset(const class FString& Hash, class UObject* Asset, class UObject* Referencer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDClasses.UsdAssetCache2.CacheAsset");
		
		UUsdAssetCache2_CacheAsset_Params params {};
		params.Hash = Hash;
		params.Asset = Asset;
		params.Referencer = Referencer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01C72380
	 * 		Name   -> Function USDClasses.UsdAssetCache2.AddAssetReference
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     Asset                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     Referencer                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUsdAssetCache2::AddAssetReference(class UObject* Asset, class UObject* Referencer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function USDClasses.UsdAssetCache2.AddAssetReference");
		
		UUsdAssetCache2_AddAssetReference_Params params {};
		params.Asset = Asset;
		params.Referencer = Referencer;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUsdAssetCache2.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUsdAssetCache2::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class USDClasses.UsdAssetCache2");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUsdAssetImportData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUsdAssetImportData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class USDClasses.UsdAssetImportData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUsdAnimSequenceAssetImportData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUsdAnimSequenceAssetImportData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class USDClasses.UsdAnimSequenceAssetImportData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUsdMeshAssetImportData.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUsdMeshAssetImportData::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class USDClasses.UsdMeshAssetImportData");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUsdProjectSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUsdProjectSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class USDClasses.UsdProjectSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUsdReferenceOptions.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUsdReferenceOptions::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class USDClasses.UsdReferenceOptions");
		return ptr;
	}

}


