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
	 * Class cfcore_ui.BindButtonSystem
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UBindButtonSystem : public UEngineSubsystem
	{
	public:
		class FScriptMulticastDelegate                             ControllerButtonInViewState;                             // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S9YI[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (PADDING)

	public:
		void StartBind();
		void SetViewState(EViewState NewState);
		void EndBind();
		void ControllerAction(const struct FKey& Key);
		static UClass* StaticClass();
	};

	/**
	 * Class cfcore_ui.CFCoreButtonImage
	 * Size -> 0x01A0 (FullSize[0x04F0] - InheritedSize[0x0350])
	 */
	class UCFCoreButtonImage : public UImage
	{
	public:
		struct FSlateBrush                                         PlayStationButtonImage;                                  // 0x0350(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         XboxButtonImage;                                         // 0x0420(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class cfcore_ui.CFCoreGamepadCursorSettings
	 * Size -> 0x00C0 (FullSize[0x00F8] - InheritedSize[0x0038])
	 */
	class UCFCoreGamepadCursorSettings : public UDeveloperSettings
	{
	public:
		struct FRuntimeFloatCurve                                  AnalogCursorAccelerationCurve;                           // 0x0038(0x0088) Edit, Config, NativeAccessSpecifierPrivate
		float                                                      MaxAnalogCursorSpeed;                                    // 0x00C0(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxAnalogCursorSpeedWhenHovered;                         // 0x00C4(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AnalogCursorDragCoefficient;                             // 0x00C8(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AnalogCursorDragCoefficientWhenHovered;                  // 0x00CC(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MinAnalogCursorSpeed;                                    // 0x00D0(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AnalogCursorDeadZone;                                    // 0x00D4(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AnalogCursorAccelerationMultiplier;                      // 0x00D8(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      AnalogCursorSize;                                        // 0x00DC(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseEngineAnalogCursor;                                  // 0x00E0(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAnalogCursorNoAcceleration;                             // 0x00E1(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_N6IY[0x16];                                  // 0x00E2(0x0016) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class cfcore_ui.CFCoreMathHelperFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCFCoreMathHelperFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		int64_t STATIC_Int64_SubOne(int64_t Value);
		int64_t STATIC_Int64_AddOne(int64_t Value);
		int32_t STATIC_Int32_SubOne(int32_t Value);
		int32_t STATIC_Int32_AddOne(int32_t Value);
		static UClass* StaticClass();
	};

	/**
	 * Class cfcore_ui.CFCoreRichText
	 * Size -> 0x0070 (FullSize[0x0980] - InheritedSize[0x0910])
	 */
	class UCFCoreRichText : public URichTextBlock
	{
	public:
		TMap<class FString, class UTexture2DDynamic*>              ImageMap;                                                // 0x0910(0x0050) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ENK2[0x20];                                  // 0x0960(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class cfcore_ui.CFCoreRichTextBlockImageDecorator
	 * Size -> 0x0028 (FullSize[0x0058] - InheritedSize[0x0030])
	 */
	class UCFCoreRichTextBlockImageDecorator : public URichTextBlockImageDecorator
	{
	public:
		class UCFCoreRichText*                                     CoreRichText;                                            // 0x0030(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFail;                                                  // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void SetImageToMap(class UTexture2DDynamic* Image, const class FString& ImageUrl);
		static UClass* StaticClass();
	};

	/**
	 * Class cfcore_ui.CFCoreThemeSettings
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCFCoreThemeSettings : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_CommitThemeData(class UDataTable* themeDataTable, const class FString& themeName, const struct FCFCoreThemeRowData& Data);
		static UClass* StaticClass();
	};

	/**
	 * Class cfcore_ui.CFCoreUIBaseModel
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCFCoreUIBaseModel : public UInterface
	{
	public:
		bool OnEventReceived_LibraryProgress(EGameModsEvent evt, const struct FLibraryProgress& progress, TArray<struct FInstallProgressMod>* OutModsList);
		bool OnEventReceived_Installed(EGameModsEvent evt, TArray<struct FInstalledMod> InModsList, TArray<struct FInstallProgressMod>* OutModsList);
		bool OnEventReceived(EGameModsEvent evt, TArray<struct FCFCoreMod> InModsList, TArray<struct FInstallProgressMod>* OutModsList);
		static UClass* StaticClass();
	};

	/**
	 * Class cfcore_ui.CFCoreUIBaseView
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCFCoreUIBaseView : public UInterface
	{
	public:
		bool OnEventBroadcasted(EGameModsEvent evt, TArray<struct FInstallProgressMod> ModsList, const struct FCFCoreApiResponsePagination& pagination);
		static UClass* StaticClass();
	};

	/**
	 * Class cfcore_ui.CFCoreUIModel
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class UCFCoreUIModel : public UObject
	{
	public:
		unsigned char                                              UnknownData_6HRZ[0x58];                                  // 0x0028(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class cfcore_ui.CFCoreUISubsystem
	 * Size -> 0x0148 (FullSize[0x0178] - InheritedSize[0x0030])
	 */
	class UCFCoreUISubsystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_YBCT[0x118];                                 // 0x0030(0x0118) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     Models;                                                  // 0x0148(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Y2G5[0x20];                                  // 0x0158(0x0020) MISSED OFFSET (PADDING)

	public:
		void UpdateMod(const struct FCFCoreMod& mod);
		void UnsubscribeViewFromEvents(class UObject* View, TArray<EGameModsEvent> evts);
		bool UnsubscribeViewFromEvent(class UObject* View, EGameModsEvent evt);
		bool UnregisterModelClass(class UClass* modelClass);
		void UninstallMod(const struct FCFCoreMod& mod);
		bool SubscribeViewToEvents(class UObject* View, TArray<EGameModsEvent> evts, bool initializeView);
		bool SubscribeViewToEvent(class UObject* View, EGameModsEvent evt, bool initializeView);
		void STATIC_SetMod(const struct FCFCoreMod& mod, const struct FInstalledMod& InInstalledMod, struct FInstalledMod* OutInstalledMod);
		void SearchMods(const struct FCFCoreSearchModsFilter& Filter, const struct FCFCoreApiRequestPagination& pagination);
		void ReleaseUIController();
		bool RegisterModelClass(class UClass* modelClass);
		void RegisterErrorDelegate(const class FScriptDelegate& errorDelegate);
		void OnUninstall(const struct FInstalledMod& InstalledMod);
		void OnSearchModsError(const struct FCFCoreError& Error);
		void OnSearchMods(TArray<struct FCFCoreMod> mods, const struct FCFCoreApiResponsePagination& pagination);
		void OnMyModsError(const struct FCFCoreError& Error);
		void OnMyMods(TArray<struct FCFCoreMod> mods);
		void OnModUninstallError(const struct FCFCoreError& Error);
		void OnModInstallError(const struct FCFCoreError& Error, const struct FCFCoreMod& InstallingMod);
		void OnInstallProgress(const struct FLibraryProgress& progress);
		void OnGetModsByIds(TArray<struct FCFCoreMod> mods);
		void OnGetInstalledModsError(const struct FCFCoreError& Error);
		void OnGetInstalledMods(TArray<struct FInstalledMod> installedMods);
		void OnFinishedUpdating(const struct FInstalledMod& updatedMod);
		void OnFinishedInstalling(const struct FInstalledMod& InstalledMod);
		void OnCancelModInstallationSuccess();
		void OnCancelModInstallation(const struct FCFCoreError& Error);
		struct FInstallProgressMod STATIC_MakeFInstallProgressModFromID(int64_t ID);
		struct FInstallProgressMod STATIC_MakeFInstallProgressMod(const struct FCFCoreMod& mod);
		bool IsAnyModInstalling();
		void InstallMod(const struct FCFCoreMod& mod);
		void InitializeUIController();
		bool InitializeModView(class UObject* View, const struct FCFCoreMod& mod);
		void GetMyMods();
		bool GetModById(struct FInstallProgressMod* OutMod, int64_t ID);
		void GetInstalledMods();
		void CancelModInstallation(const struct FCFCoreMod& mod);
		void ApiGetModsById(TArray<int64_t> modIds);
		static UClass* StaticClass();
	};

	/**
	 * Class cfcore_ui.CFCoreVirtualCursorFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UCFCoreVirtualCursorFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_IsCursorOverInteractableWidget();
		void STATIC_EnableVirtualCursor(class APlayerController* PC);
		void STATIC_DisableVirtualCursor(class APlayerController* PC);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
