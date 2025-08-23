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
	 * RigVMBlueprintGeneratedClass Human_Male_TPV_OrientationWarping_CtrlRig.Human_Male_TPV_OrientationWarping_CtrlRig_C
	 * Size -> 0x00E1 (FullSize[0x04D9] - InheritedSize[0x03F8])
	 */
	class UHuman_Male_TPV_OrientationWarping_CtrlRig_C : public UControlRig
	{
	public:
		double                                                     RelativeAngle;                                           // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     HipAngle;                                                // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_L9KT[0x8];                                   // 0x0408(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          lfoot;                                                   // 0x0410(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          rfoot;                                                   // 0x0470(0x0060) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Multiply_1_1_B;                                          // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bApplyIK;                                                // 0x04D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * RigVMMemoryStorageGeneratorClass Human_Male_TPV_OrientationWarping_CtrlRig.RigVMMemory_Literal
	 * Size -> 0x0130 (FullSize[0x0158] - InheritedSize[0x0028])
	 */
	class URigVMMemory_Literal : public URigVMMemoryStorage
	{
	public:
		struct FRigElementKey                                      RigVMModel___RigUnit_SetRotation_3_Item__Const;          // 0x0028(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		ERigVMTransformSpace                                       RigVMModel___RigUnit_SetRotation_3_Space__Const;         // 0x0034(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       RigVMModel___RigUnit_SetRotation_3_bInitial__Const;      // 0x0035(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SH46[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             RigVMModel___RigVMFunction_MathQuaternionFromEuler_1_Euler__Const; // 0x0038(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Multiply_1_1_B__Const;                      // 0x0050(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		EEulerRotationOrder                                        RigVMModel___RigVMFunction_MathQuaternionFromEuler_1_RotationOrder__Const; // 0x0058(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_2MTO[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RigVMModel___RigUnit_SetRotation_3_Weight__Const;        // 0x005C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       RigVMModel___RigUnit_SetRotation_3_bPropagateToChildren__Const; // 0x0060(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7VCB[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     RigVMModel___Multiply_1_1_1_B__Const;                    // 0x0068(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FRigElementKey>                              RigVMModel___RigUnit_ItemArray_Items__Const;             // 0x0070(0x0010) Edit, EditConst, NonTransactional
		struct FRigElementKey                                      RigVMModel___RigUnit_GetTransform_4_Item__Const;         // 0x0080(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___RigUnit_GetTransform_5_Item__Const;         // 0x008C(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___RigUnit_SetRotation_Item__Const;            // 0x0098(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VOU2[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     RigVMModel___Multiply_1_B__Const;                        // 0x00A8(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RigVMModel___Interpolate_T__Const;                       // 0x00B0(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FName                                                RigVMModel___PBIK_Root__Const;                           // 0x00B4(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BF3G[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPBIKEffector>                               RigVMModel___PBIK_Effectors__Const;                      // 0x00C0(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FPBIKBoneSetting>                            RigVMModel___PBIK_BoneSettings__Const;                   // 0x00D0(0x0010) Edit, EditConst, NonTransactional
		TArray<class FName>                                        RigVMModel___PBIK_ExcludedBones__Const;                  // 0x00E0(0x0010) Edit, EditConst, NonTransactional
		struct FPBIKSolverSettings                                 RigVMModel___PBIK_Settings__Const;                       // 0x00F0(0x003C) Edit, EditConst, NonTransactional, NoDestructor
		struct FPBIKDebug                                          RigVMModel___PBIK_Debug__Const;                          // 0x012C(0x0008) Edit, EditConst, NonTransactional, NoDestructor
		unsigned char                                              UnknownData_FIIG[0x4];                                   // 0x0134(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FPBIKEffector>                               RigVMModel___PBIK_1_Effectors__Const;                    // 0x0138(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FPBIKBoneSetting>                            RigVMModel___PBIK_1_BoneSettings__Const;                 // 0x0148(0x0010) Edit, EditConst, NonTransactional

	public:
		static UClass* StaticClass();
	};

	/**
	 * RigVMMemoryStorageGeneratorClass Human_Male_TPV_OrientationWarping_CtrlRig.RigVMMemory_Work
	 * Size -> 0x0798 (FullSize[0x07C0] - InheritedSize[0x0028])
	 */
	class URigVMMemory_Work : public URigVMMemoryStorage
	{
	public:
		unsigned char                                              UnknownData_SSJT[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               RigVMModel___Multiply_3_Result;                          // 0x0030(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FQuat                                               RigVMModel___RigVMFunction_MathQuaternionFromEuler_1_Result; // 0x0050(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Multiply_1_1_Result;                        // 0x0070(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             RigVMModel___RigVMFunction_MathQuaternionFromEuler_1_Euler__IO; // 0x0078(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          RigVMModel___RigUnit_GetTransform_6_Transform;           // 0x0090(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_GetTransform_6_CachedIndex;         // 0x00F0(0x0010) Edit, EditConst, NonTransactional
		struct FQuat                                               RigVMModel___Multiply_3_B;                               // 0x0100(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_SetRotation_3_CachedIndex;          // 0x0120(0x0010) Edit, EditConst, NonTransactional
		struct FRigElementKey                                      RigVMModel___DISPATCH_RigVMDispatch_ArrayIterator_Element; // 0x0130(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_D5IE[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               RigVMModel___Multiply_4_Result;                          // 0x0140(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FQuat                                               RigVMModel___RigVMFunction_MathQuaternionFromEuler_1_2_Result; // 0x0160(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Multiply_1_1_1_Result;                      // 0x0180(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             RigVMModel___RigVMFunction_MathQuaternionFromEuler_1_2_Euler__IO; // 0x0188(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          RigVMModel___GetTransform_Transform;                     // 0x01A0(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___GetTransform_CachedIndex;                   // 0x0200(0x0010) Edit, EditConst, NonTransactional
		struct FQuat                                               RigVMModel___Multiply_4_B;                               // 0x0210(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_SetRotation_4_CachedIndex;          // 0x0230(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FRigElementKey>                              RigVMModel___RigUnit_ItemArray_Items__IO;                // 0x0240(0x0010) Edit, EditConst, NonTransactional
		int32_t                                                    RigVMModel___DISPATCH_RigVMDispatch_ArrayIterator_Index; // 0x0250(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RigVMModel___DISPATCH_RigVMDispatch_ArrayIterator_Count; // 0x0254(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RigVMModel___DISPATCH_RigVMDispatch_ArrayIterator_Ratio; // 0x0258(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FName                                                RigVMModel___DISPATCH_RigVMDispatch_ArrayIterator_BlockToRun; // 0x025C(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PHT1[0xC];                                   // 0x0264(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RigVMModel___RigUnit_GetTransform_4_Transform;           // 0x0270(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_GetTransform_4_CachedIndex;         // 0x02D0(0x0010) Edit, EditConst, NonTransactional
		struct FTransform                                          RigVMModel___RigUnit_GetTransform_5_Transform;           // 0x02E0(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_GetTransform_5_CachedIndex;         // 0x0340(0x0010) Edit, EditConst, NonTransactional
		struct FQuat                                               RigVMModel___Multiply_Result;                            // 0x0350(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          RigVMModel___RigUnit_GetTransform_Transform;             // 0x0370(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_GetTransform_CachedIndex;           // 0x03D0(0x0010) Edit, EditConst, NonTransactional
		struct FQuat                                               RigVMModel___Multiply_A;                                 // 0x03E0(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FQuat                                               RigVMModel___RigVMFunction_MathQuaternionFromEuler_Result; // 0x0400(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Multiply_1_Result;                          // 0x0420(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Subtract_Result;                            // 0x0428(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             RigVMModel___RigVMFunction_MathQuaternionFromEuler_Euler__IO; // 0x0430(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_SetRotation_CachedIndex;            // 0x0448(0x0010) Edit, EditConst, NonTransactional
		unsigned char                                              UnknownData_S1Z5[0x8];                                   // 0x0458(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               RigVMModel___Interpolate_Result;                         // 0x0460(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FQuat                                               RigVMModel___Interpolate_A;                              // 0x0480(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          RigVMModel___RigUnit_GetTransform_4_1_Transform;         // 0x04A0(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_GetTransform_4_1_CachedIndex;       // 0x0500(0x0010) Edit, EditConst, NonTransactional
		struct FQuat                                               RigVMModel___Interpolate_B;                              // 0x0510(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_SetRotation_1_CachedIndex;          // 0x0530(0x0010) Edit, EditConst, NonTransactional
		struct FQuat                                               RigVMModel___Interpolate_1_Result;                       // 0x0540(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FQuat                                               RigVMModel___Interpolate_1_A;                            // 0x0560(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          RigVMModel___RigUnit_GetTransform_5_1_Transform;         // 0x0580(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_GetTransform_5_1_CachedIndex;       // 0x05E0(0x0010) Edit, EditConst, NonTransactional
		struct FQuat                                               RigVMModel___Interpolate_1_B;                            // 0x05F0(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_SetRotation_2_CachedIndex;          // 0x0610(0x0010) Edit, EditConst, NonTransactional
		struct FTransform                                          RigVMModel___RigUnit_GetTransform_1_Transform;           // 0x0620(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_GetTransform_1_CachedIndex;         // 0x0680(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FPBIKEffector>                               RigVMModel___PBIK_Effectors__IO;                         // 0x0690(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<int32_t>>                                    RigVMModel___PBIK_EffectorSolverIndices;                 // 0x06A0(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<int32_t>>                                    RigVMModel___PBIK_BoneSettingToSolverBoneIndex;          // 0x06B0(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<int32_t>>                                    RigVMModel___PBIK_SolverBoneToElementIndex;              // 0x06C0(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FPBIKSolver>                                 RigVMModel___PBIK_Solver;                                // 0x06D0(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___PBIK_bNeedsInit;                            // 0x06E0(0x0010) Edit, EditConst, NonTransactional
		struct FTransform                                          RigVMModel___RigUnit_GetTransform_1_1_Transform;         // 0x06F0(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_GetTransform_1_1_CachedIndex;       // 0x0750(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FPBIKEffector>                               RigVMModel___PBIK_1_Effectors__IO;                       // 0x0760(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<int32_t>>                                    RigVMModel___PBIK_1_EffectorSolverIndices;               // 0x0770(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<int32_t>>                                    RigVMModel___PBIK_1_BoneSettingToSolverBoneIndex;        // 0x0780(0x0010) Edit, EditConst, NonTransactional
		TArray<TArray<int32_t>>                                    RigVMModel___PBIK_1_SolverBoneToElementIndex;            // 0x0790(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FPBIKSolver>                                 RigVMModel___PBIK_1_Solver;                              // 0x07A0(0x0010) Edit, EditConst, NonTransactional
		TArray<bool>                                               RigVMModel___PBIK_1_bNeedsInit;                          // 0x07B0(0x0010) Edit, EditConst, NonTransactional

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
