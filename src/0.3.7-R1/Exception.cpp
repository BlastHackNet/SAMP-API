/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "Exception.h"

int &SAMP::Exception::nCount = *(int *)SAMP_ADDROF(0x1118B0);
void *&SAMP::Exception::pContextRecord = *(void **)SAMP_ADDROF(0x10D8A8);
char *SAMP::Exception::szCrashDialogText = (char *)SAMP_ADDROF(0x10D8B0);

BOOL SAMP::Exception::Print(int nCode, void *pExceptionPointers, const char *szWarning) {
	return ((BOOL(__stdcall *)(int, void *, const char *))SAMP_ADDROF(0x5CED0))(nCode, pExceptionPointers, szWarning);
}

void SAMP::Exception::SendCrashReport() {
	((void(__cdecl *)())SAMP_ADDROF(0x5CCC0))();
}

BOOL SAMP::Exception::CrashDialogProc(void *hWnd, unsigned int uMsg, unsigned int wParam, long lParam) {
	return ((BOOL(__stdcall *)(void *, unsigned int, unsigned int, long))SAMP_ADDROF(0x5CD90))(hWnd, uMsg, wParam, lParam);
}

void SAMP::Exception::ConstructCrashDialogText(BOOL bModules) {
	((void(__cdecl *)(BOOL))SAMP_ADDROF(0x5CAD0))(bModules);
}

long SAMP::Exception::Handler(void *pExceptionPointers) {
	return ((long(__stdcall *)(void *))SAMP_ADDROF(0x5CE90))(pExceptionPointers);
}