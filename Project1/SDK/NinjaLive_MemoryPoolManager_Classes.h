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
	 * BlueprintGeneratedClass NinjaLive_MemoryPoolManager.NinjaLive_MemoryPoolManager_C
	 * Size -> 0x009A (FullSize[0x0552] - InheritedSize[0x04B8])
	 */
	class ANinjaLive_MemoryPoolManager_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UMaterialBillboardComponent*                         EditorIcon;                                              // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     Root;                                                    // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       DisableMemoryManager;                                    // 0x04D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WEPO[0x3];                                   // 0x04D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    AmountOfRenderTargetSetsToGenerate;                      // 0x04D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESimPrecision_Enum                                         Precision;                                               // 0x04D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7Y8R[0x3];                                   // 0x04D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    PrecisionIndex;                                          // 0x04DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ResolutionX;                                             // 0x04E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ResolutionY;                                             // 0x04E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FRenderTargetListItem>                       RRenderTargetsList;                                      // 0x04E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FRenderTargetListItem>                       RGRenderTargetsList;                                     // 0x04F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FRenderTargetListItem>                       RGBARenderTargetsList;                                   // 0x0508(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       MMInitFinished;                                          // 0x0518(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PrintInitDebugMessages;                                  // 0x0519(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PrintRuntimeDebugMsg;                                    // 0x051A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PrintRuntimeDebugMsgVerbose;                             // 0x051B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZYVE[0x4];                                   // 0x051C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     DebugTextLifetime;                                       // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    ExtraRenderTargetsForDensityInput;                       // 0x0528(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R6MU[0x4];                                   // 0x052C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     MemConsumptionTotal;                                     // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SaveDebugTextToDefaultLog;                               // 0x0538(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ZSJC[0x7];                                   // 0x0539(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MemAvailableMax;                                         // 0x0540(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       HalfResPressureAndDivergenceBuffers;                     // 0x0550(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       SimAreaClamp;                                            // 0x0551(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void MemCount(int32_t NumberOfChannels, int32_t ResolutionX, int32_t ResolutionY);
		void SetRenderTargetAttribs(class UTextureRenderTarget2D* InputPin, bool Clamping, class UTextureRenderTarget2D** RT);
		void UserConstructionScript();
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void PrintMemStatus(class UObject* Consumer, double MemConsumption, bool TakenOrReturned);
		void ExecuteUbergraph_NinjaLive_MemoryPoolManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
