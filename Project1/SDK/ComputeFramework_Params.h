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
	 * Function ComputeFramework.ComputeGraphComponent.QueueExecute
	 */
	struct UComputeGraphComponent_QueueExecute_Params
	{	};

	/**
	 * Function ComputeFramework.ComputeGraphComponent.DestroyDataProviders
	 */
	struct UComputeGraphComponent_DestroyDataProviders_Params
	{	};

	/**
	 * Function ComputeFramework.ComputeGraphComponent.CreateDataProviders
	 */
	struct UComputeGraphComponent_CreateDataProviders_Params
	{
	public:
		int32_t                                                    InBindingIndex;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QRKS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             InBindingObject;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
