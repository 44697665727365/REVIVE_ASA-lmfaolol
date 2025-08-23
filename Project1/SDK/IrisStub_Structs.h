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
	 * ScriptStruct IrisStub.NetSerializerConfig
	 * Size -> 0x0000
	 */
	struct FNetSerializerConfig
	{	};

	/**
	 * ScriptStruct IrisStub.PolymorphicStructNetSerializerConfig
	 * Size -> 0x0001
	 */
	struct FPolymorphicStructNetSerializerConfig : public FNetSerializerConfig
	{
	public:
		unsigned char                                              UnknownData_BHBJ[0x1];                                   // 0x0000(0x0001) Fix Super Size
	};

	/**
	 * ScriptStruct IrisStub.PolymorphicArrayStructNetSerializerConfig
	 * Size -> 0x0001
	 */
	struct FPolymorphicArrayStructNetSerializerConfig : public FNetSerializerConfig
	{
	public:
		unsigned char                                              UnknownData_G98Y[0x1];                                   // 0x0000(0x0001) Fix Super Size
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
