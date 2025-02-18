#include "common.h"

IAGSEngine *g_AGSEngine = nullptr;

// This function must be exported in order for the engine to
// recognize this DLL as a valid AGS plugin
int AGS_PluginV2()
{
    return 1;
}

// Engine is starting this plugin
void AGS_EngineStartup(IAGSEngine *lpEngine)
{
    // Save Engine interface for any future use
    g_AGSEngine = lpEngine;
}

// Engine is shutting down this plugin
void AGS_EngineShutdown()
{
}

// Engine has sent an event to this plugin
intptr_t AGS_EngineOnEvent(int ev, intptr_t data)
{
    return 0;
}

#if defined (WINDOWS_VERSION)

// DllMain - standard Windows DLL entry point.
BOOL APIENTRY DllMain(HANDLE hModule,
                      DWORD  ul_reason_for_call,
                      LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }

    return TRUE;
}

#endif // WINDOWS_VERSION
