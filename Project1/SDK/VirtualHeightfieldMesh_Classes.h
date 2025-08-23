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
	 * Class VirtualHeightfieldMesh.HeightfieldMinMaxTexture
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UHeightfieldMinMaxTexture : public UObject
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0028(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          LodBiasTexture;                                          // 0x0030(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          LodBiasMinMaxTexture;                                    // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxCPULevels;                                            // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KZJF[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FVector2D>                                   TextureData;                                             // 0x0048(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FIntPoint                                           TextureDataSize;                                         // 0x0058(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            TextureDataMips;                                         // 0x0060(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VirtualHeightfieldMesh.MaterialExpressionHeightfieldMinMaxTexture
	 * Size -> 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
	 */
	class UMaterialExpressionHeightfieldMinMaxTexture : public UMaterialExpression
	{
	public:
		class UHeightfieldMinMaxTexture*                           MinMaxTexture;                                           // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMaterialSamplerType                                       SamplerType;                                             // 0x00B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B6YI[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VirtualHeightfieldMesh.VirtualHeightfieldMesh
	 * Size -> 0x0008 (FullSize[0x04C0] - InheritedSize[0x04B8])
	 */
	class AVirtualHeightfieldMesh : public AActor
	{
	public:
		class UVirtualHeightfieldMeshComponent*                    VirtualHeightfieldMeshComponent;                         // 0x04B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent
	 * Size -> 0x0080 (FullSize[0x0700] - InheritedSize[0x0680])
	 */
	class UVirtualHeightfieldMeshComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              VirtualTexture[0x30];                                    // 0x0680(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		class ARuntimeVirtualTextureVolume*                        VirtualTextureRef;                                       // 0x06B0(0x0008) ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UObject*                                             VirtualTextureThumbnail;                                 // 0x06B8(0x0008) Edit, ZeroConstructor, Transient, EditConst, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCopyBoundsButton;                                       // 0x06C0(0x0001) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_62WW[0x7];                                   // 0x06C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UHeightfieldMinMaxTexture*                           MinMaxTexture;                                           // 0x06C8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumMinMaxTextureBuildLevels;                             // 0x06D0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bBuildMinMaxTextureButton;                               // 0x06D4(0x0001) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WRGA[0x3];                                   // 0x06D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  Material;                                                // 0x06D8(0x0008) Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Lod0ScreenSize;                                          // 0x06E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      Lod0Distribution;                                        // 0x06E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LodDistribution;                                         // 0x06E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      LodBiasScale;                                            // 0x06EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumForceLoadLods;                                        // 0x06F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    NumOcclusionLods;                                        // 0x06F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bHiddenInEditor;                                         // 0x06F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bWorldPositionOffsetVelocity;                            // 0x06F9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3OA2[0x6];                                   // 0x06FA(0x0006) MISSED OFFSET (PADDING)

	public:
		void GatherHideFlags(bool* InOutHidePrimitivesInEditor, bool* InOutHidePrimitivesInGame);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
