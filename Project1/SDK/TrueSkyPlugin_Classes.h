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
	 * Class TrueSkyPlugin.TrueSkyComponent
	 * Size -> 0x0000 (FullSize[0x00B8] - InheritedSize[0x00B8])
	 */
	class UTrueSkyComponent : public UActorComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TrueSkyPlugin.TrueSkySequenceActor
	 * Size -> 0x0070 (FullSize[0x0528] - InheritedSize[0x04B8])
	 */
	class ATrueSkySequenceActor : public ATrueSkyActorParent
	{
	public:
		TArray<class UTrueSkySequenceAsset*>                       ActiveSequences;                                         // 0x04B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              BlendWeights;                                            // 0x04C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class UTexture2D*                                          MoonTexture;                                             // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTexture2D*                                          CosmicBackgroundTexture;                                 // 0x04E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextureRenderTarget2D*                              External_ScatterRT;                                      // 0x04E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextureRenderTarget2D*                              External_LossRT;                                         // 0x04F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Brightness;                                              // 0x04F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MetresPerUnit;                                           // 0x04FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinSimpleCloudShadowing;                                 // 0x0500(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSimpleCloudShadowing;                                 // 0x0504(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinSimpleCloudShadowingDistance;                         // 0x0508(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSimpleCloudShadowingDistance;                         // 0x050C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SimpleCloudShadowSharpness;                              // 0x0510(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SDBB[0x4];                                   // 0x0514(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       Visible;                                                 // 0x0518(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H8HT[0xF];                                   // 0x0519(0x000F) MISSED OFFSET (PADDING)

	public:
		void SetTime(float Value);
		void SetPointLightSource(int32_t ID, const struct FLinearColor& lightColour, float Intensity, const struct FVector& Pos, float MinRadius, float MaxRadius);
		void SetPointLight(class APointLight* Source);
		void SetKeyframeInt(int32_t keyframeUid, const class FString& Name, int32_t Value);
		void SetKeyframeFloat(int32_t keyframeUid, const class FString& Name, float Value);
		void SetInt(const class FString& Name, int32_t Value);
		void SetFloat(const class FString& Name, float Value);
		struct FRotator GetSunRotation();
		struct FLinearColor GetSunColor();
		int32_t GetNextModifiableSkyKeyframe();
		int32_t GetNextModifiableCloudKeyframe(int32_t Layer);
		int32_t GetKeyframeInt(int32_t keyframeUid, const class FString& Name);
		float GetKeyframeFloat(int32_t keyframeUid, const class FString& Name);
		int32_t GetInt(const class FString& Name);
		float GetFloat(const class FString& Name);
		void ForceUpdate();
		float CloudPointTest(int32_t QueryID, const struct FVector& Pos);
		float CloudLineTest(int32_t QueryID, const struct FVector& StartPos, const struct FVector& EndPos);
		static UClass* StaticClass();
	};

	/**
	 * Class TrueSkyPlugin.TrueSkySequenceAsset
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UTrueSkySequenceAsset : public UObject
	{
	public:
		TArray<unsigned char>                                      SequenceText;                                            // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
