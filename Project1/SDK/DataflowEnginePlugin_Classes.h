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
	 * Class DataflowEnginePlugin.DataflowActor
	 * Size -> 0x0008 (FullSize[0x04C0] - InheritedSize[0x04B8])
	 */
	class ADataflowActor : public AActor
	{
	public:
		class UDataflowComponent*                                  DataflowComponent;                                       // 0x04B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DataflowEnginePlugin.DataflowComponent
	 * Size -> 0x0140 (FullSize[0x07C0] - InheritedSize[0x0680])
	 */
	class UDataflowComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_2AA7[0x140];                                 // 0x0680(0x0140) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
