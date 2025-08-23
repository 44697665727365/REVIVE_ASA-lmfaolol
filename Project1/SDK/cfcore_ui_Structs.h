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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum cfcore_ui.EViewState
	 */
	enum class EViewState : uint8_t
	{
		Store      = 0,
		ModPage    = 1,
		ScreenShot = 2,
		Dropdown   = 3,
		ServerMods = 4,
		Popup      = 5,
		MAX        = 6
	};

	/**
	 * Enum cfcore_ui.EGameModsEvent
	 */
	enum class EGameModsEvent : uint8_t
	{
		ViewRegister       = 0,
		FinishInstalling   = 1,
		Uninstalling       = 2,
		InstallingProgress = 3,
		InitInstalling     = 4,
		InitUninstalling   = 5,
		AlreadyInstalled   = 6,
		FinishUpdating     = 7,
		SearchMods         = 8,
		MyMods             = 9,
		CancelInstalling   = 10,
		MAX                = 11
	};

	/**
	 * Enum cfcore_ui.EInstallStatus
	 */
	enum class EInstallStatus : uint8_t
	{
		Default                       = 0,
		Installing                    = 1,
		Installed                     = 2,
		InstalledButNeedsUpdate       = 3,
		Updating                      = 4,
		Uninstalling                  = 5,
		InstalledButNeedsUpdateMyMods = 6,
		MAX                           = 7
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct cfcore_ui.CFCoreThemeRowData
	 * Size -> 0x00F8 (FullSize[0x0100] - InheritedSize[0x0008])
	 */
	struct FCFCoreThemeRowData : public FTableRowBase
	{
	public:
		bool                                                       RoundedMode;                                             // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VVTK[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        MainFont;                                                // 0x000C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SecondaryFont;                                           // 0x001C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BackgroundColor;                                         // 0x002C(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ClassUnderline;                                          // 0x003C(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Button_SignIn;                                           // 0x004C(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SideBar;                                                 // 0x005C(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Button_SideMenu;                                         // 0x006C(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Search_SideMenu;                                         // 0x007C(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ModWindow;                                               // 0x008C(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Button_Install;                                          // 0x009C(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Button_Uninstall;                                        // 0x00AC(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Button_Update;                                           // 0x00BC(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ExamineBackground;                                       // 0x00CC(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        InfoBackground;                                          // 0x00DC(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        NotificationBackground;                                  // 0x00EC(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q44Q[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct cfcore_ui.ModIdentification
	 * Size -> 0x0010
	 */
	struct FModIdentification
	{
	public:
		int64_t                                                    ID;                                                      // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    mainFileId;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore_ui.ScreenshotInfo
	 * Size -> 0x0020
	 */
	struct FScreenshotInfo
	{
	public:
		TArray<class UTexture2DDynamic*>                           screenshots;                                             // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      Descriptions;                                            // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore_ui.InstallProgressMod
	 * Size -> 0x0488
	 */
	struct FInstallProgressMod
	{
	public:
		struct FInstalledMod                                       mod;                                                     // 0x0000(0x03B0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FLibraryProgress                                    progress;                                                // 0x03B0(0x0040) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EInstallStatus                                             installStatus;                                           // 0x03F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ENIL[0x7];                                   // 0x03F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2DDynamic*                                   DynamicImage;                                            // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class UTexture2D*, class FText>                       ShowcaseImages;                                          // 0x0400(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FScreenshotInfo                                     Screenshots_Info;                                        // 0x0450(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FCategory>                                   Categories;                                              // 0x0470(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UWidget*                                             ModSlotRef;                                              // 0x0480(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
