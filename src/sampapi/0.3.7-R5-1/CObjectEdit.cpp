/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CObjectEdit.h"

SAMPAPI_BEGIN_V037R5_1

SAMPAPI_VAR CObjectEdit*& RefObjectEdit() {
    return *(CObjectEdit**)GetAddress(0x26EB60);
}

CObjectEdit::CObjectEdit(IDirect3DDevice9* RefDevice) {
    ((CObjectEdit*(__thiscall*)(CObjectEdit*, IDirect3DDevice9*))GetAddress(0x71B60))(this, RefDevice);
}

float CObjectEdit::WorldToScreen(CVector* in, float* out) {
    return ((float(__thiscall*)(CObjectEdit*, CVector*, float*))GetAddress(0x71C20))(this, in, out);
}

int CObjectEdit::RenderAxes(CMatrix* a2, float linesize) {
    return ((int(__thiscall*)(CObjectEdit*, CMatrix*, float))GetAddress(0x71D20))(this, a2, linesize);
}

const char* CObjectEdit::GetRenderChar(BOOL for_big_font) {
    return ((const char*(__thiscall*)(CObjectEdit*, BOOL))GetAddress(0x71FA0))(this, for_big_font);
}

void CObjectEdit::TryChangeProcessType() {
    ((void(__thiscall*)(CObjectEdit*))GetAddress(0x720A0))(this);
}

void CObjectEdit::SetEditMode(ObjectEditMode mode) {
    ((void(__thiscall*)(CObjectEdit*, ObjectEditMode))GetAddress(0x721F0))(this, mode);
}

void CObjectEdit::ResetMousePos() {
    ((void(__thiscall*)(CObjectEdit*))GetAddress(0x723C0))(this);
}

void CObjectEdit::EnterEditObject(ID object_id, BOOL player_object) {
    ((void(__thiscall*)(CObjectEdit*, ID, BOOL))GetAddress(0x72420))(this, object_id, player_object);
}

void CObjectEdit::SendEditEndNotification(int response) {
    ((void(__thiscall*)(CObjectEdit*, int))GetAddress(0x728B0))(this, response);
}

void CObjectEdit::SendAttachedEditEndNotification(int response) {
    ((void(__thiscall*)(CObjectEdit*, int))GetAddress(0x72AC0))(this, response);
}

void CObjectEdit::Disable(BOOL result) {
    ((void(__thiscall*)(CObjectEdit*, BOOL))GetAddress(0x72BC0))(this, result);
}

BOOL CObjectEdit::RenderControlsForObject(CMatrix* object_matrix, float linesize) {
    return ((BOOL(__thiscall*)(CObjectEdit*, CMatrix*, float))GetAddress(0x72C30))(this, object_matrix, linesize);
}

void CObjectEdit::ApplyChanges(ObjectEditProcessType type, float diff) {
    ((void(__thiscall*)(CObjectEdit*, ObjectEditProcessType, float))GetAddress(0x73460))(this, type, diff);
}

void CObjectEdit::ProcessMouseMove() {
    ((float(__thiscall*)(CObjectEdit*))GetAddress(0x73480))(this);
}

BOOL CObjectEdit::MsgProc(int uMsg, int wParam, int lParam) {
    return ((BOOL(__thiscall*)(CObjectEdit*, int, int, int))GetAddress(0x73550))(this, uMsg, wParam, lParam);
}

void CObjectEdit::Render() {
    ((void(__thiscall*)(CObjectEdit*))GetAddress(0x73780))(this);
}

const char* CObjectEdit::GetMaxSizeChar() {
    return ((const char*(__cdecl*)())GetAddress(0x71F90))();
}

SAMPAPI_END