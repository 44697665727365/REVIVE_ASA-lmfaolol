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
	 * Function cfcore.CFCoreBPLibrary.MakeUpdateModRequest
	 */
	struct UCFCoreBPLibrary_MakeUpdateModRequest_Params
	{
	public:
		int64_t                                                    class_id;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              summary;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECFCoreMakrupType                                          description_type;                                        // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_UEL2[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Description;                                             // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    primary_category_id;                                     // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<int64_t>                                            game_category_ids;                                       // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       is_experimental;                                         // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HQ8C[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FUpdateModRequest                                   ReturnValue;                                             // 0x0060(0x0060)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreBPLibrary.MakeSettingsFromProjectConfig
	 */
	struct UCFCoreBPLibrary_MakeSettingsFromProjectConfig_Params
	{
	public:
		struct FCFCoreSettings                                     ReturnValue;                                             // 0x0000(0x0068)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreBPLibrary.MakeSettings
	 */
	struct UCFCoreBPLibrary_MakeSettings_Params
	{
	public:
		class FString                                              default_language;                                        // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    game_id;                                                 // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              api_key;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              mods_directory;                                          // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              user_data_directory;                                     // 0x0038(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    max_concurrent_installations;                            // 0x0048(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_HAW3[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCFCoreSettings                                     ReturnValue;                                             // 0x0050(0x0068)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreBPLibrary.MakeSearchModsFilter
	 */
	struct UCFCoreBPLibrary_MakeSearchModsFilter_Params
	{
	public:
		int32_t                                                    class_id;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    category_id;                                             // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              game_version;                                            // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              search_filter;                                           // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECFCoreModsSearchSortField                                 sort_field;                                              // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECFCoreSortOrder                                           sort_order;                                              // 0x0029(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECFCoreModLoaderType                                       mod_loader_type;                                         // 0x002A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_K3TK[0x1];                                   // 0x002B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    game_version_type_id;                                    // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCFCoreSearchModsFilter                             ReturnValue;                                             // 0x0030(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreBPLibrary.MakeGetCategoriesFilter
	 */
	struct UCFCoreBPLibrary_MakeGetCategoriesFilter_Params
	{
	public:
		int32_t                                                    class_id;                                                // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCFCoreGetCategoriesFilter                          ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreBPLibrary.MakeExternalAuthAdditionalInfo
	 */
	struct UCFCoreBPLibrary_MakeExternalAuthAdditionalInfo_Params
	{
	public:
		struct FDateTime                                           eulaAcceptTime;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FExternalAuthAdditionalInfo                         ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreBPLibrary.MakeCreateModRequest
	 */
	struct UCFCoreBPLibrary_MakeCreateModRequest_Params
	{
	public:
		int64_t                                                    class_id;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Name;                                                    // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              summary;                                                 // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECFCoreMakrupType                                          description_type;                                        // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_FVUW[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              Description;                                             // 0x0030(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    primary_category_id;                                     // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<int64_t>                                            game_category_ids;                                       // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       is_experimental;                                         // 0x0058(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZAMA[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCreateModRequest                                   ReturnValue;                                             // 0x0060(0x0060)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreBPLibrary.MakeCreateModFileRequest
	 */
	struct UCFCoreBPLibrary_MakeCreateModFileRequest_Params
	{
	public:
		ECFCoreChangelogMarkupType                                 changelog_type;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GL9L[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              changelog;                                               // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Filename;                                                // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              DisplayName;                                             // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<int64_t>                                            gameVersionIds;                                          // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		ECFCoreFileReleaseType                                     releaseType;                                             // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IXAQ[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FCreateModFileRequest                               ReturnValue;                                             // 0x0050(0x0058)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreBPLibrary.MakeAssureServerModsUpdatedParams
	 */
	struct UCFCoreBPLibrary_MakeAssureServerModsUpdatedParams_Params
	{
	public:
		TArray<int64_t>                                            modIds;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<int64_t>                                            devModIds;                                               // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FAssureServerModsUpdatedParams                      ReturnValue;                                             // 0x0020(0x0020)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreBPLibrary.MakeApiRequestPagination
	 */
	struct UCFCoreBPLibrary_MakeApiRequestPagination_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    page_size;                                               // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCFCoreApiRequestPagination                         ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreBPLibrary.FormatFileSize
	 */
	struct UCFCoreBPLibrary_FormatFileSize_Params
	{
	public:
		int64_t                                                    Bytes;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreBPLibrary.BreakFileSize
	 */
	struct UCFCoreBPLibrary_BreakFileSize_Params
	{
	public:
		int64_t                                                    Bytes;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCFCoreFileSize                                     ReturnValue;                                             // 0x0008(0x000C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.UpdateMod
	 */
	struct UCFCoreSubsystem_UpdateMod_Params
	{
	public:
		int64_t                                                    mod_id;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FUpdateModRequest                                   update_mod_request;                                      // 0x0008(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              avatar_image_filename;                                   // 0x0068(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_success;                                              // 0x0078(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_error;                                                // 0x0088(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.Unitialize
	 */
	struct UCFCoreSubsystem_Unitialize_Params
	{
	public:
		class FScriptDelegate                                      OnUninitialized;                                         // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnError;                                                 // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.UninstallMod
	 */
	struct UCFCoreSubsystem_UninstallMod_Params
	{
	public:
		int64_t                                                    mod_id;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_uninstalled;                                          // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_error;                                                // 0x0018(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.SynchronizeWithServer
	 */
	struct UCFCoreSubsystem_SynchronizeWithServer_Params
	{
	public:
		class FScriptDelegate                                      on_success;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_error;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.SendSecurityCode
	 */
	struct UCFCoreSubsystem_SendSecurityCode_Params
	{
	public:
		class FString                                              email;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_success;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_error;                                                // 0x0020(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.Logout
	 */
	struct UCFCoreSubsystem_Logout_Params
	{
	public:
		class FScriptDelegate                                      on_success;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_error;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.IsAuthenticated
	 */
	struct UCFCoreSubsystem_IsAuthenticated_Params
	{
	public:
		class FScriptDelegate                                      on_is_auth;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.InstallMod
	 */
	struct UCFCoreSubsystem_InstallMod_Params
	{
	public:
		struct FCFCoreMod                                          mod;                                                     // 0x0000(0x0190)  (Parm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_progress;                                             // 0x0190(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_installed;                                            // 0x01A0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_error;                                                // 0x01B0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.Initialize
	 */
	struct UCFCoreSubsystem_Initialize_Params
	{
	public:
		struct FCFCoreSettings                                     Settings;                                                // 0x0000(0x0068)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnInitialized;                                           // 0x0068(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnError;                                                 // 0x0078(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.GetModsDirInfo
	 */
	struct UCFCoreSubsystem_GetModsDirInfo_Params
	{
	public:
		class FScriptDelegate                                      OnModsDirInfo;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnError;                                                 // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.GetInstalledMods
	 */
	struct UCFCoreSubsystem_GetInstalledMods_Params
	{
	public:
		class FScriptDelegate                                      on_installed_mods;                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_error;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.GetAuthTerms
	 */
	struct UCFCoreSubsystem_GetAuthTerms_Params
	{
	public:
		class FScriptDelegate                                      on_success;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_error;                                                // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.GenerateAuthTokenByExternalProvider
	 */
	struct UCFCoreSubsystem_GenerateAuthTokenByExternalProvider_Params
	{
	public:
		ECFCoreExternalAuthProvider                                provider;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0TA6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              external_token;                                          // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FExternalAuthAdditionalInfo                         additional_info;                                         // 0x0018(0x0018)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_success;                                              // 0x0030(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_error;                                                // 0x0040(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.GenerateAuthToken
	 */
	struct UCFCoreSubsystem_GenerateAuthToken_Params
	{
	public:
		class FString                                              email;                                                   // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    security_code;                                           // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_success;                                              // 0x0014(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_error;                                                // 0x0024(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.CreateModFile
	 */
	struct UCFCoreSubsystem_CreateModFile_Params
	{
	public:
		int64_t                                                    modId;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCreateModFileRequest                               CreateModFileRequest;                                    // 0x0008(0x0058)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              LocalFilenameToUpload;                                   // 0x0060(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnCreateModFileRequestId;                                // 0x0070(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnProgress;                                              // 0x0080(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0090(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnError;                                                 // 0x00A0(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.CreateMod
	 */
	struct UCFCoreSubsystem_CreateMod_Params
	{
	public:
		struct FCreateModRequest                                   create_mod_request;                                      // 0x0000(0x0060)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              avatar_image_filename;                                   // 0x0060(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_success;                                              // 0x0070(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_error;                                                // 0x0080(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.CreateCookedModFile
	 */
	struct UCFCoreSubsystem_CreateCookedModFile_Params
	{
	public:
		int64_t                                                    modId;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    SourceFileId;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCreateCookedModFileRequest                         CreateCookedModFileRequest;                              // 0x0010(0x0001)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_SIVZ[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              LocalFilenameToUpload;                                   // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnCreateModFileRequestId;                                // 0x0028(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnProgress;                                              // 0x0038(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnSuccess;                                               // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnError;                                                 // 0x0058(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.CancelInstallation
	 */
	struct UCFCoreSubsystem_CancelInstallation_Params
	{
	public:
		int64_t                                                    mod_id;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_success;                                              // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_error;                                                // 0x0018(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.AssureServerModsUpdated
	 */
	struct UCFCoreSubsystem_AssureServerModsUpdated_Params
	{
	public:
		struct FAssureServerModsUpdatedParams                      Params;                                                  // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnProgress;                                              // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnUpdated;                                               // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnError;                                                 // 0x0040(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.AssureClientModsUpdated
	 */
	struct UCFCoreSubsystem_AssureClientModsUpdated_Params
	{
	public:
		TArray<int64_t>                                            ServerFileIds;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnProgress;                                              // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnUpdated;                                               // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnError;                                                 // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.ApiUpdateThumbsUp
	 */
	struct UCFCoreSubsystem_ApiUpdateThumbsUp_Params
	{
	public:
		int64_t                                                    modId;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECFCoreThumbsUpDirection                                   Direction;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_J7Q0[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FScriptDelegate                                      on_success;                                              // 0x000C(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_error;                                                // 0x001C(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.ApiUnblockMods
	 */
	struct UCFCoreSubsystem_ApiUnblockMods_Params
	{
	public:
		struct FUnblockModsRequest                                 Request;                                                 // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnResult;                                                // 0x0040(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnError;                                                 // 0x0050(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.ApiSearchMods
	 */
	struct UCFCoreSubsystem_ApiSearchMods_Params
	{
	public:
		struct FCFCoreSearchModsFilter                             Filter;                                                  // 0x0000(0x0030)  (Parm, NativeAccessSpecifierPublic)
		struct FCFCoreApiRequestPagination                         pagination;                                              // 0x0030(0x0008)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_results;                                              // 0x0038(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_error;                                                // 0x0048(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.ApiReportMod
	 */
	struct UCFCoreSubsystem_ApiReportMod_Params
	{
	public:
		int64_t                                                    modId;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    reasonId;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              report;                                                  // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_reasons;                                              // 0x0020(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_error;                                                // 0x0030(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.ApiGetVersionTypes
	 */
	struct UCFCoreSubsystem_ApiGetVersionTypes_Params
	{
	public:
		class FScriptDelegate                                      on_results;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_error;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.ApiGetVersions
	 */
	struct UCFCoreSubsystem_ApiGetVersions_Params
	{
	public:
		class FScriptDelegate                                      on_results;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_error;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.ApiGetReportingReasons
	 */
	struct UCFCoreSubsystem_ApiGetReportingReasons_Params
	{
	public:
		class FScriptDelegate                                      on_results;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_error;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.ApiGetMyThumbsUp
	 */
	struct UCFCoreSubsystem_ApiGetMyThumbsUp_Params
	{
	public:
		class FScriptDelegate                                      on_results;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_error;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.ApiGetMyMods
	 */
	struct UCFCoreSubsystem_ApiGetMyMods_Params
	{
	public:
		class FScriptDelegate                                      on_results;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_error;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.ApiGetMods
	 */
	struct UCFCoreSubsystem_ApiGetMods_Params
	{
	public:
		TArray<int64_t>                                            modIds;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_results;                                              // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_error;                                                // 0x0020(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.ApiGetModDescription
	 */
	struct UCFCoreSubsystem_ApiGetModDescription_Params
	{
	public:
		int64_t                                                    modId;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_mod_desc;                                             // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_error;                                                // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.ApiGetMod
	 */
	struct UCFCoreSubsystem_ApiGetMod_Params
	{
	public:
		int64_t                                                    modId;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_mod;                                                  // 0x0008(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_error;                                                // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.ApiGetMe
	 */
	struct UCFCoreSubsystem_ApiGetMe_Params
	{
	public:
		class FScriptDelegate                                      on_results;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_error;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.ApiGetGame
	 */
	struct UCFCoreSubsystem_ApiGetGame_Params
	{
	public:
		class FScriptDelegate                                      on_game;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_error;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.ApiGetFiles
	 */
	struct UCFCoreSubsystem_ApiGetFiles_Params
	{
	public:
		TArray<int64_t>                                            fileIds;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnResults;                                               // 0x0010(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnError;                                                 // 0x0020(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.ApiGetCategories
	 */
	struct UCFCoreSubsystem_ApiGetCategories_Params
	{
	public:
		struct FCFCoreGetCategoriesFilter                          Filter;                                                  // 0x0000(0x0004)  (Parm, NoDestructor, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_results;                                              // 0x0004(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_error;                                                // 0x0014(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.ApiGetBlockedModsDetails
	 */
	struct UCFCoreSubsystem_ApiGetBlockedModsDetails_Params
	{
	public:
		class FScriptDelegate                                      on_result;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_error;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.ApiGetActiveCookingVersion
	 */
	struct UCFCoreSubsystem_ApiGetActiveCookingVersion_Params
	{
	public:
		class FScriptDelegate                                      OnVersion;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      OnError;                                                 // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore.CFCoreSubsystem.ApiGenerateTempToken
	 */
	struct UCFCoreSubsystem_ApiGenerateTempToken_Params
	{
	public:
		class FScriptDelegate                                      on_result;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FScriptDelegate                                      on_error;                                                // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
