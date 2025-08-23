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
	 * BlueprintGeneratedClass NinjaLiveComponent.NinjaLiveComponent_C
	 * Size -> 0x0DA8 (FullSize[0x0E60] - InheritedSize[0x00B8])
	 */
	class UNinjaLiveComponent_C : public UNinjaLiveBaseComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       ComponentActivatedByPawnProximity;                       // 0x00C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DisableComponent;                                        // 0x00C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BeginPlaySupressed;                                      // 0x00C2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InitDone;                                                // 0x00C3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MaterialInstacesDone;                                    // 0x00C4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AutoConnectToMemoryPoolIFFound;                          // 0x00C5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MemPoolManagerDetected;                                  // 0x00C6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PoolManagerOverridesLocalSettings;                       // 0x00C7(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ResolutionX;                                             // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ResolutionY;                                             // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              PreferredTraceChannelName;                               // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash
		ETraceTypeQuery                                            TraceChannel;                                            // 0x00E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECollisionChannel                                          CollisionChannel;                                        // 0x00E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TraceChannelsSet;                                        // 0x00E2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESimPrecision_Enum                                         SimPrecision;                                            // 0x00E3(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UsePressureSolver1_DefaultIs2;                           // 0x00E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KUHA[0x3];                                   // 0x00E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PressureSolver1_MaxIterations;                           // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    PressureSolver2_MaxIterations;                           // 0x00EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     PressureSolver2_KernelReduction;                         // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MaxSamplingFPS;                                          // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MinSamplingFPS;                                          // 0x00FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HalfResPressureAndDivergenceBuffers;                     // 0x0100(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowDebugMessagesTraceChannels;                          // 0x0101(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowDebugMessagesMemoryManagement;                       // 0x0102(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowDebugMessagesCollisionAndTracing;                    // 0x0103(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowDebugMessagesLODInitial;                             // 0x0104(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowDebugMessagesLODRuntime;                             // 0x0105(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowDebugMessagesInterfaceControl;                       // 0x0106(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowDebugMessagesRenderTargetExport;                     // 0x0107(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowWarningNumberOfBonesToTrack;                         // 0x0108(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       VisualizeCustomTraceSource;                              // 0x0109(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SaveDebugMessagesToDefaultLog;                           // 0x010A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NYX3[0x5];                                   // 0x010B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     DebugMessagesLifetime;                                   // 0x0110(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                TraceMeshComponent;                                      // 0x0118(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SamplingFPS;                                             // 0x0120(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TIKP[0x4];                                   // 0x0124(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TickRateCustom;                                          // 0x0128(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LOD1ReduceSimQuality;                                    // 0x0130(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LOD2ReduceSamplingFPS;                                   // 0x0131(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WGRF[0x6];                                   // 0x0132(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LODFarBound;                                             // 0x0138(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     LODNearBound;                                            // 0x0140(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LODSteps;                                                // 0x0148(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_18YR[0x4];                                   // 0x014C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LODStepRange;                                            // 0x0150(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<double>                                             LODStepsArray;                                           // 0x0158(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    SimPrecisionIndex;                                       // 0x0168(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4NBJ[0x4];                                   // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MemConsumption;                                          // 0x0170(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    MapLengthTmp;                                            // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EPHR[0x4];                                   // 0x017C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstance*                                   InactiveGrayMaterial;                                    // 0x0180(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ComponentRePlayEvent;                                    // 0x0188(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             ComponentBroadcastMemConsumption;                        // 0x0198(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       PawnInsideActivationBounds;                              // 0x01A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TRGP[0x7];                                   // 0x01A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          LoadedDataTable;                                         // 0x01B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FString                                              LoadedDatatablePath;                                     // 0x01B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TMap<class FString, double>                                PresetMap;                                               // 0x01C8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              ActualPreset;                                            // 0x0218(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UDataTable*                                          DefaultPreset;                                           // 0x0228(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        PresetSearchPaths;                                       // 0x0230(0x0010) Edit, BlueprintVisible
		class FName                                                PresetNameFilterCriteria;                                // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TraceMeshInvisible;                                      // 0x0248(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_SJ95[0x3];                                   // 0x0249(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OutputMaterialSelected;                                  // 0x024C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UMaterialInterface*>                          OutputMaterials;                                         // 0x0250(0x0010) Edit, BlueprintVisible
		bool                                                       ForceAutoLoadPreset;                                     // 0x0260(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X2HL[0x7];                                   // 0x0261(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      RenderTargetsList;                                       // 0x0268(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class FString, class UTextureRenderTarget2D*>         RenderTargetsMap;                                        // 0x0278(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class UMaterialInstanceDynamic*                            MI_Advection;                                            // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MI_Divergence;                                           // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MI_PressureCycle1;                                       // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MI_PressureCycle2;                                       // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     VeloStrength;                                            // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     VeloOffsetX;                                             // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     VeloOffsetY;                                             // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     VeloRotate;                                              // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     VeloAmpNoise;                                            // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     VeloDirNoise;                                            // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Speed;                                                   // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Apply1stOutMatToActorsWithTag;                           // 0x0320(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Apply1stOutMatToComponentsWithTag;                       // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                FeedTaggedActorNiagaraComponent;                         // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Make1stOutputAvailableFor2ndOutput;                      // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Make1stOutputAvailableForNiagara;                        // 0x0339(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MakePressureAvailableForNiagara;                         // 0x033A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1CEL[0x1];                                   // 0x033B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SecondaryOutputMaterialSelected;                         // 0x033C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UMaterialInterface*>                          SecondaryOutputMaterials;                                // 0x0340(0x0010) Edit, BlueprintVisible
		class FName                                                Apply2ndOutMatToActorsWithTag;                           // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Apply2ndOutMatToComponentsWithTag;                       // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TertiaryOutputMaterialSelected;                          // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_EIJM[0x4];                                   // 0x0364(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInterface*>                          TertiaryOutputMaterials;                                 // 0x0368(0x0010) Edit, BlueprintVisible
		class FName                                                Apply3rdOutMatToActorsWithTag;                           // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FName                                                Apply3rdOutMatToComponentsWithTag;                       // 0x0380(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseRenderTargetAsInput;                                  // 0x0388(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R39S[0x7];                                   // 0x0389(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextureRenderTarget*                                InputRenderTarget;                                       // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		bool                                                       RGBInputMaterial;                                        // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InputMaterialClamp;                                      // 0x0399(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VO0W[0x2];                                   // 0x039A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    InputMaterialSelected;                                   // 0x039C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UMaterialInterface*>                          InputMaterials;                                          // 0x03A0(0x0010) Edit, BlueprintVisible
		bool                                                       SimAreaClamp;                                            // 0x03B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowMouseCursor;                                         // 0x03B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ST6Y[0x6];                                   // 0x03B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     Divergence;                                              // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     InputFeedback;                                           // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     FlowFeedback;                                            // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     VeloFromSimAreaMotion;                                   // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     OffsetFromSimAreaMotion;                                 // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     VeloFromBrushMotion;                                     // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     BrushSize;                                               // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash
		double                                                     BrushStrength;                                           // 0x03F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     BrushStrengthTemp1;                                      // 0x03F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EraserMode;                                              // 0x0400(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R30V[0x7];                                   // 0x0401(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     BrushHardness;                                           // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              ParticleTemplate;                                        // 0x0410(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              DensityTemplate;                                         // 0x0420(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              VelocityTemplate;                                        // 0x0430(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              MetaData;                                                // 0x0440(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		double                                                     BrushPuncture;                                           // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MI_CollisionPainterDot;                                  // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MI_CollisionPainterLine;                                 // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MI_CollisionPainterOffset;                               // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MI_CompositeAndGradient;                                 // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MI_Output;                                               // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MI_SecondaryOutput;                                      // 0x0480(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MI_TertiaryOutput;                                       // 0x0488(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MI_Null;                                                 // 0x0490(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  NullMaterial;                                            // 0x0498(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FName                                                NullName;                                                // 0x04A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FString                                              NullString;                                              // 0x04A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class UTexture2D*                                          VelocityInput;                                           // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          DensityInput;                                            // 0x04C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       FlipRenderTargetsForMobile;                              // 0x04C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SelfServiceIFPoolEmpty;                                  // 0x04C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QOB0[0x6];                                   // 0x04CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBoxComponent*                                       ActivationVolume;                                        // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       AutonomousMode;                                          // 0x04D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AbsPathForVelocityTemplate;                              // 0x04D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AbsPathForDensityTemplate;                               // 0x04DA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RWT5[0x5];                                   // 0x04DB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<int32_t, class UPrimitiveComponent*>                  SkeletalMeshTempArrayPairs;                              // 0x04E0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UPrimitiveComponent*>                         OverlappingComponents;                                   // 0x0530(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class USkeletalMeshComponent*>                      ContinuousInteractionSkeletalComponent;                  // 0x0540(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<bool>                                               ListOfAvailableTempArrays;                               // 0x0550(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UPrimitiveComponent*                                 OverlappingSkeletalMesh;                                 // 0x0560(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class FName                                                OverlappingBone;                                         // 0x0568(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Position1_3D;                                            // 0x0570(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LastPosition1_3D;                                        // 0x0588(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TraceMeshSizeCoeff;                                      // 0x05A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     OverlappingMeshSizeCoeff;                                // 0x05A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPrimitiveComponent*                                 OverlappingComponent;                                    // 0x05B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TouchLookupIndex;                                        // 0x05B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_W0IF[0x4];                                   // 0x05BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLinearColor>                                LastPosition3_2D;                                        // 0x05C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FLinearColor                                        LastPosition2_2D;                                        // 0x05D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MousePass;                                               // 0x05E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OSG9[0x3];                                   // 0x05E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Position2_2D;                                            // 0x05E4(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9A9W[0x4];                                   // 0x05F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FLinearColor>                                Position3_2D;                                            // 0x05F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    PosDataType;                                             // 0x0608(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowVelocityDebugCone;                                   // 0x060C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IgnoreInterfaceCommands;                                 // 0x060D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DisableAndNotTickBlock;                                  // 0x060E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7HRP[0x1];                                   // 0x060F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     InputFeedbackInterface;                                  // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     BrushStrengthTemp2;                                      // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TickBlocker;                                             // 0x0620(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5LDQ[0x3];                                   // 0x0621(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    FluidSolver1Iterations;                                  // 0x0624(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      NinjaLIVETraceExclude;                                   // 0x0628(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		double                                                     DeltaSeconds;                                            // 0x0638(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseUnrealNativeEventTick;                                // 0x0640(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SingleInput;                                             // 0x0641(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Touch;                                                   // 0x0642(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1XIB[0x5];                                   // 0x0643(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LODCheckFrequency;                                       // 0x0648(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PauseSimWhenNotVisible;                                  // 0x0650(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Z34W[0x7];                                   // 0x0651(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     WaitBeforePause;                                         // 0x0658(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MousePressed;                                            // 0x0660(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ContinuousInteractionWithOwnerActor;                     // 0x0661(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q2GJ[0x2];                                   // 0x0662(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        Position1_2D;                                            // 0x0664(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_24ND[0x4];                                   // 0x0674(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TimeSinceLastClick;                                      // 0x0678(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Position1_3D_Static;                                     // 0x0680(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XOYP[0x7];                                   // 0x0681(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TimeSinceLastCollision;                                  // 0x0688(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TimeCounter;                                             // 0x0690(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Overlap1;                                                // 0x0698(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4NIX[0x7];                                   // 0x0699(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ComponentShutdownEvent;                                  // 0x06A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<EObjectTypeQuery>                                   ContinuousInteractionInclusiveObjType;                   // 0x06B0(0x0010) Edit, BlueprintVisible
		TArray<class FName>                                        ContinuousInteractionComponentNamesExact;                // 0x06C0(0x0010) Edit, BlueprintVisible
		TArray<class FName>                                        ContinuousInteractionBoneNamesExact;                     // 0x06D0(0x0010) Edit, BlueprintVisible
		TArray<class FName>                                        ContinuousInteractionBoneNamesExactTemp;                 // 0x06E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       SingleTargetMode;                                        // 0x06F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESingleObjectType_Enum                                     SingleTargetType;                                        // 0x06F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7BSN[0x2];                                   // 0x06F2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SingleTargetModeSkeletalMeshIndex;                       // 0x06F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SingleTargetMoveSetSimSpeed;                             // 0x06F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q25Q[0x7];                                   // 0x06F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     SpeedInfluenceFactor;                                    // 0x0700(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     ClampMaxVelocity;                                        // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CameraFacingTraceMesh;                                   // 0x0710(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       OverlapBasedInteraction;                                 // 0x0711(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EUserInput_Enum                                            UserInputBasedInteraction;                               // 0x0712(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BrushScaledInverselyByTraceMeshSize;                     // 0x0713(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BrushScaledByInteractingObjSize;                         // 0x0714(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseObjBoundsInsteadOfSize;                               // 0x0715(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_S7LY[0x2];                                   // 0x0716(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     GlobalBrushScale;                                        // 0x0718(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     UserInputBrushScale;                                     // 0x0720(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     PrimitiveObjBrushScale;                                  // 0x0728(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SkeletalMeshBrushScale;                                  // 0x0730(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       CameraFacing_LockYAxis;                                  // 0x0738(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseLegacyCameraFacing;                                   // 0x0739(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YY8B[0x2];                                   // 0x073A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    TraceMeshTranslucentSortPrio;                            // 0x073C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TraceMeshQueryCounter;                                   // 0x0740(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_O91T[0x4];                                   // 0x0744(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     LimitUnrealNativeEventTick;                              // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       GlobalVeloTempCondition;                                 // 0x0750(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BMDS[0x7];                                   // 0x0751(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TracePositionTemp;                                       // 0x0758(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LastTracePositionTemp;                                   // 0x0770(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SimEdgeBouncyness;                                       // 0x0788(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     FadeDensityAtSimEdge;                                    // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     EdgeMaskWidth;                                           // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     VeloDirNoiseSize;                                        // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     VeloDirNoiseSpeed;                                       // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UseInputMaterials;                                       // 0x07B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GLGR[0x7];                                   // 0x07B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     DensityTxtScale;                                         // 0x07B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DensityTxtOffsetX;                                       // 0x07C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DensityTxtOffsetY;                                       // 0x07C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     BrushNoise;                                              // 0x07D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       BrushNoiseInWorldSpace;                                  // 0x07D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_65LO[0x7];                                   // 0x07D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     BrushDensityNoiseScale;                                  // 0x07E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     BrushDensityNoiseFreq;                                   // 0x07E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     BrushVelocityNoiseScale;                                 // 0x07F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     BrushVelocityNoiseFreq;                                  // 0x07F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            TraceMeshInitialRotation;                                // 0x0800(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       EnableRayMarching;                                       // 0x0818(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BYRD[0x7];                                   // 0x0819(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              LightDirectionProvider;                                  // 0x0820(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash
		bool                                                       LightDirectionSourceIsRotation_NOT_Pos;                  // 0x0828(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DistanceBasedLightAttenuation;                           // 0x0829(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OB0W[0x6];                                   // 0x082A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     AttenuationPower;                                        // 0x0830(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     PointLightMovementMultiplier;                            // 0x0838(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TwoSidedShading;                                         // 0x0840(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_J9ZT[0x7];                                   // 0x0841(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     TwoSideBlendPow;                                         // 0x0848(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Facing;                                                  // 0x0850(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             OffsetLightVector;                                       // 0x0858(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ForceManualSunPosition;                                  // 0x0870(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1QCR[0x7];                                   // 0x0871(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     SunLatitude;                                             // 0x0878(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SunLongitude;                                            // 0x0880(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SunHeight;                                               // 0x0888(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowLightDirectionVector_Yellow;                         // 0x0890(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowNiagaraSysUpvector_Red;                              // 0x0891(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ShowFacingPlane;                                         // 0x0892(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PrintFacing;                                             // 0x0893(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AGDN[0x4];                                   // 0x0894(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     VeloInputTile;                                           // 0x0898(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     VeloInputOffsetSpeed;                                    // 0x08A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DensityTxtMult;                                          // 0x08A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DensityInputNoiseAmp;                                    // 0x08B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DensityInputNoiseOffset;                                 // 0x08B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     DensityInputNoiseTile;                                   // 0x08C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialParameterCollection*                        SetInternalParamsToMaterialParamCollection;              // 0x08C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		bool                                                       DrawInternalRenderTargetToExternal;                      // 0x08D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_33IM[0x7];                                   // 0x08D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ERenderTargetList>                                  InternalRenderTargetsToExport;                           // 0x08D8(0x0010) Edit, BlueprintVisible
		TArray<class UTextureRenderTarget2D*>                      ExternalRenderTargets;                                   // 0x08E8(0x0010) Edit, BlueprintVisible
		class UTexture*                                            CollisionMask;                                           // 0x08F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		bool                                                       CollisionMaskIsNonDefault;                               // 0x0900(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PJV9[0x7];                                   // 0x0901(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ASceneCapture2D*                                     InputSceneCaptureCamera;                                 // 0x0908(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash
		class UMediaPlayer*                                        InputMediaPlayer;                                        // 0x0910(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UMediaTexture*                                       MediaTexture;                                            // 0x0918(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UFileMediaSource*                                    InputMediaSource;                                        // 0x0920(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     InputMediaLoopLength;                                    // 0x0928(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RandomizeNoiseOffsets;                                   // 0x0930(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LV4L[0x3];                                   // 0x0931(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    OverlapCounter;                                          // 0x0934(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       RandomizeDensityTextureOffset;                           // 0x0938(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NZNM[0x7];                                   // 0x0939(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture2D*                                          OverwritePresetDensityInput;                             // 0x0940(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          OverwritePresetVelocityInput;                            // 0x0948(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		double                                                     BrushRnd;                                                // 0x0950(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SimSpeedAdjustmentLatency;                               // 0x0958(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SpeedTemp;                                               // 0x0960(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       StopUsingPainterCanvasWhenIdle;                          // 0x0968(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_14L5[0x3];                                   // 0x0969(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Experimental_PSolver2KernelIndexOffset;                  // 0x096C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Experimental_PressureFeedback;                           // 0x0970(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       TraceMeshIsAlsoInteractionVolume;                        // 0x0978(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KPRG[0x7];                                   // 0x0979(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        TempArray0;                                              // 0x0980(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray1;                                              // 0x0990(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray2;                                              // 0x09A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray3;                                              // 0x09B0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray4;                                              // 0x09C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray5;                                              // 0x09D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray6;                                              // 0x09E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray7;                                              // 0x09F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray8;                                              // 0x0A00(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray9;                                              // 0x0A10(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray10;                                             // 0x0A20(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray11;                                             // 0x0A30(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray12;                                             // 0x0A40(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray13;                                             // 0x0A50(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray14;                                             // 0x0A60(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray15;                                             // 0x0A70(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray16;                                             // 0x0A80(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray17;                                             // 0x0A90(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray18;                                             // 0x0AA0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray19;                                             // 0x0AB0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray20;                                             // 0x0AC0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       UseCustomTraceSource;                                    // 0x0AD0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MPPZ[0x7];                                   // 0x0AD1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CustomTraceSourcePosition;                               // 0x0AD8(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FName>                                        TempArray21;                                             // 0x0AF0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray22;                                             // 0x0B00(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray23;                                             // 0x0B10(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray24;                                             // 0x0B20(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray25;                                             // 0x0B30(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray26;                                             // 0x0B40(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray27;                                             // 0x0B50(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray28;                                             // 0x0B60(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray29;                                             // 0x0B70(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray30;                                             // 0x0B80(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray31;                                             // 0x0B90(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray32;                                             // 0x0BA0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray33;                                             // 0x0BB0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray34;                                             // 0x0BC0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray35;                                             // 0x0BD0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray36;                                             // 0x0BE0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray37;                                             // 0x0BF0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray38;                                             // 0x0C00(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class FName>                                        TempArray39;                                             // 0x0C10(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		double                                                     DampenBrushBelowThisVelocity;                            // 0x0C20(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       DampenIgnoresStaticMeshes;                               // 0x0C28(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QJWQ[0x7];                                   // 0x0C29(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     DampenBrushFactor;                                       // 0x0C30(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     BrushVelocityPow;                                        // 0x0C38(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     SimAreaMotionEffectsBrushPuncture;                       // 0x0C40(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    LODLevel;                                                // 0x0C48(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       AllowAbsoluteBlackDensity;                               // 0x0C4C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_B4BW[0x3];                                   // 0x0C4D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TraceMeshPos;                                            // 0x0C50(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             TraceMeshLastPos;                                        // 0x0C68(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     PressureEdgeMasking;                                     // 0x0C80(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UMaterialInterface*>                          CoreSimMaterials;                                        // 0x0C88(0x0010) Edit, BlueprintVisible
		struct FVector                                             TraceMeshDeltaPos;                                       // 0x0C98(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             NullVector;                                              // 0x0CB0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InteractionVolumeIsPresent;                              // 0x0CC8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QBHS[0x7];                                   // 0x0CC9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TraceMeshPosInitialLocal;                                // 0x0CD0(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             TraceMeshPosInitialFractionalPart;                       // 0x0CE8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             TraceMeshPosInitialWorld;                                // 0x0D00(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    QuantizerStepSize;                                       // 0x0D18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_E8YV[0x4];                                   // 0x0D1C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             TraceMeshParentPos;                                      // 0x0D20(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             TraceMeshParentLastPos;                                  // 0x0D38(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EQuantizerMode                                             TraceMeshMovingInWorldSpace;                             // 0x0D50(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EQuantizerAxisIgnore                                       MovementNotQuantizedToStepsOnAxis;                       // 0x0D51(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SecondaryMaterialsPresent;                               // 0x0D52(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EQuantizerAxisIgnore                                       MovementIsLockedOnThisAxis;                              // 0x0D53(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ForceTraceMeshToCustomVerticalPos;                       // 0x0D54(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_983J[0x3];                                   // 0x0D55(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     ForceTraceMeshVerticalPosition;                          // 0x0D58(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EnablePaintBufferOffsetInWorldSpace;                     // 0x0D60(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SimplePainterMode;                                       // 0x0D61(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TYGW[0x6];                                   // 0x0D62(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBoxComponent*                                       InteractionVolume;                                       // 0x0D68(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       NiagaraSystemsPresent;                                   // 0x0D70(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5S8R[0x7];                                   // 0x0D71(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UNiagaraComponent*>                           NiagaraSystemsToDrive;                                   // 0x0D78(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		double                                                     Exp_PressureFeedbackComponent;                           // 0x0D88(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     Exp_DivergenceFeedbackComponent;                         // 0x0D90(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Force8bitSimplePainterBuffers;                           // 0x0D98(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Force8bitOutputBuffer;                                   // 0x0D99(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TGTQ[0x6];                                   // 0x0D9A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPrimitiveComponent*                                 SingleTarget;                                            // 0x0DA0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       UE5EAFLAG;                                               // 0x0DA8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Force2xResolutionOutputBuffer;                           // 0x0DA9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ForceMaxSamplingFPSToNiagara;                            // 0x0DAA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       MaterialCollectionPresent;                               // 0x0DAB(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Q4U9[0x4];                                   // 0x0DAC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             WorldSpaceOffset;                                        // 0x0DB0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       TertiaryMaterialsPresent;                                // 0x0DC0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SupressUE51TextureSmearing;                              // 0x0DC1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CMA1[0x6];                                   // 0x0DC2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ANinjaLive_MemoryPoolManager_C*                      MemoryPoolManager;                                       // 0x0DC8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       ASA_Use_Compute_Draw;                                    // 0x0DD0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       UsePrimalFluidInteractionStruct;                         // 0x0DD1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       EnablePrimalTick;                                        // 0x0DD2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HadInteractionsLastFrame;                                // 0x0DD3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_QA60[0x4];                                   // 0x0DD4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextureRenderTarget2D*                              RT_foam_advected;                                        // 0x0DD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MID_advect_texture;                                      // 0x0DE0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MID_RT_copy;                                             // 0x0DE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UTexture*                                            T_init_color_to_advect;                                  // 0x0DF0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MID_foam_generate;                                       // 0x0DF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UTextureRenderTarget2D*                              RT_foam;                                                 // 0x0E00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       Enable_Foam_Advect;                                      // 0x0E08(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_71FK[0x7];                                   // 0x0E09(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              VisualizeRTnameonMIC_RT_vizualize;                       // 0x0E10(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		TArray<struct FVector>                                     ASA_Positions;                                           // 0x0E20(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FVector>                                     ASA_Last_Positions;                                      // 0x0E30(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UTextureRenderTarget2D*                              RT_FI_sources;                                           // 0x0E40(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            MID_FI_sources_inject;                                   // 0x0E48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class APrimalFoliageSolver*                                PrimalFoliageActor;                                      // 0x0E50(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     ASA_Max_Distance_Per_Second;                             // 0x0E58(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ASA_Compute_SplatDispatch(class UTextureRenderTarget2D* RenderTarget, class UMaterialInterface* Material);
		void ASA_set_visualizer_mat_RT(class UMaterialInstanceDynamic* Mid);
		void ASA_advect_foam_init_RTs();
		void ASA_advect_foam_init_MIDs();
		void ASA_advect_foam_step(TMap<class FString, class UTextureRenderTarget2D*> RT_map);
		void PrimalOnTick();
		void GetActualResolutionY(int32_t* ResX);
		void GetActualResolutionX(int32_t* ResX);
		void ASA_ClearRenderTarget(const class FString& TargetName);
		void ASA_TraceToSimUV(const struct FVector& TraceWorldPosition, struct FLinearColor* HitUV);
		void ASA_Compute_Draw(class UTextureRenderTarget2D* RenderTarget, class UMaterialInterface* Material);
		void ReceiveBeginPlay();
		void Shutdown();
		void LiveFluidParams(double BrushSize);
		void BPOnComponentCreated();
		void SelChanged(const class FString& SelectedMenuItem, const class FString& SelectedActorName);
		void PresetSelectionChanged(const class FString& SelectedPreset, bool ForceAutoLoadPreset);
		void PresetSave(const class FString& SelectedProject, const class FString& SelectedPreset, bool OverWriteOrNot);
		void LiveActivation(const class FName& ParamName, double FadeTimeOfBrush, double FadeTimeOfCanvas);
		void Replay();
		void ReceiveTick(float DeltaSeconds);
		void ComponentRePlayEvent2();
		void ExecuteUbergraph_NinjaLiveComponent(int32_t EntryPoint);
		void WorldSpaceOffset__DelegateSignature(const struct FVector& TraceMeshPos);
		void ComponentShutdownEvent__DelegateSignature();
		void ComponentBroadcastMemConsumption__DelegateSignature(class UObject* Consumer, double MemConsumption, bool TakenOrReturned);
		void ComponentRePlayEvent__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
