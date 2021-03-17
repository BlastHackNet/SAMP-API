/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi.h"

SAMPAPI_BEGIN

void SwitchWindowedMode();

namespace InputHandler {
    SAMPAPI_EXPORT SAMPAPI_VAR void*& RefPrevWindowProc();

    SAMPAPI_EXPORT int  WindowProc(unsigned int uMsg, unsigned int wParam, long lParam);
    SAMPAPI_EXPORT BOOL KeyPressHandler(unsigned int nKey);
    SAMPAPI_EXPORT BOOL CharInputHandler(unsigned int nChar);
    SAMPAPI_EXPORT BOOL Initialize();
} // namespace InputHandler

SAMPAPI_END
