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
	 * BlueprintGeneratedClass DayCycleManagerBase.DayCycleManagerBase_C
	 * Size -> 0x0048 (FullSize[0x0680] - InheritedSize[0x0638])
	 */
	class ADayCycleManagerBase_C : public ADayCycleManager
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0638(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       bPreventNocturnalLogic;                                  // 0x0640(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PF15[0x7];                                   // 0x0641(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             UDS_Main;                                                // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UObject*                                             UDS_Weather;                                             // 0x0650(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       UseUDS;                                                  // 0x0658(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PG8U[0x7];                                   // 0x0659(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             DCMUpdated;                                              // 0x0660(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsInCave;                                                // 0x0670(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S8TC[0x7];                                   // 0x0671(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MaxRainSnowAmbientSoundReduction;                        // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetInCave(bool* IsInCave);
		void GetTemperature(const struct FVector& Location, double* Temperature);
		void GetTime(double* CurrentTime);
		float GetWeatherModifiedAmbientSoundMultiplier(class ADayCycleAmbientSound* ForDayCycleAmbientSound);
		void GetTeleportTransferWorldPP(class APostProcessVolume** PP);
		void GetVRWorldPP(class APostProcessVolume** PP);
		void HandleGrappleHookImpacted(class APrimalProjectileGrapplingHook* GrapHookProj, struct FHitResult* HitInfo);
		void GetWeatherEventWarning(int32_t* WeatherEventWarningType);
		void GetGolemMeshClass(class UClass** isScorchedEarthMesh);
		void GetBaseTemperatureModified(double* ModifiedBaseTemperature);
		void ActivatedStructureUpdated(class APrimalStructureItemContainer* ActiveStructure);
		void UpdateDCMTime(double NewTime);
		void SetTimeOfDay(int32_t Hours, int32_t Minutes, int32_t Seconds);
		void SetBaseWind(double NewBaseWind);
		void SetBaseTemerature(double NewBaseTemp);
		void SetIsRaining(bool IsRaining);
		void SetInCave(bool NewInCave);
		void SetRainAmount(double NewRainAmount);
		void SetSnowAmount(double NewSnowAmount);
		void ExecuteUbergraph_DayCycleManagerBase(int32_t EntryPoint);
		void DCMUpdated__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
