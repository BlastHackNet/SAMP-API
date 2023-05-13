/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"

SAMPAPI_BEGIN_V037R5_1

void SwitchWindowedMode();

namespace InputHandler {
    enum { MAX_ANTICHEAT_DETECT_COUNT = 0xA };
    
    SAMPAPI_EXPORT SAMPAPI_VAR void*& RefPrevWindowProc();
    SAMPAPI_EXPORT SAMPAPI_VAR unsigned int& RefAntiCheatDetectCount();

    SAMPAPI_EXPORT int  WindowProc(unsigned int uMsg, unsigned int wParam, long lParam);
    SAMPAPI_EXPORT BOOL KeyPressHandler(unsigned int nKey);
    SAMPAPI_EXPORT BOOL CharInputHandler(unsigned int nChar);
    SAMPAPI_EXPORT BOOL Initialize();
} // namespace InputHandler

SAMPAPI_END
