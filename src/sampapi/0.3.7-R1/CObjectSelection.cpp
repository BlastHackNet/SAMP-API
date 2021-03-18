/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CObjectSelection.h"

SAMPAPI_BEGIN_V037R1

SAMPAPI_VAR CObjectSelection*& RefObjectSelection() {
    return *(CObjectSelection**)GetAddress(0x21A0C8);
}

CObjectSelection::CObjectSelection() {
    ((void(__thiscall*)(CObjectSelection*))GetAddress(0x69320))(this);
}

ID CObjectSelection::DefineObject() {
    return ((ID(__thiscall*)(CObjectSelection*))GetAddress(0x69330))(this);
}

void CObjectSelection::DrawLabels() {
    ((void(__thiscall*)(CObjectSelection*))GetAddress(0x69380))(this);
}

void CObjectSelection::Enable(BOOL bEnable) {
    ((void(__thiscall*)(CObjectSelection*, BOOL))GetAddress(0x694A0))(this, bEnable);
}

void CObjectSelection::Draw() {
    ((void(__thiscall*)(CObjectSelection*))GetAddress(0x69520))(this);
}

void CObjectSelection::SendNotification() {
    ((void(__thiscall*)(CObjectSelection*))GetAddress(0x695F0))(this);
}

BOOL CObjectSelection::MsgProc(int uMsg, int wParam, int lParam) {
    return ((BOOL(__thiscall*)(CObjectSelection*, int, int, int))GetAddress(0x69760))(this, uMsg, wParam, lParam);
}

SAMPAPI_END
