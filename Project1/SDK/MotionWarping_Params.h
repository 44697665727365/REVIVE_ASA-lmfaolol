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
	 * Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpUpdate
	 */
	struct UAnimNotifyState_MotionWarping_OnWarpUpdate_Params
	{
	public:
		class UMotionWarpingComponent*                             MotionWarpingComp;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class URootMotionModifier*                                 Modifier;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpEnd
	 */
	struct UAnimNotifyState_MotionWarping_OnWarpEnd_Params
	{
	public:
		class UMotionWarpingComponent*                             MotionWarpingComp;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class URootMotionModifier*                                 Modifier;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.AnimNotifyState_MotionWarping.OnWarpBegin
	 */
	struct UAnimNotifyState_MotionWarping_OnWarpBegin_Params
	{
	public:
		class UMotionWarpingComponent*                             MotionWarpingComp;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class URootMotionModifier*                                 Modifier;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierUpdate
	 */
	struct UAnimNotifyState_MotionWarping_OnRootMotionModifierUpdate_Params
	{
	public:
		class UMotionWarpingComponent*                             MotionWarpingComp;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class URootMotionModifier*                                 Modifier;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierDeactivate
	 */
	struct UAnimNotifyState_MotionWarping_OnRootMotionModifierDeactivate_Params
	{
	public:
		class UMotionWarpingComponent*                             MotionWarpingComp;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class URootMotionModifier*                                 Modifier;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.AnimNotifyState_MotionWarping.OnRootMotionModifierActivate
	 */
	struct UAnimNotifyState_MotionWarping_OnRootMotionModifierActivate_Params
	{
	public:
		class UMotionWarpingComponent*                             MotionWarpingComp;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class URootMotionModifier*                                 Modifier;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.AnimNotifyState_MotionWarping.AddRootMotionModifier
	 */
	struct UAnimNotifyState_MotionWarping_AddRootMotionModifier_Params
	{
	public:
		class UMotionWarpingComponent*                             MotionWarpingComp;                                       // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequenceBase*                                   Animation;                                               // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartTime;                                               // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EndTime;                                                 // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class URootMotionModifier*                                 ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsFromAnimation
	 */
	struct UMotionWarpingUtilities_GetMotionWarpingWindowsFromAnimation_Params
	{
	public:
		class UAnimSequenceBase*                                   Animation;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FMotionWarpingWindowData>                    OutWindows;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.MotionWarpingUtilities.GetMotionWarpingWindowsForWarpTargetFromAnimation
	 */
	struct UMotionWarpingUtilities_GetMotionWarpingWindowsForWarpTargetFromAnimation_Params
	{
	public:
		class UAnimSequenceBase*                                   Animation;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                WarpTargetName;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FMotionWarpingWindowData>                    OutWindows;                                              // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.MotionWarpingUtilities.ExtractRootMotionFromAnimation
	 */
	struct UMotionWarpingUtilities_ExtractRootMotionFromAnimation_Params
	{
	public:
		class UAnimSequenceBase*                                   Animation;                                               // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      StartTime;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EndTime;                                                 // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FTransform                                          ReturnValue;                                             // 0x0010(0x0060)  (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.MotionWarpingComponent.RemoveWarpTarget
	 */
	struct UMotionWarpingComponent_RemoveWarpTarget_Params
	{
	public:
		class FName                                                WarpTargetName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.MotionWarpingComponent.DisableAllRootMotionModifiers
	 */
	struct UMotionWarpingComponent_DisableAllRootMotionModifiers_Params
	{	};

	/**
	 * Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromTransform
	 */
	struct UMotionWarpingComponent_AddOrUpdateWarpTargetFromTransform_Params
	{
	public:
		class FName                                                WarpTargetName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RD64[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          TargetTransform;                                         // 0x0010(0x0060)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocationAndRotation
	 */
	struct UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocationAndRotation_Params
	{
	public:
		class FName                                                WarpTargetName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             TargetLocation;                                          // 0x0008(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FRotator                                            TargetRotation;                                          // 0x0020(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromLocation
	 */
	struct UMotionWarpingComponent_AddOrUpdateWarpTargetFromLocation_Params
	{
	public:
		class FName                                                WarpTargetName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             TargetLocation;                                          // 0x0008(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTargetFromComponent
	 */
	struct UMotionWarpingComponent_AddOrUpdateWarpTargetFromComponent_Params
	{
	public:
		class FName                                                WarpTargetName;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USceneComponent*                                     Component;                                               // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                BoneName;                                                // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bFollowComponent;                                        // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.MotionWarpingComponent.AddOrUpdateWarpTarget
	 */
	struct UMotionWarpingComponent_AddOrUpdateWarpTarget_Params
	{
	public:
		struct FMotionWarpingTarget                                WarpTarget;                                              // 0x0000(0x0050)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.RootMotionModifier_Scale.AddRootMotionModifierScale
	 */
	struct URootMotionModifier_Scale_AddRootMotionModifierScale_Params
	{
	public:
		class UMotionWarpingComponent*                             InMotionWarpingComp;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequenceBase*                                   InAnimation;                                             // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InStartTime;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InEndTime;                                               // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             InScale;                                                 // 0x0018(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class URootMotionModifier_Scale*                           ReturnValue;                                             // 0x0030(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function MotionWarping.RootMotionModifier_SkewWarp.AddRootMotionModifierSkewWarp
	 */
	struct URootMotionModifier_SkewWarp_AddRootMotionModifierSkewWarp_Params
	{
	public:
		class UMotionWarpingComponent*                             InMotionWarpingComp;                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UAnimSequenceBase*                                   InAnimation;                                             // 0x0008(0x0008)  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InStartTime;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InEndTime;                                               // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InWarpTargetName;                                        // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWarpPointAnimProvider                                     InWarpPointAnimProvider;                                 // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_GV23[0xF];                                   // 0x0021(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FTransform                                          InWarpPointAnimTransform;                                // 0x0030(0x0060)  (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                InWarpPointAnimBoneName;                                 // 0x0090(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInWarpTranslation;                                      // 0x0098(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInIgnoreZAxis;                                          // 0x0099(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bInWarpRotation;                                         // 0x009A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMotionWarpRotationType                                    InRotationType;                                          // 0x009B(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      InWarpRotationTimeMultiplier;                            // 0x009C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class URootMotionModifier_SkewWarp*                        ReturnValue;                                             // 0x00A0(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
