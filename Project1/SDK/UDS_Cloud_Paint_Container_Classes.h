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
	 * BlueprintGeneratedClass UDS_Cloud_Paint_Container.UDS_Cloud_Paint_Container_C
	 * Size -> 0x00C0 (FullSize[0x0578] - InheritedSize[0x04B8])
	 */
	class AUDS_Cloud_Paint_Container_C : public AActor
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04B8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBillboardComponent*                                 Billboard;                                               // 0x04C0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneCaptureComponent2D*                            SceneCaptureComponent2D;                                 // 0x04C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		TMap<struct FIntPoint, class UUDS_Cloud_Paint_Cell_C*>     CloudPaintingCellData;                                   // 0x04D0(0x0050) Edit, BlueprintVisible
		int32_t                                                    CloudPaintingCellSize;                                   // 0x0520(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    CloudPaintingCellResolution;                             // 0x0524(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<struct FIntPoint, class UTextureRenderTarget2D*>      CellRenderTargets;                                       // 0x0528(0x0050) Edit, BlueprintVisible

	public:
		void ReceiveBeginPlay();
		void ReceiveEndPlay(EEndPlayReason EndPlayReason);
		void ExecuteUbergraph_UDS_Cloud_Paint_Container(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
