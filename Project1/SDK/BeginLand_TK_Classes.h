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
	 * BlueprintGeneratedClass BeginLand_TK.BeginLand_TK_C
	 * Size -> 0x0058 (FullSize[0x0100] - InheritedSize[0x00A8])
	 */
	class UBeginLand_TK_C : public UBTTask_BlueprintBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00A8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FBlackboardKeySelector                              OnLandKey;                                               // 0x00B0(0x0028) Edit, BlueprintVisible
		struct FBlackboardKeySelector                              NavigationPointKey;                                      // 0x00D8(0x0028) Edit, BlueprintVisible

	public:
		void ReceiveExecute(class AActor* OwnerActor);
		void ExecuteUbergraph_BeginLand_TK(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
