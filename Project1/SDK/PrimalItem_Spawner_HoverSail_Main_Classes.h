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
	 * BlueprintGeneratedClass PrimalItem_Spawner_HoverSail_Main.PrimalItem_Spawner_HoverSail_Main_C
	 * Size -> 0x0037 (FullSize[0x1158] - InheritedSize[0x1121])
	 */
	class UPrimalItem_Spawner_HoverSail_Main_C : public UPrimalItem_Spawner_HoverSail_Parent_C
	{
	public:
		bool                                                       showfuelpercentagenotworkingondedi;                      // 0x1121(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PGRE[0x6];                                   // 0x1122(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              failedtospawncauseondinostring;                          // 0x1128(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              failedtospawncauseseatedstring;                          // 0x1138(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              failedtotransferinventorycausereferenceinvalidstring;    // 0x1148(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash

	public:
		void BPInitIconMaterial();
		void BlueprintUsed();
		void OnDinoSpawned(class APrimalDinoCharacter* NewDino);
		class FString BPGetCustomInventoryWidgetText();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
