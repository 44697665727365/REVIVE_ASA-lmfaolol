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
	 * UserDefinedStruct STRUCT_FluidLOD.STRUCT_FluidLOD
	 * Size -> 0x0048
	 */
	struct FSTRUCT_FluidLOD
	{
	public:
		struct FVector                                             LOD_pos_8_9074165941E8BD3CD8040DB14A1BF475;              // 0x0000(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LOD_res_7_A3D03EA641CD219707BBAC9DCD84BE8D;              // 0x0018(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LOD_size_6_4D6CAD47445989D401C7689C0CB585BB;             // 0x0030(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
