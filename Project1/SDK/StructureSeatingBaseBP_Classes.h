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
	 * BlueprintGeneratedClass StructureSeatingBaseBP.StructureSeatingBaseBP_C
	 * Size -> 0x0011 (FullSize[0x1589] - InheritedSize[0x1578])
	 */
	class AStructureSeatingBaseBP_C : public APrimalStructureSeating
	{
	public:
		class UChildActorComponent*                                TargetingEmitter;                                        // 0x1578(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    StasisComponent;                                         // 0x1580(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		bool                                                       bAllowFishing;                                           // 0x1588(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
