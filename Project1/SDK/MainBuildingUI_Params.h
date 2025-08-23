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
	 * Function MainBuildingUI.MainBuildingUI_C.SetupBuildingHotbar
	 */
	struct UMainBuildingUI_C_SetupBuildingHotbar_Params
	{
	public:
		class APrimalStructurePlacer*                              Placer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainBuildingUI.MainBuildingUI_C.UpdateVisibilityByString
	 */
	struct UMainBuildingUI_C_UpdateVisibilityByString_Params
	{
	public:
		class FString                                              String;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		TArray<class UWidget*>                                     Widget;                                                  // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		bool                                                       Condition;                                               // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SBRO[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function MainBuildingUI.MainBuildingUI_C.SetupStructurePlacer
	 */
	struct UMainBuildingUI_C_SetupStructurePlacer_Params
	{
	public:
		class APrimalStructurePlacer*                              Placer;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainBuildingUI.MainBuildingUI_C.Tick
	 */
	struct UMainBuildingUI_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MainBuildingUI.MainBuildingUI_C.Construct
	 */
	struct UMainBuildingUI_C_Construct_Params
	{	};

	/**
	 * Function MainBuildingUI.MainBuildingUI_C.RemovedFromViewport
	 */
	struct UMainBuildingUI_C_RemovedFromViewport_Params
	{	};

	/**
	 * Function MainBuildingUI.MainBuildingUI_C.ExecuteUbergraph_MainBuildingUI
	 */
	struct UMainBuildingUI_C_ExecuteUbergraph_MainBuildingUI_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YOGC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
