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
	 * BlueprintGeneratedClass PrimalItemResource_Element.PrimalItemResource_Element_C
	 * Size -> 0x0020 (FullSize[0x0ED0] - InheritedSize[0x0EB0])
	 */
	class UPrimalItemResource_Element_C : public UPrimalItemResourceGeneric_C
	{
	public:
		class FName                                                ShapeshifterSmallsCustomTag;                             // 0x0EB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APrimalCharacter*                                    PreviousShapeshifterClientValue;                         // 0x0EB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class APrimalCharacter*                                    ServerShapeshifterToFeed;                                // 0x0EC0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FName                                                ShapeshifterBiglyCustomTag;                              // 0x0EC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BPServerHandleItemNetExecCommand(class AShooterPlayerController* ForPC, const class FName& CommandName, const struct FBPNetExecParams& ExecParams);
		void FindShapeshifter(class APrimalDinoCharacter** Shapeshifter, bool* RetMounted);
		void BPPreUseItem();
		bool BPCanUse(bool bIgnoreCooldown);
		bool BPSupportUseOntoItem(class UPrimalItem* DestinationItem);
		void BPUsedOntoItem(class UPrimalItem* DestinationItem, int32_t AdditionalData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
