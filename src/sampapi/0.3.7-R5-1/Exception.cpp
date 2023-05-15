/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/Exception.h"

SAMPAPI_BEGIN_V037R5_1

SAMPAPI_VAR int& Exception::RefCount() {
    return *(int*)GetAddress(0x125A58);
}

SAMPAPI_VAR void*& Exception::RefContextRecord() {
    return *(void**)GetAddress(0x121A50);
}

SAMPAPI_VAR char* Exception::ArrayCrashDialogText() {
    return (char*)GetAddress(0x121A58);
}

BOOL Exception::Print(int nCode, void* pExceptionPointers, const char* szWarning) {
    return ((BOOL(__stdcall*)(int, void*, const char*))GetAddress(0x609B0))(nCode, pExceptionPointers, szWarning);
}

void Exception::SendCrashReport() {
    ((void(__cdecl*)())GetAddress(0x607A0))();
}

BOOL Exception::CrashDialogProc(void* hWnd, unsigned int uMsg, unsigned int wParam, long lParam) {
    return ((BOOL(__stdcall*)(void*, unsigned int, unsigned int, long))GetAddress(0x60870))(hWnd, uMsg, wParam, lParam);
}

void Exception::ConstructCrashDialogText(BOOL bModules) {
    ((void(__cdecl*)(BOOL))GetAddress(0x605B0))(bModules);
}

long Exception::Handler(void* pExceptionPointers) {
    return ((long(__stdcall*)(void*))GetAddress(0x60970))(pExceptionPointers);
}

SAMPAPI_END
