/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CInput.h"

SAMPAPI_BEGIN_V037R5_1

SAMPAPI_VAR CInput*& RefInputBox() {
    return *(CInput**)GetAddress(0x26EB84);
}

CInput::CInput(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CInput*, IDirect3DDevice9*))GetAddress(0x693D0))(this, pDevice);
}

void CInput::GetRect(CRect* pRect) {
    ((void(__thiscall*)(CInput*, CRect*))GetAddress(0x69440))(this, pRect);
}

void CInput::Open() {
    ((void(__thiscall*)(CInput*))GetAddress(0x69480))(this);
}

void CInput::Close() {
    ((void(__thiscall*)(CInput*))GetAddress(0x69580))(this);
}

void CInput::AddRecall(const char* szString) {
    ((void(__thiscall*)(CInput*, const char*))GetAddress(0x695D0))(this, szString);
}

void CInput::RecallUp() {
    ((void(__thiscall*)(CInput*))GetAddress(0x69630))(this);
}

void CInput::RecallDown() {
    ((void(__thiscall*)(CInput*))GetAddress(0x696A0))(this);
}

void CInput::EnableCursor() {
    ((void(__thiscall*)(CInput*))GetAddress(0x696F0))(this);
}

CMDPROC CInput::GetCommandHandler(const char* szName) {
    return ((CMDPROC(__thiscall*)(CInput*, const char*))GetAddress(0x69710))(this, szName);
}

void CInput::SetDefaultCommand(CMDPROC proc) {
    ((void(__thiscall*)(CInput*, CMDPROC))GetAddress(0x69760))(this, proc);
}

void CInput::AddCommand(const char* szName, CMDPROC handler) {
    ((void(__thiscall*)(CInput*, const char*, CMDPROC))GetAddress(0x69770))(this, szName, handler);
}

BOOL CInput::MsgProc(int uMsg, int wParam, int lParam) {
    return ((BOOL(__thiscall*)(CInput*, int, int, int))GetAddress(0x697D0))(this, uMsg, wParam, lParam);
}

void CInput::ResetDialogControls(CDXUTDialog* pGameUi) {
    ((void(__thiscall*)(CInput*, CDXUTDialog*))GetAddress(0x69840))(this, pGameUi);
}

void CInput::Send(const char* szString) {
    ((void(__thiscall*)(CInput*, const char*))GetAddress(0x69900))(this, szString);
}

void CInput::ProcessInput() {
    ((void(__thiscall*)(CInput*))GetAddress(0x699D0))(this);
}

SAMPAPI_END
