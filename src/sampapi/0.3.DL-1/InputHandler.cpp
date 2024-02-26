/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/InputHandler.h"

SAMPAPI_BEGIN_V03DL_1

SAMPAPI_VAR void*& InputHandler::RefPrevWindowProc() {
    return *(void**)GetAddress(0x16BE78);
}

SAMPAPI_VAR unsigned int& InputHandler::RefAntiCheatDetectCount() {
    return *(unsigned int*)GetAddress(0x2ACA60);
}

int InputHandler::WindowProc(unsigned int uMsg, unsigned int wParam, long lParam) {
    return ((int(__stdcall*)(unsigned int, unsigned int, long))GetAddress(0x610D0))(uMsg, wParam, lParam);
}

BOOL InputHandler::KeyPressHandler(unsigned int nKey) {
    return ((BOOL(__cdecl*)(unsigned int))GetAddress(0x60DE0))(nKey);
}

BOOL InputHandler::CharInputHandler(unsigned int nChar) {
    return ((BOOL(__cdecl*)(unsigned int))GetAddress(0x61010))(nChar);
}

BOOL InputHandler::Initialize() {
    return ((BOOL(__cdecl*)())GetAddress(0x61940))();
}

void SwitchWindowedMode() {
    ((void(__cdecl*)())GetAddress(0x60D90))();
}

SAMPAPI_END
