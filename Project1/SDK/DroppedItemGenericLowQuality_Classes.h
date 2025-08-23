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
	 * BlueprintGeneratedClass DroppedItemGenericLowQuality.DroppedItemGenericLowQuality_C
	 * Size -> 0x0010 (FullSize[0x08A0] - InheritedSize[0x0890])
	 */
	class ADroppedItemGenericLowQuality_C : public ADroppedItemLowQuality
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0890(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMesh1;                                             // 0x0898(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void BPDroppedItemImpacted(const struct FHitResult& impactHitInfo);
		void ExecuteUbergraph_DroppedItemGenericLowQuality(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
