/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CScoreboard.h"

SAMPAPI_BEGIN_V03DL_1

SAMPAPI_VAR CScoreboard*& RefScoreboard() {
    return *(CScoreboard**)GetAddress(0x2AC9DC);
}

CScoreboard::CScoreboard(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CScoreboard*, IDirect3DDevice9*))GetAddress(0x6E460))(this, pDevice);
}

void CScoreboard::Recalc() {
    ((void(__thiscall*)(CScoreboard*))GetAddress(0x6E360))(this);
}

void CScoreboard::GetRect(CRect* pRect) {
    ((void(__thiscall*)(CScoreboard*, CRect*))GetAddress(0x6E3C0))(this, pRect);
}

void CScoreboard::Close(bool bHideCursor) {
    ((void(__thiscall*)(CScoreboard*, bool))GetAddress(0x6E410))(this, bHideCursor);
}

void CScoreboard::ResetDialogControls(CDXUTDialog* pDialog) {
    ((void(__thiscall*)(CScoreboard*, CDXUTDialog*))GetAddress(0x6E4E0))(this, pDialog);
}

void CScoreboard::SendNotification() {
    ((void(__thiscall*)(CScoreboard*))GetAddress(0x6E640))(this);
}

void CScoreboard::UpdateList() {
    ((void(__thiscall*)(CScoreboard*))GetAddress(0x6E760))(this);
}

void CScoreboard::Draw() {
    ((void(__thiscall*)(CScoreboard*))GetAddress(0x6EAF0))(this);
}

void CScoreboard::Enable() {
    ((void(__thiscall*)(CScoreboard*))GetAddress(0x6EE10))(this);
}

SAMPAPI_END
