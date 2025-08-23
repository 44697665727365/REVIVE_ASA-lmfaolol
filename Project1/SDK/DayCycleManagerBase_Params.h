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
	 * Function DayCycleManagerBase.DayCycleManagerBase_C.GetInCave
	 */
	struct ADayCycleManagerBase_C_GetInCave_Params
	{
	public:
		bool                                                       IsInCave;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DayCycleManagerBase.DayCycleManagerBase_C.GetTemperature
	 */
	struct ADayCycleManagerBase_C_GetTemperature_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Temperature;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DayCycleManagerBase.DayCycleManagerBase_C.GetTime
	 */
	struct ADayCycleManagerBase_C_GetTime_Params
	{
	public:
		double                                                     CurrentTime;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DayCycleManagerBase.DayCycleManagerBase_C.GetWeatherModifiedAmbientSoundMultiplier
	 */
	struct ADayCycleManagerBase_C_GetWeatherModifiedAmbientSoundMultiplier_Params
	{
	public:
		class ADayCycleAmbientSound*                               ForDayCycleAmbientSound;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		float                                                      ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AWUI[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DayCycleManagerBase.DayCycleManagerBase_C.Get Teleport Transfer World PP
	 */
	struct ADayCycleManagerBase_C_GetTeleportTransferWorldPP_Params
	{
	public:
		class APostProcessVolume*                                  PP;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DayCycleManagerBase.DayCycleManagerBase_C.Get VR World PP
	 */
	struct ADayCycleManagerBase_C_GetVRWorldPP_Params
	{
	public:
		class APostProcessVolume*                                  PP;                                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DayCycleManagerBase.DayCycleManagerBase_C.HandleGrappleHookImpacted
	 */
	struct ADayCycleManagerBase_C_HandleGrappleHookImpacted_Params
	{
	public:
		class APrimalProjectileGrapplingHook*                      GrapHookProj;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FHitResult                                          HitInfo;                                                 // 0x0008(0x00F0)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function DayCycleManagerBase.DayCycleManagerBase_C.GetWeatherEventWarning
	 */
	struct ADayCycleManagerBase_C_GetWeatherEventWarning_Params
	{
	public:
		int32_t                                                    WeatherEventWarningType;                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DayCycleManagerBase.DayCycleManagerBase_C.Get Golem MeshClass
	 */
	struct ADayCycleManagerBase_C_GetGolemMeshClass_Params
	{
	public:
		class UClass*                                              isScorchedEarthMesh;                                     // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DayCycleManagerBase.DayCycleManagerBase_C.GetBaseTemperatureModified
	 */
	struct ADayCycleManagerBase_C_GetBaseTemperatureModified_Params
	{
	public:
		double                                                     ModifiedBaseTemperature;                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DayCycleManagerBase.DayCycleManagerBase_C.ActivatedStructureUpdated
	 */
	struct ADayCycleManagerBase_C_ActivatedStructureUpdated_Params
	{
	public:
		class APrimalStructureItemContainer*                       ActiveStructure;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DayCycleManagerBase.DayCycleManagerBase_C.UpdateDCMTime
	 */
	struct ADayCycleManagerBase_C_UpdateDCMTime_Params
	{
	public:
		double                                                     NewTime;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DayCycleManagerBase.DayCycleManagerBase_C.SetTimeOfDay
	 */
	struct ADayCycleManagerBase_C_SetTimeOfDay_Params
	{
	public:
		int32_t                                                    Hours;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Minutes;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Seconds;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DayCycleManagerBase.DayCycleManagerBase_C.SetBaseWind
	 */
	struct ADayCycleManagerBase_C_SetBaseWind_Params
	{
	public:
		double                                                     NewBaseWind;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DayCycleManagerBase.DayCycleManagerBase_C.SetBaseTemerature
	 */
	struct ADayCycleManagerBase_C_SetBaseTemerature_Params
	{
	public:
		double                                                     NewBaseTemp;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DayCycleManagerBase.DayCycleManagerBase_C.SetIsRaining
	 */
	struct ADayCycleManagerBase_C_SetIsRaining_Params
	{
	public:
		bool                                                       IsRaining;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DayCycleManagerBase.DayCycleManagerBase_C.SetInCave
	 */
	struct ADayCycleManagerBase_C_SetInCave_Params
	{
	public:
		bool                                                       NewInCave;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DayCycleManagerBase.DayCycleManagerBase_C.SetRainAmount
	 */
	struct ADayCycleManagerBase_C_SetRainAmount_Params
	{
	public:
		double                                                     NewRainAmount;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DayCycleManagerBase.DayCycleManagerBase_C.SetSnowAmount
	 */
	struct ADayCycleManagerBase_C_SetSnowAmount_Params
	{
	public:
		double                                                     NewSnowAmount;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DayCycleManagerBase.DayCycleManagerBase_C.ExecuteUbergraph_DayCycleManagerBase
	 */
	struct ADayCycleManagerBase_C_ExecuteUbergraph_DayCycleManagerBase_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AP4G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function DayCycleManagerBase.DayCycleManagerBase_C.DCMUpdated__DelegateSignature
	 */
	struct ADayCycleManagerBase_C_DCMUpdated__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
