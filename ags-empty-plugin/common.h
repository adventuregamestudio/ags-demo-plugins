#ifndef __AGS_EMPTY_PLUGIN__COMMON_H_
#define __AGS_EMPTY_PLUGIN__COMMON_H_

#if defined (WINDOWS_VERSION)
#ifndef WIN32_LEAN_AND_MEAN
    #define WIN32_LEAN_AND_MEAN 1
#endif
#include <windows.h>
#endif // WINDOWS_VERSION

// Plugin API header
#include "agsplugin.h"

#endif // __AGS_EMPTY_PLUGIN__COMMON_H_
