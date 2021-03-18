/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CScoreboard.h"

SAMPAPI_BEGIN_V037R3_1

SAMPAPI_VAR CScoreboard*& RefScoreboard() {
    return *(CScoreboard**)GetAddress(0x26E894);
}

CScoreboard::CScoreboard(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CScoreboard*, IDirect3DDevice9*))GetAddress(0x6E2C0))(this, pDevice);
}

void CScoreboard::Recalc() {
    ((void(__thiscall*)(CScoreboard*))GetAddress(0x6E1C0))(this);
}

void CScoreboard::GetRect(CRect* pRect) {
    ((void(__thiscall*)(CScoreboard*, CRect*))GetAddress(0x6E220))(this, pRect);
}

void CScoreboard::Close(bool bHideCursor) {
    ((void(__thiscall*)(CScoreboard*, bool))GetAddress(0x6E270))(this, bHideCursor);
}

void CScoreboard::ResetDialogControls(CDXUTDialog* pDialog) {
    ((void(__thiscall*)(CScoreboard*, CDXUTDialog*))GetAddress(0x6E340))(this, pDialog);
}

void CScoreboard::SendNotification() {
    ((void(__thiscall*)(CScoreboard*))GetAddress(0x6E4A0))(this);
}

void CScoreboard::UpdateList() {
    ((void(__thiscall*)(CScoreboard*))GetAddress(0x6E5C0))(this);
}

void CScoreboard::Draw() {
    ((void(__thiscall*)(CScoreboard*))GetAddress(0x6E960))(this);
}

void CScoreboard::Enable() {
    ((void(__thiscall*)(CScoreboard*))GetAddress(0x6EC80))(this);
}

SAMPAPI_END
