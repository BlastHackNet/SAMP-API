/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CTextDrawSelection.h"

SAMPAPI_BEGIN_V037R5_1

SAMPAPI_VAR CTextDrawSelection*& RefTextDrawSelection() {
    return *(CTextDrawSelection**)GetAddress(0x26EB68);
}

void CTextDrawSelection::ResetTextDraws() {
    ((void(__thiscall*)(CTextDrawSelection*))GetAddress(0x712B0))(this);
}

void CTextDrawSelection::RawProcess() {
    ((void(__thiscall*)(CTextDrawSelection*))GetAddress(0x71310))(this);
}

void CTextDrawSelection::Process() {
    ((void(__thiscall*)(CTextDrawSelection*))GetAddress(0x71410))(this);
}

void CTextDrawSelection::Enable(D3DCOLOR hoveredColor) {
    ((void(__thiscall*)(CTextDrawSelection*, D3DCOLOR))GetAddress(0x71440))(this, hoveredColor);
}

void CTextDrawSelection::SendNotification() {
    ((void(__thiscall*)(CTextDrawSelection*))GetAddress(0x71480))(this);
}

void CTextDrawSelection::Disable() {
    ((void(__thiscall*)(CTextDrawSelection*))GetAddress(0x71520))(this);
}

BOOL CTextDrawSelection::MsgProc(int uMsg, int wParam, int lParam) {
    return ((BOOL(__thiscall*)(CTextDrawSelection*, int, int, int))GetAddress(0x71570))(this, uMsg, wParam, lParam);
}

SAMPAPI_END
