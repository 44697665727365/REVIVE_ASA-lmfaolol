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
	 * Class Renderer.SparseVolumeTextureViewerComponent
	 * Size -> 0x0030 (FullSize[0x06B0] - InheritedSize[0x0680])
	 */
	class USparseVolumeTextureViewerComponent : public UPrimitiveComponent
	{
	public:
		class USparseVolumeTexture*                                SparseVolumeTexturePreview;                              // 0x0680(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnimate : 1;                                            // 0x0688(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PXO9[0x3];                                   // 0x0689(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AnimationFrame;                                          // 0x068C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrameRate;                                               // 0x0690(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AnimationTime;                                           // 0x0694(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ComponentToVisualize;                                    // 0x0698(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HI04[0x14];                                  // 0x069C(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Renderer.SparseVolumeTextureViewer
	 * Size -> 0x0008 (FullSize[0x04C0] - InheritedSize[0x04B8])
	 */
	class ASparseVolumeTextureViewer : public AInfo
	{
	public:
		class USparseVolumeTextureViewerComponent*                 SparseVolumeTextureViewerComponent;                      // 0x04B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
