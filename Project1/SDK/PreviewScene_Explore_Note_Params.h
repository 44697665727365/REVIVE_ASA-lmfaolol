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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function PreviewScene_Explore_Note.PreviewScene_Explore_Note_C.ReceiveBeginPlay
	 */
	struct APreviewScene_Explore_Note_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function PreviewScene_Explore_Note.PreviewScene_Explore_Note_C.NotifyPreviewSceneUpdated
	 */
	struct APreviewScene_Explore_Note_C_NotifyPreviewSceneUpdated_Params
	{
	public:
		float                                                      DeltaTime;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PreviewScene_Explore_Note.PreviewScene_Explore_Note_C.ExecuteUbergraph_PreviewScene_Explore_Note
	 */
	struct APreviewScene_Explore_Note_C_ExecuteUbergraph_PreviewScene_Explore_Note_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1JWV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
