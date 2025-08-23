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
	 * ScriptStruct LiveLinkAnimationCore.AnimNode_LiveLinkPose
	 * Size -> 0x0038 (FullSize[0x0048] - InheritedSize[0x0010])
	 */
	struct FAnimNode_LiveLinkPose : public FAnimNode_Base
	{
	public:
		struct FPoseLink                                           InputPose;                                               // 0x0010(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FLiveLinkSubjectName                                LiveLinkSubjectName;                                     // 0x0020(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              RetargetAsset;                                           // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoClear, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ULiveLinkRetargetAsset*                              CurrentRetargetAsset;                                    // 0x0030(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AIO6[0x10];                                  // 0x0038(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct LiveLinkAnimationCore.LiveLinkInstanceProxy
	 * Size -> 0x0048 (FullSize[0x08C0] - InheritedSize[0x0878])
	 */
	struct FLiveLinkInstanceProxy : public FAnimInstanceProxy
	{
	public:
		struct FAnimNode_LiveLinkPose                              PoseNode;                                                // 0x0878(0x0048) Edit, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
