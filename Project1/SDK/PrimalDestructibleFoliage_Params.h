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
	 * Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.InitializeVariablesFromGameplayData
	 */
	struct APrimalDestructibleFoliage_C_InitializeVariablesFromGameplayData_Params
	{	};

	/**
	 * Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.BreakClusterFromRandomClusterIndexArray
	 */
	struct APrimalDestructibleFoliage_C_BreakClusterFromRandomClusterIndexArray_Params
	{
	public:
		class UGeometryCollectionComponent*                        GeoCollection;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            ItemIndexArrayOfCluster;                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FLinearColor                                        DebugTextColor;                                          // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     BreakLevelPercent01;                                     // 0x0028(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.BreakClusterFromClusterIndexArray
	 */
	struct APrimalDestructibleFoliage_C_BreakClusterFromClusterIndexArray_Params
	{
	public:
		class UGeometryCollectionComponent*                        GeoCollection;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            ItemIndexArrayOfCluster;                                 // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FLinearColor                                        DebugTextColor;                                          // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.Group Cluster Index by Level
	 */
	struct APrimalDestructibleFoliage_C_GroupClusterIndexbyLevel_Params
	{
	public:
		class UGeometryCollectionComponent*                        GeoCollection;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NumberOfPiecesInGeoColl;                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        DebugTextColor;                                          // 0x000C(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WLCN[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<int32_t>                                            Level0;                                                  // 0x0020(0x0010)  (Parm, OutParm)
		TArray<int32_t>                                            Level1;                                                  // 0x0030(0x0010)  (Parm, OutParm)
		TArray<int32_t>                                            Level2;                                                  // 0x0040(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.GetRangeOfLevelsFromClusterIndexes
	 */
	struct APrimalDestructibleFoliage_C_GetRangeOfLevelsFromClusterIndexes_Params
	{
	public:
		class UGeometryCollectionComponent*                        GeoCollection;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    StartItemIndexOfCluster;                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    EndItemIndexOfCluster;                                   // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        DebugTextColor;                                          // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<int32_t>                                            Level0;                                                  // 0x0020(0x0010)  (Parm, OutParm)
		TArray<int32_t>                                            Level1;                                                  // 0x0030(0x0010)  (Parm, OutParm)
		TArray<int32_t>                                            Level2;                                                  // 0x0040(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.GetDamageThresholdInfo
	 */
	struct APrimalDestructibleFoliage_C_GetDamageThresholdInfo_Params
	{
	public:
		class UGeometryCollectionComponent*                        GeoCollection;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        DebugTextColor;                                          // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    DamageThresholdArrayLength;                              // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.BreakAllActiveClusters
	 */
	struct APrimalDestructibleFoliage_C_BreakAllActiveClusters_Params
	{
	public:
		class UGeometryCollectionComponent*                        GeoCollection;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        DebugTextColor;                                          // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.BreakClusterFromClusterIndex
	 */
	struct APrimalDestructibleFoliage_C_BreakClusterFromClusterIndex_Params
	{
	public:
		class UGeometryCollectionComponent*                        GeoCollection;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ItemIndexOfCluster;                                      // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        DebugTextColor;                                          // 0x000C(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.GetLevelFromClusterIndex
	 */
	struct APrimalDestructibleFoliage_C_GetLevelFromClusterIndex_Params
	{
	public:
		class UGeometryCollectionComponent*                        GeoCollection;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ItemIndexOfCluster;                                      // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        DebugTextColor;                                          // 0x000C(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Level;                                                   // 0x001C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.Break
	 */
	struct APrimalDestructibleFoliage_C_Break_Params
	{	};

	/**
	 * Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.BreakSecondLayer
	 */
	struct APrimalDestructibleFoliage_C_BreakSecondLayer_Params
	{	};

	/**
	 * Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.BPStartDestruction
	 */
	struct APrimalDestructibleFoliage_C_BPStartDestruction_Params
	{
	public:
		class UGeometryCollection*                                 destructionAsset;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             HitDirection;                                            // 0x0008(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TotalHealth;                                             // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.ReceiveBeginPlay
	 */
	struct APrimalDestructibleFoliage_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.OnBreak
	 */
	struct APrimalDestructibleFoliage_C_OnBreak_Params
	{
	public:
		struct FChaosBreakEvent                                    BreakEvent;                                              // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.StaticBPPreDestructionHandleAttachedComponentClass
	 */
	struct APrimalDestructibleFoliage_C_StaticBPPreDestructionHandleAttachedComponentClass_Params
	{
	public:
		class UClass*                                              AttachedComponentClass;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		class UInstancedStaticMeshComponent*                       ForMeshComp;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             InstancePosition;                                        // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            InstanceRotation;                                        // 0x0028(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		int32_t                                                    InstanceIndex;                                           // 0x0040(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KZIK[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             HitDirection;                                            // 0x0048(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Damage;                                                  // 0x0060(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TotalHealth;                                             // 0x0064(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PrimalDestructibleFoliage.PrimalDestructibleFoliage_C.ExecuteUbergraph_PrimalDestructibleFoliage
	 */
	struct APrimalDestructibleFoliage_C_ExecuteUbergraph_PrimalDestructibleFoliage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_W4KB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
