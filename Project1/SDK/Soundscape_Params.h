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
	 * Function Soundscape.SoundscapeBPFunctionLibrary.SpawnSoundscapePalette
	 */
	struct USoundscapeBPFunctionLibrary_SpawnSoundscapePalette_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundscapePalette*                                  SoundscapePaletteIn;                                     // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UActiveSoundscapePalette*                            SoundscapePaletteAgentsOut;                              // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Soundscape.SoundscapeBPFunctionLibrary.SpawnSoundscapeColor
	 */
	struct USoundscapeBPFunctionLibrary_SpawnSoundscapeColor_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundscapeColor*                                    SoundscapeColorIn;                                       // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UActiveSoundscapeColor*                              ActiveSoundscapeColor;                                   // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Soundscape.ActiveSoundscapeColorVoice.StopLimitedDurationVoice
	 */
	struct UActiveSoundscapeColorVoice_StopLimitedDurationVoice_Params
	{
	public:
		float                                                      FadeOutTime;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Soundscape.ActiveSoundscapeColor.UpdateSoundscapeColor
	 */
	struct UActiveSoundscapeColor_UpdateSoundscapeColor_Params
	{	};

	/**
	 * Function Soundscape.ActiveSoundscapeColor.Stop
	 */
	struct UActiveSoundscapeColor_Stop_Params
	{
	public:
		float                                                      ColorFadeOutTime;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Soundscape.ActiveSoundscapeColor.Play
	 */
	struct UActiveSoundscapeColor_Play_Params
	{
	public:
		float                                                      ColorVolume;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ColorPitch;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      ColorFadeInTime;                                         // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Soundscape.ActiveSoundscapeColor.IsPlaying
	 */
	struct UActiveSoundscapeColor_IsPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Soundscape.ActiveSoundscapePalette.Stop
	 */
	struct UActiveSoundscapePalette_Stop_Params
	{	};

	/**
	 * Function Soundscape.ActiveSoundscapePalette.Play
	 */
	struct UActiveSoundscapePalette_Play_Params
	{	};

	/**
	 * Function Soundscape.SoundscapeColorPointHashMap.SetGridCenterpoint
	 */
	struct USoundscapeColorPointHashMap_SetGridCenterpoint_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Soundscape.SoundscapeColorPointHashMap.NumColorPointsInCell
	 */
	struct USoundscapeColorPointHashMap_NumColorPointsInCell_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ColorPoint;                                              // 0x0018(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Soundscape.SoundscapeColorPointHashMap.InitializeHash
	 */
	struct USoundscapeColorPointHashMap_InitializeHash_Params
	{
	public:
		float                                                      HashCellSizeIn;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_B9LP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             GridCenterIn;                                            // 0x0008(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Soundscape.SoundscapeColorPointHashMap.ClearHash
	 */
	struct USoundscapeColorPointHashMap_ClearHash_Params
	{	};

	/**
	 * Function Soundscape.SoundscapeColorPointHashMap.CalculateHashIndex
	 */
	struct USoundscapeColorPointHashMap_CalculateHashIndex_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		uint64_t                                                   ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Soundscape.SoundscapeColorPointHashMap.AddColorPointToHash
	 */
	struct USoundscapeColorPointHashMap_AddColorPointToHash_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ColorPoint;                                              // 0x0018(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Soundscape.SoundscapeColorPointHashMap.AddColorPointArrayToHash
	 */
	struct USoundscapeColorPointHashMap_AddColorPointArrayToHash_Params
	{
	public:
		TArray<struct FVector>                                     Locations;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ColorPoint;                                              // 0x0010(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Soundscape.SoundscapeSubsystem.SetState
	 */
	struct USoundscapeSubsystem_SetState_Params
	{
	public:
		struct FGameplayTag                                        SoundscapeState;                                         // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Soundscape.SoundscapeSubsystem.RestartSoundscape
	 */
	struct USoundscapeSubsystem_RestartSoundscape_Params
	{	};

	/**
	 * Function Soundscape.SoundscapeSubsystem.RemovePaletteCollection
	 */
	struct USoundscapeSubsystem_RemovePaletteCollection_Params
	{
	public:
		class FName                                                PaletteCollectionName;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Soundscape.SoundscapeSubsystem.RemoveColorPointCollection
	 */
	struct USoundscapeSubsystem_RemoveColorPointCollection_Params
	{
	public:
		class FName                                                ColorPointCollectionName;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Soundscape.SoundscapeSubsystem.ClearState
	 */
	struct USoundscapeSubsystem_ClearState_Params
	{
	public:
		struct FGameplayTag                                        SoundscapeState;                                         // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Soundscape.SoundscapeSubsystem.CheckColorPointDensity
	 */
	struct USoundscapeSubsystem_CheckColorPointDensity_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x0018)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        ColorPoint;                                              // 0x0018(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Soundscape.SoundscapeSubsystem.AddPaletteCollection
	 */
	struct USoundscapeSubsystem_AddPaletteCollection_Params
	{
	public:
		class FName                                                PaletteCollectionName;                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSoundscapePaletteCollection                        PaletteCollection;                                       // 0x0008(0x0050)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0058(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function Soundscape.SoundscapeSubsystem.AddColorPointCollection
	 */
	struct USoundscapeSubsystem_AddColorPointCollection_Params
	{
	public:
		class FName                                                ColorPointCollectionName;                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FSoundscapeColorPointCollection                     ColorPointCollection;                                    // 0x0008(0x0010)  (Parm, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
