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
	 * BlueprintGeneratedClass PrimalItemArmorGeneric.PrimalItemArmorGeneric_C
	 * Size -> 0x0008 (FullSize[0x0EB8] - InheritedSize[0x0EB0])
	 */
	class UPrimalItemArmorGeneric_C : public UPrimalItem_Base_C
	{
	public:
		class UPDA_FoleyCollection_C*                              FoleyCollection;                                         // 0x0EB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
