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
	 * BlueprintGeneratedClass SEQ_Island.SEQ_Island-CLEANNEWER_DirectorBP_C
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class USEQ_IslandCLEANNEWER_DirectorBP_C : public ULevelSequenceDirector
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0038(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void SequenceEvent__ENTRYPOINTSEQ_Island_DirectorBP_1(class AASA_Global_PostProcess_Blueprint_C* ASA_Global_PostProcess_Blueprint);
		void SequenceEvent__ENTRYPOINTSEQ_Island_DirectorBP(class AUDS_Island_C* UDS_Island);
		void UDS_Island_Event(class AUDS_Island_C* UDS_Island);
		void ASA_Global_PostProcess_Blueprint_Event(class AASA_Global_PostProcess_Blueprint_C* ASA_Global_PostProcess_Blueprint);
		void OnCreated();
		void ExecuteUbergraph_SEQ_Island_DirectorBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
