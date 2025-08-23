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
	 * Class MRMesh.MockDataMeshTrackerComponent
	 * Size -> 0x0078 (FullSize[0x0340] - InheritedSize[0x02C8])
	 */
	class UMockDataMeshTrackerComponent : public USceneComponent
	{
	public:
		class FScriptMulticastDelegate                             OnMeshTrackerUpdated;                                    // 0x02C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       ScanWorld;                                               // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RequestNormals;                                          // 0x02D9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RequestVertexConfidence;                                 // 0x02DA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMeshTrackerVertexColorMode                                VertexColorMode;                                         // 0x02DB(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6IGU[0x4];                                   // 0x02DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FColor>                                      BlockVertexColors;                                       // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        VertexColorFromConfidenceZero;                           // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        VertexColorFromConfidenceOne;                            // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UpdateInterval;                                          // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HQBY[0x4];                                   // 0x0314(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMRMeshComponent*                                    MRMesh;                                                  // 0x0318(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VFVQ[0x20];                                  // 0x0320(0x0020) MISSED OFFSET (PADDING)

	public:
		void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, TArray<struct FVector> Vertices, TArray<int32_t> Triangles, TArray<struct FVector> Normals, TArray<float> Confidence);
		void DisconnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
		void ConnectMRMesh(class UMRMeshComponent* InMRMeshPtr);
		static UClass* StaticClass();
	};

	/**
	 * Class MRMesh.MRMeshBodyHolder
	 * Size -> 0x01B0 (FullSize[0x01D8] - InheritedSize[0x0028])
	 */
	class UMRMeshBodyHolder : public UObject
	{
	public:
		unsigned char                                              UnknownData_QF5O[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBodySetup*                                          BodySetup;                                               // 0x0030(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FBodyInstance                                       BodyInstance;                                            // 0x0038(0x0138) Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HJA8[0x68];                                  // 0x0170(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MRMesh.MRMeshComponent
	 * Size -> 0x0080 (FullSize[0x0700] - InheritedSize[0x0680])
	 */
	class UMRMeshComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_TR96[0x8];                                   // 0x0680(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  Material;                                                // 0x0688(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInterface*                                  WireframeMaterial;                                       // 0x0690(0x0008) Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCreateMeshProxySections;                                // 0x0698(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUpdateNavMeshOnMeshUpdate;                              // 0x0699(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RB9C[0x1];                                   // 0x069A(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bNeverCreateCollisionMesh;                               // 0x069B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QSRS[0x44];                                  // 0x069C(0x0044) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMRMeshBodyHolder*>                           BodyHolders;                                             // 0x06E0(0x0010) ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YN7T[0x10];                                  // 0x06F0(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetWireframeMaterial(class UMaterialInterface* InMaterial);
		void SetWireframeColor(const struct FLinearColor& InColor);
		void SetUseWireframe(bool bUseWireframe);
		void SetEnableMeshOcclusion(bool bEnable);
		void RequestNavMeshUpdate();
		bool IsConnected();
		struct FLinearColor GetWireframeColor();
		bool GetUseWireframe();
		bool GetEnableMeshOcclusion();
		void ForceNavMeshUpdate();
		void Clear();
		static UClass* StaticClass();
	};

	/**
	 * Class MRMesh.MeshReconstructorBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMeshReconstructorBase : public UObject
	{
	public:
		void StopReconstruction();
		void StartReconstruction();
		void PauseReconstruction();
		bool IsReconstructionStarted();
		bool IsReconstructionPaused();
		void DisconnectMRMesh();
		void ConnectMRMesh(class UMRMeshComponent* Mesh);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
