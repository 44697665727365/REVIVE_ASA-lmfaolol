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
	 * BlueprintGeneratedClass Sequence_DoorOpen.Sequence_DoorOpen_DirectorBP_C
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class USequence_DoorOpen_DirectorBP_C : public ULevelSequenceDirector
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0038(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void SequenceEvent__ENTRYPOINTSequence_DoorOpen_DirectorBP_1();
		void SequenceEvent__ENTRYPOINTSequence_DoorOpen_DirectorBP();
		void MatineeEvent();
		void MatineeEvent_1();
		void ExecuteUbergraph_Sequence_DoorOpen_DirectorBP(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
