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
	 * BlueprintGeneratedClass Buff_NotifyHoversailFollow.Buff_NotifyHoversailFollow_C
	 * Size -> 0x0297 (FullSize[0x0DF0] - InheritedSize[0x0B59])
	 */
	class ABuff_NotifyHoversailFollow_C : public ABuff_Base_C
	{
	public:
		unsigned char                                              UnknownData_W76U[0x7];                                   // 0x0B59(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APrimalCharacter*                                    HoverSail;                                               // 0x0B60(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Lastpassedlocation;                                      // 0x0B68(0x0018) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       hoversailhasbeenset;                                     // 0x0B80(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_48GW[0x7];                                   // 0x0B81(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              followstring;                                            // 0x0B88(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		class FString                                              followstring_stasisd;                                    // 0x0B98(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		struct FVector2D                                           TeleWorldHUDElementSize;                                 // 0x0BA8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     TeleWorldIndicatorSizeMult;                              // 0x0BB8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FAnchors                                            TeleWorldHUDElementAnchor;                               // 0x0BC0(0x0020) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		bool                                                       hasstasisd;                                              // 0x0BE0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CVFC[0x7];                                   // 0x0BE1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHUDElement                                         LocationIndicatorHUDElementTemplate;                     // 0x0BE8(0x01B0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector                                             MaxHUDIndicatorWorldOffset;                              // 0x0D98(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MaxDistanceForHUDLocationIndicatorScaling;               // 0x0DB0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             MinHUDIndicatorWorldOffset;                              // 0x0DB8(0x0018) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MaxHUDLocationIndicatorScale;                            // 0x0DD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     MinHUDLocationIndicatorScale;                            // 0x0DD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           InterpedScreenPos;                                       // 0x0DE0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BPGetHUDElements(class APlayerController* ForPC, TArray<struct FHUDElement>* OutElements);
		void SetandPassLoc();
		void BuffTickServer(float DeltaTime);
		void BuffTickClient(float DeltaTime);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
