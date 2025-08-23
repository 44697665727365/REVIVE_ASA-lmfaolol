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
	 * UserDefinedStruct STR_DynamicEnvEffectCustomParameters.STR_DynamicEnvEffectCustomParameters
	 * Size -> 0x00A0
	 */
	struct FSTR_DynamicEnvEffectCustomParameters
	{
	public:
		TMap<class FName, double>                                  Float_9_CFE01E134EC62E6340BD7D88B773B99A;                // 0x0000(0x0050) Edit, BlueprintVisible
		TMap<class FName, struct FVector>                          Vector_10_F5BF128E4D294A58A0430A9E47D220C3;              // 0x0050(0x0050) Edit, BlueprintVisible
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
