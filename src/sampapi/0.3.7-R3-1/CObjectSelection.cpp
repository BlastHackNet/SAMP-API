/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CObjectSelection.h"

SAMPAPI_BEGIN_V037R3_1

SAMPAPI_VAR CObjectSelection*& RefObjectSelection() {
    return *(CObjectSelection**)GetAddress(0x26E8AC);
}

CObjectSelection::CObjectSelection() {
    ((void(__thiscall*)(CObjectSelection*))GetAddress(0x6D290))(this);
}

ID CObjectSelection::DefineObject() {
    return ((ID(__thiscall*)(CObjectSelection*))GetAddress(0x6D2A0))(this);
}

void CObjectSelection::DrawLabels() {
    ((void(__thiscall*)(CObjectSelection*))GetAddress(0x6D2F0))(this);
}

void CObjectSelection::Enable(BOOL bEnable) {
    ((void(__thiscall*)(CObjectSelection*, BOOL))GetAddress(0x6D410))(this, bEnable);
}

void CObjectSelection::Draw() {
    ((void(__thiscall*)(CObjectSelection*))GetAddress(0x6D490))(this);
}

void CObjectSelection::SendNotification() {
    ((void(__thiscall*)(CObjectSelection*))GetAddress(0x6D560))(this);
}

BOOL CObjectSelection::MsgProc(int uMsg, int wParam, int lParam) {
    return ((BOOL(__thiscall*)(CObjectSelection*, int, int, int))GetAddress(0x6D6D0))(this, uMsg, wParam, lParam);
}

SAMPAPI_END
