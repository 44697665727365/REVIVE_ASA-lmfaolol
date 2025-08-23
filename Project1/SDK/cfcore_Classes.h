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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class cfcore.CFCoreBPLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCFCoreBPLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FUpdateModRequest STATIC_MakeUpdateModRequest(int64_t class_id, const class FString& Name, const class FString& summary, ECFCoreMakrupType description_type, const class FString& Description, int64_t primary_category_id, TArray<int64_t> game_category_ids, bool is_experimental);
		struct FCFCoreSettings STATIC_MakeSettingsFromProjectConfig();
		struct FCFCoreSettings STATIC_MakeSettings(const class FString& default_language, int64_t game_id, const class FString& api_key, const class FString& mods_directory, const class FString& user_data_directory, int32_t max_concurrent_installations);
		struct FCFCoreSearchModsFilter STATIC_MakeSearchModsFilter(int32_t class_id, int32_t category_id, const class FString& game_version, const class FString& search_filter, ECFCoreModsSearchSortField sort_field, ECFCoreSortOrder sort_order, ECFCoreModLoaderType mod_loader_type, int32_t game_version_type_id);
		struct FCFCoreGetCategoriesFilter STATIC_MakeGetCategoriesFilter(int32_t class_id);
		struct FExternalAuthAdditionalInfo STATIC_MakeExternalAuthAdditionalInfo(const struct FDateTime& eulaAcceptTime);
		struct FCreateModRequest STATIC_MakeCreateModRequest(int64_t class_id, const class FString& Name, const class FString& summary, ECFCoreMakrupType description_type, const class FString& Description, int64_t primary_category_id, TArray<int64_t> game_category_ids, bool is_experimental);
		struct FCreateModFileRequest STATIC_MakeCreateModFileRequest(ECFCoreChangelogMarkupType changelog_type, const class FString& changelog, const class FString& Filename, const class FString& DisplayName, TArray<int64_t> gameVersionIds, ECFCoreFileReleaseType releaseType);
		struct FAssureServerModsUpdatedParams STATIC_MakeAssureServerModsUpdatedParams(TArray<int64_t> modIds, TArray<int64_t> devModIds);
		struct FCFCoreApiRequestPagination STATIC_MakeApiRequestPagination(int32_t Index, int32_t page_size);
		class FString STATIC_FormatFileSize(int64_t Bytes);
		struct FCFCoreFileSize STATIC_BreakFileSize(int64_t Bytes);
		static UClass* StaticClass();
	};

	/**
	 * Class cfcore.CFCoreEditorSettings
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UCFCoreEditorSettings : public UObject
	{
	public:
		class FString                                              defaultLanguage;                                         // 0x0028(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    gameId;                                                  // 0x0038(0x0008) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              apiKey;                                                  // 0x0040(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maxConcurrentInstallations;                              // 0x0050(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4RKX[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              modsDirectory;                                           // 0x0058(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EModsDirectoryMode                                         modsDirectoryMode;                                       // 0x0068(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YVYX[0x7];                                   // 0x0069(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              userDataDirectory;                                       // 0x0070(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsServer;                                                // 0x0080(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       isServerPcOnly;                                          // 0x0081(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_93LB[0x6];                                   // 0x0082(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCFCoreSettingsThrottling                           throttling;                                              // 0x0088(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class cfcore.CFCoreSubsystem
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCFCoreSubsystem : public UEngineSubsystem
	{
	public:
		void UpdateMod(int64_t mod_id, const struct FUpdateModRequest& update_mod_request, const class FString& avatar_image_filename, const class FScriptDelegate& on_success, const class FScriptDelegate& on_error);
		void Unitialize(const class FScriptDelegate& OnUninitialized, const class FScriptDelegate& OnError);
		void UninstallMod(int64_t mod_id, const class FScriptDelegate& on_uninstalled, const class FScriptDelegate& on_error);
		void SynchronizeWithServer(const class FScriptDelegate& on_success, const class FScriptDelegate& on_error);
		void SendSecurityCode(const class FString& email, const class FScriptDelegate& on_success, const class FScriptDelegate& on_error);
		void Logout(const class FScriptDelegate& on_success, const class FScriptDelegate& on_error);
		void IsAuthenticated(const class FScriptDelegate& on_is_auth);
		void InstallMod(const struct FCFCoreMod& mod, const class FScriptDelegate& on_progress, const class FScriptDelegate& on_installed, const class FScriptDelegate& on_error);
		void Initialize(const struct FCFCoreSettings& Settings, const class FScriptDelegate& OnInitialized, const class FScriptDelegate& OnError);
		void GetModsDirInfo(const class FScriptDelegate& OnModsDirInfo, const class FScriptDelegate& OnError);
		void GetInstalledMods(const class FScriptDelegate& on_installed_mods, const class FScriptDelegate& on_error);
		void GetAuthTerms(const class FScriptDelegate& on_success, const class FScriptDelegate& on_error);
		void GenerateAuthTokenByExternalProvider(ECFCoreExternalAuthProvider provider, const class FString& external_token, const struct FExternalAuthAdditionalInfo& additional_info, const class FScriptDelegate& on_success, const class FScriptDelegate& on_error);
		void GenerateAuthToken(const class FString& email, int32_t security_code, const class FScriptDelegate& on_success, const class FScriptDelegate& on_error);
		void CreateModFile(int64_t modId, const struct FCreateModFileRequest& CreateModFileRequest, const class FString& LocalFilenameToUpload, const class FScriptDelegate& OnCreateModFileRequestId, const class FScriptDelegate& OnProgress, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnError);
		void CreateMod(const struct FCreateModRequest& create_mod_request, const class FString& avatar_image_filename, const class FScriptDelegate& on_success, const class FScriptDelegate& on_error);
		void CreateCookedModFile(int64_t modId, int64_t SourceFileId, const struct FCreateCookedModFileRequest& CreateCookedModFileRequest, const class FString& LocalFilenameToUpload, const class FScriptDelegate& OnCreateModFileRequestId, const class FScriptDelegate& OnProgress, const class FScriptDelegate& OnSuccess, const class FScriptDelegate& OnError);
		void CancelInstallation(int64_t mod_id, const class FScriptDelegate& on_success, const class FScriptDelegate& on_error);
		void AssureServerModsUpdated(const struct FAssureServerModsUpdatedParams& Params, const class FScriptDelegate& OnProgress, const class FScriptDelegate& OnUpdated, const class FScriptDelegate& OnError);
		void AssureClientModsUpdated(TArray<int64_t> ServerFileIds, const class FScriptDelegate& OnProgress, const class FScriptDelegate& OnUpdated, const class FScriptDelegate& OnError);
		void ApiUpdateThumbsUp(int64_t modId, ECFCoreThumbsUpDirection Direction, const class FScriptDelegate& on_success, const class FScriptDelegate& on_error);
		void ApiUnblockMods(const struct FUnblockModsRequest& Request, const class FScriptDelegate& OnResult, const class FScriptDelegate& OnError);
		void ApiSearchMods(const struct FCFCoreSearchModsFilter& Filter, const struct FCFCoreApiRequestPagination& pagination, const class FScriptDelegate& on_results, const class FScriptDelegate& on_error);
		void ApiReportMod(int64_t modId, int64_t reasonId, const class FString& report, const class FScriptDelegate& on_reasons, const class FScriptDelegate& on_error);
		void ApiGetVersionTypes(const class FScriptDelegate& on_results, const class FScriptDelegate& on_error);
		void ApiGetVersions(const class FScriptDelegate& on_results, const class FScriptDelegate& on_error);
		void ApiGetReportingReasons(const class FScriptDelegate& on_results, const class FScriptDelegate& on_error);
		void ApiGetMyThumbsUp(const class FScriptDelegate& on_results, const class FScriptDelegate& on_error);
		void ApiGetMyMods(const class FScriptDelegate& on_results, const class FScriptDelegate& on_error);
		void ApiGetMods(TArray<int64_t> modIds, const class FScriptDelegate& on_results, const class FScriptDelegate& on_error);
		void ApiGetModDescription(int64_t modId, const class FScriptDelegate& on_mod_desc, const class FScriptDelegate& on_error);
		void ApiGetMod(int64_t modId, const class FScriptDelegate& on_mod, const class FScriptDelegate& on_error);
		void ApiGetMe(const class FScriptDelegate& on_results, const class FScriptDelegate& on_error);
		void ApiGetGame(const class FScriptDelegate& on_game, const class FScriptDelegate& on_error);
		void ApiGetFiles(TArray<int64_t> fileIds, const class FScriptDelegate& OnResults, const class FScriptDelegate& OnError);
		void ApiGetCategories(const struct FCFCoreGetCategoriesFilter& Filter, const class FScriptDelegate& on_results, const class FScriptDelegate& on_error);
		void ApiGetBlockedModsDetails(const class FScriptDelegate& on_result, const class FScriptDelegate& on_error);
		void ApiGetActiveCookingVersion(const class FScriptDelegate& OnVersion, const class FScriptDelegate& OnError);
		void ApiGenerateTempToken(const class FScriptDelegate& on_result, const class FScriptDelegate& on_error);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
