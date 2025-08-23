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
	 * Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAssetWithPath
	 */
	struct UGroomBlueprintLibrary_CreateNewGroomBindingAssetWithPath_Params
	{
	public:
		class FString                                              InDesiredPackagePath;                                    // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGroomAsset*                                         InGroomAsset;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USkeletalMesh*                                       InSkeletalMesh;                                          // 0x0018(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InNumInterpolationPoints;                                // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VZOO[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMesh*                                       InSourceSkeletalMeshForTransfer;                         // 0x0028(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InMatchingSection;                                       // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Z773[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGroomBindingAsset*                                  ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGroomBindingAsset
	 */
	struct UGroomBlueprintLibrary_CreateNewGroomBindingAsset_Params
	{
	public:
		class UGroomAsset*                                         InGroomAsset;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USkeletalMesh*                                       InSkeletalMesh;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InNumInterpolationPoints;                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_KBPW[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class USkeletalMesh*                                       InSourceSkeletalMeshForTransfer;                         // 0x0018(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    InMatchingSection;                                       // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RBKZ[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGroomBindingAsset*                                  ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAssetWithPath
	 */
	struct UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAssetWithPath_Params
	{
	public:
		class FString                                              DesiredPackagePath;                                      // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGroomAsset*                                         GroomAsset;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGeometryCache*                                      GeometryCache;                                           // 0x0018(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumInterpolationPoints;                                  // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GBJ8[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGeometryCache*                                      SourceGeometryCacheForTransfer;                          // 0x0028(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MatchingSection;                                         // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WBU5[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGroomBindingAsset*                                  ReturnValue;                                             // 0x0038(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HairStrandsCore.GroomBlueprintLibrary.CreateNewGeometryCacheGroomBindingAsset
	 */
	struct UGroomBlueprintLibrary_CreateNewGeometryCacheGroomBindingAsset_Params
	{
	public:
		class UGroomAsset*                                         GroomAsset;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGeometryCache*                                      GeometryCache;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumInterpolationPoints;                                  // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_JB60[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGeometryCache*                                      SourceGeometryCacheForTransfer;                          // 0x0018(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    MatchingSection;                                         // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_110I[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGroomBindingAsset*                                  ReturnValue;                                             // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HairStrandsCore.GroomComponent.SetPhysicsAsset
	 */
	struct UGroomComponent_SetPhysicsAsset_Params
	{
	public:
		class UPhysicsAsset*                                       InPhysicsAsset;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HairStrandsCore.GroomComponent.SetMeshDeformer
	 */
	struct UGroomComponent_SetMeshDeformer_Params
	{
	public:
		class UMeshDeformer*                                       InMeshDeformer;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HairStrandsCore.GroomComponent.SetHairLengthScaleEnable
	 */
	struct UGroomComponent_SetHairLengthScaleEnable_Params
	{
	public:
		bool                                                       bEnable;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HairStrandsCore.GroomComponent.SetHairLengthScale
	 */
	struct UGroomComponent_SetHairLengthScale_Params
	{
	public:
		float                                                      Scale;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HairStrandsCore.GroomComponent.SetGroomAsset
	 */
	struct UGroomComponent_SetGroomAsset_Params
	{
	public:
		class UGroomAsset*                                         Asset;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HairStrandsCore.GroomComponent.SetEnableSimulation
	 */
	struct UGroomComponent_SetEnableSimulation_Params
	{
	public:
		bool                                                       bInEnableSimulation;                                     // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HairStrandsCore.GroomComponent.SetBindingAsset
	 */
	struct UGroomComponent_SetBindingAsset_Params
	{
	public:
		class UGroomBindingAsset*                                  InBinding;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HairStrandsCore.GroomComponent.ResetSimulation
	 */
	struct UGroomComponent_ResetSimulation_Params
	{	};

	/**
	 * Function HairStrandsCore.GroomComponent.ResetCollisionComponents
	 */
	struct UGroomComponent_ResetCollisionComponents_Params
	{	};

	/**
	 * Function HairStrandsCore.GroomComponent.GetNiagaraComponent
	 */
	struct UGroomComponent_GetNiagaraComponent_Params
	{
	public:
		int32_t                                                    GroupIndex;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_VLLL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UNiagaraComponent*                                   ReturnValue;                                             // 0x0008(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HairStrandsCore.GroomComponent.GetIsHairLengthScaleEnabled
	 */
	struct UGroomComponent_GetIsHairLengthScaleEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function HairStrandsCore.GroomComponent.AddCollisionComponent
	 */
	struct UGroomComponent_AddCollisionComponent_Params
	{
	public:
		class USkeletalMeshComponent*                              SkeletalMeshComponent;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
