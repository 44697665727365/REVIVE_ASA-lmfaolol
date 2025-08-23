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
	 * Function BPI_DayCycleManager.BPI_DayCycleManager_C.SetSnowAmount
	 */
	struct UBPI_DayCycleManager_C_SetSnowAmount_Params
	{
	public:
		double                                                     NewSnowAmount;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_DayCycleManager.BPI_DayCycleManager_C.SetRainAmount
	 */
	struct UBPI_DayCycleManager_C_SetRainAmount_Params
	{
	public:
		double                                                     NewRainAmount;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_DayCycleManager.BPI_DayCycleManager_C.SetInCave
	 */
	struct UBPI_DayCycleManager_C_SetInCave_Params
	{
	public:
		bool                                                       NewInCave;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_DayCycleManager.BPI_DayCycleManager_C.GetInCave
	 */
	struct UBPI_DayCycleManager_C_GetInCave_Params
	{
	public:
		bool                                                       IsInCave;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_DayCycleManager.BPI_DayCycleManager_C.SetIsRaining
	 */
	struct UBPI_DayCycleManager_C_SetIsRaining_Params
	{
	public:
		bool                                                       IsRaining;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_DayCycleManager.BPI_DayCycleManager_C.SetBaseWind
	 */
	struct UBPI_DayCycleManager_C_SetBaseWind_Params
	{
	public:
		double                                                     NewBaseWind;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_DayCycleManager.BPI_DayCycleManager_C.SetBaseTemerature
	 */
	struct UBPI_DayCycleManager_C_SetBaseTemerature_Params
	{
	public:
		double                                                     NewBaseTemp;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_DayCycleManager.BPI_DayCycleManager_C.UpdateDCMTime
	 */
	struct UBPI_DayCycleManager_C_UpdateDCMTime_Params
	{
	public:
		double                                                     NewTime;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_DayCycleManager.BPI_DayCycleManager_C.GetTemperature
	 */
	struct UBPI_DayCycleManager_C_GetTemperature_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Temperature;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPI_DayCycleManager.BPI_DayCycleManager_C.GetTime
	 */
	struct UBPI_DayCycleManager_C_GetTime_Params
	{
	public:
		double                                                     CurrentTime;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
