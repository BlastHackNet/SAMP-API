/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/Exception.h"

SAMPAPI_BEGIN_V037R1

SAMPAPI_VAR int& Exception::RefCount() {
    return *(int*)GetAddress(0x1118B0);
}

SAMPAPI_VAR void*& Exception::RefContextRecord() {
    return *(void**)GetAddress(0x10D8A8);
}

SAMPAPI_VAR char* Exception::ArrayCrashDialogText() {
    return (char*)GetAddress(0x10D8B0);
}

BOOL Exception::Print(int nCode, void* pExceptionPointers, const char* szWarning) {
    return ((BOOL(__stdcall*)(int, void*, const char*))GetAddress(0x5CED0))(nCode, pExceptionPointers, szWarning);
}

void Exception::SendCrashReport() {
    ((void(__cdecl*)())GetAddress(0x5CCC0))();
}

BOOL Exception::CrashDialogProc(void* hWnd, unsigned int uMsg, unsigned int wParam, long lParam) {
    return ((BOOL(__stdcall*)(void*, unsigned int, unsigned int, long))GetAddress(0x5CD90))(hWnd, uMsg, wParam, lParam);
}

void Exception::ConstructCrashDialogText(BOOL bModules) {
    ((void(__cdecl*)(BOOL))GetAddress(0x5CAD0))(bModules);
}

long Exception::Handler(void* pExceptionPointers) {
    return ((long(__stdcall*)(void*))GetAddress(0x5CE90))(pExceptionPointers);
}

SAMPAPI_END
