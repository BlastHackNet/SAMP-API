/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CObjectSelection.h"

SAMPAPI_BEGIN_V03DL_1

SAMPAPI_VAR CObjectSelection*& RefObjectSelection() {
    return *(CObjectSelection**)GetAddress(0x2AC9F4);
}

CObjectSelection::CObjectSelection() {
    ((void(__thiscall*)(CObjectSelection*))GetAddress(0x6D440))(this);
}

ID CObjectSelection::DefineObject() {
    return ((ID(__thiscall*)(CObjectSelection*))GetAddress(0x6D450))(this);
}

void CObjectSelection::DrawLabels() {
    ((void(__thiscall*)(CObjectSelection*))GetAddress(0x6D4A0))(this);
}

void CObjectSelection::Enable(BOOL bEnable) {
    ((void(__thiscall*)(CObjectSelection*, BOOL))GetAddress(0x6D5C0))(this, bEnable);
}

void CObjectSelection::Draw() {
    ((void(__thiscall*)(CObjectSelection*))GetAddress(0x6D640))(this);
}

void CObjectSelection::SendNotification() {
    ((void(__thiscall*)(CObjectSelection*))GetAddress(0x6D710))(this);
}

BOOL CObjectSelection::MsgProc(int uMsg, int wParam, int lParam) {
    return ((BOOL(__thiscall*)(CObjectSelection*, int, int, int))GetAddress(0x6D880))(this, uMsg, wParam, lParam);
}

SAMPAPI_END
