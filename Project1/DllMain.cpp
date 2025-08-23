#include "pch.h"
#include "HookManager.h"
#include "Globals.h"

BOOL APIENTRY DllMain(HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    if (ul_reason_for_call == DLL_PROCESS_ATTACH)
    {
        globals::framework::DllHandle = hModule;
        //plog(Xors("DLL_PROCESS_ATTACH"));
       
        Actors::JC();

        HookManager::StartEverything();
    }
	else if (ul_reason_for_call == DLL_PROCESS_DETACH)
	{
		//plog(Xors("DLL_PROCESS_DETACH"));
		//HookManager::StopEverything();
	}
    return TRUE;
}