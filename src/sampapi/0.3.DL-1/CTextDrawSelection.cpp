/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CTextDrawSelection.h"

SAMPAPI_BEGIN_V03DL_1

SAMPAPI_VAR CTextDrawSelection*& RefTextDrawSelection() {
    return *(CTextDrawSelection**)GetAddress(0x2AC9F8);
}

void CTextDrawSelection::ResetTextDraws() {
    ((void(__thiscall*)(CTextDrawSelection*))GetAddress(0x70D50))(this);
}

void CTextDrawSelection::RawProcess() {
    ((void(__thiscall*)(CTextDrawSelection*))GetAddress(0x70DB0))(this);
}

void CTextDrawSelection::Process() {
    ((void(__thiscall*)(CTextDrawSelection*))GetAddress(0x70EB0))(this);
}

void CTextDrawSelection::Enable(D3DCOLOR hoveredColor) {
    ((void(__thiscall*)(CTextDrawSelection*, D3DCOLOR))GetAddress(0x70EE0))(this, hoveredColor);
}

void CTextDrawSelection::SendNotification() {
    ((void(__thiscall*)(CTextDrawSelection*))GetAddress(0x70F20))(this);
}

void CTextDrawSelection::Disable() {
    ((void(__thiscall*)(CTextDrawSelection*))GetAddress(0x70FC0))(this);
}

BOOL CTextDrawSelection::MsgProc(int uMsg, int wParam, int lParam) {
    return ((BOOL(__thiscall*)(CTextDrawSelection*, int, int, int))GetAddress(0x71010))(this, uMsg, wParam, lParam);
}

SAMPAPI_END
