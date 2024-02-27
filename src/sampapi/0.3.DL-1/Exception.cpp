/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/Exception.h"

SAMPAPI_BEGIN_V03DL_1

SAMPAPI_VAR int& Exception::RefCount() {
    return *(int*)GetAddress(0x163A70);
}

SAMPAPI_VAR void*& Exception::RefContextRecord() {
    return *(void**)GetAddress(0x15FA68);
}

SAMPAPI_VAR char* Exception::ArrayCrashDialogText() {
    return (char*)GetAddress(0x15FA70);
}

BOOL Exception::Print(int nCode, void* pExceptionPointers, const char* szWarning) {
    return ((BOOL(__stdcall*)(int, void*, const char*))GetAddress(0x60470))(nCode, pExceptionPointers, szWarning);
}

void Exception::SendCrashReport() {
    ((void(__cdecl*)())GetAddress(0x60260))();
}

BOOL Exception::CrashDialogProc(void* hWnd, unsigned int uMsg, unsigned int wParam, long lParam) {
    return ((BOOL(__stdcall*)(void*, unsigned int, unsigned int, long))GetAddress(0x60330))(hWnd, uMsg, wParam, lParam);
}

void Exception::ConstructCrashDialogText(BOOL bModules) {
    ((void(__cdecl*)(BOOL))GetAddress(0x60070))(bModules);
}

long Exception::Handler(void* pExceptionPointers) {
    return ((long(__stdcall*)(void*))GetAddress(0x60430))(pExceptionPointers);
}

SAMPAPI_END
