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
	 * WidgetBlueprintGeneratedClass HUDCustomStatusUI.HUDCustomStatusUI_C
	 * Size -> 0x0008 (FullSize[0x0828] - InheritedSize[0x0820])
	 */
	class UHUDCustomStatusUI_C : public UHUDCustomStatusWidget
	{
	public:
		class UCanvasPanel*                                        CustomStatusCanvasPanel;                                 // 0x0820(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
