/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/InputHandler.h"

SAMPAPI_BEGIN_V037R3_1

SAMPAPI_VAR void*& InputHandler::RefPrevWindowProc() {
    return *(void**)GetAddress(0x12DD38);
}

SAMPAPI_VAR unsigned int& InputHandler::RefAntiCheatDetectCount() {
    return *(unsigned int*)GetAddress(0x26E918);
}

int InputHandler::WindowProc(unsigned int uMsg, unsigned int wParam, long lParam) {
    return ((int(__stdcall*)(unsigned int, unsigned int, long))GetAddress(0x60EE0))(uMsg, wParam, lParam);
}

BOOL InputHandler::KeyPressHandler(unsigned int nKey) {
    return ((BOOL(__cdecl*)(unsigned int))GetAddress(0x60BF0))(nKey);
}

BOOL InputHandler::CharInputHandler(unsigned int nChar) {
    return ((BOOL(__cdecl*)(unsigned int))GetAddress(0x60E20))(nChar);
}

BOOL InputHandler::Initialize() {
    return ((BOOL(__cdecl*)())GetAddress(0x61750))();
}

void SwitchWindowedMode() {
    ((void(__cdecl*)())GetAddress(0x60BA0))();
}

SAMPAPI_END
