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
	 * Class AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAnalyticsBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_StartSessionWithAttributes(TArray<struct FAnalyticsEventAttr> Attributes);
		bool STATIC_StartSession();
		void STATIC_SetUserId(const class FString& UserId);
		void STATIC_SetSessionId(const class FString& SessionId);
		void STATIC_SetLocation(const class FString& Location);
		void STATIC_SetGender(const class FString& Gender);
		void STATIC_SetBuildInfo(const class FString& BuildInfo);
		void STATIC_SetAge(int32_t Age);
		void STATIC_RecordSimpleItemPurchaseWithAttributes(const class FString& ItemID, int32_t ItemQuantity, TArray<struct FAnalyticsEventAttr> Attributes);
		void STATIC_RecordSimpleItemPurchase(const class FString& ItemID, int32_t ItemQuantity);
		void STATIC_RecordSimpleCurrencyPurchaseWithAttributes(const class FString& GameCurrencyType, int32_t GameCurrencyAmount, TArray<struct FAnalyticsEventAttr> Attributes);
		void STATIC_RecordSimpleCurrencyPurchase(const class FString& GameCurrencyType, int32_t GameCurrencyAmount);
		void STATIC_RecordProgressWithFullHierarchyAndAttributes(const class FString& ProgressType, TArray<class FString> ProgressNames, TArray<struct FAnalyticsEventAttr> Attributes);
		void STATIC_RecordProgressWithAttributes(const class FString& ProgressType, const class FString& ProgressName, TArray<struct FAnalyticsEventAttr> Attributes);
		void STATIC_RecordProgress(const class FString& ProgressType, const class FString& ProgressName);
		void STATIC_RecordItemPurchase(const class FString& ItemID, const class FString& Currency, int32_t PerItemCost, int32_t ItemQuantity);
		void STATIC_RecordEventWithAttributes(const class FString& EventName, TArray<struct FAnalyticsEventAttr> Attributes);
		void STATIC_RecordEventWithAttribute(const class FString& EventName, const class FString& AttributeName, const class FString& AttributeValue);
		void STATIC_RecordEvent(const class FString& EventName);
		void STATIC_RecordErrorWithAttributes(const class FString& Error, TArray<struct FAnalyticsEventAttr> Attributes);
		void STATIC_RecordError(const class FString& Error);
		void STATIC_RecordCurrencyPurchase(const class FString& GameCurrencyType, int32_t GameCurrencyAmount, const class FString& RealCurrencyType, float RealMoneyCost, const class FString& PaymentProvider);
		void STATIC_RecordCurrencyGivenWithAttributes(const class FString& GameCurrencyType, int32_t GameCurrencyAmount, TArray<struct FAnalyticsEventAttr> Attributes);
		void STATIC_RecordCurrencyGiven(const class FString& GameCurrencyType, int32_t GameCurrencyAmount);
		struct FAnalyticsEventAttr STATIC_MakeEventAttribute(const class FString& AttributeName, const class FString& AttributeValue);
		class FString STATIC_GetUserId();
		class FString STATIC_GetSessionId();
		void STATIC_FlushEvents();
		void STATIC_EndSession();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
