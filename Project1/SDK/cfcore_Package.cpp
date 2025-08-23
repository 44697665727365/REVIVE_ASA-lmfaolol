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
	 * 		RVA    -> 0x013EBC10
	 * 		Name   -> Function cfcore.CFCoreBPLibrary.MakeUpdateModRequest
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int64_t                                            class_id                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      summary                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECFCoreMakrupType                                  description_type                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            primary_category_id                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int64_t>                                    game_category_ids                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               is_experimental                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FUpdateModRequest UCFCoreBPLibrary::STATIC_MakeUpdateModRequest(int64_t class_id, const class FString& Name, const class FString& summary, ECFCoreMakrupType description_type, const class FString& Description, int64_t primary_category_id, TArray<int64_t> game_category_ids, bool is_experimental)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreBPLibrary.MakeUpdateModRequest");
		
		UCFCoreBPLibrary_MakeUpdateModRequest_Params params {};
		params.class_id = class_id;
		params.Name = Name;
		params.summary = summary;
		params.description_type = description_type;
		params.Description = Description;
		params.primary_category_id = primary_category_id;
		params.game_category_ids = game_category_ids;
		params.is_experimental = is_experimental;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013ED480
	 * 		Name   -> Function cfcore.CFCoreBPLibrary.MakeSettingsFromProjectConfig
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 */
	struct FCFCoreSettings UCFCoreBPLibrary::STATIC_MakeSettingsFromProjectConfig()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreBPLibrary.MakeSettingsFromProjectConfig");
		
		UCFCoreBPLibrary_MakeSettingsFromProjectConfig_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013ECDE0
	 * 		Name   -> Function cfcore.CFCoreBPLibrary.MakeSettings
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      default_language                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            game_id                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      api_key                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      mods_directory                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      user_data_directory                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            max_concurrent_installations                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCFCoreSettings UCFCoreBPLibrary::STATIC_MakeSettings(const class FString& default_language, int64_t game_id, const class FString& api_key, const class FString& mods_directory, const class FString& user_data_directory, int32_t max_concurrent_installations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreBPLibrary.MakeSettings");
		
		UCFCoreBPLibrary_MakeSettings_Params params {};
		params.default_language = default_language;
		params.game_id = game_id;
		params.api_key = api_key;
		params.mods_directory = mods_directory;
		params.user_data_directory = user_data_directory;
		params.max_concurrent_installations = max_concurrent_installations;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013EC5C0
	 * 		Name   -> Function cfcore.CFCoreBPLibrary.MakeSearchModsFilter
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            class_id                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            category_id                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      game_version                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      search_filter                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECFCoreModsSearchSortField                         sort_field                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECFCoreSortOrder                                   sort_order                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECFCoreModLoaderType                               mod_loader_type                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            game_version_type_id                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCFCoreSearchModsFilter UCFCoreBPLibrary::STATIC_MakeSearchModsFilter(int32_t class_id, int32_t category_id, const class FString& game_version, const class FString& search_filter, ECFCoreModsSearchSortField sort_field, ECFCoreSortOrder sort_order, ECFCoreModLoaderType mod_loader_type, int32_t game_version_type_id)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreBPLibrary.MakeSearchModsFilter");
		
		UCFCoreBPLibrary_MakeSearchModsFilter_Params params {};
		params.class_id = class_id;
		params.category_id = category_id;
		params.game_version = game_version;
		params.search_filter = search_filter;
		params.sort_field = sort_field;
		params.sort_order = sort_order;
		params.mod_loader_type = mod_loader_type;
		params.game_version_type_id = game_version_type_id;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013EC4E0
	 * 		Name   -> Function cfcore.CFCoreBPLibrary.MakeGetCategoriesFilter
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            class_id                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCFCoreGetCategoriesFilter UCFCoreBPLibrary::STATIC_MakeGetCategoriesFilter(int32_t class_id)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreBPLibrary.MakeGetCategoriesFilter");
		
		UCFCoreBPLibrary_MakeGetCategoriesFilter_Params params {};
		params.class_id = class_id;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013EC3E0
	 * 		Name   -> Function cfcore.CFCoreBPLibrary.MakeExternalAuthAdditionalInfo
	 * 		Flags  -> (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		struct FDateTime                                   eulaAcceptTime                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FExternalAuthAdditionalInfo UCFCoreBPLibrary::STATIC_MakeExternalAuthAdditionalInfo(const struct FDateTime& eulaAcceptTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreBPLibrary.MakeExternalAuthAdditionalInfo");
		
		UCFCoreBPLibrary_MakeExternalAuthAdditionalInfo_Params params {};
		params.eulaAcceptTime = eulaAcceptTime;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013EBC10
	 * 		Name   -> Function cfcore.CFCoreBPLibrary.MakeCreateModRequest
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int64_t                                            class_id                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      summary                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECFCoreMakrupType                                  description_type                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Description                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            primary_category_id                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int64_t>                                    game_category_ids                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               is_experimental                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCreateModRequest UCFCoreBPLibrary::STATIC_MakeCreateModRequest(int64_t class_id, const class FString& Name, const class FString& summary, ECFCoreMakrupType description_type, const class FString& Description, int64_t primary_category_id, TArray<int64_t> game_category_ids, bool is_experimental)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreBPLibrary.MakeCreateModRequest");
		
		UCFCoreBPLibrary_MakeCreateModRequest_Params params {};
		params.class_id = class_id;
		params.Name = Name;
		params.summary = summary;
		params.description_type = description_type;
		params.Description = Description;
		params.primary_category_id = primary_category_id;
		params.game_category_ids = game_category_ids;
		params.is_experimental = is_experimental;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013EB560
	 * 		Name   -> Function cfcore.CFCoreBPLibrary.MakeCreateModFileRequest
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		ECFCoreChangelogMarkupType                         changelog_type                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      changelog                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Filename                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      DisplayName                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int64_t>                                    gameVersionIds                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		ECFCoreFileReleaseType                             releaseType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCreateModFileRequest UCFCoreBPLibrary::STATIC_MakeCreateModFileRequest(ECFCoreChangelogMarkupType changelog_type, const class FString& changelog, const class FString& Filename, const class FString& DisplayName, TArray<int64_t> gameVersionIds, ECFCoreFileReleaseType releaseType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreBPLibrary.MakeCreateModFileRequest");
		
		UCFCoreBPLibrary_MakeCreateModFileRequest_Params params {};
		params.changelog_type = changelog_type;
		params.changelog = changelog;
		params.Filename = Filename;
		params.DisplayName = DisplayName;
		params.gameVersionIds = gameVersionIds;
		params.releaseType = releaseType;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013EB300
	 * 		Name   -> Function cfcore.CFCoreBPLibrary.MakeAssureServerModsUpdatedParams
	 * 		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		TArray<int64_t>                                    modIds                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<int64_t>                                    devModIds                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	struct FAssureServerModsUpdatedParams UCFCoreBPLibrary::STATIC_MakeAssureServerModsUpdatedParams(TArray<int64_t> modIds, TArray<int64_t> devModIds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreBPLibrary.MakeAssureServerModsUpdatedParams");
		
		UCFCoreBPLibrary_MakeAssureServerModsUpdatedParams_Params params {};
		params.modIds = modIds;
		params.devModIds = devModIds;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013ECC50
	 * 		Name   -> Function cfcore.CFCoreBPLibrary.MakeApiRequestPagination
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            page_size                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCFCoreApiRequestPagination UCFCoreBPLibrary::STATIC_MakeApiRequestPagination(int32_t Index, int32_t page_size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreBPLibrary.MakeApiRequestPagination");
		
		UCFCoreBPLibrary_MakeApiRequestPagination_Params params {};
		params.Index = Index;
		params.page_size = page_size;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013EB0E0
	 * 		Name   -> Function cfcore.CFCoreBPLibrary.FormatFileSize
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int64_t                                            Bytes                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UCFCoreBPLibrary::STATIC_FormatFileSize(int64_t Bytes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreBPLibrary.FormatFileSize");
		
		UCFCoreBPLibrary_FormatFileSize_Params params {};
		params.Bytes = Bytes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013EAFD0
	 * 		Name   -> Function cfcore.CFCoreBPLibrary.BreakFileSize
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
	 * Parameters:
	 * 		int64_t                                            Bytes                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FCFCoreFileSize UCFCoreBPLibrary::STATIC_BreakFileSize(int64_t Bytes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreBPLibrary.BreakFileSize");
		
		UCFCoreBPLibrary_BreakFileSize_Params params {};
		params.Bytes = Bytes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCFCoreBPLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCFCoreBPLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class cfcore.CFCoreBPLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCFCoreEditorSettings.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCFCoreEditorSettings::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class cfcore.CFCoreEditorSettings");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F1430
	 * 		Name   -> Function cfcore.CFCoreSubsystem.UpdateMod
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            mod_id                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FUpdateModRequest                           update_mod_request                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      avatar_image_filename                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_success                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_error                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::UpdateMod(int64_t mod_id, const struct FUpdateModRequest& update_mod_request, const class FString& avatar_image_filename, const class FScriptDelegate& on_success, const class FScriptDelegate& on_error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.UpdateMod");
		
		UCFCoreSubsystem_UpdateMod_Params params {};
		params.mod_id = mod_id;
		params.update_mod_request = update_mod_request;
		params.avatar_image_filename = avatar_image_filename;
		params.on_success = on_success;
		params.on_error = on_error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F65C0
	 * 		Name   -> Function cfcore.CFCoreSubsystem.Unitialize
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              OnUninitialized                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnError                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::Unitialize(const class FScriptDelegate& OnUninitialized, const class FScriptDelegate& OnError)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.Unitialize");
		
		UCFCoreSubsystem_Unitialize_Params params {};
		params.OnUninitialized = OnUninitialized;
		params.OnError = OnError;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F2F70
	 * 		Name   -> Function cfcore.CFCoreSubsystem.UninstallMod
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            mod_id                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_uninstalled                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_error                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::UninstallMod(int64_t mod_id, const class FScriptDelegate& on_uninstalled, const class FScriptDelegate& on_error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.UninstallMod");
		
		UCFCoreSubsystem_UninstallMod_Params params {};
		params.mod_id = mod_id;
		params.on_uninstalled = on_uninstalled;
		params.on_error = on_error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F3700
	 * 		Name   -> Function cfcore.CFCoreSubsystem.SynchronizeWithServer
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              on_success                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_error                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::SynchronizeWithServer(const class FScriptDelegate& on_success, const class FScriptDelegate& on_error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.SynchronizeWithServer");
		
		UCFCoreSubsystem_SynchronizeWithServer_Params params {};
		params.on_success = on_success;
		params.on_error = on_error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F23A0
	 * 		Name   -> Function cfcore.CFCoreSubsystem.SendSecurityCode
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      email                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_success                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_error                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::SendSecurityCode(const class FString& email, const class FScriptDelegate& on_success, const class FScriptDelegate& on_error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.SendSecurityCode");
		
		UCFCoreSubsystem_SendSecurityCode_Params params {};
		params.email = email;
		params.on_success = on_success;
		params.on_error = on_error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F1B80
	 * 		Name   -> Function cfcore.CFCoreSubsystem.Logout
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              on_success                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_error                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::Logout(const class FScriptDelegate& on_success, const class FScriptDelegate& on_error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.Logout");
		
		UCFCoreSubsystem_Logout_Params params {};
		params.on_success = on_success;
		params.on_error = on_error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F2790
	 * 		Name   -> Function cfcore.CFCoreSubsystem.IsAuthenticated
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              on_is_auth                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::IsAuthenticated(const class FScriptDelegate& on_is_auth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.IsAuthenticated");
		
		UCFCoreSubsystem_IsAuthenticated_Params params {};
		params.on_is_auth = on_is_auth;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F33D0
	 * 		Name   -> Function cfcore.CFCoreSubsystem.InstallMod
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCFCoreMod                                  mod                                                        (Parm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_progress                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_installed                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_error                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::InstallMod(const struct FCFCoreMod& mod, const class FScriptDelegate& on_progress, const class FScriptDelegate& on_installed, const class FScriptDelegate& on_error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.InstallMod");
		
		UCFCoreSubsystem_InstallMod_Params params {};
		params.mod = mod;
		params.on_progress = on_progress;
		params.on_installed = on_installed;
		params.on_error = on_error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F6860
	 * 		Name   -> Function cfcore.CFCoreSubsystem.Initialize
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCFCoreSettings                             Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnInitialized                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnError                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::Initialize(const struct FCFCoreSettings& Settings, const class FScriptDelegate& OnInitialized, const class FScriptDelegate& OnError)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.Initialize");
		
		UCFCoreSubsystem_Initialize_Params params {};
		params.Settings = Settings;
		params.OnInitialized = OnInitialized;
		params.OnError = OnError;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F38B0
	 * 		Name   -> Function cfcore.CFCoreSubsystem.GetModsDirInfo
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              OnModsDirInfo                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnError                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::GetModsDirInfo(const class FScriptDelegate& OnModsDirInfo, const class FScriptDelegate& OnError)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.GetModsDirInfo");
		
		UCFCoreSubsystem_GetModsDirInfo_Params params {};
		params.OnModsDirInfo = OnModsDirInfo;
		params.OnError = OnError;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F3A50
	 * 		Name   -> Function cfcore.CFCoreSubsystem.GetInstalledMods
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              on_installed_mods                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_error                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::GetInstalledMods(const class FScriptDelegate& on_installed_mods, const class FScriptDelegate& on_error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.GetInstalledMods");
		
		UCFCoreSubsystem_GetInstalledMods_Params params {};
		params.on_installed_mods = on_installed_mods;
		params.on_error = on_error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F25F0
	 * 		Name   -> Function cfcore.CFCoreSubsystem.GetAuthTerms
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              on_success                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_error                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::GetAuthTerms(const class FScriptDelegate& on_success, const class FScriptDelegate& on_error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.GetAuthTerms");
		
		UCFCoreSubsystem_GetAuthTerms_Params params {};
		params.on_success = on_success;
		params.on_error = on_error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F1D20
	 * 		Name   -> Function cfcore.CFCoreSubsystem.GenerateAuthTokenByExternalProvider
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		ECFCoreExternalAuthProvider                        provider                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      external_token                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FExternalAuthAdditionalInfo                 additional_info                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_success                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_error                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::GenerateAuthTokenByExternalProvider(ECFCoreExternalAuthProvider provider, const class FString& external_token, const struct FExternalAuthAdditionalInfo& additional_info, const class FScriptDelegate& on_success, const class FScriptDelegate& on_error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.GenerateAuthTokenByExternalProvider");
		
		UCFCoreSubsystem_GenerateAuthTokenByExternalProvider_Params params {};
		params.provider = provider;
		params.external_token = external_token;
		params.additional_info = additional_info;
		params.on_success = on_success;
		params.on_error = on_error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F20C0
	 * 		Name   -> Function cfcore.CFCoreSubsystem.GenerateAuthToken
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class FString                                      email                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            security_code                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_success                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_error                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::GenerateAuthToken(const class FString& email, int32_t security_code, const class FScriptDelegate& on_success, const class FScriptDelegate& on_error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.GenerateAuthToken");
		
		UCFCoreSubsystem_GenerateAuthToken_Params params {};
		params.email = email;
		params.security_code = security_code;
		params.on_success = on_success;
		params.on_error = on_error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F0EA0
	 * 		Name   -> Function cfcore.CFCoreSubsystem.CreateModFile
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            modId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCreateModFileRequest                       CreateModFileRequest                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      LocalFilenameToUpload                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnCreateModFileRequestId                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnProgress                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnError                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::CreateModFile(int64_t modId, const struct FCreateModFileRequest& CreateModFileRequest, const class FString& LocalFilenameToUpload, const class FScriptDelegate& OnCreateModFileRequestId, const class FScriptDelegate& OnProgress, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnError)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.CreateModFile");
		
		UCFCoreSubsystem_CreateModFile_Params params {};
		params.modId = modId;
		params.CreateModFileRequest = CreateModFileRequest;
		params.LocalFilenameToUpload = LocalFilenameToUpload;
		params.OnCreateModFileRequestId = OnCreateModFileRequestId;
		params.OnProgress = OnProgress;
		params.OnSuccess = OnSuccess;
		params.OnError = OnError;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F1820
	 * 		Name   -> Function cfcore.CFCoreSubsystem.CreateMod
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCreateModRequest                           create_mod_request                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FString                                      avatar_image_filename                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_success                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_error                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::CreateMod(const struct FCreateModRequest& create_mod_request, const class FString& avatar_image_filename, const class FScriptDelegate& on_success, const class FScriptDelegate& on_error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.CreateMod");
		
		UCFCoreSubsystem_CreateMod_Params params {};
		params.create_mod_request = create_mod_request;
		params.avatar_image_filename = avatar_image_filename;
		params.on_success = on_success;
		params.on_error = on_error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F08E0
	 * 		Name   -> Function cfcore.CFCoreSubsystem.CreateCookedModFile
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            modId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            SourceFileId                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FCreateCookedModFileRequest                 CreateCookedModFileRequest                                 (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      LocalFilenameToUpload                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnCreateModFileRequestId                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnProgress                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnSuccess                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnError                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::CreateCookedModFile(int64_t modId, int64_t SourceFileId, const struct FCreateCookedModFileRequest& CreateCookedModFileRequest, const class FString& LocalFilenameToUpload, const class FScriptDelegate& OnCreateModFileRequestId, const class FScriptDelegate& OnProgress, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnError)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.CreateCookedModFile");
		
		UCFCoreSubsystem_CreateCookedModFile_Params params {};
		params.modId = modId;
		params.SourceFileId = SourceFileId;
		params.CreateCookedModFileRequest = CreateCookedModFileRequest;
		params.LocalFilenameToUpload = LocalFilenameToUpload;
		params.OnCreateModFileRequestId = OnCreateModFileRequestId;
		params.OnProgress = OnProgress;
		params.OnSuccess = OnSuccess;
		params.OnError = OnError;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F31A0
	 * 		Name   -> Function cfcore.CFCoreSubsystem.CancelInstallation
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            mod_id                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_success                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_error                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::CancelInstallation(int64_t mod_id, const class FScriptDelegate& on_success, const class FScriptDelegate& on_error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.CancelInstallation");
		
		UCFCoreSubsystem_CancelInstallation_Params params {};
		params.mod_id = mod_id;
		params.on_success = on_success;
		params.on_error = on_error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F2C00
	 * 		Name   -> Function cfcore.CFCoreSubsystem.AssureServerModsUpdated
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FAssureServerModsUpdatedParams              Params                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnProgress                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnUpdated                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnError                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::AssureServerModsUpdated(const struct FAssureServerModsUpdatedParams& Params, const class FScriptDelegate& OnProgress, const class FScriptDelegate& OnUpdated, const class FScriptDelegate& OnError)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.AssureServerModsUpdated");
		
		UCFCoreSubsystem_AssureServerModsUpdated_Params params {};
		params.Params = Params;
		params.OnProgress = OnProgress;
		params.OnUpdated = OnUpdated;
		params.OnError = OnError;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F28A0
	 * 		Name   -> Function cfcore.CFCoreSubsystem.AssureClientModsUpdated
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int64_t>                                    ServerFileIds                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnProgress                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnUpdated                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnError                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::AssureClientModsUpdated(TArray<int64_t> ServerFileIds, const class FScriptDelegate& OnProgress, const class FScriptDelegate& OnUpdated, const class FScriptDelegate& OnError)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.AssureClientModsUpdated");
		
		UCFCoreSubsystem_AssureClientModsUpdated_Params params {};
		params.ServerFileIds = ServerFileIds;
		params.OnProgress = OnProgress;
		params.OnUpdated = OnUpdated;
		params.OnError = OnError;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F47D0
	 * 		Name   -> Function cfcore.CFCoreSubsystem.ApiUpdateThumbsUp
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            modId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECFCoreThumbsUpDirection                           Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_success                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_error                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::ApiUpdateThumbsUp(int64_t modId, ECFCoreThumbsUpDirection Direction, const class FScriptDelegate& on_success, const class FScriptDelegate& on_error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.ApiUpdateThumbsUp");
		
		UCFCoreSubsystem_ApiUpdateThumbsUp_Params params {};
		params.modId = modId;
		params.Direction = Direction;
		params.on_success = on_success;
		params.on_error = on_error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F3C00
	 * 		Name   -> Function cfcore.CFCoreSubsystem.ApiUnblockMods
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FUnblockModsRequest                         Request                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnResult                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnError                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::ApiUnblockMods(const struct FUnblockModsRequest& Request, const class FScriptDelegate& OnResult, const class FScriptDelegate& OnError)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.ApiUnblockMods");
		
		UCFCoreSubsystem_ApiUnblockMods_Params params {};
		params.Request = Request;
		params.OnResult = OnResult;
		params.OnError = OnError;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F5A60
	 * 		Name   -> Function cfcore.CFCoreSubsystem.ApiSearchMods
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCFCoreSearchModsFilter                     Filter                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		struct FCFCoreApiRequestPagination                 pagination                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_results                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_error                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::ApiSearchMods(const struct FCFCoreSearchModsFilter& Filter, const struct FCFCoreApiRequestPagination& pagination, const class FScriptDelegate& on_results, const class FScriptDelegate& on_error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.ApiSearchMods");
		
		UCFCoreSubsystem_ApiSearchMods_Params params {};
		params.Filter = Filter;
		params.pagination = pagination;
		params.on_results = on_results;
		params.on_error = on_error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F4270
	 * 		Name   -> Function cfcore.CFCoreSubsystem.ApiReportMod
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            modId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int64_t                                            reasonId                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      report                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_reasons                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_error                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::ApiReportMod(int64_t modId, int64_t reasonId, const class FString& report, const class FScriptDelegate& on_reasons, const class FScriptDelegate& on_error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.ApiReportMod");
		
		UCFCoreSubsystem_ApiReportMod_Params params {};
		params.modId = modId;
		params.reasonId = reasonId;
		params.report = report;
		params.on_reasons = on_reasons;
		params.on_error = on_error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F6260
	 * 		Name   -> Function cfcore.CFCoreSubsystem.ApiGetVersionTypes
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              on_results                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_error                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::ApiGetVersionTypes(const class FScriptDelegate& on_results, const class FScriptDelegate& on_error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.ApiGetVersionTypes");
		
		UCFCoreSubsystem_ApiGetVersionTypes_Params params {};
		params.on_results = on_results;
		params.on_error = on_error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F60B0
	 * 		Name   -> Function cfcore.CFCoreSubsystem.ApiGetVersions
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              on_results                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_error                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::ApiGetVersions(const class FScriptDelegate& on_results, const class FScriptDelegate& on_error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.ApiGetVersions");
		
		UCFCoreSubsystem_ApiGetVersions_Params params {};
		params.on_results = on_results;
		params.on_error = on_error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F4620
	 * 		Name   -> Function cfcore.CFCoreSubsystem.ApiGetReportingReasons
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              on_results                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_error                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::ApiGetReportingReasons(const class FScriptDelegate& on_results, const class FScriptDelegate& on_error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.ApiGetReportingReasons");
		
		UCFCoreSubsystem_ApiGetReportingReasons_Params params {};
		params.on_results = on_results;
		params.on_error = on_error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F4A90
	 * 		Name   -> Function cfcore.CFCoreSubsystem.ApiGetMyThumbsUp
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              on_results                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_error                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::ApiGetMyThumbsUp(const class FScriptDelegate& on_results, const class FScriptDelegate& on_error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.ApiGetMyThumbsUp");
		
		UCFCoreSubsystem_ApiGetMyThumbsUp_Params params {};
		params.on_results = on_results;
		params.on_error = on_error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F4C40
	 * 		Name   -> Function cfcore.CFCoreSubsystem.ApiGetMyMods
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              on_results                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_error                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::ApiGetMyMods(const class FScriptDelegate& on_results, const class FScriptDelegate& on_error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.ApiGetMyMods");
		
		UCFCoreSubsystem_ApiGetMyMods_Params params {};
		params.on_results = on_results;
		params.on_error = on_error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F5840
	 * 		Name   -> Function cfcore.CFCoreSubsystem.ApiGetMods
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int64_t>                                    modIds                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_results                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_error                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::ApiGetMods(TArray<int64_t> modIds, const class FScriptDelegate& on_results, const class FScriptDelegate& on_error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.ApiGetMods");
		
		UCFCoreSubsystem_ApiGetMods_Params params {};
		params.modIds = modIds;
		params.on_results = on_results;
		params.on_error = on_error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F53C0
	 * 		Name   -> Function cfcore.CFCoreSubsystem.ApiGetModDescription
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            modId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_mod_desc                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_error                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::ApiGetModDescription(int64_t modId, const class FScriptDelegate& on_mod_desc, const class FScriptDelegate& on_error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.ApiGetModDescription");
		
		UCFCoreSubsystem_ApiGetModDescription_Params params {};
		params.modId = modId;
		params.on_mod_desc = on_mod_desc;
		params.on_error = on_error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F5600
	 * 		Name   -> Function cfcore.CFCoreSubsystem.ApiGetMod
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		int64_t                                            modId                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_mod                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_error                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::ApiGetMod(int64_t modId, const class FScriptDelegate& on_mod, const class FScriptDelegate& on_error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.ApiGetMod");
		
		UCFCoreSubsystem_ApiGetMod_Params params {};
		params.modId = modId;
		params.on_mod = on_mod;
		params.on_error = on_error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F4DF0
	 * 		Name   -> Function cfcore.CFCoreSubsystem.ApiGetMe
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              on_results                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_error                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::ApiGetMe(const class FScriptDelegate& on_results, const class FScriptDelegate& on_error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.ApiGetMe");
		
		UCFCoreSubsystem_ApiGetMe_Params params {};
		params.on_results = on_results;
		params.on_error = on_error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F6410
	 * 		Name   -> Function cfcore.CFCoreSubsystem.ApiGetGame
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              on_game                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_error                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::ApiGetGame(const class FScriptDelegate& on_game, const class FScriptDelegate& on_error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.ApiGetGame");
		
		UCFCoreSubsystem_ApiGetGame_Params params {};
		params.on_game = on_game;
		params.on_error = on_error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F5160
	 * 		Name   -> Function cfcore.CFCoreSubsystem.ApiGetFiles
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		TArray<int64_t>                                    fileIds                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnResults                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnError                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::ApiGetFiles(TArray<int64_t> fileIds, const class FScriptDelegate& OnResults, const class FScriptDelegate& OnError)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.ApiGetFiles");
		
		UCFCoreSubsystem_ApiGetFiles_Params params {};
		params.fileIds = fileIds;
		params.OnResults = OnResults;
		params.OnError = OnError;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F5E70
	 * 		Name   -> Function cfcore.CFCoreSubsystem.ApiGetCategories
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FCFCoreGetCategoriesFilter                  Filter                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_results                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_error                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::ApiGetCategories(const struct FCFCoreGetCategoriesFilter& Filter, const class FScriptDelegate& on_results, const class FScriptDelegate& on_error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.ApiGetCategories");
		
		UCFCoreSubsystem_ApiGetCategories_Params params {};
		params.Filter = Filter;
		params.on_results = on_results;
		params.on_error = on_error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F3F10
	 * 		Name   -> Function cfcore.CFCoreSubsystem.ApiGetBlockedModsDetails
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              on_result                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_error                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::ApiGetBlockedModsDetails(const class FScriptDelegate& on_result, const class FScriptDelegate& on_error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.ApiGetBlockedModsDetails");
		
		UCFCoreSubsystem_ApiGetBlockedModsDetails_Params params {};
		params.on_result = on_result;
		params.on_error = on_error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F4FA0
	 * 		Name   -> Function cfcore.CFCoreSubsystem.ApiGetActiveCookingVersion
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              OnVersion                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              OnError                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::ApiGetActiveCookingVersion(const class FScriptDelegate& OnVersion, const class FScriptDelegate& OnError)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.ApiGetActiveCookingVersion");
		
		UCFCoreSubsystem_ApiGetActiveCookingVersion_Params params {};
		params.OnVersion = OnVersion;
		params.OnError = OnError;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x013F40C0
	 * 		Name   -> Function cfcore.CFCoreSubsystem.ApiGenerateTempToken
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class FScriptDelegate                              on_result                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FScriptDelegate                              on_error                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCFCoreSubsystem::ApiGenerateTempToken(const class FScriptDelegate& on_result, const class FScriptDelegate& on_error)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function cfcore.CFCoreSubsystem.ApiGenerateTempToken");
		
		UCFCoreSubsystem_ApiGenerateTempToken_Params params {};
		params.on_result = on_result;
		params.on_error = on_error;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCFCoreSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCFCoreSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class cfcore.CFCoreSubsystem");
		return ptr;
	}

}


