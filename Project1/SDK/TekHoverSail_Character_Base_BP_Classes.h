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
	 * BlueprintGeneratedClass TekHoverSail_Character_Base_BP.TekHoverSail_Character_Base_BP_C
	 * Size -> 0x0040 (FullSize[0x3328] - InheritedSize[0x32E8])
	 */
	class ATekHoverSail_Character_Base_BP_C : public ADino_Character_BP_C
	{
	public:
		bool                                                       destroyedbyitem;                                         // 0x32E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XPWG[0x7];                                   // 0x32E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CurrentFuelUnitPercent;                                  // 0x32F0(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		double                                                     SkiffDeathDropInventoryLifetime;                         // 0x32F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       hassetitemref;                                           // 0x3300(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HM6J[0x7];                                   // 0x3301(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimalItem*                                         spawneditemref;                                          // 0x3308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     passedinfollowdistancetostopwithin;                      // 0x3310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class APlayerController*                                   spawningcharacter;                                       // 0x3318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UClass*                                              HoversailClass;                                          // 0x3320(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void destroyitself();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
