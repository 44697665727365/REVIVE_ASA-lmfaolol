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
	 * WidgetBlueprintGeneratedClass MapSpawnPoint.MapSpawnPoint_C
	 * Size -> 0x0010 (FullSize[0x07D0] - InheritedSize[0x07C0])
	 */
	class UMapSpawnPoint_C : public UUI_SpawnPoint
	{
	public:
		class UImage*                                              DefaultDestinationImage;                                 // 0x07C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              SpawnPointImage;                                         // 0x07C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		ESlateVisibility Get_Default__MapSpawnPoint_C_Visiblity_1();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
