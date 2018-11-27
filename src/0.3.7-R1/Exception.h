/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"

#define MAX_EXCEPTIONS 9

SAMP_BEGIN

namespace Exception {
	extern int &nCount;
	extern void *&pContextRecord; // PCONTEXT
	extern char *szCrashDialogText; // [16384]

	BOOL Print(int nCode, void *pExceptionPointers, const char *szWarning);
	void SendCrashReport();
	BOOL CrashDialogProc(void *hWnd, unsigned int uMsg, unsigned int wParam, long lParam);
	void ConstructCrashDialogText(BOOL bModules);
	long Handler(void *pExceptionPointers);
}

SAMP_END