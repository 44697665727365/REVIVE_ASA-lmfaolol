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
	 * Class GeometryCollectionEngine.PrimalDestructibleActor
	 * Size -> 0x0010 (FullSize[0x04C8] - InheritedSize[0x04B8])
	 */
	class APrimalDestructibleActor : public AActor
	{
	public:
		class UGeometryCollectionComponent*                        GeoCollectionComponent;                                  // 0x04B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceDisableClustering;                                 // 0x04C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseBPStartDestruction;                                  // 0x04C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInfiniteLifespan;                                       // 0x04C2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NYUP[0x5];                                   // 0x04C3(0x0005) MISSED OFFSET (PADDING)

	public:
		void StaticBPPreDestructionHandleAttachedComponentClass(class UClass* AttachedComponentClass, class UInstancedStaticMeshComponent* ForMeshComp, const struct FVector& InstancePosition, const struct FRotator& InstanceRotation, int32_t InstanceIndex, const struct FVector& HitDirection, float Damage, float TotalHealth);
		void SetGeoCollection(class UGeometryCollection* GeoCollection);
		void BPStartDestruction(class UGeometryCollection* destructionAsset, const struct FVector& HitDirection, float Damage, float TotalHealth);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCollectionEngine.ChaosDestructionListener
	 * Size -> 0x02A8 (FullSize[0x0570] - InheritedSize[0x02C8])
	 */
	class UChaosDestructionListener : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_CRF3[0x4];                                   // 0x02C8(0x0004) Fix Super Size
		struct FChaosCollisionEventRequestSettings                 CollisionEventRequestSettings;                           // 0x02CC(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FChaosBreakingEventRequestSettings                  BreakingEventRequestSettings;                            // 0x02E4(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FChaosTrailingEventRequestSettings                  TrailingEventRequestSettings;                            // 0x02FC(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FChaosRemovalEventRequestSettings                   RemovalEventRequestSettings;                             // 0x0314(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_63TG[0x4];                                   // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ChaosSolverActors[0x50];                                 // 0x0328(0x0050) UNKNOWN PROPERTY: SetProperty
		unsigned char                                              GeometryCollectionActors[0x50];                          // 0x0378(0x0050) UNKNOWN PROPERTY: SetProperty
		class FScriptMulticastDelegate                             OnCollisionEvents;                                       // 0x03C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBreakingEvents;                                        // 0x03D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTrailingEvents;                                        // 0x03E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnRemovalEvents;                                         // 0x03F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MOL7[0x168];                                 // 0x0408(0x0168) MISSED OFFSET (PADDING)

	public:
		void SortTrailingEvents(TArray<struct FChaosTrailingEventData>* TrailingEvents, EChaosTrailingSortMethod SortMethod);
		void SortRemovalEvents(TArray<struct FChaosRemovalEventData>* RemovalEvents, EChaosRemovalSortMethod SortMethod);
		void SortCollisionEvents(TArray<struct FChaosCollisionEventData>* CollisionEvents, EChaosCollisionSortMethod SortMethod);
		void SortBreakingEvents(TArray<struct FChaosBreakingEventData>* BreakingEvents, EChaosBreakingSortMethod SortMethod);
		void SetTrailingEventRequestSettings(const struct FChaosTrailingEventRequestSettings& InSettings);
		void SetTrailingEventEnabled(bool bIsEnabled);
		void SetRemovalEventRequestSettings(const struct FChaosRemovalEventRequestSettings& InSettings);
		void SetRemovalEventEnabled(bool bIsEnabled);
		void SetCollisionEventRequestSettings(const struct FChaosCollisionEventRequestSettings& InSettings);
		void SetCollisionEventEnabled(bool bIsEnabled);
		void SetBreakingEventRequestSettings(const struct FChaosBreakingEventRequestSettings& InSettings);
		void SetBreakingEventEnabled(bool bIsEnabled);
		void RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
		void RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
		bool IsEventListening();
		void AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
		void AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCollectionEngine.GeometryCollectionActor
	 * Size -> 0x0010 (FullSize[0x04C8] - InheritedSize[0x04B8])
	 */
	class AGeometryCollectionActor : public AActor
	{
	public:
		class UGeometryCollectionComponent*                        GeometryCollectionComponent;                             // 0x04B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGeometryCollectionDebugDrawComponent*               GeometryCollectionDebugDrawComponent;                    // 0x04C0(0x0008) ExportObject, ZeroConstructor, InstancedReference, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		bool RaycastSingle(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCollectionEngine.GeometryCollectionCache
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UGeometryCollectionCache : public UObject
	{
	public:
		struct FRecordedTransformTrack                             RecordedData;                                            // 0x0028(0x0010) NativeAccessSpecifierPrivate
		class UGeometryCollection*                                 SupportedCollection;                                     // 0x0038(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               CompatibleCollectionState;                               // 0x0040(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCollectionEngine.GeometryCollectionComponent
	 * Size -> 0x0560 (FullSize[0x0C20] - InheritedSize[0x06C0])
	 */
	class UGeometryCollectionComponent : public UMeshComponent
	{
	public:
		unsigned char                                              UnknownData_SWUS[0x8];                                   // 0x06C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AChaosSolverActor*                                   ChaosSolverActor;                                        // 0x06C8(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MZRV[0xE0];                                  // 0x06D0(0x00E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGeometryCollection*                                 RestCollection;                                          // 0x07B0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AFieldSystemActor*>                           InitializationFields;                                    // 0x07B8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                       Simulating;                                              // 0x07C8(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_60ZR[0x1];                                   // 0x07C9(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EObjectStateTypeEnum                                       ObjectType;                                              // 0x07CA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceMotionBlur;                                        // 0x07CB(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableClustering;                                        // 0x07CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_25CN[0x3];                                   // 0x07CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ClusterGroupIndex;                                       // 0x07D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxClusterLevel;                                         // 0x07D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<float>                                              DamageThreshold;                                         // 0x07D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseSizeSpecificDamageThreshold;                         // 0x07E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4G9W[0x3];                                   // 0x07E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGeometryCollectionDamagePropagationData            DamagePropagationData;                                   // 0x07EC(0x000C) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bEnableDamageFromCollision;                              // 0x07F8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowRemovalOnSleep;                                    // 0x07F9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowRemovalOnBreak;                                    // 0x07FA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPrimalForceStartSleepRemoval;                           // 0x07FB(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPreventGameplayVelocitiesAndForces;                     // 0x07FC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LPHY[0x3];                                   // 0x07FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            PrimalForceSleepIndices;                                 // 0x0800(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EClusterConnectionTypeEnum                                 ClusterConnectionType;                                   // 0x0810(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1VR3[0x3];                                   // 0x0811(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CollisionGroup;                                          // 0x0814(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionSampleFraction;                                 // 0x0818(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LinearEtherDrag;                                         // 0x081C(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularEtherDrag;                                        // 0x0820(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CVX5[0x4];                                   // 0x0824(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChaosPhysicalMaterial*                              PhysicalMaterial;                                        // 0x0828(0x0008) ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInitialVelocityTypeEnum                                   InitialVelocityType;                                     // 0x0830(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PF7A[0x7];                                   // 0x0831(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             InitialLinearVelocity;                                   // 0x0838(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InitialAngularVelocity;                                  // 0x0850(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPhysicalMaterial*                                   PhysicalMaterialOverride;                                // 0x0868(0x0008) ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGeomComponentCacheParameters                       CacheParameters;                                         // 0x0870(0x0050) NoDestructor, NativeAccessSpecifierPublic
		TArray<struct FTransform>                                  RestTransforms;                                          // 0x08C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyGeometryCollectionPhysicsStateChange;              // 0x08D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             NotifyGeometryCollectionPhysicsLoadingStateChange;       // 0x08E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X54Z[0x18];                                  // 0x08F0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnChaosBreakEvent;                                       // 0x0908(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnChaosRemovalEvent;                                     // 0x0918(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnChaosCrumblingEvent;                                   // 0x0928(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		float                                                      DesiredCacheTime;                                        // 0x0938(0x0004) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       CachePlayback;                                           // 0x093C(0x0001) Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_02GA[0x3];                                   // 0x093D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnChaosPhysicsCollision;                                 // 0x0940(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bNotifyBreaks;                                           // 0x0950(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNotifyCollisions;                                       // 0x0951(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNotifyTrailing;                                         // 0x0952(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNotifyRemovals;                                         // 0x0953(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bNotifyCrumblings;                                       // 0x0954(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCrumblingEventIncludesChildren;                         // 0x0955(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStoreVelocities;                                        // 0x0956(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowBoneColors;                                         // 0x0957(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUseRootProxyForNavigation;                              // 0x0958(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bUpdateNavigationInTick;                                 // 0x0959(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_M8BU[0x6];                                   // 0x095A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGeometryCollectionISMPoolActor*                     ISMPool;                                                 // 0x0960(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5VXE[0x8];                                   // 0x0968(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bEnableReplication;                                      // 0x0970(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableAbandonAfterLevel;                                // 0x0971(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A1E2[0x2];                                   // 0x0972(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ReplicationAbandonClusterLevel;                          // 0x0974(0x0004) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    ReplicationAbandonAfterLevel;                            // 0x0978(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LILK[0x4];                                   // 0x097C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGeometryCollectionRepData                          RepData;                                                 // 0x0980(0x0028) Net, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HMX8[0x238];                                 // 0x09A8(0x0238) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBodySetup*                                          DummyBodySetup;                                          // 0x0BE0(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_D4MK[0x8];                                   // 0x0BE8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UInstancedStaticMeshComponent*>               EmbeddedGeometryComponents;                              // 0x0BF0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0YD2[0x20];                                  // 0x0C00(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetRestCollection(class UGeometryCollection* RestCollectionIn);
		void SetNotifyRemovals(bool bNewNotifyRemovals);
		void SetNotifyCrumblings(bool bNewNotifyCrumblings, bool bNewCrumblingEventIncludesChildren);
		void SetNotifyBreaks(bool bNewNotifyBreaks);
		void SetEnableDamageFromCollision(bool bValue);
		void SetAnchoredByTransformedBox(const struct FBox& Box, const struct FTransform& Transform, bool bAnchored, int32_t MaxLevel);
		void SetAnchoredByIndex(int32_t Index, bool bAnchored);
		void SetAnchoredByBox(const struct FBox& WorldSpaceBox, bool bAnchored, int32_t MaxLevel);
		void RemoveAllAnchors();
		void ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo);
		void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
		void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
		int32_t GetRootIndex();
		void GetMassAndExtents(int32_t ItemIndex, float* OutMass, struct FBox* OutExtents);
		struct FBox GetLocalBounds();
		int32_t GetInitialLevel(int32_t ItemIndex);
		class FString GetDebugInfo();
		void CrumbleCluster(int32_t ItemIndex);
		void CrumbleActiveClusters();
		int32_t BPGetMaxIndex();
		void ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
		void ApplyLinearVelocity(int32_t ItemIndex, const struct FVector& LinearVelocity);
		void ApplyKinematicField(float Radius, const struct FVector& position);
		void ApplyInternalStrain(int32_t ItemIndex, const struct FVector& Location, float Radius, int32_t PropagationDepth, float PropagationFactor, float Strain);
		void ApplyExternalStrain(int32_t ItemIndex, const struct FVector& Location, float Radius, int32_t PropagationDepth, float PropagationFactor, float Strain);
		void ApplyBreakingLinearVelocity(int32_t ItemIndex, const struct FVector& LinearVelocity);
		void ApplyBreakingAngularVelocity(int32_t ItemIndex, const struct FVector& AngularVelocity);
		void ApplyAngularVelocity(int32_t ItemIndex, const struct FVector& AngularVelocity);
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
	 * Size -> 0x00C0 (FullSize[0x0578] - InheritedSize[0x04B8])
	 */
	class AGeometryCollectionDebugDrawActor : public AActor
	{
	public:
		struct FGeometryCollectionDebugDrawWarningMessage          WarningMessage;                                          // 0x04B8(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GC5W[0x7];                                   // 0x04B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGeometryCollectionDebugDrawActorSelectedRigidBody  SelectedRigidBody;                                       // 0x04C0(0x0018) Deprecated, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bDebugDrawWholeCollection;                               // 0x04D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDebugDrawHierarchy;                                     // 0x04D9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDebugDrawClustering;                                    // 0x04DA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGeometryCollectionDebugDrawActorHideGeometry              HideGeometry;                                            // 0x04DB(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowRigidBodyId;                                        // 0x04DC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowRigidBodyCollision;                                 // 0x04DD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCollisionAtOrigin;                                      // 0x04DE(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowRigidBodyTransform;                                 // 0x04DF(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowRigidBodyInertia;                                   // 0x04E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowRigidBodyVelocity;                                  // 0x04E1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowRigidBodyForce;                                     // 0x04E2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowRigidBodyInfos;                                     // 0x04E3(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowTransformIndex;                                     // 0x04E4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowTransform;                                          // 0x04E5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowParent;                                             // 0x04E6(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowLevel;                                              // 0x04E7(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowConnectivityEdges;                                  // 0x04E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowGeometryIndex;                                      // 0x04E9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowGeometryTransform;                                  // 0x04EA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowBoundingBox;                                        // 0x04EB(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowFaces;                                              // 0x04EC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowFaceIndices;                                        // 0x04ED(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowFaceNormals;                                        // 0x04EE(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowSingleFace;                                         // 0x04EF(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SingleFaceIndex;                                         // 0x04F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowVertices;                                           // 0x04F4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowVertexIndices;                                      // 0x04F5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowVertexNormals;                                      // 0x04F6(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseActiveVisualization;                                 // 0x04F7(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PointThickness;                                          // 0x04F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LineThickness;                                           // 0x04FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTextShadow;                                             // 0x0500(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PAWG[0x3];                                   // 0x0501(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      TextScale;                                               // 0x0504(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NormalScale;                                             // 0x0508(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AxisScale;                                               // 0x050C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArrowScale;                                              // 0x0510(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              RigidBodyIdColor;                                        // 0x0514(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RigidBodyTransformScale;                                 // 0x0518(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              RigidBodyCollisionColor;                                 // 0x051C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              RigidBodyInertiaColor;                                   // 0x0520(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              RigidBodyVelocityColor;                                  // 0x0524(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              RigidBodyForceColor;                                     // 0x0528(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              RigidBodyInfoColor;                                      // 0x052C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              TransformIndexColor;                                     // 0x0530(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TransformScale;                                          // 0x0534(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              LevelColor;                                              // 0x0538(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              ParentColor;                                             // 0x053C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ConnectivityEdgeThickness;                               // 0x0540(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              GeometryIndexColor;                                      // 0x0544(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GeometryTransformScale;                                  // 0x0548(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              BoundingBoxColor;                                        // 0x054C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              FaceColor;                                               // 0x0550(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              FaceIndexColor;                                          // 0x0554(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              FaceNormalColor;                                         // 0x0558(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              SingleFaceColor;                                         // 0x055C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              VertexColor;                                             // 0x0560(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              VertexIndexColor;                                        // 0x0564(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              VertexNormalColor;                                       // 0x0568(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OUL9[0x4];                                   // 0x056C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBillboardComponent*                                 SpriteComponent;                                         // 0x0570(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UGeometryCollectionDebugDrawComponent : public UActorComponent
	{
	public:
		class AGeometryCollectionDebugDrawActor*                   GeometryCollectionDebugDrawActor;                        // 0x00B8(0x0008) ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class AGeometryCollectionRenderLevelSetActor*              GeometryCollectionRenderLevelSetActor;                   // 0x00C0(0x0008) Edit, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WRHD[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCollectionEngine.GeometryCollectionISMPoolActor
	 * Size -> 0x0008 (FullSize[0x04C0] - InheritedSize[0x04B8])
	 */
	class AGeometryCollectionISMPoolActor : public AActor
	{
	public:
		class UGeometryCollectionISMPoolComponent*                 ISMPoolComp;                                             // 0x04B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCollectionEngine.GeometryCollectionISMPoolComponent
	 * Size -> 0x00B8 (FullSize[0x0380] - InheritedSize[0x02C8])
	 */
	class UGeometryCollectionISMPoolComponent : public USceneComponent
	{
	public:
		unsigned char                                              UnknownData_ORXA[0x8];                                   // 0x02C8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_YSHO[0xB0];                                  // 0x02D0(0x00B0) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCollectionEngine.GeometryCollection
	 * Size -> 0x0148 (FullSize[0x0170] - InheritedSize[0x0028])
	 */
	class UGeometryCollection : public UObject
	{
	public:
		unsigned char                                              UnknownData_A041[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       EnableClustering;                                        // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UNSK[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ClusterGroupIndex;                                       // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxClusterLevel;                                         // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BKQ2[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<float>                                              DamageThreshold;                                         // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseSizeSpecificDamageThreshold;                         // 0x0050(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PerClusterOnlyDamageThreshold;                           // 0x0051(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MNTE[0x2];                                   // 0x0052(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGeometryCollectionDamagePropagationData            DamagePropagationData;                                   // 0x0054(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		EClusterConnectionTypeEnum                                 ClusterConnectionType;                                   // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4R7F[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ConnectionGraphBoundsFilteringMargin;                    // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0068(0x0010) Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<struct FGeometryCollectionEmbeddedExemplar>         EmbeddedGeometryExemplar;                                // 0x0078(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bUseFullPrecisionUVs;                                    // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1A0D[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGeometryCollectionAutoInstanceMesh>         AutoInstanceMeshes;                                      // 0x0090(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     RootProxy;                                               // 0x00A0(0x0020) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStripOnCook;                                            // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableNanite;                                            // 0x00C1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMassAsDensity;                                          // 0x00C2(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YDDQ[0x1];                                   // 0x00C3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Mass;                                                    // 0x00C4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumMassClamp;                                        // 0x00C8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bImportCollisionFromSource;                              // 0x00CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRemoveOnMaxSleep;                                       // 0x00CD(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3T27[0x2];                                   // 0x00CE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           MaximumSleepTime;                                        // 0x00D0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           RemovalDuration;                                         // 0x00E0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSlowMovingAsSleeping;                                   // 0x00F0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_525Y[0x3];                                   // 0x00F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SlowMovingVelocityThreshold;                             // 0x00F4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FGeometryCollectionSizeSpecificData>         SizeSpecificData;                                        // 0x00F8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       EnableRemovePiecesOnFracture;                            // 0x0108(0x0001) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XQIT[0x7];                                   // 0x0109(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInterface*>                          RemoveOnFractureMaterials;                               // 0x0110(0x0010) ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPublic
		class UDataflow*                                           DataflowAsset;                                           // 0x0120(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DataflowTerminal;                                        // 0x0128(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGuid                                               PersistentGuid;                                          // 0x0138(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               StateGuid;                                               // 0x0148(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    BoneSelectedMaterialIndex;                               // 0x0158(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XS2C[0x14];                                  // 0x015C(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
	 * Size -> 0x00F8 (FullSize[0x05B0] - InheritedSize[0x04B8])
	 */
	class AGeometryCollectionRenderLevelSetActor : public AActor
	{
	public:
		class UVolumeTexture*                                      TargetVolumeTexture;                                     // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterial*                                           RayMarchMaterial;                                        // 0x04C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SurfaceTolerance;                                        // 0x04C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Isovalue;                                                // 0x04CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Enabled;                                                 // 0x04D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RenderVolumeBoundingBox;                                 // 0x04D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3ZWG[0xDE];                                  // 0x04D2(0x00DE) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
