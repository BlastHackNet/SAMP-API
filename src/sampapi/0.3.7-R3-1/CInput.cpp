/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CInput.h"

SAMPAPI_BEGIN_V037R3_1

SAMPAPI_VAR CInput*& RefInputBox() {
    return *(CInput**)GetAddress(0x26E8CC);
}

CInput::CInput(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CInput*, IDirect3DDevice9*))GetAddress(0x68C60))(this, pDevice);
}

void CInput::GetRect(CRect* pRect) {
    ((void(__thiscall*)(CInput*, CRect*))GetAddress(0x68CD0))(this, pRect);
}

void CInput::Open() {
    ((void(__thiscall*)(CInput*))GetAddress(0x68D10))(this);
}

void CInput::Close() {
    ((void(__thiscall*)(CInput*))GetAddress(0x68E10))(this);
}

void CInput::AddRecall(const char* szString) {
    ((void(__thiscall*)(CInput*, const char*))GetAddress(0x68E60))(this, szString);
}

void CInput::RecallUp() {
    ((void(__thiscall*)(CInput*))GetAddress(0x68EC0))(this);
}

void CInput::RecallDown() {
    ((void(__thiscall*)(CInput*))GetAddress(0x68F30))(this);
}

void CInput::EnableCursor() {
    ((void(__thiscall*)(CInput*))GetAddress(0x68F80))(this);
}

CMDPROC CInput::GetCommandHandler(const char* szName) {
    return ((CMDPROC(__thiscall*)(CInput*, const char*))GetAddress(0x68FA0))(this, szName);
}

void CInput::SetDefaultCommand(CMDPROC proc) {
    ((void(__thiscall*)(CInput*, CMDPROC))GetAddress(0x68FF0))(this, proc);
}

void CInput::AddCommand(const char* szName, CMDPROC handler) {
    ((void(__thiscall*)(CInput*, const char*, CMDPROC))GetAddress(0x69000))(this, szName, handler);
}

BOOL CInput::MsgProc(int uMsg, int wParam, int lParam) {
    return ((BOOL(__thiscall*)(CInput*, int, int, int))GetAddress(0x69060))(this, uMsg, wParam, lParam);
}

void CInput::ResetDialogControls(CDXUTDialog* pGameUi) {
    ((void(__thiscall*)(CInput*, CDXUTDialog*))GetAddress(0x690D0))(this, pGameUi);
}

void CInput::Send(const char* szString) {
    ((void(__thiscall*)(CInput*, const char*))GetAddress(0x69190))(this, szString);
}

void CInput::ProcessInput() {
    ((void(__thiscall*)(CInput*))GetAddress(0x69260))(this);
}

SAMPAPI_END
