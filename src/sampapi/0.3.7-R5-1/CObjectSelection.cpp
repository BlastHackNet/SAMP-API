/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CObjectSelection.h"

SAMPAPI_BEGIN_V037R5_1

SAMPAPI_VAR CObjectSelection*& RefObjectSelection() {
    return *(CObjectSelection**)GetAddress(0x26EB64);
}

CObjectSelection::CObjectSelection() {
    ((void(__thiscall*)(CObjectSelection*))GetAddress(0x6DA00))(this);
}

ID CObjectSelection::DefineObject() {
    return ((ID(__thiscall*)(CObjectSelection*))GetAddress(0x6DA10))(this);
}

void CObjectSelection::DrawLabels() {
    ((void(__thiscall*)(CObjectSelection*))GetAddress(0x6DA60))(this);
}

void CObjectSelection::Enable(BOOL bEnable) {
    ((void(__thiscall*)(CObjectSelection*, BOOL))GetAddress(0x6DB80))(this, bEnable);
}

void CObjectSelection::Draw() {
    ((void(__thiscall*)(CObjectSelection*))GetAddress(0x6DC00))(this);
}

void CObjectSelection::SendNotification() {
    ((void(__thiscall*)(CObjectSelection*))GetAddress(0x6DCD0))(this);
}

BOOL CObjectSelection::MsgProc(int uMsg, int wParam, int lParam) {
    return ((BOOL(__thiscall*)(CObjectSelection*, int, int, int))GetAddress(0x6DE40))(this, uMsg, wParam, lParam);
}

SAMPAPI_END
