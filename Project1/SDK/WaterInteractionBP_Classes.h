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
	 * BlueprintGeneratedClass WaterInteractionBP.WaterInteractionBP_C
	 * Size -> 0x0048 (FullSize[0x07D0] - InheritedSize[0x0788])
	 */
	class AWaterInteractionBP_C : public ANinjaLive_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0788(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AActor*                                              WaterPlane;                                              // 0x0790(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash
		bool                                                       HasEverRidden;                                           // 0x0798(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0EH9[0x7];                                   // 0x0799(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTextureRenderTarget*                                GDF_RT;                                                  // 0x07A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UMaterialInterface*                                  GDF_Material;                                            // 0x07A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    GDF_RT_Size;                                             // 0x07B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_64Z6[0x4];                                   // 0x07B4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ASA_TraceMesh_Size;                                      // 0x07B8(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void CheckHalfSize();
		void CheckDisable();
		void StagePrint(const class FString& Note, const class FString& Name);
		void ReceiveBeginPlay();
		void ReceiveTick(float DeltaSeconds);
		void GDF_RT_Update();
		void GDF_RT_Init();
		void LiveActivation(const class FName& ParamName, double FadeTimeOfBrush, double FadeTimeOfCanvas);
		void LiveFluidParams(double BrushSize);
		void ExecuteUbergraph_WaterInteractionBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
