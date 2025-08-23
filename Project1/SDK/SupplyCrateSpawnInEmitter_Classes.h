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
	 * BlueprintGeneratedClass SupplyCrateSpawnInEmitter.SupplyCrateSpawnInEmitter_C
	 * Size -> 0x0021 (FullSize[0x05E9] - InheritedSize[0x05C8])
	 */
	class ASupplyCrateSpawnInEmitter_C : public APrimalEmitterSpawnable
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                Sphere;                                                  // 0x05D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight;                                              // 0x05D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UNiagaraComponent*                                   Niagara;                                                 // 0x05E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       bSetUpColor;                                             // 0x05E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void InitColor();
		void SetupEmitter(class AActor* FromActor);
		void UpdateEmitter(float DeltaTime, float Alpha, class AActor* FromActor);
		void ExecuteUbergraph_SupplyCrateSpawnInEmitter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
