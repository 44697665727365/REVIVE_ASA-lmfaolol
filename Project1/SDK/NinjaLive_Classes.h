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
	 * BlueprintGeneratedClass NinjaLive.NinjaLive_C
	 * Size -> 0x02D0 (FullSize[0x0788] - InheritedSize[0x04B8])
	 */
	class ANinjaLive_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UNinjaLiveComponent_C*                               NinjaLiveComponent;                                      // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       InteractionVolume;                                       // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       ActivationVolume;                                        // 0x04D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UMaterialBillboardComponent*                         EditorIcon;                                              // 0x04D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                TraceMesh;                                               // 0x04E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Root;                                                    // 0x04E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UTextureRenderTarget2D*                              RT_DensityPreview;                                       // 0x04F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialInstance*                                   InactiveGrayMaterial;                                    // 0x04F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       DisableBlueprint;                                        // 0x0500(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R9QJ[0x7];                                   // 0x0501(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TimeCounterForBrush;                                     // 0x0508(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DeltaSeconds;                                            // 0x0510(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MousePressed;                                            // 0x0518(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowTraceMeshInEditor;                                   // 0x0519(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ODT4[0x6];                                   // 0x051A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TraceMeshSize;                                           // 0x0520(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		EUserInput_Enum                                            UserInputBasedInteraction;                               // 0x0538(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OverlapBasedInteraction;                                 // 0x0539(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5LY3[0x6];                                   // 0x053A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ANinjaLive_C*>                                NinjaLIVECollisionExclude;                               // 0x0540(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		double                                                     Time;                                                    // 0x0550(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SimActivatedByPawnProximity;                             // 0x0558(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowActivationVolumeInEditor;                            // 0x0559(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HBH1[0x6];                                   // 0x055A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ActivationVolumeSize;                                    // 0x0560(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		double                                                     ActivatorProximityCheckFrequency;                        // 0x0578(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionChannel                                          ActivatorType;                                           // 0x0580(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DB5X[0x7];                                   // 0x0581(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Activator;                                               // 0x0588(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash
		bool                                                       PawnInsideActivationBounds;                              // 0x0590(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InitDone;                                                // 0x0591(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BeginPlaySupressed;                                      // 0x0592(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseTraceMeshAsInteractionVolume;                         // 0x0593(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowInteractionVolumeInEditor;                           // 0x0594(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_T4W3[0x3];                                   // 0x0595(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             InteractionVolumeSize;                                   // 0x0598(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<bool>                                               MultipleTouchLookup;                                     // 0x05B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     TickRateCustom;                                          // 0x05C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPrimitiveComponent*                                 InteractionVolumeTemplate;                               // 0x05C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class FName                                                TrackActorPrimitiveComponentsWithTag;                    // 0x05D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                TrackActorSkeletalMeshComponentsWithTag;                 // 0x05D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<EObjectTypeQuery>                                   OverlapFilterInclusiveObjType;                           // 0x05E0(0x0010) Edit, BlueprintVisible
		TArray<class FName>                                        OverlapFilterInclusiveBoneNameExact;                     // 0x05F0(0x0010) Edit, BlueprintVisible
		TArray<class FString>                                      OverlapFilterInclusiveBoneNamePartial;                   // 0x0600(0x0010) Edit, BlueprintVisible
		TArray<class AActor*>                                      ExcludeSpecificActorsFromOverlap;                        // 0x0610(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate
		bool                                                       AutoExcludeLargeOverlappingObjects;                      // 0x0620(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EYLN[0x7];                                   // 0x0621(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<ECollisionChannel, EObjectTypeQuery>                  OverlapFilterInclusiveCollisionType;                     // 0x0628(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		EInactiveBehaviour_Enum                                    TraceMeshInactiveBehaviour;                              // 0x0678(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ActivationEventsDebugPrint;                              // 0x0679(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SimContainerCapacityWarning;                             // 0x067A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SaveDebugTextToLog;                                      // 0x067B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RMU0[0x4];                                   // 0x067C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     DebugTextLifeTimeLength;                                 // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPrimitiveComponent*                                 OverlappingSkeletalMesh;                                 // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		double                                                     BrushStrengthTemp2;                                      // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     InputFeedbackTemp1;                                      // 0x0698(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DisableAndNotTickBlock;                                  // 0x06A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_T1S2[0x7];                                   // 0x06A1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPrimitiveComponent*>                         OverlappingComponents;                                   // 0x06A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class AActor*>                                      OverlappingActors;                                       // 0x06B8(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		TMap<int32_t, class UPrimitiveComponent*>                  SkeletalMeshTempArrayPairs;                              // 0x06C8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class AActor*>                                      OverlappingActorsInitial;                                // 0x0718(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class FScriptMulticastDelegate                             OwnerRePlayEvent;                                        // 0x0728(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       OverrideComponentVariables;                              // 0x0738(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AutoConnectToMemoryPoolIFFound;                          // 0x0739(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7SOM[0x2];                                   // 0x073A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OutputFilterMaterialIndex;                               // 0x073C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowLODdebugMessagesOnScreen;                            // 0x0740(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_37AG[0x7];                                   // 0x0741(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     GlobalBrushScale;                                        // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LOD1ReduceIterations;                                    // 0x0750(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LOD2ReduceSamplingFPS;                                   // 0x0751(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LOD3ReduceCollisionAmount;                               // 0x0752(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YMBE[0x1];                                   // 0x0753(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MinSamplingFPS;                                          // 0x0754(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LODFarBound;                                             // 0x0758(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LODNearBound;                                            // 0x0760(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DownscaleCollisionPainterResolution;                     // 0x0768(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    DownscalePressureResolution;                             // 0x076C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SingleTargetMode;                                        // 0x0770(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InitialActorsProcessed;                                  // 0x0771(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SKMeshTagged;                                            // 0x0772(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4XIU[0x5];                                   // 0x0773(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        OverlapFilterInclusiveBoneNameExactTemp;                 // 0x0778(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		bool BPAllowActorSpawn(class UWorld* ForWorld, const struct FVector& AtLocation, const struct FRotator& AtRotation, class AActor* ForOwner, class APawn* ForInstigator);
		void ResetTempArrays();
		void UserConstructionScript();
		void Replay();
		void LiveActivation(const class FName& ParamName, double FadeTimeOfBrush, double FadeTimeOfCanvas);
		void LiveFluidParams(double BrushSize);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void BeginOverlapComponent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void EndOverlapComponent(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void ReceiveActorEndOverlap(class AActor* OtherActor);
		void ReceiveActorBeginOverlap(class AActor* OtherActor);
		void ExecuteUbergraph_NinjaLive(int32_t EntryPoint);
		void OwnerRePlayEvent__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
