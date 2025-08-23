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
	 * WidgetBlueprintGeneratedClass TribeWarButton.TribeWarButton_C
	 * Size -> 0x0008 (FullSize[0x0790] - InheritedSize[0x0788])
	 */
	class UTribeWarButton_C : public UTribeWarButtonWidget
	{
	public:
		class UCustomButtonWidget*                                 Button;                                                  // 0x0788(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
