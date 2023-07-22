/*
	This is a SAMP (0.3.7-R1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CObjectEdit.h"

SAMPAPI_BEGIN_V037R1

SAMPAPI_VAR CObjectEdit*& RefObjectEdit() {
    return *(CObjectEdit**)GetAddress(0x21A0C4);
}

CObjectEdit::CObjectEdit(IDirect3DDevice9* RefDevice) {
    ((CObjectEdit*(__thiscall*)(CObjectEdit*, IDirect3DDevice9*))GetAddress(0x6D580))(this, RefDevice);
}

float CObjectEdit::WorldToScreen(CVector* in, float (&out)[2]) {
    return ((float(__thiscall*)(CObjectEdit*, CVector*, float*))GetAddress(0x6D640))(this, in, out);
}

float CObjectEdit::WorldToScreen(CVector* in, float* out) {
    return ((float(__thiscall*)(CObjectEdit*, CVector*, float*))GetAddress(0x6D640))(this, in, out);
}

int CObjectEdit::RenderAxes(CMatrix* a2, float linesize) {
    return ((int(__thiscall*)(CObjectEdit*, CMatrix*, float))GetAddress(0x6D740))(this, a2, linesize);
}

const char* CObjectEdit::GetRenderChar(BOOL for_big_font) {
    return ((const char*(__thiscall*)(CObjectEdit*, BOOL))GetAddress(0x6D9C0))(this, for_big_font);
}

void CObjectEdit::TryChangeProcessType() {
    ((void(__thiscall*)(CObjectEdit*))GetAddress(0x6DAC0))(this);
}

void CObjectEdit::SetEditMode(ObjectEditMode mode) {
    ((void(__thiscall*)(CObjectEdit*, ObjectEditMode))GetAddress(0x6DC10))(this, mode);
}

void CObjectEdit::ResetMousePos() {
    ((void(__thiscall*)(CObjectEdit*))GetAddress(0x6DDE0))(this);
}

void CObjectEdit::EnterEditObject(ID object_id, BOOL player_object) {
    ((void(__thiscall*)(CObjectEdit*, ID, BOOL))GetAddress(0x6DE40))(this, object_id, player_object);
}

void CObjectEdit::SendEditEndNotification(int response) {
    ((void(__thiscall*)(CObjectEdit*, int))GetAddress(0x6E2D0))(this, response);
}

void CObjectEdit::SendAttachedEditEndNotification(int response) {
    ((void(__thiscall*)(CObjectEdit*, int))GetAddress(0x6E4E0))(this, response);
}

void CObjectEdit::Disable(BOOL result) {
    ((void(__thiscall*)(CObjectEdit*, BOOL))GetAddress(0x6E5E0))(this, result);
}

BOOL CObjectEdit::RenderControlsForObject(CMatrix* object_matrix, float linesize) {
    return ((BOOL(__thiscall*)(CObjectEdit*, CMatrix*, float))GetAddress(0x6E650))(this, object_matrix, linesize);
}

void CObjectEdit::ApplyChanges(ObjectEditProcessType type, float diff) {
    ((void(__thiscall*)(CObjectEdit*, ObjectEditProcessType, float))GetAddress(0x6EE80))(this, type, diff);
}

void CObjectEdit::ProcessMouseMove() {
    ((float(__thiscall*)(CObjectEdit*))GetAddress(0x6EEA0))(this);
}

BOOL CObjectEdit::MsgProc(int uMsg, int wParam, int lParam) {
    return ((BOOL(__thiscall*)(CObjectEdit*, int, int, int))GetAddress(0x6EF70))(this, uMsg, wParam, lParam);
}

void CObjectEdit::Render() {
    ((void(__thiscall*)(CObjectEdit*))GetAddress(0x6F1A0))(this);
}

const char* CObjectEdit::GetMaxSizeChar() {
    return ((const char*(__cdecl*)())GetAddress(0x6D9B0))();
}

SAMPAPI_END