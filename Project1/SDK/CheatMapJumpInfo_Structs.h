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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct CheatMapJumpInfo.CheatMapJumpInfo
	 * Size -> 0x0040
	 */
	struct FCheatMapJumpInfo
	{
	public:
		class FString                                              Title_4_A4481B644D42E5FE2343EDAE476A0BC1;                // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash
		struct FVector                                             LatLongZ_6_9622632A4ACF79E9795811B6443B3434;             // 0x0010(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Yaw_9_6AC569F940AAE2C5DDDCCDAEF30CFC76;                  // 0x0028(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		unsigned char                                              UnknownData_KUYK[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              TimeOfDay_12_D183AB1C4811CF9D27E1BA90B45766F4;           // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
