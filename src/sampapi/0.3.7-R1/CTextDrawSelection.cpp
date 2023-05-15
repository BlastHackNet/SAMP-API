/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CTextDrawSelection.h"

SAMPAPI_BEGIN_V037R1

SAMPAPI_VAR CTextDrawSelection*& RefTextDrawSelection() {
    return *(CTextDrawSelection**)GetAddress(0x21A0CC);
}

BOOL CTextDrawSelection::MsgProc(int uMsg, int wParam, int lParam) {
    return ((BOOL(__thiscall*)(CTextDrawSelection*, int, int, int))GetAddress(0x6CF90))(this, uMsg, wParam, lParam);
}

void CTextDrawSelection::Disable() {
    ((void(__thiscall*)(CTextDrawSelection*))GetAddress(0x6CF40))(this);
}

void CTextDrawSelection::SendNotification() {
    ((void(__thiscall*)(CTextDrawSelection*))GetAddress(0x6CEA0))(this);
}

void CTextDrawSelection::Enable(D3DCOLOR hoveredColor) {
    ((void(__thiscall*)(CTextDrawSelection*, D3DCOLOR))GetAddress(0x6CE60))(this, hoveredColor);
}

void CTextDrawSelection::ResetTextDraws() {
    ((void(__thiscall*)(CTextDrawSelection*))GetAddress(0x6CCD0))(this);
}

void CTextDrawSelection::RawProcess() {
    ((void(__thiscall*)(CTextDrawSelection*))GetAddress(0x6CD30))(this);
}

void CTextDrawSelection::Process() {
    ((void(__thiscall*)(CTextDrawSelection*))GetAddress(0x6CE30))(this);
}

SAMPAPI_END
