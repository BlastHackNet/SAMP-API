/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CTextDrawSelection.h"

SAMPAPI_BEGIN_V037R3_1

SAMPAPI_VAR CTextDrawSelection*& RefTextDrawSelection() {
    return *(CTextDrawSelection**)GetAddress(0x26E8B0);
}

void CTextDrawSelection::ResetTextDraws() {
    ((void(__thiscall*)(CTextDrawSelection*))GetAddress(0x70BC0))(this);
}

void CTextDrawSelection::RawProcess() {
    ((void(__thiscall*)(CTextDrawSelection*))GetAddress(0x70C20))(this);
}

void CTextDrawSelection::Process() {
    ((void(__thiscall*)(CTextDrawSelection*))GetAddress(0x70D20))(this);
}

void CTextDrawSelection::Enable(D3DCOLOR hoveredColor) {
    ((void(__thiscall*)(CTextDrawSelection*, D3DCOLOR))GetAddress(0x70D50))(this, hoveredColor);
}

void CTextDrawSelection::SendNotification() {
    ((void(__thiscall*)(CTextDrawSelection*))GetAddress(0x70D90))(this);
}

void CTextDrawSelection::Disable() {
    ((void(__thiscall*)(CTextDrawSelection*))GetAddress(0x70E30))(this);
}

BOOL CTextDrawSelection::MsgProc(int uMsg, int wParam, int lParam) {
    return ((BOOL(__thiscall*)(CTextDrawSelection*, int, int, int))GetAddress(0x70E80))(this, uMsg, wParam, lParam);
}

SAMPAPI_END
