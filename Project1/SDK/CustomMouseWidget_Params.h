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
	 * Function CustomMouseWidget.CustomMouseWidget_C.SetInnerRingScales
	 */
	struct UCustomMouseWidget_C_SetInnerRingScales_Params
	{
	public:
		double                                                     scale0;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     scale1;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     scale2;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomMouseWidget.CustomMouseWidget_C.SetPointerColorAdd
	 */
	struct UCustomMouseWidget_C_SetPointerColorAdd_Params
	{
	public:
		double                                                     Add;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomMouseWidget.CustomMouseWidget_C.ShowReticule
	 */
	struct UCustomMouseWidget_C_ShowReticule_Params
	{
	public:
		bool                                                       show;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomMouseWidget.CustomMouseWidget_C.SetPointerScale
	 */
	struct UCustomMouseWidget_C_SetPointerScale_Params
	{
	public:
		double                                                     NewParam;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function CustomMouseWidget.CustomMouseWidget_C.SetArrowAlpha
	 */
	struct UCustomMouseWidget_C_SetArrowAlpha_Params
	{
	public:
		double                                                     LeftRightAlpha;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     UpDownAlpha;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       useArrow;                                                // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8ZPO[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function CustomMouseWidget.CustomMouseWidget_C.UseCircle
	 */
	struct UCustomMouseWidget_C_UseCircle_Params
	{	};

	/**
	 * Function CustomMouseWidget.CustomMouseWidget_C.useArrow
	 */
	struct UCustomMouseWidget_C_useArrow_Params
	{	};

	/**
	 * Function CustomMouseWidget.CustomMouseWidget_C.Construct
	 */
	struct UCustomMouseWidget_C_Construct_Params
	{	};

	/**
	 * Function CustomMouseWidget.CustomMouseWidget_C.ExecuteUbergraph_CustomMouseWidget
	 */
	struct UCustomMouseWidget_C_ExecuteUbergraph_CustomMouseWidget_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
