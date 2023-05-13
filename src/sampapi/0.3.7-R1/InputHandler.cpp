/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/InputHandler.h"

SAMPAPI_BEGIN_V037R1

SAMPAPI_VAR void*& InputHandler::RefPrevWindowProc() {
    return *(void**)GetAddress(0x119CB8);
}

SAMPAPI_VAR unsigned int& InputHandler::RefAntiCheatDetectCount() {
    return *(unsigned int*)GetAddress(0x21A130);
}

int InputHandler::WindowProc(unsigned int uMsg, unsigned int wParam, long lParam) {
    return ((int(__stdcall*)(unsigned int, unsigned int, long))GetAddress(0x5DB40))(uMsg, wParam, lParam);
}

BOOL InputHandler::KeyPressHandler(unsigned int nKey) {
    return ((BOOL(__cdecl*)(unsigned int))GetAddress(0x5D850))(nKey);
}

BOOL InputHandler::CharInputHandler(unsigned int nChar) {
    return ((BOOL(__cdecl*)(unsigned int))GetAddress(0x5DA80))(nChar);
}

BOOL InputHandler::Initialize() {
    return ((BOOL(__cdecl*)())GetAddress(0x5E3B0))();
}

void SwitchWindowedMode() {
    ((void(__cdecl*)())GetAddress(0x5D800))();
}

SAMPAPI_END
