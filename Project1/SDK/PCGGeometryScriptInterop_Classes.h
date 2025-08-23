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
	 * Class PCGGeometryScriptInterop.PCGMeshSamplerSettings
	 * Size -> 0x0068 (FullSize[0x01B0] - InheritedSize[0x0148])
	 */
	class UPCGMeshSamplerSettings : public UPCGSettings
	{
	public:
		EPCGMeshSamplingMethod                                     SamplingMethod;                                          // 0x0148(0x0001) ELEMENT_SIZE_MISMATCH Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HCL3[0x3];                                   // 0x0149(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_U07H[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     StaticMeshPath;                                          // 0x0150(0x0020) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRedAsDensity;                                        // 0x0170(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bVoxelize;                                               // 0x0171(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HI0A[0x2];                                   // 0x0172(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VoxelSize;                                               // 0x0174(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoveHiddenTriangles;                                  // 0x0178(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGeometryScriptLODType                                     RequestedLODType;                                        // 0x0179(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ETT5[0x2];                                   // 0x017A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RequestedLODIndex;                                       // 0x017C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGeometryScriptMeshPointSamplingOptions             SamplingOptions;                                         // 0x0180(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FGeometryScriptNonUniformPointSamplingOptions       NonUniformSamplingOptions;                               // 0x0198(0x0018) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
