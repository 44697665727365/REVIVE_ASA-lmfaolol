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
	 * Class Sentry.SentryAttachment
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USentryAttachment : public UObject
	{
	public:
		unsigned char                                              UnknownData_NF7Z[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void InitializeWithPath(const class FString& Path, const class FString& Filename, const class FString& ContentType);
		void InitializeWithData(TArray<unsigned char> Data, const class FString& Filename, const class FString& ContentType);
		class FString GetPath();
		class FString GetFilename();
		TArray<unsigned char> GetData();
		class FString GetContentType();
		static UClass* StaticClass();
	};

	/**
	 * Class Sentry.SentryBreadcrumb
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USentryBreadcrumb : public UObject
	{
	public:
		unsigned char                                              UnknownData_6BFY[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetType(const class FString& Type);
		void SetMessage(const class FString& Message);
		void SetLevel(ESentryLevel Level);
		void SetData(TMap<class FString, class FString> Data);
		void SetCategory(const class FString& Category);
		class FString GetType();
		class FString GetMessage();
		ESentryLevel GetLevel();
		TMap<class FString, class FString> GetData();
		class FString GetCategory();
		static UClass* StaticClass();
	};

	/**
	 * Class Sentry.SentryEvent
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USentryEvent : public UObject
	{
	public:
		unsigned char                                              UnknownData_9M9L[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetMessage(const class FString& Message);
		void SetLevel(ESentryLevel Level);
		class FString GetMessage();
		ESentryLevel GetLevel();
		static UClass* StaticClass();
	};

	/**
	 * Class Sentry.SentryId
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USentryId : public UObject
	{
	public:
		unsigned char                                              UnknownData_IXHZ[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		class FString ToString();
		static UClass* StaticClass();
	};

	/**
	 * Class Sentry.SentryLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USentryLibrary : public UBlueprintFunctionLibrary
	{
	public:
		TArray<unsigned char> STATIC_StringToBytesArray(const class FString& InString);
		class FString STATIC_SaveStringToFile(const class FString& InString, const class FString& Filename);
		class USentryUserFeedback* STATIC_CreateSentryUserFeedback(class USentryId* EventId, const class FString& Name, const class FString& email, const class FString& Comments);
		class USentryUser* STATIC_CreateSentryUser(const class FString& email, const class FString& ID, const class FString& username, const class FString& IpAddress, TMap<class FString, class FString> Data);
		class USentryEvent* STATIC_CreateSentryEvent(const class FString& Message, ESentryLevel Level);
		class USentryBreadcrumb* STATIC_CreateSentryBreadcrumb(const class FString& Message, const class FString& Type, const class FString& Category, TMap<class FString, class FString> Data, ESentryLevel Level);
		class USentryAttachment* STATIC_CreateSentryAttachmentWithPath(const class FString& Path, const class FString& Filename, const class FString& ContentType);
		class USentryAttachment* STATIC_CreateSentryAttachmentWithData(TArray<unsigned char> Data, const class FString& Filename, const class FString& ContentType);
		class FString STATIC_ByteArrayToString(TArray<unsigned char> Array);
		static UClass* StaticClass();
	};

	/**
	 * Class Sentry.SentryScope
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USentryScope : public UObject
	{
	public:
		unsigned char                                              UnknownData_CEAT[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetTagValue(const class FString& Key, const class FString& Value);
		void SetTags(TMap<class FString, class FString> Tags);
		void SetLevel(ESentryLevel Level);
		void SetFingerprint(TArray<class FString> fingerprint);
		void SetExtraValue(const class FString& Key, const class FString& Value);
		void SetExtras(TMap<class FString, class FString> Extras);
		void SetEnvironment(const class FString& environment);
		void SetDist(const class FString& Dist);
		void SetContext(const class FString& Key, TMap<class FString, class FString> Values);
		void RemoveTag(const class FString& Key);
		void RemoveExtra(const class FString& Key);
		void RemoveContext(const class FString& Key);
		class FString GetTagValue(const class FString& Key);
		TMap<class FString, class FString> GetTags();
		ESentryLevel GetLevel();
		TArray<class FString> GetFingerprint();
		class FString GetExtraValue(const class FString& Key);
		TMap<class FString, class FString> GetExtras();
		class FString GetEnvironment();
		class FString GetDist();
		void ClearBreadcrumbs();
		void ClearAttachments();
		void Clear();
		void AddBreadcrumb(class USentryBreadcrumb* Breadcrumb);
		void AddAttachment(class USentryAttachment* Attachment);
		static UClass* StaticClass();
	};

	/**
	 * Class Sentry.SentrySettings
	 * Size -> 0x0088 (FullSize[0x00B0] - InheritedSize[0x0028])
	 */
	class USentrySettings : public UObject
	{
	public:
		class FString                                              DsnUrl;                                                  // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Release;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              environment;                                             // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       InitAutomatically;                                       // 0x0058(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableVerboseLogging;                                    // 0x0059(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAutomaticBreadcrumbs                               AutomaticBreadcrumbs;                                    // 0x005A(0x0005) Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic
		struct FTagsPromotion                                      TagsPromotion;                                           // 0x005F(0x0006) Edit, BlueprintVisible, Config, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       EnableAutoCrashCapturing;                                // 0x0065(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UploadSymbolsAutomatically;                              // 0x0066(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_046C[0x1];                                   // 0x0067(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              ProjectName;                                             // 0x0068(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OrgName;                                                 // 0x0078(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AuthToken;                                               // 0x0088(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IncludeSources;                                          // 0x0098(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_25TM[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              CrashReporterUrl;                                        // 0x00A0(0x0010) Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Sentry.SentrySubsystem
	 * Size -> 0x0038 (FullSize[0x0068] - InheritedSize[0x0030])
	 */
	class USentrySubsystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_NOKY[0x38];                                  // 0x0030(0x0038) MISSED OFFSET (PADDING)

	public:
		void SetUser(class USentryUser* User);
		void SetTag(const class FString& Key, const class FString& Value);
		void SetLevel(ESentryLevel Level);
		void SetContext(const class FString& Key, TMap<class FString, class FString> Values);
		void RemoveUser();
		void RemoveTag(const class FString& Key);
		void InitializeWithSettings(const class FScriptDelegate& OnConfigureSettings);
		void Initialize();
		void ConfigureScope(const class FScriptDelegate& OnConfigureScope);
		void Close();
		void ClearBreadcrumbs();
		void CaptureUserFeedbackWithParams(class USentryId* EventId, const class FString& email, const class FString& Comments, const class FString& Name);
		void CaptureUserFeedback(class USentryUserFeedback* UserFeedback);
		class USentryId* CaptureMessageWithScope(const class FString& Message, const class FScriptDelegate& OnConfigureScope, ESentryLevel Level);
		class USentryId* CaptureMessage(const class FString& Message, ESentryLevel Level);
		class USentryId* CaptureEventWithScope(class USentryEvent* Event, const class FScriptDelegate& OnConfigureScope);
		class USentryId* CaptureEvent(class USentryEvent* Event);
		void AddBreadcrumbWithParams(const class FString& Message, const class FString& Category, const class FString& Type, TMap<class FString, class FString> Data, ESentryLevel Level);
		void AddBreadcrumb(class USentryBreadcrumb* Breadcrumb);
		static UClass* StaticClass();
	};

	/**
	 * Class Sentry.SentryUser
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USentryUser : public UObject
	{
	public:
		unsigned char                                              UnknownData_9JPN[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetUsername(const class FString& username);
		void SetIpAddress(const class FString& IpAddress);
		void SetId(const class FString& ID);
		void SetEmail(const class FString& email);
		void SetData(TMap<class FString, class FString> Data);
		class FString GetUsername();
		class FString GetIpAddress();
		class FString GetId();
		class FString GetEmail();
		TMap<class FString, class FString> GetData();
		static UClass* StaticClass();
	};

	/**
	 * Class Sentry.SentryUserFeedback
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class USentryUserFeedback : public UObject
	{
	public:
		unsigned char                                              UnknownData_AV5F[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetName(const class FString& Name);
		void SetEmail(const class FString& email);
		void SetComment(const class FString& Comments);
		void Initialize(class USentryId* EventId);
		class FString GetName();
		class FString GetEmail();
		class FString GetComment();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
