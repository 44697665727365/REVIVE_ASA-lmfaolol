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
	 * BlueprintGeneratedClass Buff_DinoPackLeader.Buff_DinoPackLeader_C
	 * Size -> 0x0028 (FullSize[0x0B78] - InheritedSize[0x0B50])
	 */
	class ABuff_DinoPackLeader_C : public APrimalBuff
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0B50(0x0008) ZeroConstructor, Transient, DuplicateTransient
		bool                                                       bDebug;                                                  // 0x0B58(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VU4I[0x3];                                   // 0x0B59(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        packDebugColor;                                          // 0x0B5C(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_J8FY[0x4];                                   // 0x0B6C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ADino_Character_BP_Pack_C*                           OwningPackDino;                                          // 0x0B70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void BuffTickServer(float DeltaTime);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveBeginPlay();
		void ExecuteUbergraph_Buff_DinoPackLeader(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
