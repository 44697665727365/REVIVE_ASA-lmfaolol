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
	 * BlueprintGeneratedClass BP_FX_Underwater_Detritus.BP_FX_Underwater_Detritus_C
	 * Size -> 0x01F0 (FullSize[0x0708] - InheritedSize[0x0518])
	 */
	class ABP_FX_Underwater_Detritus_C : public ABP_Emitter_Master_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0518(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNiagaraComponent*                                   NiagaraSystemComponent;                                  // 0x0520(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		double                                                     SpawnDistanceMax;                                        // 0x0528(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DebugPrints;                                             // 0x0530(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsDay;                                                   // 0x0531(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UGJU[0x6];                                   // 0x0532(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          EmitterTable;                                            // 0x0538(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TMap<EPhysicalSurface, struct FSTR_ArrayOfIntegers>        PhysMatEmitterIDs;                                       // 0x0540(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<int32_t, class FName>                                 EmitterLookup;                                           // 0x0590(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       UseTestNS;                                               // 0x05E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_34W8[0x7];                                   // 0x05E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UNiagaraSystem*                                      TestNS;                                                  // 0x05E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		TMap<E_EmitterPool, struct FInt32Interval>                 CurrentEmitterPools;                                     // 0x05F0(0x0050) Edit, BlueprintVisible
		TMap<E_EmitterPool, int32_t>                               EmitterPoolMaxAmounts;                                   // 0x0640(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    DefaultPoolAmount;                                       // 0x0690(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_409E[0x4];                                   // 0x0694(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        NPCManagmentTimer;                                       // 0x0698(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TMap<class UNiagaraComponent*, E_EmitterPool>              SpawnedSystems;                                          // 0x06A0(0x0050) Edit, BlueprintVisible, ContainsInstancedReference
		float                                                      EmitterRemovalDistanceMod;                               // 0x06F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_69GN[0x4];                                   // 0x06F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TraceDistance;                                           // 0x06F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     WindSpeed;                                               // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void PlayerSourceLocation(bool* ValidCamera, struct FVector* Location);
		void CullSystemsAtDistance();
		void CheckEmitterPools(int32_t* Used, int32_t* Max);
		void SetupEmitterPools();
		void CheckEmitterPool(E_EmitterPool Pool, bool* RoomLeft);
		void SpawnEnvEffect(const struct FSTR_DynamicEnvEffectSettings& DynamicEffectSettings, const struct FVector& Location);
		void AdjustEmitterCount(bool Add, E_EmitterPool EffectSettings);
		void SetSystemParamaters(class UFXSystemComponent* System, const struct FSTR_DynamicEnvEffectCustomParameters& EffectParameters);
		void GetTraceOffsetsAroundPlayer(bool* Valid, struct FVector* Start, struct FVector* End);
		void IsEnabled(bool* _TRUE__);
		void UpdateNiagaraCollection();
		void SetupEmitterData();
		void GetParticleForSurface(EPhysicalSurface PhysMat, bool Underwater, bool* Valid, struct FSTR_DynamicEnvEffectSettings* Effect);
		void TrySpawnEmitter(bool* Sucess);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_FX_Underwater_Detritus(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
