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
	 * BlueprintGeneratedClass PrimalDestructibleFoliage.PrimalDestructibleFoliage_C
	 * Size -> 0x0328 (FullSize[0x07F0] - InheritedSize[0x04C8])
	 */
	class APrimalDestructibleFoliage_C : public APrimalDestructibleActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FString                                              DamageAmount;                                            // 0x04D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              BreakDamagePropagationFactor;                            // 0x04E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FVector                                             VelocityVector;                                          // 0x04F0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<float>                                              DamageThreshold;                                         // 0x0508(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    ClusterIndex;                                            // 0x0518(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ItemIndex;                                               // 0x051C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FLinearColor                                        TextColor;                                               // 0x0520(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    NumberOfPiecesinGeoCollection;                           // 0x0530(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NZQJ[0x4];                                   // 0x0534(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             AngularVelocityVector;                                   // 0x0538(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      DebugTextDuration;                                       // 0x0550(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BTRO[0x4];                                   // 0x0554(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGeometryCollection*                                 RestCollectionIn;                                        // 0x0558(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		EObjectStateTypeEnum                                       SetStateType;                                            // 0x0560(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EObjectStateTypeEnum                                       StateType;                                               // 0x0561(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KJS3[0x6];                                   // 0x0562(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     Target;                                                  // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       EnableClustering;                                        // 0x0570(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CrumblingEventIncludesChildren;                          // 0x0571(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KCK9[0x6];                                   // 0x0572(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGeometryCollectionComponent*                        GCTest;                                                  // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		double                                                     BreakLevel01;                                            // 0x0580(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EnableTextDebug;                                         // 0x0588(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_97BC[0x3];                                   // 0x0589(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRandomStream                                       Stream;                                                  // 0x058C(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor
		int32_t                                                    InitialSeed;                                             // 0x0594(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DynamicActivationRadius;                                 // 0x0598(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FUDS_and_UDW_State                                  State;                                                   // 0x05A0(0x0178) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       EnableStateChange;                                       // 0x0718(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XVUF[0x3];                                   // 0x0719(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      HitDirectionVelocityMultiplier_min;                      // 0x071C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      HitDirectionVelocityMultiplier_max;                      // 0x0720(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AngularVelocityMultiplier_Min;                           // 0x0724(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AngularVelocityMultiplier_Max;                           // 0x0728(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DAWI[0x4];                                   // 0x072C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     BreakLevelPercent_Min;                                   // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TimeToForceStartRemoval;                                 // 0x0738(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Damage;                                                  // 0x0740(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TotalHealth;                                             // 0x0744(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             HitDirection;                                            // 0x0748(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<int32_t>                                            Level_0_Indices;                                         // 0x0760(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<int32_t>                                            Level_1_Indices;                                         // 0x0770(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<int32_t>                                            Level_2_Indices;                                         // 0x0780(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector                                             NewVar;                                                  // 0x0790(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MaxOnBreakAngularVelocity;                               // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      massmultiplier;                                          // 0x07B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_W9YE[0x4];                                   // 0x07B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ApproximateHitLocation;                                  // 0x07B8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     minimumdamagethresholdneededtoapplyvelocity;             // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MinimumDamageformaxsizeofimpulse;                        // 0x07D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     HitImpulseStrength;                                      // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     percentageimpulsestrengthbasedondamage;                  // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void InitializeVariablesFromGameplayData();
		void BreakClusterFromRandomClusterIndexArray(class UGeometryCollectionComponent* GeoCollection, TArray<int32_t>* ItemIndexArrayOfCluster, const struct FLinearColor& DebugTextColor, double BreakLevelPercent01);
		void BreakClusterFromClusterIndexArray(class UGeometryCollectionComponent* GeoCollection, TArray<int32_t>* ItemIndexArrayOfCluster, const struct FLinearColor& DebugTextColor);
		void GroupClusterIndexbyLevel(class UGeometryCollectionComponent* GeoCollection, int32_t NumberOfPiecesInGeoColl, const struct FLinearColor& DebugTextColor, TArray<int32_t>* Level0, TArray<int32_t>* Level1, TArray<int32_t>* Level2);
		void GetRangeOfLevelsFromClusterIndexes(class UGeometryCollectionComponent* GeoCollection, int32_t StartItemIndexOfCluster, int32_t EndItemIndexOfCluster, const struct FLinearColor& DebugTextColor, TArray<int32_t>* Level0, TArray<int32_t>* Level1, TArray<int32_t>* Level2);
		void GetDamageThresholdInfo(class UGeometryCollectionComponent* GeoCollection, const struct FLinearColor& DebugTextColor, int32_t* DamageThresholdArrayLength);
		void BreakAllActiveClusters(class UGeometryCollectionComponent* GeoCollection, const struct FLinearColor& DebugTextColor);
		void BreakClusterFromClusterIndex(class UGeometryCollectionComponent* GeoCollection, int32_t ItemIndexOfCluster, const struct FLinearColor& DebugTextColor);
		void GetLevelFromClusterIndex(class UGeometryCollectionComponent* GeoCollection, int32_t ItemIndexOfCluster, const struct FLinearColor& DebugTextColor, int32_t* Level);
		void Break();
		void BreakSecondLayer();
		void BPStartDestruction(class UGeometryCollection* destructionAsset, const struct FVector& HitDirection, float Damage, float TotalHealth);
		void ReceiveBeginPlay();
		void OnBreak(const struct FChaosBreakEvent& BreakEvent);
		void StaticBPPreDestructionHandleAttachedComponentClass(class UClass* AttachedComponentClass, class UInstancedStaticMeshComponent* ForMeshComp, const struct FVector& InstancePosition, const struct FRotator& InstanceRotation, int32_t InstanceIndex, const struct FVector& HitDirection, float Damage, float TotalHealth);
		void ExecuteUbergraph_PrimalDestructibleFoliage(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
