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
	 * Class MotionWarping.AnimNotifyState_MotionWarping
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UAnimNotifyState_MotionWarping : public UAnimNotifyState
	{
	public:
		class URootMotionModifier*                                 RootMotionModifier;                                      // 0x0030(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void OnWarpUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
		void OnWarpEnd(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
		void OnWarpBegin(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
		void OnRootMotionModifierUpdate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
		void OnRootMotionModifierDeactivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
		void OnRootMotionModifierActivate(class UMotionWarpingComponent* MotionWarpingComp, class URootMotionModifier* Modifier);
		class URootMotionModifier* AddRootMotionModifier(class UMotionWarpingComponent* MotionWarpingComp, class UAnimSequenceBase* Animation, float StartTime, float EndTime);
		static UClass* StaticClass();
	};

	/**
	 * Class MotionWarping.MotionWarpingUtilities
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMotionWarpingUtilities : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetMotionWarpingWindowsFromAnimation(class UAnimSequenceBase* Animation, TArray<struct FMotionWarpingWindowData>* OutWindows);
		void STATIC_GetMotionWarpingWindowsForWarpTargetFromAnimation(class UAnimSequenceBase* Animation, const class FName& WarpTargetName, TArray<struct FMotionWarpingWindowData>* OutWindows);
		struct FTransform STATIC_ExtractRootMotionFromAnimation(class UAnimSequenceBase* Animation, float StartTime, float EndTime);
		static UClass* StaticClass();
	};

	/**
	 * Class MotionWarping.MotionWarpingComponent
	 * Size -> 0x0040 (FullSize[0x00F8] - InheritedSize[0x00B8])
	 */
	class UMotionWarpingComponent : public UActorComponent
	{
	public:
		bool                                                       bSearchForWindowsInAnimsWithinMontages;                  // 0x00B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7ZCI[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPreUpdate;                                             // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		TWeakObjectPtr<class ACharacter>                           CharacterOwner;                                          // 0x00D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class URootMotionModifier*>                         Modifiers;                                               // 0x00D8(0x0010) ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		TArray<struct FMotionWarpingTarget>                        WarpTargets;                                             // 0x00E8(0x0010) Net, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		int32_t RemoveWarpTarget(const class FName& WarpTargetName);
		void DisableAllRootMotionModifiers();
		void AddOrUpdateWarpTargetFromTransform(const class FName& WarpTargetName, const struct FTransform& TargetTransform);
		void AddOrUpdateWarpTargetFromLocationAndRotation(const class FName& WarpTargetName, const struct FVector& TargetLocation, const struct FRotator& TargetRotation);
		void AddOrUpdateWarpTargetFromLocation(const class FName& WarpTargetName, const struct FVector& TargetLocation);
		void AddOrUpdateWarpTargetFromComponent(const class FName& WarpTargetName, class USceneComponent* Component, const class FName& BoneName, bool bFollowComponent);
		void AddOrUpdateWarpTarget(const struct FMotionWarpingTarget& WarpTarget);
		static UClass* StaticClass();
	};

	/**
	 * Class MotionWarping.RootMotionModifier
	 * Size -> 0x00C0 (FullSize[0x00E8] - InheritedSize[0x0028])
	 */
	class URootMotionModifier : public UObject
	{
	public:
		TWeakObjectPtr<class UAnimSequenceBase>                    Animation;                                               // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartTime;                                               // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndTime;                                                 // 0x0034(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PreviousPosition;                                        // 0x0038(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentPosition;                                         // 0x003C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0040(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JD9Y[0xC];                                   // 0x0044(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          StartTransform;                                          // 0x0050(0x0060) BlueprintVisible, BlueprintReadOnly, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ActualStartTime;                                         // 0x00B0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnActivateDelegate;                                      // 0x00B4(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnUpdateDelegate;                                        // 0x00C4(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnDeactivateDelegate;                                    // 0x00D4(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERootMotionModifierState                                   State;                                                   // 0x00E4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MKIV[0x3];                                   // 0x00E5(0x0003) Fix size for supers

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MotionWarping.RootMotionModifier_Warp
	 * Size -> 0x0168 (FullSize[0x0250] - InheritedSize[0x00E8])
	 */
	class URootMotionModifier_Warp : public URootMotionModifier
	{
	public:
		class FName                                                WarpTargetName;                                          // 0x00E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWarpPointAnimProvider                                     WarpPointAnimProvider;                                   // 0x00F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1NA5[0xF];                                   // 0x00F1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          WarpPointAnimTransform;                                  // 0x0100(0x0060) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                WarpPointAnimBoneName;                                   // 0x0160(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWarpTranslation;                                        // 0x0168(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreZAxis;                                            // 0x0169(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAlphaBlendOption                                          AddTranslationEasingFunc;                                // 0x016A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V8G8[0x5];                                   // 0x016B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCurveFloat*                                         AddTranslationEasingCurve;                               // 0x0170(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWarpRotation;                                           // 0x0178(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMotionWarpRotationType                                    RotationType;                                            // 0x0179(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HP6H[0x2];                                   // 0x017A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WarpRotationTimeMultiplier;                              // 0x017C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTransform                                          CachedTargetTransform;                                   // 0x0180(0x0060) IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MUIA[0x70];                                  // 0x01E0(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MotionWarping.RootMotionModifier_SimpleWarp
	 * Size -> 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
	 */
	class URootMotionModifier_SimpleWarp : public URootMotionModifier_Warp
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MotionWarping.RootMotionModifier_Scale
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	class URootMotionModifier_Scale : public URootMotionModifier
	{
	public:
		struct FVector                                             Scale;                                                   // 0x00E8(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		class URootMotionModifier_Scale* STATIC_AddRootMotionModifierScale(class UMotionWarpingComponent* InMotionWarpingComp, class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, const struct FVector& InScale);
		static UClass* StaticClass();
	};

	/**
	 * Class MotionWarping.RootMotionModifier_AdjustmentBlendWarp
	 * Size -> 0x0160 (FullSize[0x03B0] - InheritedSize[0x0250])
	 */
	class URootMotionModifier_AdjustmentBlendWarp : public URootMotionModifier_Warp
	{
	public:
		bool                                                       bWarpIKBones;                                            // 0x0250(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JUV7[0x7];                                   // 0x0251(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        IKBones;                                                 // 0x0258(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7QSH[0x8];                                   // 0x0268(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          CachedMeshTransform;                                     // 0x0270(0x0060) IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTransform                                          CachedMeshRelativeTransform;                             // 0x02D0(0x0060) IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTransform                                          CachedRootMotion;                                        // 0x0330(0x0060) IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAnimSequenceTrackContainer                         Result;                                                  // 0x0390(0x0020) Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MotionWarping.RootMotionModifier_SkewWarp
	 * Size -> 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
	 */
	class URootMotionModifier_SkewWarp : public URootMotionModifier_Warp
	{
	public:
		class URootMotionModifier_SkewWarp* STATIC_AddRootMotionModifierSkewWarp(class UMotionWarpingComponent* InMotionWarpingComp, class UAnimSequenceBase* InAnimation, float InStartTime, float InEndTime, const class FName& InWarpTargetName, EWarpPointAnimProvider InWarpPointAnimProvider, const struct FTransform& InWarpPointAnimTransform, const class FName& InWarpPointAnimBoneName, bool bInWarpTranslation, bool bInIgnoreZAxis, bool bInWarpRotation, EMotionWarpRotationType InRotationType, float InWarpRotationTimeMultiplier);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
