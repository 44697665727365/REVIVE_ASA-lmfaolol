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
	 * RigVMBlueprintGeneratedClass Human_FixVB_CtrlRig.Human_FixVB_CtrlRig_C
	 * Size -> 0x00A0 (FullSize[0x0498] - InheritedSize[0x03F8])
	 */
	class UHuman_FixVB_CtrlRig_C : public UControlRig
	{
	public:
		struct FVector                                             ElbowOffset;                                             // 0x03F8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RightHandIKAlpha;                                        // 0x0410(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       isFemale;                                                // 0x0414(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_40BW[0x3];                                   // 0x0415(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LeftHandIKAlpha;                                         // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ShoulderWidthScale;                                      // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      PV_OffsetFactor;                                         // 0x0428(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9X3I[0x4];                                   // 0x042C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             PV_L;                                                    // 0x0430(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             PV_R;                                                    // 0x0448(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TimerTest;                                               // 0x0460(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3JUE[0x7];                                   // 0x0461(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             WeaponPositionOffset;                                    // 0x0468(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     BoneModifier_ArmLength;                                  // 0x0480(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     BoneModifier_TorsoSize;                                  // 0x0488(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     BoneModifier_Shoulders;                                  // 0x0490(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * RigVMMemoryStorageGeneratorClass Human_FixVB_CtrlRig.RigVMMemory_Literal
	 * Size -> 0x0064 (FullSize[0x008C] - InheritedSize[0x0028])
	 */
	class URigVMMemory_Literal : public URigVMMemoryStorage
	{
	public:
		struct FRigElementKey                                      RigVMModel___RigUnit_SetTranslation_3_1_Item__Const;     // 0x0028(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		ERigVMTransformSpace                                       RigVMModel___RigUnit_SetTranslation_3_1_Space__Const;    // 0x0034(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       RigVMModel___RigUnit_SetTranslation_3_1_bInitial__Const; // 0x0035(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OWTW[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RigVMModel___DISPATCH_RigVMDispatch_If_True__Const;      // 0x0038(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RigVMModel___DISPATCH_RigVMDispatch_If_False__Const;     // 0x003C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       RigVMModel___RigUnit_SetTranslation_3_1_bPropagateToChildren__Const; // 0x0040(0x0001) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5I92[0x3];                                   // 0x0041(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRigElementKey                                      RigVMModel___RigUnit_SetTranslation_4_1_Item__Const;     // 0x0044(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___RigUnit_SetTranslation_3_1_1_Item__Const;   // 0x0050(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RigVMModel___DISPATCH_RigVMDispatch_If_1_True__Const;    // 0x005C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             RigVMModel___Add_1_B__Const;                             // 0x0060(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RigVMModel___DISPATCH_RigVMDispatch_If_1_1_True__Const;  // 0x0078(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RigVMModel___DISPATCH_RigVMDispatch_If_1_1_False__Const; // 0x007C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FRigElementKey                                      RigVMModel___RigUnit_SetTranslation_4_1_1_Item__Const;   // 0x0080(0x000C) Edit, EditConst, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * RigVMMemoryStorageGeneratorClass Human_FixVB_CtrlRig.RigVMMemory_Work
	 * Size -> 0x0350 (FullSize[0x0378] - InheritedSize[0x0028])
	 */
	class URigVMMemory_Work : public URigVMMemoryStorage
	{
	public:
		struct FVector                                             RigVMModel___Scale_4_Result;                             // 0x0028(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          RigVMModel___RigUnit_GetTransform_11_1_Transform;        // 0x0040(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_GetTransform_11_1_CachedIndex;      // 0x00A0(0x0010) Edit, EditConst, NonTransactional
		struct FVector                                             RigVMModel___Scale_4_Value;                              // 0x00B0(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RigVMModel___DISPATCH_RigVMDispatch_If_Result;           // 0x00C8(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1OUU[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_SetTranslation_3_1_CachedIndex;     // 0x00D0(0x0010) Edit, EditConst, NonTransactional
		struct FVector                                             RigVMModel___Scale_4_1_Result;                           // 0x00E0(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_G6D4[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RigVMModel___RigUnit_GetTransform_12_2_Transform;        // 0x0100(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_GetTransform_12_2_CachedIndex;      // 0x0160(0x0010) Edit, EditConst, NonTransactional
		struct FVector                                             RigVMModel___Scale_4_1_Value;                            // 0x0170(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_SetTranslation_4_1_CachedIndex;     // 0x0188(0x0010) Edit, EditConst, NonTransactional
		struct FVector                                             RigVMModel___Add_1_Result;                               // 0x0198(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             RigVMModel___Scale_4_2_Result;                           // 0x01B0(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PT03[0x8];                                   // 0x01C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RigVMModel___RigUnit_GetTransform_11_1_1_Transform;      // 0x01D0(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_GetTransform_11_1_1_CachedIndex;    // 0x0230(0x0010) Edit, EditConst, NonTransactional
		struct FVector                                             RigVMModel___Scale_4_2_Value;                            // 0x0240(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RigVMModel___DISPATCH_RigVMDispatch_If_1_Result;         // 0x0258(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      RigVMModel___DISPATCH_RigVMDispatch_If_1_1_Result;       // 0x025C(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             RigVMModel___Add_1_B__IO;                                // 0x0260(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_SetTranslation_3_1_1_CachedIndex;   // 0x0278(0x0010) Edit, EditConst, NonTransactional
		struct FVector                                             RigVMModel___Add_1_2_Result;                             // 0x0288(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             RigVMModel___Scale_4_1_1_Result;                         // 0x02A0(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_65CT[0x8];                                   // 0x02B8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          RigVMModel___RigUnit_GetTransform_12_2_1_Transform;      // 0x02C0(0x0060) Edit, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_GetTransform_12_2_1_CachedIndex;    // 0x0320(0x0010) Edit, EditConst, NonTransactional
		struct FVector                                             RigVMModel___Scale_4_1_1_Value;                          // 0x0330(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		struct FVector                                             RigVMModel___Add_1_2_B__IO;                              // 0x0348(0x0018) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		TArray<struct FCachedRigElement>                           RigVMModel___RigUnit_SetTranslation_4_1_1_CachedIndex;   // 0x0360(0x0010) Edit, EditConst, NonTransactional
		class FName                                                RigVMModel___RigVMFunction_ControlFlowBranch_BlockToRun; // 0x0370(0x0008) Edit, ZeroConstructor, EditConst, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
