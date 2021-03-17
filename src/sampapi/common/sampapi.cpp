/*
	This is a SAMP API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi.h"
#include <Windows.h>

SAMPAPI_COMMON_BEGIN

unsigned long GetBase() {
    static auto handle = reinterpret_cast<unsigned long>(GetModuleHandleA("samp.dll"));
    return handle;
}

unsigned int GetAPIVersion() {
    return SAMPAPI_VERSION;
}

SAMPAPI_COMMON_END
