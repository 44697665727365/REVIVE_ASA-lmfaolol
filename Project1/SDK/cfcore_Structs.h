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
	 * Enum cfcore.ECFCoreFileRelationType
	 */
	enum class ECFCoreFileRelationType : uint8_t
	{
		None               = 0,
		EmbeddedLibrary    = 1,
		OptionalDependency = 2,
		RequiredDependency = 3,
		Tool               = 4,
		Incompatible       = 5,
		Include            = 6,
		MAX                = 7
	};

	/**
	 * Enum cfcore.ECFCoreHashAlgo
	 */
	enum class ECFCoreHashAlgo : uint8_t
	{
		None = 0,
		Sha1 = 1,
		Md5  = 2,
		MAX  = 3
	};

	/**
	 * Enum cfcore.ECFCoreFileStatus
	 */
	enum class ECFCoreFileStatus : uint8_t
	{
		None               = 0,
		Processing         = 1,
		ChangesRequired    = 2,
		UnderReview        = 3,
		Approved           = 4,
		Rejected           = 5,
		MalwareDetected    = 6,
		Deleted            = 7,
		Archived           = 8,
		Testing            = 9,
		Released           = 10,
		ReadyForReview     = 11,
		Deprecated         = 12,
		Baking             = 13,
		AwaitingPublishing = 14,
		FailedPublishing   = 15,
		MAX                = 16
	};

	/**
	 * Enum cfcore.ECFCoreFileReleaseType
	 */
	enum class ECFCoreFileReleaseType : uint8_t
	{
		None    = 0,
		Release = 1,
		Beta    = 2,
		Alpha   = 3,
		MAX     = 4
	};

	/**
	 * Enum cfcore.ECFCoreApiStatus
	 */
	enum class ECFCoreApiStatus : uint8_t
	{
		None    = 0,
		Private = 1,
		Public  = 2,
		MAX     = 3
	};

	/**
	 * Enum cfcore.ECFCoreStatus
	 */
	enum class ECFCoreStatus : uint8_t
	{
		None          = 0,
		Draft         = 1,
		Test          = 2,
		PendingReview = 3,
		Rejected      = 4,
		Approved      = 5,
		Live          = 6,
		MAX           = 7
	};

	/**
	 * Enum cfcore.ECFCoreModLoaderType
	 */
	enum class ECFCoreModLoaderType : uint8_t
	{
		Any        = 0,
		Forge      = 1,
		Cauldron   = 2,
		LiteLoader = 3,
		Fabric     = 4,
		MAX        = 5
	};

	/**
	 * Enum cfcore.ECFCoreModStatus
	 */
	enum class ECFCoreModStatus : uint8_t
	{
		None            = 0,
		New             = 1,
		ChangesRequired = 2,
		UnderSoftReview = 3,
		Approved        = 4,
		Rejected        = 5,
		ChangesMade     = 6,
		Inactive        = 7,
		Abandoned       = 8,
		Deleted         = 9,
		UnderReview     = 10,
		MAX             = 11
	};

	/**
	 * Enum cfcore.ECFCoreErrorCodes
	 */
	enum class ECFCoreErrorCodes : uint8_t
	{
		None                          = 0,
		ApiError                      = 1,
		FileSystemError               = 2,
		FailedToInitialize            = 3,
		AlreadyInitialized            = 4,
		NotImplemented                = 5,
		InvalidModParams              = 6,
		InstalledModNotFound          = 7,
		InstallCancelled              = 8,
		DownloadCancelled             = 9,
		UploadCancelled               = 10,
		MissingModsDirectory          = 11,
		MissingModsDirectoryMode      = 12,
		MissingUserDataDirectory      = 13,
		FailedToLoadModsStateFromDisk = 14,
		FailedToSaveModsStateToDisk   = 15,
		MissingLatestFileInformation  = 16,
		MissingFileInformation        = 17,
		FileNotBelongingToMod         = 18,
		NoPlatformFilesMatched        = 19,
		MissingInstalledMods          = 20,
		DetectedUnavailableMod        = 21,
		ModAlreadyBeingInstalled      = 22,
		FailedToDownloadFile          = 23,
		DownloadedFileHasInvalidHash  = 24,
		FailedDeletingOutputDirectory = 25,
		FailedDeletingOutputFile      = 26,
		FailedToUnzip                 = 27,
		FailedToMoveModDirectory      = 28,
		FailedSettingAuthToken        = 29,
		UserNotAuthenticated          = 30,
		FailedToCancelAction          = 31,
		MissingParameter              = 32,
		MAX                           = 33
	};

	/**
	 * Enum cfcore.EInstalledModStatus
	 */
	enum class EInstalledModStatus : uint8_t
	{
		Pending     = 0,
		OutOfDate   = 1,
		Normal      = 2,
		Invalid     = 3,
		WorkingCopy = 4,
		Uploading   = 5,
		Modified    = 6,
		Uninstalled = 7,
		MAX         = 8
	};

	/**
	 * Enum cfcore.ELibraryProgressState
	 */
	enum class ELibraryProgressState : uint8_t
	{
		Pending               = 0,
		Downloading           = 1,
		Uploading             = 2,
		Validating            = 3,
		PendingUnzipping      = 4,
		Unzipping             = 5,
		PendingZipping        = 6,
		Zipping               = 7,
		Copying               = 8,
		CleaningUp            = 9,
		Cancelling            = 10,
		SuccessfullyCompleted = 11,
		FailedToComplete      = 12,
		MAX                   = 13
	};

	/**
	 * Enum cfcore.EModsUpdateProgressState
	 */
	enum class EModsUpdateProgressState : uint8_t
	{
		Validating            = 0,
		Installing            = 1,
		SuccessfullyCompleted = 2,
		FailedToComplete      = 3,
		MAX                   = 4
	};

	/**
	 * Enum cfcore.ECFCoreAutoCookingType
	 */
	enum class ECFCoreAutoCookingType : uint8_t
	{
		All    = 0,
		PCOnly = 1,
		Manual = 2,
		MAX    = 3
	};

	/**
	 * Enum cfcore.ECFCoreChangelogMarkupType
	 */
	enum class ECFCoreChangelogMarkupType : uint8_t
	{
		PlaceHolderDoNotUse = 0,
		Text                = 1,
		HTML                = 2,
		Markdown            = 3,
		MAX                 = 4
	};

	/**
	 * Enum cfcore.ECFCoreChildFileType
	 */
	enum class ECFCoreChildFileType : uint8_t
	{
		None       = 0,
		ServerPack = 1,
		Source     = 2,
		MAX        = 3
	};

	/**
	 * Enum cfcore.ECompressionError
	 */
	enum class ECompressionError : uint8_t
	{
		None                = 0,
		FailedToReadZip     = 1,
		FailedToExtractFile = 2,
		FailedToWriteFile   = 3,
		MAX                 = 4
	};

	/**
	 * Enum cfcore.ECFCoreExternalAuthProvider
	 */
	enum class ECFCoreExternalAuthProvider : uint8_t
	{
		None  = 0,
		Steam = 1,
		PSN   = 2,
		XBL   = 3,
		MAX   = 4
	};

	/**
	 * Enum cfcore.EFileSystemError
	 */
	enum class EFileSystemError : uint8_t
	{
		None                       = 0,
		FailedToReadFromDisk       = 1,
		FailedToCreateDirectory    = 2,
		FailedToSaveToDisk         = 3,
		FailedToOpenFileForWrite   = 4,
		FailedFileToLarge          = 5,
		FailedGettingDiskSpaceInfo = 6,
		FailedReadOutOfBounds      = 7,
		MAX                        = 8
	};

	/**
	 * Enum cfcore.ECFCoreInstallationCommands
	 */
	enum class ECFCoreInstallationCommands : uint8_t
	{
		Download   = 0,
		VerifyHash = 1,
		Unzip      = 2,
		Cleanup    = 3,
		MAX        = 4
	};

	/**
	 * Enum cfcore.ECFCoreMakrupType
	 */
	enum class ECFCoreMakrupType : uint8_t
	{
		PlaceHolderDoNotUse = 0,
		WysiwygHtml         = 1,
		PlainText           = 2,
		BBCode              = 3,
		Creole              = 4,
		Markdown            = 5,
		RawHtml             = 6,
		StandardBBCode      = 7,
		RawCSS              = 8,
		MAX                 = 9
	};

	/**
	 * Enum cfcore.EModsDirectoryMode
	 */
	enum class EModsDirectoryMode : uint8_t
	{
		None   = 0,
		CFCore = 1,
		Flat   = 2,
		MAX    = 3
	};

	/**
	 * Enum cfcore.ECFCoreModsSearchSortField
	 */
	enum class ECFCoreModsSearchSortField : uint8_t
	{
		None             = 0,
		Featured         = 1,
		Popularity       = 2,
		LastUpdated      = 3,
		Name             = 4,
		Author           = 5,
		TotalDownloads   = 6,
		Category         = 7,
		GameVersion      = 8,
		EarlyAccess      = 9,
		FeaturedReleased = 10,
		ReleasedDate     = 11,
		MAX              = 12
	};

	/**
	 * Enum cfcore.ECFCorePlatform
	 */
	enum class ECFCorePlatform : uint8_t
	{
		None          = 0,
		Windows       = 1,
		XboxOne       = 2,
		XboxXS        = 3,
		Linux         = 4,
		PS4           = 5,
		PS5           = 6,
		Mac           = 7,
		IOS           = 8,
		TVOS          = 9,
		Android       = 10,
		Switch        = 11,
		WindowsServer = 12,
		LinuxServer   = 13,
		MAX           = 14
	};

	/**
	 * Enum cfcore.ECFCoreSortOrder
	 */
	enum class ECFCoreSortOrder : uint8_t
	{
		None = 0,
		Asc  = 1,
		Desc = 2,
		MAX  = 3
	};

	/**
	 * Enum cfcore.ECFCoreThumbsUpDirection
	 */
	enum class ECFCoreThumbsUpDirection : uint8_t
	{
		None = 0,
		Up   = 1,
		Down = 2,
		MAX  = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct cfcore.CFCoreSettingsThrottling
	 * Size -> 0x0008
	 */
	struct FCFCoreSettingsThrottling
	{
	public:
		int64_t                                                    diskWriteBytesPerSec;                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.BlockedDetails
	 * Size -> 0x0040
	 */
	struct FBlockedDetails
	{
	public:
		TArray<class FString>                                      serverIds;                                               // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int64_t>                                            modIds;                                                  // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int64_t>                                            blockedUIModIds;                                         // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int64_t>                                            blockedUIAuthorIds;                                      // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.Category
	 * Size -> 0x0078
	 */
	struct FCategory
	{
	public:
		int64_t                                                    ID;                                                      // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    gameId;                                                  // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              slug;                                                    // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              URL;                                                     // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              iconUrl;                                                 // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           DateModified;                                            // 0x0050(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       isClass;                                                 // 0x0058(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q68I[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    classId;                                                 // 0x0060(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    parentCategoryId;                                        // 0x0068(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    displayIndex;                                            // 0x0070(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7NMU[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct cfcore.FileHash
	 * Size -> 0x0018
	 */
	struct FFileHash
	{
	public:
		class FString                                              Value;                                                   // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECFCoreHashAlgo                                            algo;                                                    // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T50Z[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct cfcore.SortableGameVersion
	 * Size -> 0x0040
	 */
	struct FSortableGameVersion
	{
	public:
		class FString                                              gameVersionName;                                         // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              gameVersionPadded;                                       // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameVersion;                                             // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           gameVersionReleaseDate;                                  // 0x0030(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    gameVersionTypeId;                                       // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4BNQ[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct cfcore.FileDependency
	 * Size -> 0x0018
	 */
	struct FFileDependency
	{
	public:
		int64_t                                                    modId;                                                   // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    fileId;                                                  // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECFCoreFileRelationType                                    relationType;                                            // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DCBM[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct cfcore.FileModule
	 * Size -> 0x0018
	 */
	struct FFileModule
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    fingerprint;                                             // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.File
	 * Size -> 0x00F8
	 */
	struct FFile
	{
	public:
		int64_t                                                    ID;                                                      // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    gameId;                                                  // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    modId;                                                   // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       isAvailable;                                             // 0x0018(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_94ZZ[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DisplayName;                                             // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Filename;                                                // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECFCoreFileReleaseType                                     releaseType;                                             // 0x0040(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECFCoreFileStatus                                          fileStatus;                                              // 0x0041(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UXXT[0x6];                                   // 0x0042(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FFileHash>                                   hashes;                                                  // 0x0048(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FDateTime                                           fileDate;                                                // 0x0058(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    fileLength;                                              // 0x0060(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    fileSizeOnDisk;                                          // 0x0068(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    downloadCount;                                           // 0x0070(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              downloadUrl;                                             // 0x0078(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      gameVersions;                                            // 0x0088(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSortableGameVersion>                        sortableGameVersions;                                    // 0x0098(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FFileDependency>                             dependencies;                                            // 0x00A8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       ExposeAsAlternative;                                     // 0x00B8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RTI9[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    parentProjectFileId;                                     // 0x00C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    alternateFileId;                                         // 0x00C8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       isServerPack;                                            // 0x00D0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YKBY[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    serverPackFileId;                                        // 0x00D8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    fileFingerprint;                                         // 0x00E0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FFileModule>                                 modules;                                                 // 0x00E8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.GameAssets
	 * Size -> 0x0030
	 */
	struct FGameAssets
	{
	public:
		class FString                                              iconUrl;                                                 // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              tileUrl;                                                 // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              coverUrl;                                                // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.Game
	 * Size -> 0x0068
	 */
	struct FGame
	{
	public:
		int64_t                                                    ID;                                                      // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              slug;                                                    // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           DateModified;                                            // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameAssets                                         assets;                                                  // 0x0030(0x0030) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		ECFCoreStatus                                              status;                                                  // 0x0060(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECFCoreApiStatus                                           apiStatus;                                               // 0x0061(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YXZZ[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct cfcore.Me
	 * Size -> 0x0040
	 */
	struct FMe
	{
	public:
		int64_t                                                    ID;                                                      // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              email;                                                   // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              username;                                                // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              avatarUrl;                                               // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       hasConnectedAccount;                                     // 0x0038(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q0C2[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct cfcore.ModLinks
	 * Size -> 0x0050
	 */
	struct FModLinks
	{
	public:
		class FString                                              websiteUrl;                                              // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              wikiUrl;                                                 // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              issuesUrl;                                               // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              sourceUrl;                                               // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              modManagementUrl;                                        // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.ModAuthor
	 * Size -> 0x0028
	 */
	struct FModAuthor
	{
	public:
		int64_t                                                    ID;                                                      // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              URL;                                                     // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.ModAsset
	 * Size -> 0x0058
	 */
	struct FModAsset
	{
	public:
		int64_t                                                    ID;                                                      // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    modId;                                                   // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Title;                                                   // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              thumbnailUrl;                                            // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              URL;                                                     // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Session;                                                 // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DHT1[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct cfcore.FileIndex
	 * Size -> 0x0038
	 */
	struct FFileIndex
	{
	public:
		class FString                                              GameVersion;                                             // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    fileId;                                                  // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Filename;                                                // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECFCoreFileReleaseType                                     releaseType;                                             // 0x0028(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_54R1[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    gameVersionTypeId;                                       // 0x002C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECFCoreModLoaderType                                       modLoader;                                               // 0x0030(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_19KQ[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct cfcore.CFCoreMod
	 * Size -> 0x0190
	 */
	struct FCFCoreMod
	{
	public:
		int64_t                                                    ID;                                                      // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    gameId;                                                  // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    gamePopularityRank;                                      // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_701X[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              slug;                                                    // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FModLinks                                           links;                                                   // 0x0038(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              summary;                                                 // 0x0088(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECFCoreModStatus                                           status;                                                  // 0x0098(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VRH6[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    downloadCount;                                           // 0x00A0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       isFeatured;                                              // 0x00A8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D6GS[0x3];                                   // 0x00A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    classId;                                                 // 0x00AC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    primaryCategoryId;                                       // 0x00B0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KI3K[0x4];                                   // 0x00B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCategory>                                   Categories;                                              // 0x00B8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FModAuthor>                                  authors;                                                 // 0x00C8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FModAsset                                           logo;                                                    // 0x00D8(0x0058) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FModAsset>                                   screenshots;                                             // 0x0130(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int64_t                                                    mainFileId;                                              // 0x0140(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FFile>                                       latestFiles;                                             // 0x0148(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FFileIndex>                                  latestFilesIndexes;                                      // 0x0158(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FDateTime                                           dateCreated;                                             // 0x0168(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           DateModified;                                            // 0x0170(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           dateReleased;                                            // 0x0178(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       allowModDistribution;                                    // 0x0180(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       isAvailable;                                             // 0x0181(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FDDL[0x6];                                   // 0x0182(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    thumbsUpCount;                                           // 0x0188(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.ReportingReason
	 * Size -> 0x0038
	 */
	struct FReportingReason
	{
	public:
		int64_t                                                    ID;                                                      // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              slug;                                                    // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.GameVersionsByType
	 * Size -> 0x0018
	 */
	struct FGameVersionsByType
	{
	public:
		int64_t                                                    Type;                                                    // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FString>                                      versions;                                                // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.GameVersionType
	 * Size -> 0x0030
	 */
	struct FGameVersionType
	{
	public:
		int64_t                                                    ID;                                                      // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    gameId;                                                  // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              slug;                                                    // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.CFCoreApiResponsePagination
	 * Size -> 0x0010
	 */
	struct FCFCoreApiResponsePagination
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    pageSize;                                                // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    resultCount;                                             // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    totalCount;                                              // 0x000C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.CFCoreApiResponseError
	 * Size -> 0x0020
	 */
	struct FCFCoreApiResponseError
	{
	public:
		bool                                                       cancelled;                                               // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       badRequest;                                              // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       entityNotFound;                                          // 0x0002(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       serverUnreachable;                                       // 0x0003(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       missingPriviliges;                                       // 0x0004(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       tokenExpired;                                            // 0x0005(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       resourceExpired;                                         // 0x0006(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       failedToParseServerResponse;                             // 0x0007(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    errorCode;                                               // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9LQD[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Description;                                             // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.CFCoreError
	 * Size -> 0x0038
	 */
	struct FCFCoreError
	{
	public:
		bool                                                       isError;                                                 // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECFCoreErrorCodes                                          code;                                                    // 0x0001(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CHXX[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCFCoreApiResponseError                             apiError;                                                // 0x0008(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FString                                              Description;                                             // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.TermsButton
	 * Size -> 0x0010
	 */
	struct FTermsButton
	{
	public:
		class FString                                              Text;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.TermsButtons
	 * Size -> 0x0020
	 */
	struct FTermsButtons
	{
	public:
		struct FTermsButton                                        agree;                                                   // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FTermsButton                                        disagree;                                                // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.TermsLink
	 * Size -> 0x0028
	 */
	struct FTermsLink
	{
	public:
		bool                                                       required;                                                // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YDR2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Text;                                                    // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              URL;                                                     // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.TermsLinks
	 * Size -> 0x0078
	 */
	struct FTermsLinks
	{
	public:
		struct FTermsLink                                          website;                                                 // 0x0000(0x0028) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FTermsLink                                          Terms;                                                   // 0x0028(0x0028) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FTermsLink                                          privacy;                                                 // 0x0050(0x0028) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.TermsContent
	 * Size -> 0x00C8
	 */
	struct FTermsContent
	{
	public:
		class FString                                              Language;                                                // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              plainText;                                               // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              html;                                                    // 0x0020(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTermsButtons                                       buttons;                                                 // 0x0030(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FTermsLinks                                         links;                                                   // 0x0050(0x0078) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.Terms
	 * Size -> 0x00D0
	 */
	struct FTerms
	{
	public:
		struct FDateTime                                           updateDate;                                              // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTermsContent                                       content;                                                 // 0x0008(0x00C8) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.ModsDirInfo
	 * Size -> 0x0020
	 */
	struct FModsDirInfo
	{
	public:
		class FString                                              pathOnDisk;                                              // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    totalDiskSizeInBytes;                                    // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    freeDiskSizeInBytes;                                     // 0x0018(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.InstalledMod
	 * Size -> 0x03B0
	 */
	struct FInstalledMod
	{
	public:
		struct FDateTime                                           dateInstalled;                                           // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDateTime                                           dateUpdated;                                             // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInstalledModStatus                                        status;                                                  // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WYK8[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              pathOnDisk;                                              // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Enabled;                                                 // 0x0028(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P42T[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCFCoreMod                                          details;                                                 // 0x0030(0x0190) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FFile                                               installedFile;                                           // 0x01C0(0x00F8) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FFile                                               latestUpdatedFile;                                       // 0x02B8(0x00F8) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.LibraryProgressDataTransfer
	 * Size -> 0x0028
	 */
	struct FLibraryProgressDataTransfer
	{
	public:
		int32_t                                                    progress;                                                // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AEGK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    transferredBytes;                                        // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    transferRateBytesPerSecond;                              // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Filename;                                                // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.LibraryProgress
	 * Size -> 0x0040
	 */
	struct FLibraryProgress
	{
	public:
		int64_t                                                    modId;                                                   // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    fileId;                                                  // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELibraryProgressState                                      State;                                                   // 0x0010(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YOHX[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLibraryProgressDataTransfer                        dataTransfer;                                            // 0x0018(0x0028) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.ModsUpdateProgress
	 * Size -> 0x0001
	 */
	struct FModsUpdateProgress
	{
	public:
		EModsUpdateProgressState                                   State;                                                   // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.UploadedModFile
	 * Size -> 0x0028
	 */
	struct FUploadedModFile
	{
	public:
		int64_t                                                    fileId;                                                  // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Directory;                                               // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Filename;                                                // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.FileTransferProgress
	 * Size -> 0x0018
	 */
	struct FFileTransferProgress
	{
	public:
		int32_t                                                    progress;                                                // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EBV1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    transferredBytes;                                        // 0x0008(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    bytesPerSecond;                                          // 0x0010(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.ApiResponseErrorInternal
	 * Size -> 0x0018
	 */
	struct FApiResponseErrorInternal
	{
	public:
		int32_t                                                    statusCode;                                              // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    errorCode;                                               // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.AssureServerModsUpdatedParams
	 * Size -> 0x0020
	 */
	struct FAssureServerModsUpdatedParams
	{
	public:
		TArray<int64_t>                                            modIds;                                                  // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int64_t>                                            devModIds;                                               // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.AuthToken
	 * Size -> 0x0010
	 */
	struct FAuthToken
	{
	public:
		class FString                                              token;                                                   // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.AuthTokenResponse
	 * Size -> 0x0010
	 */
	struct FAuthTokenResponse
	{
	public:
		struct FAuthToken                                          Data;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.CategoryArrayResponse
	 * Size -> 0x0010
	 */
	struct FCategoryArrayResponse
	{
	public:
		TArray<struct FCategory>                                   Data;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.CFCoreApiRequestPagination
	 * Size -> 0x0008
	 */
	struct FCFCoreApiRequestPagination
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    pageSize;                                                // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.CFCoreFileSize
	 * Size -> 0x000C
	 */
	struct FCFCoreFileSize
	{
	public:
		int32_t                                                    kb;                                                      // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    mb;                                                      // 0x0004(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    gb;                                                      // 0x0008(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.CFCoreSettings
	 * Size -> 0x0068
	 */
	struct FCFCoreSettings
	{
	public:
		class FString                                              defaultLanguage;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    gameId;                                                  // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              apiKey;                                                  // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    maxConcurrentInstallations;                              // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2K1R[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              modsDirectory;                                           // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EModsDirectoryMode                                         modsDirectoryMode;                                       // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8IE8[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              userDataDirectory;                                       // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsServer;                                                // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       isServerPcOnly;                                          // 0x0059(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_25TQ[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCFCoreSettingsThrottling                           throttling;                                              // 0x0060(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.CreateCookedModFileRequest
	 * Size -> 0x0001
	 */
	struct FCreateCookedModFileRequest
	{
	public:
		ECFCorePlatform                                            Platform;                                                // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.ModFileChunkedInfo
	 * Size -> 0x0038
	 */
	struct FModFileChunkedInfo
	{
	public:
		int64_t                                                    fileId;                                                  // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Directory;                                               // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Filename;                                                // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              uploadId;                                                // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.CreateModFileChunkedResponse
	 * Size -> 0x0038
	 */
	struct FCreateModFileChunkedResponse
	{
	public:
		struct FModFileChunkedInfo                                 Data;                                                    // 0x0000(0x0038) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.ModFileCookingOptions
	 * Size -> 0x0002
	 */
	struct FModFileCookingOptions
	{
	public:
		bool                                                       isSourceFile;                                            // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECFCoreAutoCookingType                                     autoCookingType;                                         // 0x0001(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.CreateModFileRequest
	 * Size -> 0x0058
	 */
	struct FCreateModFileRequest
	{
	public:
		ECFCoreChangelogMarkupType                                 changelogType;                                           // 0x0000(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7PAD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              changelog;                                               // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Filename;                                                // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayName;                                             // 0x0028(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int64_t>                                            gameVersionIds;                                          // 0x0038(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		ECFCoreFileReleaseType                                     releaseType;                                             // 0x0048(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FModFileCookingOptions                              cookingOptions;                                          // 0x0049(0x0002) BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F975[0x5];                                   // 0x004B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    fileLength;                                              // 0x0050(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.CreateModFileResponse
	 * Size -> 0x0028
	 */
	struct FCreateModFileResponse
	{
	public:
		struct FUploadedModFile                                    Data;                                                    // 0x0000(0x0028) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.CreateModRequest
	 * Size -> 0x0060
	 */
	struct FCreateModRequest
	{
	public:
		int64_t                                                    classId;                                                 // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              summary;                                                 // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECFCoreMakrupType                                          descriptionType;                                         // 0x0028(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C4RN[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Description;                                             // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int64_t                                                    primaryCategoryId;                                       // 0x0040(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int64_t>                                            gameCategoryIds;                                         // 0x0048(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       isExperimental;                                          // 0x0058(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1CFA[0x7];                                   // 0x0059(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct cfcore.ExternalAuthAdditionalInfo
	 * Size -> 0x0018
	 */
	struct FExternalAuthAdditionalInfo
	{
	public:
		struct FDateTime                                           eulaAcceptTime;                                          // 0x0000(0x0008) BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              environment;                                             // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.ExternalAuthAdditionalInfoRequestDto
	 * Size -> 0x0020
	 */
	struct FExternalAuthAdditionalInfoRequestDto
	{
	public:
		class FString                                              eulaAcceptTime;                                          // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              environment;                                             // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.FileArrayResponse
	 * Size -> 0x0020
	 */
	struct FFileArrayResponse
	{
	public:
		TArray<struct FFile>                                       Data;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FCFCoreApiResponsePagination                        pagination;                                              // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.GameResponse
	 * Size -> 0x0068
	 */
	struct FGameResponse
	{
	public:
		struct FGame                                               Data;                                                    // 0x0000(0x0068) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.GameVersionDetailed
	 * Size -> 0x0028
	 */
	struct FGameVersionDetailed
	{
	public:
		int64_t                                                    ID;                                                      // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              slug;                                                    // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.GameVersionsDetailedByType
	 * Size -> 0x0018
	 */
	struct FGameVersionsDetailedByType
	{
	public:
		int64_t                                                    Type;                                                    // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGameVersionDetailed>                        versions;                                                // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.GameVersionsDetailedByTypeArrayResponse
	 * Size -> 0x0010
	 */
	struct FGameVersionsDetailedByTypeArrayResponse
	{
	public:
		TArray<struct FGameVersionsDetailedByType>                 Data;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.GameVersionByTypeArrayResponse
	 * Size -> 0x0010
	 */
	struct FGameVersionByTypeArrayResponse
	{
	public:
		TArray<struct FGameVersionsByType>                         Data;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.GameVersionTypeArrayResponse
	 * Size -> 0x0010
	 */
	struct FGameVersionTypeArrayResponse
	{
	public:
		TArray<struct FGameVersionType>                            Data;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.GenerateTempTokenResponse
	 * Size -> 0x0010
	 */
	struct FGenerateTempTokenResponse
	{
	public:
		class FString                                              Data;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.GetAuthTokenByExternalProviderRequestDto
	 * Size -> 0x0040
	 */
	struct FGetAuthTokenByExternalProviderRequestDto
	{
	public:
		class FString                                              provider;                                                // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              token;                                                   // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FExternalAuthAdditionalInfoRequestDto               additionalInfo;                                          // 0x0020(0x0020) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.GetAuthTokenRequestDto
	 * Size -> 0x0018
	 */
	struct FGetAuthTokenRequestDto
	{
	public:
		class FString                                              email;                                                   // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    otp;                                                     // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4592[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct cfcore.GetBlockedDetailsResponse
	 * Size -> 0x0040
	 */
	struct FGetBlockedDetailsResponse
	{
	public:
		struct FBlockedDetails                                     Data;                                                    // 0x0000(0x0040) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.CFCoreGetCategoriesFilter
	 * Size -> 0x0004
	 */
	struct FCFCoreGetCategoriesFilter
	{
	public:
		int32_t                                                    classId;                                                 // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.GetFilesByIdsRequestDto
	 * Size -> 0x0010
	 */
	struct FGetFilesByIdsRequestDto
	{
	public:
		TArray<int64_t>                                            fileIds;                                                 // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.CFCoreGetFilesFilter
	 * Size -> 0x0010
	 */
	struct FCFCoreGetFilesFilter
	{
	public:
		TArray<int64_t>                                            fileIds;                                                 // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.GetModsByIdsRequestDto
	 * Size -> 0x0028
	 */
	struct FGetModsByIdsRequestDto
	{
	public:
		TArray<int64_t>                                            modIds;                                                  // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int64_t>                                            devModIds;                                               // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       filterPcOnly;                                            // 0x0020(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LG78[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct cfcore.CFCoreGetModsFilter
	 * Size -> 0x0028
	 */
	struct FCFCoreGetModsFilter
	{
	public:
		TArray<int64_t>                                            modIds;                                                  // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int64_t>                                            devModIds;                                               // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       filterPcOnly;                                            // 0x0020(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OY3Y[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct cfcore.InstalledModArray
	 * Size -> 0x0010
	 */
	struct FInstalledModArray
	{
	public:
		TArray<struct FInstalledMod>                               installedMods;                                           // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.MatchPlatformFilesFilter
	 * Size -> 0x0010
	 */
	struct FMatchPlatformFilesFilter
	{
	public:
		TArray<int64_t>                                            fileIds;                                                 // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.MeResponse
	 * Size -> 0x0040
	 */
	struct FMeResponse
	{
	public:
		struct FMe                                                 Data;                                                    // 0x0000(0x0040) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.ModArrayResponse
	 * Size -> 0x0020
	 */
	struct FModArrayResponse
	{
	public:
		TArray<struct FCFCoreMod>                                  Data;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FCFCoreApiResponsePagination                        pagination;                                              // 0x0010(0x0010) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.ModFileChunkMetadata
	 * Size -> 0x0018
	 */
	struct FModFileChunkMetadata
	{
	public:
		class FString                                              chunkedUploadId;                                         // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    totalChunks;                                             // 0x0010(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    chunkIndex;                                              // 0x0014(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.ModIdArrayResponse
	 * Size -> 0x0010
	 */
	struct FModIdArrayResponse
	{
	public:
		TArray<int64_t>                                            Data;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.ModResponse
	 * Size -> 0x0190
	 */
	struct FModResponse
	{
	public:
		struct FCFCoreMod                                          Data;                                                    // 0x0000(0x0190) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.ReportingReasonsResponse
	 * Size -> 0x0010
	 */
	struct FReportingReasonsResponse
	{
	public:
		TArray<struct FReportingReason>                            Data;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.ReportModRequestDto
	 * Size -> 0x0018
	 */
	struct FReportModRequestDto
	{
	public:
		int64_t                                                    reportReasonId;                                          // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              reportText;                                              // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.SDKVersion
	 * Size -> 0x0004
	 */
	struct FSDKVersion
	{
	public:
		int32_t                                                    Build;                                                   // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.SDKVersionResponse
	 * Size -> 0x0004
	 */
	struct FSDKVersionResponse
	{
	public:
		struct FSDKVersion                                         Data;                                                    // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.CFCoreSearchModsFilter
	 * Size -> 0x0030
	 */
	struct FCFCoreSearchModsFilter
	{
	public:
		int32_t                                                    classId;                                                 // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    categoryId;                                              // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              GameVersion;                                             // 0x0008(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              searchFilter;                                            // 0x0018(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECFCoreModsSearchSortField                                 sortField;                                               // 0x0028(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECFCoreSortOrder                                           sortOrder;                                               // 0x0029(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECFCoreModLoaderType                                       modLoaderType;                                           // 0x002A(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IAWC[0x1];                                   // 0x002B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    gameVersionTypeId;                                       // 0x002C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.SendSecurityCodeRequestDto
	 * Size -> 0x0010
	 */
	struct FSendSecurityCodeRequestDto
	{
	public:
		class FString                                              email;                                                   // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.StringResponse
	 * Size -> 0x0010
	 */
	struct FStringResponse
	{
	public:
		class FString                                              Data;                                                    // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.TermsResponse
	 * Size -> 0x00D0
	 */
	struct FTermsResponse
	{
	public:
		struct FTerms                                              Data;                                                    // 0x0000(0x00D0) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.UnblockModsRequest
	 * Size -> 0x0040
	 */
	struct FUnblockModsRequest
	{
	public:
		TArray<int64_t>                                            blockedAuthors;                                          // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int64_t>                                            blockedMods;                                             // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int64_t>                                            blockedServerMods;                                       // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FString>                                      blockedServers;                                          // 0x0030(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.UpdateModRequest
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	struct FUpdateModRequest : public FCreateModRequest
	{	};

	/**
	 * ScriptStruct cfcore.UpdateVoteRequestDto
	 * Size -> 0x0004
	 */
	struct FUpdateVoteRequestDto
	{
	public:
		int32_t                                                    Direction;                                               // 0x0000(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.UploadedModFileResponse
	 * Size -> 0x0028
	 */
	struct FUploadedModFileResponse
	{
	public:
		struct FUploadedModFile                                    Data;                                                    // 0x0000(0x0028) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.UploadModFileChunkResponse
	 * Size -> 0x0001
	 */
	struct FUploadModFileChunkResponse
	{
	public:
		bool                                                       Data;                                                    // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct cfcore.UserContextInfo
	 * Size -> 0x0010
	 */
	struct FUserContextInfo
	{
	public:
		class FString                                              AuthToken;                                               // 0x0000(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
