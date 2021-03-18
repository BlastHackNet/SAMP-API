/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CInput.h"

SAMPAPI_BEGIN_V037R1

SAMPAPI_VAR CInput*& RefInputBox() {
    return *(CInput**)GetAddress(0x21A0E8);
}

CInput::CInput(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CInput*, IDirect3DDevice9*))GetAddress(0x65730))(this, pDevice);
}

void CInput::GetRect(CRect* pRect) {
    ((void(__thiscall*)(CInput*, CRect*))GetAddress(0x657A0))(this, pRect);
}

void CInput::Open() {
    ((void(__thiscall*)(CInput*))GetAddress(0x657E0))(this);
}

void CInput::Close() {
    ((void(__thiscall*)(CInput*))GetAddress(0x658E0))(this);
}

void CInput::AddRecall(const char* pText) {
    ((void(__thiscall*)(CInput*, const char*))GetAddress(0x65930))(this, pText);
}

void CInput::RecallUp() {
    ((void(__thiscall*)(CInput*))GetAddress(0x65990))(this);
}

void CInput::RecallDown() {
    ((void(__thiscall*)(CInput*))GetAddress(0x65A00))(this);
}

void CInput::EnableCursor() {
    ((void(__thiscall*)(CInput*))GetAddress(0x65A50))(this);
}

CMDPROC CInput::GetCommandHandler(const char* pName) {
    return ((CMDPROC(__thiscall*)(CInput*, const char*))GetAddress(0x65A70))(this, pName);
}

void CInput::SetDefaultCommand(CMDPROC pProc) {
    ((void(__thiscall*)(CInput*, CMDPROC))GetAddress(0x65AC0))(this, pProc);
}

void CInput::AddCommand(const char* pName, CMDPROC pProc) {
    ((void(__thiscall*)(CInput*, const char*, CMDPROC))GetAddress(0x65AD0))(this, pName, pProc);
}

int CInput::MsgProc(int uMsg, int wParam, int lParam) {
    return ((int(__thiscall*)(CInput*, int, int, int))GetAddress(0x65B30))(this, uMsg, wParam, lParam);
}

void CInput::ResetDialogControls(CDXUTDialog* pGameUI) {
    ((void(__thiscall*)(CInput*, CDXUTDialog*))GetAddress(0x65BA0))(this, pGameUI);
}

void CInput::Send(const char* szString) {
    ((void(__thiscall*)(CInput*, const char*))GetAddress(0x65C60))(this, szString);
}

void CInput::ProcessInput() {
    ((void(__thiscall*)(CInput*))GetAddress(0x65D30))(this);
}

SAMPAPI_END
