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
	 * Function MinimapWidget_ASA.MinimapWidget_ASA_C.TraceGroundLocation
	 */
	struct UMinimapWidget_ASA_C_TraceGroundLocation_Params
	{
	public:
		struct FVector                                             WithLocation;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Found;                                                   // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UDRC[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     Z;                                                       // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MinimapWidget_ASA.MinimapWidget_ASA_C.Get Render Scale for POI
	 */
	struct UMinimapWidget_ASA_C_GetRenderScaleforPOI_Params
	{
	public:
		struct FVector2D                                           ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MinimapWidget_ASA.MinimapWidget_ASA_C.IncrementCacheOverride
	 */
	struct UMinimapWidget_ASA_C_IncrementCacheOverride_Params
	{
	public:
		int32_t                                                    Qty;                                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MinimapWidget_ASA.MinimapWidget_ASA_C.UpdateCachedData
	 */
	struct UMinimapWidget_ASA_C_UpdateCachedData_Params
	{	};

	/**
	 * Function MinimapWidget_ASA.MinimapWidget_ASA_C.GetLocationWIthCoords
	 */
	struct UMinimapWidget_ASA_C_GetLocationWIthCoords_Params
	{
	public:
		struct FVector2D                                           Coords;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0010(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MinimapWidget_ASA.MinimapWidget_ASA_C.CalculateWorldLocationMinimap
	 */
	struct UMinimapWidget_ASA_C_CalculateWorldLocationMinimap_Params
	{
	public:
		struct FVector2D                                           Vector;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Loc;                                                     // 0x0010(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MinimapWidget_ASA.MinimapWidget_ASA_C.GetAllPois
	 */
	struct UMinimapWidget_ASA_C_GetAllPois_Params
	{
	public:
		TArray<struct FPointOfInterestData>                        MarkPOIs;                                                // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function MinimapWidget_ASA.MinimapWidget_ASA_C.LocAndRotYourself
	 */
	struct UMinimapWidget_ASA_C_LocAndRotYourself_Params
	{
	public:
		struct FVector2D                                           InPosition;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MinimapWidget_ASA.MinimapWidget_ASA_C.UpdateOwnPlayerMark
	 */
	struct UMinimapWidget_ASA_C_UpdateOwnPlayerMark_Params
	{	};

	/**
	 * Function MinimapWidget_ASA.MinimapWidget_ASA_C.GeneratePOIs
	 */
	struct UMinimapWidget_ASA_C_GeneratePOIs_Params
	{	};

	/**
	 * Function MinimapWidget_ASA.MinimapWidget_ASA_C.GetMinimapLocation
	 */
	struct UMinimapWidget_ASA_C_GetMinimapLocation_Params
	{
	public:
		struct FVector                                             InputPin;                                                // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       NoUseScaleMinimap;                                       // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_X7TN[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           ReturnValue;                                             // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           Coords;                                                  // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MinimapWidget_ASA.MinimapWidget_ASA_C.Get Current MiniMap Data
	 */
	struct UMinimapWidget_ASA_C_GetCurrentMiniMapData_Params
	{
	public:
		struct FMapData                                            CurrentMinimapData;                                      // 0x0000(0x0078)  (Parm, OutParm)
	};

	/**
	 * Function MinimapWidget_ASA.MinimapWidget_ASA_C.GetMiniMapData
	 */
	struct UMinimapWidget_ASA_C_GetMiniMapData_Params
	{
	public:
		TArray<struct FMapData>                                    Minimaps;                                                // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function MinimapWidget_ASA.MinimapWidget_ASA_C.GetPawnLoc
	 */
	struct UMinimapWidget_ASA_C_GetPawnLoc_Params
	{
	public:
		class APrimalCharacter*                                    Pawn;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             WorldLocation;                                           // 0x0008(0x0018)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MinimapWidget_ASA.MinimapWidget_ASA_C.Construct
	 */
	struct UMinimapWidget_ASA_C_Construct_Params
	{	};

	/**
	 * Function MinimapWidget_ASA.MinimapWidget_ASA_C.Tick
	 */
	struct UMinimapWidget_ASA_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MinimapWidget_ASA.MinimapWidget_ASA_C.UpdateZoomMap
	 */
	struct UMinimapWidget_ASA_C_UpdateZoomMap_Params
	{
	public:
		double                                                     Zoom;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MinimapWidget_ASA.MinimapWidget_ASA_C.AssignOnHandleMark
	 */
	struct UMinimapWidget_ASA_C_AssignOnHandleMark_Params
	{
	public:
		class UMapMarkWidget_ASA_C*                                ref;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MinimapWidget_ASA.MinimapWidget_ASA_C.HandleTracking_Event
	 */
	struct UMinimapWidget_ASA_C_HandleTracking_Event_Params
	{
	public:
		struct FMinimapMark                                        Mark;                                                    // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsTracking;                                              // 0x0078(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MinimapWidget_ASA.MinimapWidget_ASA_C.PreConstruct
	 */
	struct UMinimapWidget_ASA_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MinimapWidget_ASA.MinimapWidget_ASA_C.HaandleEditMark_Event
	 */
	struct UMinimapWidget_ASA_C_HaandleEditMark_Event_Params
	{
	public:
		struct FMinimapMark                                        Mark;                                                    // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MinimapWidget_ASA.MinimapWidget_ASA_C.ExecuteUbergraph_MinimapWidget_ASA
	 */
	struct UMinimapWidget_ASA_C_ExecuteUbergraph_MinimapWidget_ASA_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function MinimapWidget_ASA.MinimapWidget_ASA_C.HandleEditMark__DelegateSignature
	 */
	struct UMinimapWidget_ASA_C_HandleEditMark__DelegateSignature_Params
	{
	public:
		struct FMinimapMark                                        Mark;                                                    // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function MinimapWidget_ASA.MinimapWidget_ASA_C.RefreshCachedData__DelegateSignature
	 */
	struct UMinimapWidget_ASA_C_RefreshCachedData__DelegateSignature_Params
	{	};

	/**
	 * Function MinimapWidget_ASA.MinimapWidget_ASA_C.RefreshTracking__DelegateSignature
	 */
	struct UMinimapWidget_ASA_C_RefreshTracking__DelegateSignature_Params
	{
	public:
		struct FMinimapMark                                        Mark;                                                    // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsTracking;                                              // 0x0078(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
