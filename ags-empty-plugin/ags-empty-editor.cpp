#include "common.h"

#if defined (WINDOWS_VERSION)

IAGSEditor *g_AGSEditor = nullptr;

// Editor have requested this plugin's description
LPCSTR AGS_GetPluginName()
{
    return "AGS Empty Plugin";
}

// User has checked the plugin to use it in their game
int AGS_EditorStartup(IAGSEditor *lpEditor)
{
    // If it's an earlier version than what we need, abort.
    if (lpEditor->version < 1)
        return -1;

    // Save Editor interface for any future use
    g_AGSEditor = lpEditor;
    // Return 0 to indicate success
    return 0;
}

// User has un-checked the plugin from their game
void AGS_EditorShutdown()
{
}

// User has chosen to view the Properties of the plugin
void AGS_EditorProperties(HWND parent)
{
    MessageBox(parent,
               L"AGS Empty Plugin\n\n"
               L"a dummy plugin placeholder without any actual functionality\n\n",
               L"About", MB_OK | MB_ICONINFORMATION);
}

int AGS_EditorSaveGame(char *buffer, int bufsize)
{
    // We don't want to save any persistent data
    return 0;
}

void AGS_EditorLoadGame(char *buffer, int bufsize)
{
    // Nothing to load for this dummy plugin
}

#endif // WINDOWS_VERSION
