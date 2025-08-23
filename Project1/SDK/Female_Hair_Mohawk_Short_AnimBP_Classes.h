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
	 * AnimBlueprintGeneratedClass Female_Hair_Mohawk_Short_AnimBP.Female_Hair_Mohawk_Short_AnimBP_C
	 * Size -> 0x0218 (FullSize[0x0560] - InheritedSize[0x0348])
	 */
	class UFemale_Hair_Mohawk_Short_AnimBP_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_OBBJ[0x8];                                   // 0x0348(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0350(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_PropertyAccess;                   // 0x0358(0x0008)
		struct FAnimSubsystemInstance                              AnimBlueprintExtension_Base;                             // 0x0360(0x0008)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x0368(0x0020)
		struct FAnimNode_CopyPoseFromMesh                          AnimGraphNode_CopyPoseFromMesh;                          // 0x0388(0x01D8) ContainsInstancedReference

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void ExecuteUbergraph_Female_Hair_Mohawk_Short_AnimBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
