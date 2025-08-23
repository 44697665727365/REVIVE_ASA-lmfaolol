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
	 * Function DataListEntryWidgetGeneric_Engram.DataListEntryWidgetGeneric_Engram_C.OnPaint
	 */
	struct UDataListEntryWidgetGeneric_Engram_C_OnPaint_Params
	{
	public:
		struct FPaintContext                                       Context;                                                 // 0x0000(0x0030)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function DataListEntryWidgetGeneric_Engram.DataListEntryWidgetGeneric_Engram_C.Construct
	 */
	struct UDataListEntryWidgetGeneric_Engram_C_Construct_Params
	{	};

	/**
	 * Function DataListEntryWidgetGeneric_Engram.DataListEntryWidgetGeneric_Engram_C.Tick
	 */
	struct UDataListEntryWidgetGeneric_Engram_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function DataListEntryWidgetGeneric_Engram.DataListEntryWidgetGeneric_Engram_C.ExecuteUbergraph_DataListEntryWidgetGeneric_Engram
	 */
	struct UDataListEntryWidgetGeneric_Engram_C_ExecuteUbergraph_DataListEntryWidgetGeneric_Engram_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
