/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"

SAMPAPI_BEGIN_PACKED_V037R3_1

namespace Exception {
    enum { MAX_EXCEPTIONS = 9 };

    SAMPAPI_EXPORT SAMPAPI_VAR int& RefCount();
    SAMPAPI_EXPORT SAMPAPI_VAR void*& RefContextRecord();    // PCONTEXT
    SAMPAPI_EXPORT SAMPAPI_VAR char* ArrayCrashDialogText(); // [16384]

    SAMPAPI_EXPORT BOOL Print(int nCode, void* pExceptionPointers, const char* szWarning);
    SAMPAPI_EXPORT void SendCrashReport();
    SAMPAPI_EXPORT BOOL CrashDialogProc(void* hWnd, unsigned int uMsg, unsigned int wParam, long lParam);
    SAMPAPI_EXPORT void ConstructCrashDialogText(BOOL bModules);
    SAMPAPI_EXPORT long Handler(void* pExceptionPointers);
} // namespace Exception

SAMPAPI_END_PACKED
