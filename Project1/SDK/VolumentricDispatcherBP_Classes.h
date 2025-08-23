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
	 * BlueprintGeneratedClass VolumentricDispatcherBP.VolumentricDispatcherBP_C
	 * Size -> 0x0010 (FullSize[0x0640] - InheritedSize[0x0630])
	 */
	class AVolumentricDispatcherBP_C : public AVolumetricDispatcher
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0630(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0638(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		void FluidSpash(const struct FVector& Location, float Radius, const struct FVector& Velocity, class UNiagaraSystem* FluidSimSplashTemplateOverride, bool PlaySplashSound);
		void ExecuteUbergraph_VolumentricDispatcherBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
