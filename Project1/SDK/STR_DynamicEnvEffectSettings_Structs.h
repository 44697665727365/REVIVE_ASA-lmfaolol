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
	 * UserDefinedStruct STR_DynamicEnvEffectSettings.STR_DynamicEnvEffectSettings
	 * Size -> 0x0158
	 */
	struct FSTR_DynamicEnvEffectSettings
	{
	public:
		unsigned char                                              System_13_7E258CBA408A8E6D68CAACA89AB62909[0x30];        // 0x0000(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Audio_11_236121C042640FE4174CA5BFBBDA7056[0x30];         // 0x0030(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		struct FVector                                             SpawnOffset_31_B8848E5742AD6BBAB0E71483407BC0F9;         // 0x0060(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FFloatInterval                                      Scale_52_4513ADA4494889462A3D49A9B1AB7CB4;               // 0x0078(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FSTR_DynamicEnvEffectSpawnConditions                SpawnConditions_42_57CFDE314C42CB9DA3AF3E81E86D430D;     // 0x0080(0x0038) Edit, BlueprintVisible, HasGetValueTypeHash
		struct FSTR_DynamicEnvEffectCustomParameters               ParticleParameters_51_F2C21140480CE1A391FBDBB8E009B0FF;  // 0x00B8(0x00A0) Edit, BlueprintVisible, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
