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
	 * BlueprintGeneratedClass Buff_ForceFlee_Base.Buff_ForceFlee_Base_C
	 * Size -> 0x002F (FullSize[0x0B88] - InheritedSize[0x0B59])
	 */
	class ABuff_ForceFlee_Base_C : public ABuff_Base_C
	{
	public:
		unsigned char                                              UnknownData_KW1G[0x7];                                   // 0x0B59(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              RunAwayFrom;                                             // 0x0B60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       UnsetPassiveFlee;                                        // 0x0B68(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0DR5[0x7];                                   // 0x0B69(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    OldFollowTarget;                                         // 0x0B70(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    OldTamedAgressionLevel;                                  // 0x0B78(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IHS5[0x4];                                   // 0x0B7C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              OldWanderAroundActor;                                    // 0x0B80(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void ReEnterFleeState();
		void RestoreFleeState();
		void SetFleeState();
		void BPDeactivated(class AActor* ForInstigator);
		void BPActivated(class AActor* ForInstigator);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
