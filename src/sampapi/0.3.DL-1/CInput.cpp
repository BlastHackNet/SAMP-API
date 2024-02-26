/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CInput.h"

SAMPAPI_BEGIN_V03DL_1

SAMPAPI_VAR CInput*& RefInputBox() {
    return *(CInput**)GetAddress(0x2ACA14);
}

CInput::CInput(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CInput*, IDirect3DDevice9*))GetAddress(0x68E10))(this, pDevice);
}

void CInput::GetRect(CRect* pRect) {
    ((void(__thiscall*)(CInput*, CRect*))GetAddress(0x68E80))(this, pRect);
}

void CInput::Open() {
    ((void(__thiscall*)(CInput*))GetAddress(0x68EC0))(this);
}

void CInput::Close() {
    ((void(__thiscall*)(CInput*))GetAddress(0x68FC0))(this);
}

void CInput::AddRecall(const char* szString) {
    ((void(__thiscall*)(CInput*, const char*))GetAddress(0x69010))(this, szString);
}

void CInput::RecallUp() {
    ((void(__thiscall*)(CInput*))GetAddress(0x69070))(this);
}

void CInput::RecallDown() {
    ((void(__thiscall*)(CInput*))GetAddress(0x690E0))(this);
}

void CInput::EnableCursor() {
    ((void(__thiscall*)(CInput*))GetAddress(0x69130))(this);
}

CMDPROC CInput::GetCommandHandler(const char* szName) {
    return ((CMDPROC(__thiscall*)(CInput*, const char*))GetAddress(0x69150))(this, szName);
}

void CInput::SetDefaultCommand(CMDPROC proc) {
    ((void(__thiscall*)(CInput*, CMDPROC))GetAddress(0x691A0))(this, proc);
}

void CInput::AddCommand(const char* szName, CMDPROC handler) {
    ((void(__thiscall*)(CInput*, const char*, CMDPROC))GetAddress(0x691B0))(this, szName, handler);
}

BOOL CInput::MsgProc(int uMsg, int wParam, int lParam) {
    return ((BOOL(__thiscall*)(CInput*, int, int, int))GetAddress(0x69210))(this, uMsg, wParam, lParam);
}

void CInput::ResetDialogControls(CDXUTDialog* pGameUi) {
    ((void(__thiscall*)(CInput*, CDXUTDialog*))GetAddress(0x69280))(this, pGameUi);
}

void CInput::Send(const char* szString) {
    ((void(__thiscall*)(CInput*, const char*))GetAddress(0x69340))(this, szString);
}

void CInput::ProcessInput() {
    ((void(__thiscall*)(CInput*))GetAddress(0x69410))(this);
}

SAMPAPI_END
