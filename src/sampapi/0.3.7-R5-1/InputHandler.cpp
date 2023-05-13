/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/InputHandler.h"

SAMPAPI_BEGIN_V037R5_1

SAMPAPI_VAR void*& InputHandler::RefPrevWindowProc() {
    return *(void**)GetAddress(0x12DE60);
}

SAMPAPI_VAR unsigned int& InputHandler::RefAntiCheatDetectCount() {
    return *(unsigned int*)GetAddress(0x26EBD0);
}

int InputHandler::WindowProc(unsigned int uMsg, unsigned int wParam, long lParam) {
    return ((int(__stdcall*)(unsigned int, unsigned int, long))GetAddress(0x61650))(uMsg, wParam, lParam);
}

BOOL InputHandler::KeyPressHandler(unsigned int nKey) {
    return ((BOOL(__cdecl*)(unsigned int))GetAddress(0x61360))(nKey);
}

BOOL InputHandler::CharInputHandler(unsigned int nChar) {
    return ((BOOL(__cdecl*)(unsigned int))GetAddress(0x61590))(nChar);
}

BOOL InputHandler::Initialize() {
    return ((BOOL(__cdecl*)())GetAddress(0x61EC0))();
}

void SwitchWindowedMode() {
    ((void(__cdecl*)())GetAddress(0x61310))();
}

SAMPAPI_END
