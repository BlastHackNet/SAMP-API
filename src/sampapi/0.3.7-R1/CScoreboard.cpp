/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CScoreboard.h"

SAMPAPI_BEGIN_V037R1

SAMPAPI_VAR CScoreboard*& RefScoreboard() {
    return *(CScoreboard**)GetAddress(0x21A0B4);
}

CScoreboard::CScoreboard(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CScoreboard*, IDirect3DDevice9*))GetAddress(0x6A370))(this, pDevice);
}

void CScoreboard::GetRect(CRect* pRect) {
    ((void(__thiscall*)(CScoreboard*, CRect*))GetAddress(0x6A2D0))(this, pRect);
}

void CScoreboard::ResetDialogControls(CDXUTDialog* pDialog) {
    ((void(__thiscall*)(CScoreboard*, CDXUTDialog*))GetAddress(0x6A3F0))(this, pDialog);
}

void CScoreboard::Enable() {
    ((void(__thiscall*)(CScoreboard*))GetAddress(0x6AD30))(this);
}

void CScoreboard::Close(bool bHideCursor) {
    ((void(__thiscall*)(CScoreboard*, bool))GetAddress(0x6A320))(this, bHideCursor);
}

void CScoreboard::SendNotification() {
    ((void(__thiscall*)(CScoreboard*))GetAddress(0x6A550))(this);
}

void CScoreboard::Recalc() {
    ((void(__thiscall*)(CScoreboard*))GetAddress(0x6A270))(this);
}

void CScoreboard::Draw() {
    ((void(__thiscall*)(CScoreboard*))GetAddress(0x6AA10))(this);
}

void CScoreboard::UpdateList() {
    ((void(__thiscall*)(CScoreboard*))GetAddress(0x6A680))(this);
}

SAMPAPI_END
