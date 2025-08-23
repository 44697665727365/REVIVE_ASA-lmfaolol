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
	 * BlueprintGeneratedClass PrimalItemConsumableMiracleGro.PrimalItemConsumableMiracleGro_C
	 * Size -> 0x0058 (FullSize[0x0F08] - InheritedSize[0x0EB0])
	 */
	class UPrimalItemConsumableMiracleGro_C : public UPrimalItemConsumableEatable_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0EB0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPrimalItem*                                         SelfObj;                                                 // 0x0EB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     MaxRepopulationRange;                                    // 0x0EC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxFoliagesToRepopulate;                                 // 0x0EC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BH0U[0x4];                                   // 0x0ECC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             StructureDownTraceVector;                                // 0x0ED0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             StructureUpTraceVector;                                  // 0x0EE8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              RepopulationEmitter;                                     // 0x0F00(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash

	public:
		void BlueprintUsed();
		void ExecuteUbergraph_PrimalItemConsumableMiracleGro(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
