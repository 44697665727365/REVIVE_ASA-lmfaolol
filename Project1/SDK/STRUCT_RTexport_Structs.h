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
	 * UserDefinedStruct STRUCT_RTexport.STRUCT_RTexport
	 * Size -> 0x0010
	 */
	struct FSTRUCT_RTexport
	{
	public:
		ENUM_RT_names                                              RT_internal_9_342FE3F542D872C9792BCDBFFE7E34FA;          // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3E6Q[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextureRenderTarget*                                RT_external_10_68894CA04493F41258E880BEA5059EF6;         // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
