/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CScoreboard.h"

SAMPAPI_BEGIN_V037R5_1

SAMPAPI_VAR CScoreboard*& RefScoreboard() {
    return *(CScoreboard**)GetAddress(0x26EB4C);
}

CScoreboard::CScoreboard(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CScoreboard*, IDirect3DDevice9*))GetAddress(0x6EA30))(this, pDevice);
}

void CScoreboard::Recalc() {
    ((void(__thiscall*)(CScoreboard*))GetAddress(0x6E930))(this);
}

void CScoreboard::GetRect(CRect* pRect) {
    ((void(__thiscall*)(CScoreboard*, CRect*))GetAddress(0x6E990))(this, pRect);
}

void CScoreboard::Close(bool bHideCursor) {
    ((void(__thiscall*)(CScoreboard*, bool))GetAddress(0x6E9E0))(this, bHideCursor);
}

void CScoreboard::ResetDialogControls(CDXUTDialog* pDialog) {
    ((void(__thiscall*)(CScoreboard*, CDXUTDialog*))GetAddress(0x6EAB0))(this, pDialog);
}

void CScoreboard::SendNotification() {
    ((void(__thiscall*)(CScoreboard*))GetAddress(0x6EC10))(this);
}

void CScoreboard::UpdateList() {
    ((void(__thiscall*)(CScoreboard*))GetAddress(0x6ED30))(this);
}

void CScoreboard::Draw() {
    ((void(__thiscall*)(CScoreboard*))GetAddress(0x6F0B0))(this);
}

void CScoreboard::Enable() {
    ((void(__thiscall*)(CScoreboard*))GetAddress(0x6F3D0))(this);
}

SAMPAPI_END
