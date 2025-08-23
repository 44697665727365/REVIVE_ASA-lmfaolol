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
	 * RigVMBlueprintGeneratedClass Human_Male_TPV_Twist_CtrlRig.Human_Male_TPV_Twist_CtrlRig_C
	 * Size -> 0x00E8 (FullSize[0x04E0] - InheritedSize[0x03F8])
	 */
	class UHuman_Male_TPV_Twist_CtrlRig_C : public UControlRig
	{
	public:
		TArray<struct FVector>                                     CurrentSpringPositionWorld;                              // 0x03F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FVector>                                     CurrentSpringPositionGlobal;                             // 0x0408(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FVector>                                     LastFrameSpringPositionGlobal;                           // 0x0418(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FVector>                                     CurrentVelocity;                                         // 0x0428(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FVector>                                     CurrentVelocityGlobal;                                   // 0x0438(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FRigElementKey>                              BoneArraySpringSolver_RigElements;                       // 0x0448(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     OverallFat;                                              // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FQuat                                               InverseRotation_LeftUpperArm;                            // 0x0460(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FQuat                                               InverseRotation_RightUpperArm;                           // 0x0480(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     PhysicsFactor_Belly;                                     // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     PhysicsFactor_Breast;                                    // 0x04A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bFemale;                                                 // 0x04B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MN8C[0x7];                                   // 0x04B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     CharacterCreatorFatChest;                                // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     CharacterCreatorFatBelly;                                // 0x04C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ChestFat_Spring_Local;                                   // 0x04C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     BellyFat_Spring_Local;                                   // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     OverallFat_Spring_Local;                                 // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * RigVMMemoryStorageGeneratorClass Human_Male_TPV_Twist_CtrlRig.RigVMMemory_Literal
	 * Size -> 0x02F9 (FullSize[0x0321] - InheritedSize[0x0028])
	 */
	class URigVMMemory_Literal : public URigVMMemoryStorage
	{
	public:
		struct FRigElementKey                                      RigVMModel___RigUnit_GetTransform_Item__Const;           // 0x0028(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		ERigVMTransformSpace                                       RigVMModel___RigUnit_GetTransform_Space__Const;          // 0x0034(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       RigVMModel___RigUnit_GetTransform_bInitial__Const;       // 0x0035(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       RigVMModel___RigUnit_GetTransform_1_bInitial__Const;     // 0x0036(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ECKT[0x1];                                   // 0x0037(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             RigVMModel___RigVMFunction_MathQuaternionSwingTwist_TwistAxis__Const; // 0x0038(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___RigUnit_SetRotation_Item__Const;            // 0x0050(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RigVMModel___RigUnit_SetRotation_Weight__Const;          // 0x005C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___RigUnit_SetRotation_2_Item__Const;          // 0x0060(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RigVMModel___RigUnit_SetRotation_2_Weight__Const;        // 0x006C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___RigUnit_SetRotation_3_Item__Const;          // 0x0070(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RigVMModel___RigUnit_SetRotation_3_Weight__Const;        // 0x007C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___RigUnit_SetRotation_1_1_2_Item__Const;      // 0x0080(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___RigUnit_GetTransform_2_1_1_Item__Const;     // 0x008C(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RigVMModel___RigUnit_SetRotation_1_1_2_Weight__Const;    // 0x0098(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___RigUnit_SetRotation_1_1_1_1_Item__Const;    // 0x009C(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RigVMModel___RigUnit_SetRotation_1_1_1_1_Weight__Const;  // 0x00A8(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___RigUnit_SetRotation_1_1_Item__Const;        // 0x00AC(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___RigUnit_GetTransform_2_1_Item__Const;       // 0x00B8(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___RigUnit_SetRotation_1_1_1_Item__Const;      // 0x00C4(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___RigUnit_GetTransform_2_Item__Const;         // 0x00D0(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___RigUnit_SetRotation_1_Item__Const;          // 0x00DC(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___RigUnit_SetRotation_1_2_Item__Const;        // 0x00E8(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___RigUnit_SetRotation_1_3_Item__Const;        // 0x00F4(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RigVMModel___Interpolate_T__Const;                       // 0x0100(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4BJ7[0x4];                                   // 0x0104(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     RigVMModel___Remap_1_1_1_1_SourceMinimum__Const;         // 0x0108(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Remap_1_1_1_1_SourceMaximum__Const;         // 0x0110(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Remap_1_1_1_1_TargetMinimum__Const;         // 0x0118(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Remap_1_1_1_1_TargetMaximum__Const;         // 0x0120(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Remap_1_1_2_TargetMinimum__Const;           // 0x0128(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Remap_1_1_2_TargetMaximum__Const;           // 0x0130(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Remap_1_1_1_TargetMinimum__Const;           // 0x0138(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Remap_1_1_1_TargetMaximum__Const;           // 0x0140(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Remap_1_1_TargetMinimum__Const;             // 0x0148(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Remap_1_1_TargetMaximum__Const;             // 0x0150(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Remap_1_2_1_TargetMinimum__Const;           // 0x0158(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Remap_1_2_1_TargetMaximum__Const;           // 0x0160(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Remap_1_3_TargetMinimum__Const;             // 0x0168(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Remap_1_3_TargetMaximum__Const;             // 0x0170(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Remap_1_2_TargetMinimum__Const;             // 0x0178(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RigVMModel___Multiply_1_A__Const;                        // 0x0180(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KQI1[0x4];                                   // 0x0184(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<double>                                             RigVMModel___BoneArraySpringSolver_1_Alphas__Const;      // 0x0188(0x0010) Edit, EditConst, NonTransactional
		double                                                     RigVMModel___Remap_3_1_SourceMinimum__Const;             // 0x0198(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Remap_3_1_TargetMinimum__Const;             // 0x01A0(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Remap_3_SourceMinimum__Const;               // 0x01A8(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Remap_3_SourceMaximum__Const;               // 0x01B0(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Remap_3_TargetMinimum__Const;               // 0x01B8(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___BoneArraySpringSolver_1_BonesLookAtParentAlpha__Const; // 0x01C0(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LocalVariableDefault__BoneArraySpringSolver_PrevPos__Const; // 0x01C8(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LocalVariableDefault__BoneArraySpringSolver_BonePosition__Const; // 0x01E0(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		ERigVMTransformSpace                                       BoneArraySpringSolver_1___BoneArraySpringSolver_GetTransform_Space__Const; // 0x01F8(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       BoneArraySpringSolver_1___BoneArraySpringSolver_GetTransform_bInitial__Const; // 0x01F9(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YGEE[0x2];                                   // 0x01FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BoneArraySpringSolver_1___BoneArraySpringSolver_IsNearlyZero_Tolerance__Const; // 0x01FC(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     SpringSolver_0___SpringSolver_Multiply_7_B__Const;       // 0x0200(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SpringSolver_0___SpringSolver_Add_1_Add_1_1_B__Const;    // 0x0208(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     SpringSolver_0___SpringSolver_Remap_1_SourceMinimum__Const; // 0x0220(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     SpringSolver_0___SpringSolver_Remap_1_SourceMaximum__Const; // 0x0228(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     SpringSolver_0___SpringSolver_Remap_1_TargetMinimum__Const; // 0x0230(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     SpringSolver_0___SpringSolver_Remap_1_TargetMaximum__Const; // 0x0238(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       SpringSolver_0___SpringSolver_Remap_1_bClamp__Const;     // 0x0240(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_P3DL[0x7];                                   // 0x0241(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     SpringSolver_0___SpringSolver_Divide_2_B__Const;         // 0x0248(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      SpringSolver_0___SpringSolver_MathVectorClampLength_MinimumLength__Const; // 0x0250(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      SpringSolver_0___SpringSolver_Divide_A__Const;           // 0x0254(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BoneArraySpringSolver_1___BoneArraySpringSolver_SpringSolverGlobal_0_WorldVelocityInfluence__Const; // 0x0258(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      BoneArraySpringSolver_1___BoneArraySpringSolver_Divide_1_A__Const; // 0x0270(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      BoneArraySpringSolver_1___BoneArraySpringSolver_Multiply_B__Const; // 0x0274(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     SpringSolverGlobal_0___SpringSolverGlobal_Multiply_7_B__Const; // 0x0278(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     SpringSolverGlobal_0___SpringSolverGlobal_Remap_1_SourceMinimum__Const; // 0x0280(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     SpringSolverGlobal_0___SpringSolverGlobal_Remap_1_SourceMaximum__Const; // 0x0288(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     SpringSolverGlobal_0___SpringSolverGlobal_Remap_1_TargetMinimum__Const; // 0x0290(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     SpringSolverGlobal_0___SpringSolverGlobal_Remap_1_TargetMaximum__Const; // 0x0298(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       SpringSolverGlobal_0___SpringSolverGlobal_Remap_1_bClamp__Const; // 0x02A0(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KESD[0x7];                                   // 0x02A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     SpringSolverGlobal_0___SpringSolverGlobal_Divide_2_B__Const; // 0x02A8(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      SpringSolverGlobal_0___SpringSolverGlobal_MathVectorClampLength_MinimumLength__Const; // 0x02B0(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      SpringSolverGlobal_0___SpringSolverGlobal_Divide_A__Const; // 0x02B4(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3W7Q[0x8];                                   // 0x02B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          BoneArraySpringSolver_1___BoneArraySpringSolver_Set_Transform_1_Value__Const; // 0x02C0(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       BoneArraySpringSolver_1___BoneArraySpringSolver_Set_Transform_1_bPropagateToChildren__Const; // 0x0320(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * RigVMMemoryStorageGeneratorClass Human_Male_TPV_Twist_CtrlRig.RigVMMemory_Work
	 * Size -> 0x1398 (FullSize[0x13C0] - InheritedSize[0x0028])
	 */
	class URigVMMemory_Work : public URigVMMemoryStorage
	{
	public:
		unsigned char                                              UnknownData_F68Z[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               RigVMModel___Inverse_Result;                             // 0x0030(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FQuat                                               RigVMModel___RigVMFunction_MathQuaternionSwingTwist_Twist; // 0x0050(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          RigVMModel___Make_Relative_Local;                        // 0x0070(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          RigVMModel___RigUnit_GetTransform_Transform;             // 0x00D0(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_GetTransform_CachedIndex;           // 0x0130(0x0010) Edit, EditConst, NonTransactional
		struct FTransform                                          RigVMModel___RigUnit_GetTransform_1_Transform;           // 0x0140(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_GetTransform_1_CachedIndex;         // 0x01A0(0x0010) Edit, EditConst, NonTransactional
		struct FQuat                                               RigVMModel___RigVMFunction_MathQuaternionSwingTwist_Input; // 0x01B0(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FQuat                                               RigVMModel___RigVMFunction_MathQuaternionSwingTwist_Swing; // 0x01D0(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_SetRotation_CachedIndex;            // 0x01F0(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_SetRotation_2_CachedIndex;          // 0x0200(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_SetRotation_3_CachedIndex;          // 0x0210(0x0010) Edit, EditConst, NonTransactional
		struct FQuat                                               RigVMModel___RigVMFunction_MathQuaternionSwingTwist_1_1_1_Twist; // 0x0220(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          RigVMModel___Make_Relative_1_1_1_Local;                  // 0x0240(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          RigVMModel___RigUnit_GetTransform_2_1_1_Transform;       // 0x02A0(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_GetTransform_2_1_1_CachedIndex;     // 0x0300(0x0010) Edit, EditConst, NonTransactional
		struct FTransform                                          RigVMModel___RigUnit_GetTransform_1_1_1_1_Transform;     // 0x0310(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_GetTransform_1_1_1_1_CachedIndex;   // 0x0370(0x0010) Edit, EditConst, NonTransactional
		struct FQuat                                               RigVMModel___RigVMFunction_MathQuaternionSwingTwist_1_1_1_Input; // 0x0380(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FQuat                                               RigVMModel___RigVMFunction_MathQuaternionSwingTwist_1_1_1_Swing; // 0x03A0(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_SetRotation_1_1_2_CachedIndex;      // 0x03C0(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_SetRotation_1_1_1_1_CachedIndex;    // 0x03D0(0x0010) Edit, EditConst, NonTransactional
		struct FQuat                                               RigVMModel___RigVMFunction_MathQuaternionSwingTwist_1_1_Twist; // 0x03E0(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          RigVMModel___Make_Relative_1_1_Local;                    // 0x0400(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          RigVMModel___RigUnit_GetTransform_2_1_Transform;         // 0x0460(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_GetTransform_2_1_CachedIndex;       // 0x04C0(0x0010) Edit, EditConst, NonTransactional
		struct FTransform                                          RigVMModel___RigUnit_GetTransform_1_1_1_Transform;       // 0x04D0(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_GetTransform_1_1_1_CachedIndex;     // 0x0530(0x0010) Edit, EditConst, NonTransactional
		struct FQuat                                               RigVMModel___RigVMFunction_MathQuaternionSwingTwist_1_1_Input; // 0x0540(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FQuat                                               RigVMModel___RigVMFunction_MathQuaternionSwingTwist_1_1_Swing; // 0x0560(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_SetRotation_1_1_CachedIndex;        // 0x0580(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_SetRotation_1_1_1_CachedIndex;      // 0x0590(0x0010) Edit, EditConst, NonTransactional
		struct FQuat                                               RigVMModel___Inverse_1_Result;                           // 0x05A0(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FQuat                                               RigVMModel___RigVMFunction_MathQuaternionSwingTwist_1_Twist; // 0x05C0(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          RigVMModel___Make_Relative_1_Local;                      // 0x05E0(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          RigVMModel___RigUnit_GetTransform_2_Transform;           // 0x0640(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_GetTransform_2_CachedIndex;         // 0x06A0(0x0010) Edit, EditConst, NonTransactional
		struct FTransform                                          RigVMModel___RigUnit_GetTransform_1_1_Transform;         // 0x06B0(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_GetTransform_1_1_CachedIndex;       // 0x0710(0x0010) Edit, EditConst, NonTransactional
		struct FQuat                                               RigVMModel___RigVMFunction_MathQuaternionSwingTwist_1_Input; // 0x0720(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FQuat                                               RigVMModel___RigVMFunction_MathQuaternionSwingTwist_1_Swing; // 0x0740(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_SetRotation_1_CachedIndex;          // 0x0760(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_SetRotation_1_2_CachedIndex;        // 0x0770(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_SetRotation_1_3_CachedIndex;        // 0x0780(0x0010) Edit, EditConst, NonTransactional
		struct FRigElementKey                                      RigVMModel___DISPATCH_RigVMDispatch_ArrayIterator_Element; // 0x0790(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BNT4[0x4];                                   // 0x079C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RigVMModel___GetTransform_Transform;                     // 0x07A0(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___GetTransform_CachedIndex;                   // 0x0800(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           RigVMModel___Set_Transform_CachedIndex;                  // 0x0810(0x0010) Edit, EditConst, NonTransactional
		int32_t                                                    RigVMModel___DISPATCH_RigVMDispatch_ArrayIterator_Index; // 0x0820(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    RigVMModel___DISPATCH_RigVMDispatch_ArrayIterator_Count; // 0x0824(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RigVMModel___DISPATCH_RigVMDispatch_ArrayIterator_Ratio; // 0x0828(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FName                                                RigVMModel___DISPATCH_RigVMDispatch_ArrayIterator_BlockToRun; // 0x082C(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RigVMModel___Interpolate_Result;                         // 0x0834(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RigVMModel___Interpolate_A;                              // 0x0838(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RigVMModel___Interpolate_B;                              // 0x083C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RigVMModel___Interpolate_1_Result;                       // 0x0840(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RigVMModel___Interpolate_1_A;                            // 0x0844(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RigVMModel___Interpolate_1_B;                            // 0x0848(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RigVMModel___Interpolate_2_Result;                       // 0x084C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<double>                                             RigVMModel___DISPATCH_RigVMDispatch_If_Result;           // 0x0850(0x0010) Edit, EditConst, NonTransactional
		TArray<double>                                             RigVMModel___DISPATCH_RigVMDispatch_ArrayMake_2_Array;   // 0x0860(0x0010) Edit, EditConst, NonTransactional
		double                                                     RigVMModel___Remap_1_1_1_1_Result;                       // 0x0870(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Remap_1_1_2_Result;                         // 0x0878(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<double>                                             RigVMModel___DISPATCH_RigVMDispatch_ArrayMake_Array;     // 0x0880(0x0010) Edit, EditConst, NonTransactional
		double                                                     RigVMModel___Remap_1_1_1_Result;                         // 0x0890(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Remap_1_1_Result;                           // 0x0898(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<float>                                              RigVMModel___BoneArraySpringSolver_1_SpringStrength;     // 0x08A0(0x0010) Edit, EditConst, NonTransactional
		TArray<double>                                             RigVMModel___DISPATCH_RigVMDispatch_If_1_Result;         // 0x08B0(0x0010) Edit, EditConst, NonTransactional
		TArray<double>                                             RigVMModel___DISPATCH_RigVMDispatch_ArrayMake_1_1_Array; // 0x08C0(0x0010) Edit, EditConst, NonTransactional
		double                                                     RigVMModel___Remap_1_2_1_Result;                         // 0x08D0(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Remap_1_3_Result;                           // 0x08D8(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<double>                                             RigVMModel___DISPATCH_RigVMDispatch_ArrayMake_1_Array;   // 0x08E0(0x0010) Edit, EditConst, NonTransactional
		double                                                     RigVMModel___Remap_1_2_Result;                           // 0x08F0(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Remap_1_Result;                             // 0x08F8(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<float>                                              RigVMModel___BoneArraySpringSolver_1_SpringDamping;      // 0x0900(0x0010) Edit, EditConst, NonTransactional
		float                                                      RigVMModel___DISPATCH_RigVMDispatch_If_2_Result;         // 0x0910(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RigVMModel___Multiply_1_Result;                          // 0x0914(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Remap_2_Result;                             // 0x0918(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RigVMModel___Multiply_1_B;                               // 0x0920(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RigVMModel___Multiply_Result;                            // 0x0924(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Remap_Result;                               // 0x0928(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RigVMModel___Multiply_B;                                 // 0x0930(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X5N6[0x4];                                   // 0x0934(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     RigVMModel___Multiply_2_Result;                          // 0x0938(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Remap_3_1_Result;                           // 0x0940(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Multiply_2_1_Result;                        // 0x0948(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     RigVMModel___Remap_3_Result;                             // 0x0950(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<double>                                             RigVMModel___BoneArraySpringSolver_1_Alphas__IO;         // 0x0958(0x0010) Edit, EditConst, NonTransactional
		unsigned char                                              UnknownData_G3SE[0x8];                                   // 0x0968(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          BoneArraySpringSolver_1___BoneArraySpringSolver_GetTransform_Transform; // 0x0970(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      BoneArraySpringSolver_1___BoneArraySpringSolver_DISPATCH_RigVMDispatch_ArrayIterator_Element; // 0x09D0(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NV0H[0x4];                                   // 0x09DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCachedRigElement>                           BoneArraySpringSolver_1___BoneArraySpringSolver_GetTransform_CachedIndex; // 0x09E0(0x0010) Edit, EditConst, NonTransactional
		struct FVector                                             LocalVariable__BoneArraySpringSolver_BonePosition;       // 0x09F0(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       BoneArraySpringSolver_1___BoneArraySpringSolver_IsNearlyZero_Result; // 0x0A08(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HBHU[0x7];                                   // 0x0A09(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             BoneArraySpringSolver_1___BoneArraySpringSolver_DISPATCH_RigVMDispatch_ArrayGetAtIndex_3_Element; // 0x0A10(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BoneArraySpringSolver_1___BoneArraySpringSolver_DISPATCH_RigVMDispatch_ArrayIterator_Index; // 0x0A28(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DJ67[0x4];                                   // 0x0A2C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             BoneArraySpringSolver_1___BoneArraySpringSolver_To_World_1_World; // 0x0A30(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      BoneArraySpringSolver_1___BoneArraySpringSolver_DISPATCH_RigVMDispatch_ArrayGetAtIndex_1_Element; // 0x0A48(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      BoneArraySpringSolver_1___BoneArraySpringSolver_DISPATCH_RigVMDispatch_ArrayGetAtIndex_2_Element; // 0x0A4C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BoneArraySpringSolver_1___BoneArraySpringSolver_To_World_2_World; // 0x0A50(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BoneArraySpringSolver_1___BoneArraySpringSolver_DISPATCH_RigVMDispatch_ArrayGetAtIndex_Element; // 0x0A68(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     BoneArraySpringSolver_1___BoneArraySpringSolver_SpringSolver_0_Strength; // 0x0A80(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     BoneArraySpringSolver_1___BoneArraySpringSolver_SpringSolver_0_Damping; // 0x0A88(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BoneArraySpringSolver_1___BoneArraySpringSolver_SpringSolver_0_Out; // 0x0A90(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BoneArraySpringSolver_1___BoneArraySpringSolver_SpringSolver_0_Velocity; // 0x0AA8(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BoneArraySpringSolver_1___BoneArraySpringSolver_DISPATCH_RigVMDispatch_ArrayGetAtIndex_7_Element; // 0x0AC0(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      SpringSolver_0___SpringSolver_Entry_Maximum_Length;      // 0x0AD8(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_F4VF[0x4];                                   // 0x0ADC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             SpringSolver_0___SpringSolver_Return_Velocity;           // 0x0AE0(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SpringSolver_0___SpringSolver_Entry_VelocityIn;          // 0x0AF8(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SpringSolver_0___SpringSolver_MathVectorClampLength_Result; // 0x0B10(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SpringSolver_0___SpringSolver_Subtract_1_2_Result;       // 0x0B28(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SpringSolver_0___SpringSolver_Add_9_1_Result;            // 0x0B40(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SpringSolver_0___SpringSolver_Scale_3_Result;            // 0x0B58(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SpringSolver_0___SpringSolver_Add_1_Add_1_1_Result;      // 0x0B70(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SpringSolver_0___SpringSolver_Add_1_Add_1_Result;        // 0x0B88(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SpringSolver_0___SpringSolver_Scale_Result;              // 0x0BA0(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SpringSolver_0___SpringSolver_Subtract_Result;           // 0x0BB8(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     SpringSolver_0___SpringSolver_Multiply_7_Result;         // 0x0BD0(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      SpringSolver_0___SpringSolver_Scale_Factor;              // 0x0BD8(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FBOW[0x4];                                   // 0x0BDC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     SpringSolver_0___SpringSolver_Multiply_6_Result;         // 0x0BE0(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      SpringSolver_0___SpringSolver_GetDeltaTime_3_Result;     // 0x0BE8(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PYXU[0x4];                                   // 0x0BEC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     SpringSolver_0___SpringSolver_Multiply_6_A;              // 0x0BF0(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     SpringSolver_0___SpringSolver_Power_1_Result;            // 0x0BF8(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     SpringSolver_0___SpringSolver_Remap_1_Result;            // 0x0C00(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     SpringSolver_0___SpringSolver_Divide_2_Result;           // 0x0C08(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     SpringSolver_0___SpringSolver_Divide_2_A;                // 0x0C10(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      SpringSolver_0___SpringSolver_Scale_3_Factor;            // 0x0C18(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UGC1[0x4];                                   // 0x0C1C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             SpringSolver_0___SpringSolver_Subtract_1_Result;         // 0x0C20(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      SpringSolver_0___SpringSolver_Divide_Result;             // 0x0C38(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      SpringSolver_0___SpringSolver_RigVMFunction_GetDeltaTime_Result; // 0x0C3C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       BoneArraySpringSolver_1___BoneArraySpringSolver_IsNearlyZero_1_Result; // 0x0C40(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7DZK[0x7];                                   // 0x0C41(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             BoneArraySpringSolver_1___BoneArraySpringSolver_DISPATCH_RigVMDispatch_ArrayGetAtIndex_3_1_Element; // 0x0C48(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BoneArraySpringSolver_1___BoneArraySpringSolver_DISPATCH_RigVMDispatch_ArrayGetAtIndex_4_Element; // 0x0C60(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     BoneArraySpringSolver_1___BoneArraySpringSolver_SpringSolverGlobal_0_Strength; // 0x0C78(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     BoneArraySpringSolver_1___BoneArraySpringSolver_SpringSolverGlobal_0_Damping; // 0x0C80(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BoneArraySpringSolver_1___BoneArraySpringSolver_SpringSolverGlobal_0_Out; // 0x0C88(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BoneArraySpringSolver_1___BoneArraySpringSolver_Scale_1_1_Result; // 0x0CA0(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BoneArraySpringSolver_1___BoneArraySpringSolver_Subtract_1_Result; // 0x0CB8(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BoneArraySpringSolver_1___BoneArraySpringSolver_From_World_Global; // 0x0CD0(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BoneArraySpringSolver_1___BoneArraySpringSolver_DISPATCH_RigVMDispatch_ArrayGetAtIndex_6_Element; // 0x0CE8(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BoneArraySpringSolver_1___BoneArraySpringSolver_DISPATCH_RigVMDispatch_ArrayGetAtIndex_5_Element; // 0x0D00(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      BoneArraySpringSolver_1___BoneArraySpringSolver_Multiply_Result; // 0x0D18(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      BoneArraySpringSolver_1___BoneArraySpringSolver_Divide_1_Result; // 0x0D1C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      BoneArraySpringSolver_1___BoneArraySpringSolver_RigVMFunction_GetDeltaTime_1_Result; // 0x0D20(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q53U[0x4];                                   // 0x0D24(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             BoneArraySpringSolver_1___BoneArraySpringSolver_DISPATCH_RigVMDispatch_ArrayGetAtIndex_8_Element; // 0x0D28(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BoneArraySpringSolver_1___BoneArraySpringSolver_SpringSolverGlobal_0_VelocityGlobal; // 0x0D40(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      SpringSolverGlobal_0___SpringSolverGlobal_Entry_Maximum_Length; // 0x0D58(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3LL4[0x4];                                   // 0x0D5C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             SpringSolverGlobal_0___SpringSolverGlobal_Entry_VelocityIn; // 0x0D60(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SpringSolverGlobal_0___SpringSolverGlobal_Return_VelocityGlobal; // 0x0D78(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SpringSolverGlobal_0___SpringSolverGlobal_MathVectorClampLength_Result; // 0x0D90(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SpringSolverGlobal_0___SpringSolverGlobal_Subtract_1_2_Result; // 0x0DA8(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SpringSolverGlobal_0___SpringSolverGlobal_Add_9_1_Result; // 0x0DC0(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SpringSolverGlobal_0___SpringSolverGlobal_Scale_3_Result; // 0x0DD8(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SpringSolverGlobal_0___SpringSolverGlobal_Add_1_Add_1_1_Result; // 0x0DF0(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SpringSolverGlobal_0___SpringSolverGlobal_Add_1_Add_1_Result; // 0x0E08(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SpringSolverGlobal_0___SpringSolverGlobal_Multiply_Result; // 0x0E20(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SpringSolverGlobal_0___SpringSolverGlobal_Scale_Result;  // 0x0E38(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             SpringSolverGlobal_0___SpringSolverGlobal_Subtract_Result; // 0x0E50(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     SpringSolverGlobal_0___SpringSolverGlobal_Multiply_7_Result; // 0x0E68(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      SpringSolverGlobal_0___SpringSolverGlobal_Scale_Factor;  // 0x0E70(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SGVA[0x4];                                   // 0x0E74(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     SpringSolverGlobal_0___SpringSolverGlobal_Multiply_6_Result; // 0x0E78(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      SpringSolverGlobal_0___SpringSolverGlobal_GetDeltaTime_3_Result; // 0x0E80(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VTGS[0x4];                                   // 0x0E84(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     SpringSolverGlobal_0___SpringSolverGlobal_Multiply_6_A;  // 0x0E88(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     SpringSolverGlobal_0___SpringSolverGlobal_Power_1_Result; // 0x0E90(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     SpringSolverGlobal_0___SpringSolverGlobal_Remap_1_Result; // 0x0E98(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     SpringSolverGlobal_0___SpringSolverGlobal_Divide_2_Result; // 0x0EA0(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     SpringSolverGlobal_0___SpringSolverGlobal_Divide_2_A;    // 0x0EA8(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      SpringSolverGlobal_0___SpringSolverGlobal_Scale_3_Factor; // 0x0EB0(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_54CW[0x4];                                   // 0x0EB4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             SpringSolverGlobal_0___SpringSolverGlobal_Subtract_1_Result; // 0x0EB8(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      SpringSolverGlobal_0___SpringSolverGlobal_Divide_Result; // 0x0ED0(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      SpringSolverGlobal_0___SpringSolverGlobal_RigVMFunction_GetDeltaTime_Result; // 0x0ED4(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EXMI[0x8];                                   // 0x0ED8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          BoneArraySpringSolver_1___BoneArraySpringSolver_GetTransform_2_Transform; // 0x0EE0(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      BoneArraySpringSolver_1___BoneArraySpringSolver_HierarchyGetParent_Parent; // 0x0F40(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4GSP[0x4];                                   // 0x0F4C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCachedRigElement>                           BoneArraySpringSolver_1___BoneArraySpringSolver_HierarchyGetParent_CachedChild; // 0x0F50(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           BoneArraySpringSolver_1___BoneArraySpringSolver_HierarchyGetParent_CachedParent; // 0x0F60(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           BoneArraySpringSolver_1___BoneArraySpringSolver_GetTransform_2_CachedIndex; // 0x0F70(0x0010) Edit, EditConst, NonTransactional
		struct FVector                                             BoneArraySpringSolver_1___BoneArraySpringSolver_Subtract_Result; // 0x0F80(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BoneArraySpringSolver_1___BoneArraySpringSolver_Subtract_B; // 0x0F98(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BoneArraySpringSolver_1___BoneArraySpringSolver_DISPATCH_RigVMDispatch_If_Result; // 0x0FB0(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BoneArraySpringSolver_1___BoneArraySpringSolver_Add_Result; // 0x0FC8(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BoneArraySpringSolver_1___BoneArraySpringSolver_Scale_Result; // 0x0FE0(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BoneArraySpringSolver_1___BoneArraySpringSolver_Unit_Result; // 0x0FF8(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      BoneArraySpringSolver_1___BoneArraySpringSolver_Multiply_2_Result; // 0x1010(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      BoneArraySpringSolver_1___BoneArraySpringSolver_Clamp_Result; // 0x1014(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      BoneArraySpringSolver_1___BoneArraySpringSolver_Divide_Result; // 0x1018(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      BoneArraySpringSolver_1___BoneArraySpringSolver_RigVMFunction_MathVectorLength_1_Result; // 0x101C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      BoneArraySpringSolver_1___BoneArraySpringSolver_RigVMFunction_MathVectorLength_Result; // 0x1020(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R42J[0x4];                                   // 0x1024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             BoneArraySpringSolver_1___BoneArraySpringSolver_Subtract_2_Result; // 0x1028(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          BoneArraySpringSolver_1___BoneArraySpringSolver_GetTransform_2_1_1_Transform; // 0x1040(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           BoneArraySpringSolver_1___BoneArraySpringSolver_GetTransform_2_1_1_CachedIndex; // 0x10A0(0x0010) Edit, EditConst, NonTransactional
		struct FVector                                             BoneArraySpringSolver_1___BoneArraySpringSolver_Subtract_2_A; // 0x10B0(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OYRZ[0x8];                                   // 0x10C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          BoneArraySpringSolver_1___BoneArraySpringSolver_GetTransform_2_1_Transform; // 0x10D0(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      BoneArraySpringSolver_1___BoneArraySpringSolver_HierarchyGetParent_1_Parent; // 0x1130(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UMSY[0x4];                                   // 0x113C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCachedRigElement>                           BoneArraySpringSolver_1___BoneArraySpringSolver_HierarchyGetParent_1_CachedChild; // 0x1140(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           BoneArraySpringSolver_1___BoneArraySpringSolver_HierarchyGetParent_1_CachedParent; // 0x1150(0x0010) Edit, EditConst, NonTransactional
		TArray<struct FCachedRigElement>                           BoneArraySpringSolver_1___BoneArraySpringSolver_GetTransform_2_1_CachedIndex; // 0x1160(0x0010) Edit, EditConst, NonTransactional
		struct FVector                                             BoneArraySpringSolver_1___BoneArraySpringSolver_Subtract_2_B; // 0x1170(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      BoneArraySpringSolver_1___BoneArraySpringSolver_Clamp_Minimum; // 0x1188(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      BoneArraySpringSolver_1___BoneArraySpringSolver_Clamp_Maximum; // 0x118C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BoneArraySpringSolver_1___BoneArraySpringSolver_From_World_2_2_Global; // 0x1190(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BoneArraySpringSolver_1___BoneArraySpringSolver_DISPATCH_RigVMDispatch_ArrayGetAtIndex_6_1_Element; // 0x11A8(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FQuat                                               BoneArraySpringSolver_1___BoneArraySpringSolver_DISPATCH_RigVMDispatch_If_1_Result; // 0x11C0(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FQuat                                               BoneArraySpringSolver_1___BoneArraySpringSolver_Multiply_1_Result; // 0x11E0(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FQuat                                               BoneArraySpringSolver_1___BoneArraySpringSolver_Scale_1_Result; // 0x1200(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FQuat                                               BoneArraySpringSolver_1___BoneArraySpringSolver_QuatBetweenDirections_0_Quat; // 0x1220(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             BoneArraySpringSolver_1___BoneArraySpringSolver_Subtract_3_Result; // 0x1240(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_P9NW[0x8];                                   // 0x1258(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FQuat                                               QuatBetweenDirections_0___QuatBetweenDirections_MathQuaternionFromAxisAndAngle_Result; // 0x1260(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             QuatBetweenDirections_0___QuatBetweenDirections_Unit_2_Result; // 0x1280(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             QuatBetweenDirections_0___QuatBetweenDirections_MathVectorCross_Result; // 0x1298(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             QuatBetweenDirections_0___QuatBetweenDirections_Unit_1_Result; // 0x12B0(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             QuatBetweenDirections_0___QuatBetweenDirections_Unit_Result; // 0x12C8(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     QuatBetweenDirections_0___QuatBetweenDirections_Acos_Result; // 0x12E0(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      QuatBetweenDirections_0___QuatBetweenDirections_Dot___Result; // 0x12E8(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XGIY[0x4];                                   // 0x12EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     QuatBetweenDirections_0___QuatBetweenDirections_Acos_Value; // 0x12F0(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      QuatBetweenDirections_0___QuatBetweenDirections_MathQuaternionFromAxisAndAngle_Angle; // 0x12F8(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      BoneArraySpringSolver_1___BoneArraySpringSolver_Scale_1_Factor; // 0x12FC(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FQuat                                               BoneArraySpringSolver_1___BoneArraySpringSolver_Multiply_1_B; // 0x1300(0x0020) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          BoneArraySpringSolver_1___BoneArraySpringSolver_Set_Transform_1_Value__IO; // 0x1320(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     BoneArraySpringSolver_1___BoneArraySpringSolver_DISPATCH_RigVMDispatch_ArrayGetAtIndex_10_Element; // 0x1380(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      BoneArraySpringSolver_1___BoneArraySpringSolver_Set_Transform_1_Weight; // 0x1388(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FD2Z[0x4];                                   // 0x138C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCachedRigElement>                           BoneArraySpringSolver_1___BoneArraySpringSolver_Set_Transform_1_CachedIndex; // 0x1390(0x0010) Edit, EditConst, NonTransactional
		class FName                                                BoneArraySpringSolver_1___BoneArraySpringSolver_RigVMFunction_ControlFlowBranch_1_BlockToRun; // 0x13A0(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FName                                                BoneArraySpringSolver_1___BoneArraySpringSolver_RigVMFunction_ControlFlowBranch_BlockToRun; // 0x13A8(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		int32_t                                                    BoneArraySpringSolver_1___BoneArraySpringSolver_DISPATCH_RigVMDispatch_ArrayIterator_Count; // 0x13B0(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      BoneArraySpringSolver_1___BoneArraySpringSolver_DISPATCH_RigVMDispatch_ArrayIterator_Ratio; // 0x13B4(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class FName                                                BoneArraySpringSolver_1___BoneArraySpringSolver_DISPATCH_RigVMDispatch_ArrayIterator_BlockToRun; // 0x13B8(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
