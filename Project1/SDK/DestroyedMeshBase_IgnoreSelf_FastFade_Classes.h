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
	 * BlueprintGeneratedClass DestroyedMeshBase_IgnoreSelf_FastFade.DestroyedMeshBase_IgnoreSelf_FastFade_C
	 * Size -> 0x0018 (FullSize[0x04F0] - InheritedSize[0x04D8])
	 */
	class ADestroyedMeshBase_IgnoreSelf_FastFade_C : public ADestroyedMeshBase_IgnoreSelf_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04D8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                SMesh;                                                   // 0x04E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     ReduceScaleSpeed;                                        // 0x04E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveDestroyed();
		void ReceiveTick(float DeltaSeconds);
		void SetFadingStaticMesh(class UStaticMesh* TheMesh);
		void ExecuteUbergraph_DestroyedMeshBase_IgnoreSelf_FastFade(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
