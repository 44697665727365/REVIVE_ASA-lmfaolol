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
	 * Class OptimusSettings.OptimusSettings
	 * Size -> 0x0068 (FullSize[0x00A0] - InheritedSize[0x0038])
	 */
	class UOptimusSettings : public UDeveloperSettings
	{
	public:
		EOptimusDefaultDeformerMode                                DefaultMode;                                             // 0x0038(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YJ1F[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              DefaultDeformer[0x30];                                   // 0x0040(0x0030) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              DefaultRecomputeTangentDeformer[0x30];                   // 0x0070(0x0030) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
