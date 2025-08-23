#pragma once
#define PI 3.141592653589793238f
#define xor Xors
#pragma warning( disable : 4099 ) //Disable warning about PDB not being found

typedef __int8 int8;
typedef __int16 int16;
typedef __int32 int32;
typedef __int64 int64;
typedef unsigned __int8 uint8;
typedef unsigned __int16 uint16;
typedef unsigned __int32 uint32;
typedef unsigned __int64 uint64;
#pragma warning(push)
#pragma warning(disable : 4244)
#pragma warning(disable : 4267)
#pragma warning(disable : 28020)
#pragma warning(disable : 4309)

#include "Imports.h"
#include "CRT.h"
#include "vector.h"

#include <Windows.h>
#include <stdlib.h>
#include <wchar.h>
#include <cwchar>
#include <stdio.h>
#include <algorithm>
#include <chrono>
//#include <vector>
#include <map>
#include <mutex>
#include <unordered_map>
#include <string>
#include <fstream>
#include <assert.h> 
#include <unordered_map>
#include <unordered_set>
#include <functional>

#include "Protection/LazyImport.h"
#include "Protection/Xors.h"
#include "Utilities/memory.h"
#include "Utilities/spoof_call.h"
#include "Utilities/string.h"

#include <chrono>
typedef std::chrono::high_resolution_clock::time_point TimeVar;
#define durationNS(a) std::chrono::duration_cast<std::chrono::nanoseconds>(a).count()
#define durationMICROS(a) std::chrono::duration_cast<std::chrono::microseconds>(a).count()
#define durationMILLIS(a) std::chrono::duration_cast<std::chrono::milliseconds>(a).count()
#define durationSECONDS(a) std::chrono::duration_cast<std::chrono::seconds>(a).count();
#define timeNow() std::chrono::high_resolution_clock::now()

#define PROCESS_EVENTS_INDEX 0x4E
namespace CG
{

	class alignas(0x01) FMulticastInlineDelegateProperty_
	{
		unsigned __int8 Pad[0x10];
	};

	class alignas(0x01) FMulticastSparseDelegateProperty_
	{
		unsigned __int8 Pad[0x1];
	};

}
#include "SDK.h"
#include "SDKExtra.h"

using namespace CG;

#pragma warning(pop)

#include "ActorBase.h"
#include "Settings.h"
#include "Globals.h"
#include "AssetLoader.h"
