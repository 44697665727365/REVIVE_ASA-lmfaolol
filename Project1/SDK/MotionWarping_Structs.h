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
	 * Enum MotionWarping.ERootMotionModifierState
	 */
	enum class ERootMotionModifierState : uint8_t
	{
		Waiting          = 0,
		Active           = 1,
		MarkedForRemoval = 2,
		Disabled         = 3,
		MAX              = 4
	};

	/**
	 * Enum MotionWarping.EMotionWarpRotationType
	 */
	enum class EMotionWarpRotationType : uint8_t
	{
		Default = 0,
		Facing  = 1,
		MAX     = 2
	};

	/**
	 * Enum MotionWarping.EWarpPointAnimProvider
	 */
	enum class EWarpPointAnimProvider : uint8_t
	{
		None   = 0,
		Static = 1,
		Bone   = 2,
		MAX    = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MotionWarping.MotionWarpingTarget
	 * Size -> 0x0050
	 */
	struct FMotionWarpingTarget
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0008(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            Rotation;                                                // 0x0020(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		TWeakObjectPtr<class USceneComponent>                      Component;                                               // 0x0038(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BoneName;                                                // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFollowComponent;                                        // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_G5RN[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MotionWarping.MotionWarpingWindowData
	 * Size -> 0x0010
	 */
	struct FMotionWarpingWindowData
	{
	public:
		class UAnimNotifyState_MotionWarping*                      AnimNotify;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StartTime;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      EndTime;                                                 // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MotionWarping.MotionWarpingUpdateContext
	 * Size -> 0x001C
	 */
	struct FMotionWarpingUpdateContext
	{
	public:
		TWeakObjectPtr<class UAnimSequenceBase>                    Animation;                                               // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PreviousPosition;                                        // 0x0008(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentPosition;                                         // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Weight;                                                  // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x0014(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DeltaSeconds;                                            // 0x0018(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MotionWarping.MotionDeltaTrack
	 * Size -> 0x0060
	 */
	struct FMotionDeltaTrack
	{
	public:
		TArray<struct FTransform>                                  BoneTransformTrack;                                      // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     DeltaTranslationTrack;                                   // 0x0010(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FRotator>                                    DeltaRotationTrack;                                      // 0x0020(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector                                             TotalTranslation;                                        // 0x0030(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            TotalRotation;                                           // 0x0048(0x0018) ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MotionWarping.MotionDeltaTrackContainer
	 * Size -> 0x0010
	 */
	struct FMotionDeltaTrackContainer
	{
	public:
		TArray<struct FMotionDeltaTrack>                           Tracks;                                                  // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
