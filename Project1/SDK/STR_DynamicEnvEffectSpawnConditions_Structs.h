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
	 * UserDefinedStruct STR_DynamicEnvEffectSpawnConditions.STR_DynamicEnvEffectSpawnConditions
	 * Size -> 0x0034
	 */
	struct FSTR_DynamicEnvEffectSpawnConditions
	{
	public:
		bool                                                       SpawnDuringDay_1_656A84084312B6B5C00623B1612A1ED1;       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SpawnDuringNight_3_20AD075844236DA30CC210AB0AAB60B0;     // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OnlySpawnWaterSurface_5_53F0AA464D4E4674445814B18E00136C; // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OnlySpawnUnderwater_7_B3D9945A4D2D005D13CFD8888094C5E9;  // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KU4J[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EPhysicalSurface>                                   OnlyAllowPhysMat_18_21C7F5EC466050452DCFBEB12F32C270;    // 0x0008(0x0010) Edit, BlueprintVisible
		TArray<EPhysicalSurface>                                   OnlyAllowBiomes_15_72CC78974EB38B2BE1DB1D90B3BFD411;     // 0x0018(0x0010) Edit, BlueprintVisible
		E_EmitterPool                                              Pool_23_F6E61A794A943771E66E7AA52C3F2ADA;                // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_09YO[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInt32Interval                                      WindMinMax_26_B3A473034E9D42A666BD518F4BC9499B;          // 0x002C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
