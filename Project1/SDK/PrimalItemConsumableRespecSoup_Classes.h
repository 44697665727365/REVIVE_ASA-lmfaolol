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
	 * BlueprintGeneratedClass PrimalItemConsumableRespecSoup.PrimalItemConsumableRespecSoup_C
	 * Size -> 0x0018 (FullSize[0x0EC8] - InheritedSize[0x0EB0])
	 */
	class UPrimalItemConsumableRespecSoup_C : public UPrimalItemConsumableEatable_BuffingSoup_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0EB0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPrimalItem*                                         SelfObj;                                                 // 0x0EB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       UseRespecCooldown;                                       // 0x0EC0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K5LE[0x3];                                   // 0x0EC1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CooldownTimeInSeconds;                                   // 0x0EC4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		class FString BPGetCustomInventoryWidgetText();
		void GetLastRespecTime(double* LastRespecUtcTime);
		bool BPCanUse(bool bIgnoreCooldown);
		void BlueprintUsed();
		void ExecuteUbergraph_PrimalItemConsumableRespecSoup(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
