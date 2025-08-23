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
	 * Class LiveLinkComponents.LiveLinkComponentSettings
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class ULiveLinkComponentSettings : public UObject
	{
	public:
		TMap<class UClass*, class UClass*>                         DefaultControllerForRole;                                // 0x0028(0x0050) Edit, Config, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLinkComponents.LiveLinkControllerBase
	 * Size -> 0x0040 (FullSize[0x0068] - InheritedSize[0x0028])
	 */
	class ULiveLinkControllerBase : public UObject
	{
	public:
		struct FComponentReference                                 ComponentPicker;                                         // 0x0028(0x0028) Edit, DisableEditOnTemplate, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HU9R[0x18];                                  // 0x0050(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLinkComponents.LiveLinkLightController
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class ULiveLinkLightController : public ULiveLinkControllerBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLinkComponents.LiveLinkTransformController
	 * Size -> 0x0008 (FullSize[0x0070] - InheritedSize[0x0068])
	 */
	class ULiveLinkTransformController : public ULiveLinkControllerBase
	{
	public:
		struct FLiveLinkTransformControllerData                    TransformData;                                           // 0x0068(0x0006) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T736[0x2];                                   // 0x006E(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLinkComponents.LiveLinkComponentController
	 * Size -> 0x00A8 (FullSize[0x0160] - InheritedSize[0x00B8])
	 */
	class ULiveLinkComponentController : public UActorComponent
	{
	public:
		struct FLiveLinkSubjectRepresentation                      SubjectRepresentation;                                   // 0x00B8(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TMap<class UClass*, class ULiveLinkControllerBase*>        ControllerMap;                                           // 0x00C8(0x0050) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, NoClear, Interp, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                       bUpdateInEditor;                                         // 0x0118(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M4BY[0x7];                                   // 0x0119(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnLiveLinkUpdated;                                       // 0x0120(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnControllerMapUpdatedDelegate;                          // 0x0130(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bDisableEvaluateLiveLinkWhenSpawnable;                   // 0x0140(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEvaluateLiveLink;                                       // 0x0141(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateInPreviewEditor;                                  // 0x0142(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C11O[0x1D];                                  // 0x0143(0x001D) MISSED OFFSET (PADDING)

	public:
		void SetSubjectRepresentation(const struct FLiveLinkSubjectRepresentation& InSubjectRepresentation);
		struct FLiveLinkSubjectRepresentation GetSubjectRepresentation();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
