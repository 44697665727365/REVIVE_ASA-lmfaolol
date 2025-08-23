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
	 * WidgetBlueprintGeneratedClass HUDCustomImageWidget.HUDCustomImageWidget_C
	 * Size -> 0x0008 (FullSize[0x0338] - InheritedSize[0x0330])
	 */
	class UHUDCustomImageWidget_C : public UPrimalUserWidget
	{
	public:
		class UImage*                                              CustomImage;                                             // 0x0330(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
