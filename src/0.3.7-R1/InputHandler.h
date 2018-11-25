/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"

SAMP_BEGIN_NP

namespace InputHandler {
	extern void *&prevWindowProc;
	
	int WindowProc(unsigned int uMsg, unsigned int wParam, long lParam);
	BOOL KeyPressHandler(unsigned int nKey);
	BOOL CharInputHandler(unsigned int nChar);
	BOOL Init();
}

void SwitchWindowedMode();

SAMP_END_NP