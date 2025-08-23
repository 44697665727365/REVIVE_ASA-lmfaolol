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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum ArkProceduralMeshComponent.EArkProcMeshSliceCapOption
	 */
	enum class EArkProcMeshSliceCapOption : uint8_t
	{
		NoCap                  = 0,
		CreateNewSectionForCap = 1,
		UseLastSectionForCap   = 2,
		MAX                    = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ArkProceduralMeshComponent.ArkProcMeshSection
	 * Size -> 0x0060
	 */
	struct FArkProcMeshSection
	{
	public:
		unsigned char                                              UnknownData_22W9[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<uint32_t>                                           ProcIndexBuffer;                                         // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FBox                                                SectionLocalBox;                                         // 0x0020(0x0038) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnableCollision;                                        // 0x0058(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSectionVisible;                                         // 0x0059(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2CNM[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ArkProceduralMeshComponent.ArkProcMeshTangent
	 * Size -> 0x0010
	 */
	struct FArkProcMeshTangent
	{
	public:
		struct FVector3f                                           TangentX;                                                // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlipTangentY;                                           // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QAYV[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
