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
	 * Function cfcore_ui.BindButtonSystem.StartBind
	 */
	struct UBindButtonSystem_StartBind_Params
	{	};

	/**
	 * Function cfcore_ui.BindButtonSystem.SetViewState
	 */
	struct UBindButtonSystem_SetViewState_Params
	{
	public:
		EViewState                                                 NewState;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.BindButtonSystem.EndBind
	 */
	struct UBindButtonSystem_EndBind_Params
	{	};

	/**
	 * Function cfcore_ui.BindButtonSystem.ControllerAction
	 */
	struct UBindButtonSystem_ControllerAction_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreMathHelperFunctionLibrary.Int64_SubOne
	 */
	struct UCFCoreMathHelperFunctionLibrary_Int64_SubOne_Params
	{
	public:
		int64_t                                                    Value;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreMathHelperFunctionLibrary.Int64_AddOne
	 */
	struct UCFCoreMathHelperFunctionLibrary_Int64_AddOne_Params
	{
	public:
		int64_t                                                    Value;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int64_t                                                    ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreMathHelperFunctionLibrary.Int32_SubOne
	 */
	struct UCFCoreMathHelperFunctionLibrary_Int32_SubOne_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreMathHelperFunctionLibrary.Int32_AddOne
	 */
	struct UCFCoreMathHelperFunctionLibrary_Int32_AddOne_Params
	{
	public:
		int32_t                                                    Value;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreRichTextBlockImageDecorator.SetImageToMap
	 */
	struct UCFCoreRichTextBlockImageDecorator_SetImageToMap_Params
	{
	public:
		class UTexture2DDynamic*                                   Image;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ImageUrl;                                                // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreThemeSettings.CommitThemeData
	 */
	struct UCFCoreThemeSettings_CommitThemeData_Params
	{
	public:
		class UDataTable*                                          themeDataTable;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              themeName;                                               // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCFCoreThemeRowData                                 Data;                                                    // 0x0018(0x0100)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUIBaseModel.OnEventReceived_LibraryProgress
	 */
	struct UCFCoreUIBaseModel_OnEventReceived_LibraryProgress_Params
	{
	public:
		EGameModsEvent                                             evt;                                                     // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3W2Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLibraryProgress                                    progress;                                                // 0x0008(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FInstallProgressMod>                         OutModsList;                                             // 0x0048(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUIBaseModel.OnEventReceived_Installed
	 */
	struct UCFCoreUIBaseModel_OnEventReceived_Installed_Params
	{
	public:
		EGameModsEvent                                             evt;                                                     // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WETI[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FInstalledMod>                               InModsList;                                              // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FInstallProgressMod>                         OutModsList;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUIBaseModel.OnEventReceived
	 */
	struct UCFCoreUIBaseModel_OnEventReceived_Params
	{
	public:
		EGameModsEvent                                             evt;                                                     // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4QG9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FCFCoreMod>                                  InModsList;                                              // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FInstallProgressMod>                         OutModsList;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUIBaseView.OnEventBroadcasted
	 */
	struct UCFCoreUIBaseView_OnEventBroadcasted_Params
	{
	public:
		EGameModsEvent                                             evt;                                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6144[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FInstallProgressMod>                         ModsList;                                                // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		struct FCFCoreApiResponsePagination                        pagination;                                              // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.UpdateMod
	 */
	struct UCFCoreUISubsystem_UpdateMod_Params
	{
	public:
		struct FCFCoreMod                                          mod;                                                     // 0x0000(0x0190)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.UnsubscribeViewFromEvents
	 */
	struct UCFCoreUISubsystem_UnsubscribeViewFromEvents_Params
	{
	public:
		class UObject*                                             View;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<EGameModsEvent>                                     evts;                                                    // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.UnsubscribeViewFromEvent
	 */
	struct UCFCoreUISubsystem_UnsubscribeViewFromEvent_Params
	{
	public:
		class UObject*                                             View;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameModsEvent                                             evt;                                                     // 0x0008(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.UnregisterModelClass
	 */
	struct UCFCoreUISubsystem_UnregisterModelClass_Params
	{
	public:
		class UClass*                                              modelClass;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.UninstallMod
	 */
	struct UCFCoreUISubsystem_UninstallMod_Params
	{
	public:
		struct FCFCoreMod                                          mod;                                                     // 0x0000(0x0190)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.SubscribeViewToEvents
	 */
	struct UCFCoreUISubsystem_SubscribeViewToEvents_Params
	{
	public:
		class UObject*                                             View;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<EGameModsEvent>                                     evts;                                                    // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       initializeView;                                          // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.SubscribeViewToEvent
	 */
	struct UCFCoreUISubsystem_SubscribeViewToEvent_Params
	{
	public:
		class UObject*                                             View;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EGameModsEvent                                             evt;                                                     // 0x0008(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       initializeView;                                          // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000A(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.SetMod
	 */
	struct UCFCoreUISubsystem_SetMod_Params
	{
	public:
		struct FCFCoreMod                                          mod;                                                     // 0x0000(0x0190)  (Parm, NativeAccessSpecifierPublic)
		struct FInstalledMod                                       InInstalledMod;                                          // 0x0190(0x03B0)  (Parm, NativeAccessSpecifierPublic)
		struct FInstalledMod                                       OutInstalledMod;                                         // 0x0540(0x03B0)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.SearchMods
	 */
	struct UCFCoreUISubsystem_SearchMods_Params
	{
	public:
		struct FCFCoreSearchModsFilter                             Filter;                                                  // 0x0000(0x0030)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FCFCoreApiRequestPagination                         pagination;                                              // 0x0030(0x0008)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.ReleaseUIController
	 */
	struct UCFCoreUISubsystem_ReleaseUIController_Params
	{	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.RegisterModelClass
	 */
	struct UCFCoreUISubsystem_RegisterModelClass_Params
	{
	public:
		class UClass*                                              modelClass;                                              // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.RegisterErrorDelegate
	 */
	struct UCFCoreUISubsystem_RegisterErrorDelegate_Params
	{
	public:
		class FScriptDelegate                                      errorDelegate;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.OnUninstall
	 */
	struct UCFCoreUISubsystem_OnUninstall_Params
	{
	public:
		struct FInstalledMod                                       InstalledMod;                                            // 0x0000(0x03B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.OnSearchModsError
	 */
	struct UCFCoreUISubsystem_OnSearchModsError_Params
	{
	public:
		struct FCFCoreError                                        Error;                                                   // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.OnSearchMods
	 */
	struct UCFCoreUISubsystem_OnSearchMods_Params
	{
	public:
		TArray<struct FCFCoreMod>                                  mods;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FCFCoreApiResponsePagination                        pagination;                                              // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.OnMyModsError
	 */
	struct UCFCoreUISubsystem_OnMyModsError_Params
	{
	public:
		struct FCFCoreError                                        Error;                                                   // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.OnMyMods
	 */
	struct UCFCoreUISubsystem_OnMyMods_Params
	{
	public:
		TArray<struct FCFCoreMod>                                  mods;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.OnModUninstallError
	 */
	struct UCFCoreUISubsystem_OnModUninstallError_Params
	{
	public:
		struct FCFCoreError                                        Error;                                                   // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.OnModInstallError
	 */
	struct UCFCoreUISubsystem_OnModInstallError_Params
	{
	public:
		struct FCFCoreError                                        Error;                                                   // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FCFCoreMod                                          InstallingMod;                                           // 0x0038(0x0190)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.OnInstallProgress
	 */
	struct UCFCoreUISubsystem_OnInstallProgress_Params
	{
	public:
		struct FLibraryProgress                                    progress;                                                // 0x0000(0x0040)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.OnGetModsByIds
	 */
	struct UCFCoreUISubsystem_OnGetModsByIds_Params
	{
	public:
		TArray<struct FCFCoreMod>                                  mods;                                                    // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.OnGetInstalledModsError
	 */
	struct UCFCoreUISubsystem_OnGetInstalledModsError_Params
	{
	public:
		struct FCFCoreError                                        Error;                                                   // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.OnGetInstalledMods
	 */
	struct UCFCoreUISubsystem_OnGetInstalledMods_Params
	{
	public:
		TArray<struct FInstalledMod>                               installedMods;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.OnFinishedUpdating
	 */
	struct UCFCoreUISubsystem_OnFinishedUpdating_Params
	{
	public:
		struct FInstalledMod                                       updatedMod;                                              // 0x0000(0x03B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.OnFinishedInstalling
	 */
	struct UCFCoreUISubsystem_OnFinishedInstalling_Params
	{
	public:
		struct FInstalledMod                                       InstalledMod;                                            // 0x0000(0x03B0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.OnCancelModInstallationSuccess
	 */
	struct UCFCoreUISubsystem_OnCancelModInstallationSuccess_Params
	{	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.OnCancelModInstallation
	 */
	struct UCFCoreUISubsystem_OnCancelModInstallation_Params
	{
	public:
		struct FCFCoreError                                        Error;                                                   // 0x0000(0x0038)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.MakeFInstallProgressModFromID
	 */
	struct UCFCoreUISubsystem_MakeFInstallProgressModFromID_Params
	{
	public:
		int64_t                                                    ID;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FInstallProgressMod                                 ReturnValue;                                             // 0x0008(0x0488)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.MakeFInstallProgressMod
	 */
	struct UCFCoreUISubsystem_MakeFInstallProgressMod_Params
	{
	public:
		struct FCFCoreMod                                          mod;                                                     // 0x0000(0x0190)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		struct FInstallProgressMod                                 ReturnValue;                                             // 0x0190(0x0488)  (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.IsAnyModInstalling
	 */
	struct UCFCoreUISubsystem_IsAnyModInstalling_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.InstallMod
	 */
	struct UCFCoreUISubsystem_InstallMod_Params
	{
	public:
		struct FCFCoreMod                                          mod;                                                     // 0x0000(0x0190)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.InitializeUIController
	 */
	struct UCFCoreUISubsystem_InitializeUIController_Params
	{	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.InitializeModView
	 */
	struct UCFCoreUISubsystem_InitializeModView_Params
	{
	public:
		class UObject*                                             View;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FCFCoreMod                                          mod;                                                     // 0x0008(0x0190)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0198(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.GetMyMods
	 */
	struct UCFCoreUISubsystem_GetMyMods_Params
	{	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.GetModById
	 */
	struct UCFCoreUISubsystem_GetModById_Params
	{
	public:
		struct FInstallProgressMod                                 OutMod;                                                  // 0x0000(0x0488)  (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
		int64_t                                                    ID;                                                      // 0x0488(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0490(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.GetInstalledMods
	 */
	struct UCFCoreUISubsystem_GetInstalledMods_Params
	{	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.CancelModInstallation
	 */
	struct UCFCoreUISubsystem_CancelModInstallation_Params
	{
	public:
		struct FCFCoreMod                                          mod;                                                     // 0x0000(0x0190)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreUISubsystem.ApiGetModsById
	 */
	struct UCFCoreUISubsystem_ApiGetModsById_Params
	{
	public:
		TArray<int64_t>                                            modIds;                                                  // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreVirtualCursorFunctionLibrary.IsCursorOverInteractableWidget
	 */
	struct UCFCoreVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreVirtualCursorFunctionLibrary.EnableVirtualCursor
	 */
	struct UCFCoreVirtualCursorFunctionLibrary_EnableVirtualCursor_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function cfcore_ui.CFCoreVirtualCursorFunctionLibrary.DisableVirtualCursor
	 */
	struct UCFCoreVirtualCursorFunctionLibrary_DisableVirtualCursor_Params
	{
	public:
		class APlayerController*                                   PC;                                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
