/*
        This is a SAMP (0.3.DL-1) API project file.
        Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR

        See more here https://github.com/LUCHARE/SAMP-API

        Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CObjectEdit.h"

SAMPAPI_BEGIN_V03DL_1

CObjectEdit*& RefObjectEdit() {
  return *((CObjectEdit**)GetAddress(0x2AC9F0));
}

CObjectEdit::CObjectEdit(IDirect3DDevice9* RefDevice) {
  ((CObjectEdit*(__thiscall*)(CObjectEdit*, IDirect3DDevice9*))GetAddress(0x71600))(this, RefDevice);
}

float CObjectEdit::WorldToScreen(CVector* in, float* out) {
  return ((float(__thiscall*)(CObjectEdit*, CVector*, float*))GetAddress(0x716C0))(this, in, out);
}

int CObjectEdit::RenderAxes(CMatrix* a2, float linesize) {
  return ((int(__thiscall*)(CObjectEdit*, CMatrix*, float))GetAddress(0x717C0))(this, a2, linesize);
}

const char* CObjectEdit::GetRenderChar(BOOL for_big_font) {
  return ((const char*(__thiscall*)(CObjectEdit*, BOOL))GetAddress(0x71A40))(this, for_big_font);
}

void CObjectEdit::TryChangeProcessType() {
  ((void(__thiscall*)(CObjectEdit*))GetAddress(0x71B40))(this);
}

void CObjectEdit::SetEditMode(ObjectEditMode mode) {
  ((void(__thiscall*)(CObjectEdit*, ObjectEditMode))GetAddress(0x71C90))(this, mode);
}

void CObjectEdit::ResetMousePos() {
  ((void(__thiscall*)(CObjectEdit*))GetAddress(0x71E60))(this);
}

void CObjectEdit::EnterEditObject(ID object_id, BOOL player_object) {
  ((void(__thiscall*)(CObjectEdit*, ID, BOOL))GetAddress(0x71EC0))(this, object_id, player_object);
}

void CObjectEdit::SendEditEndNotification(int response) {
  ((void(__thiscall*)(CObjectEdit*, int))GetAddress(0x72350))(this, response);
}

void CObjectEdit::SendAttachedEditEndNotification(int response) {
  ((void(__thiscall*)(CObjectEdit*, int))GetAddress(0x72560))(this, response);
}

void CObjectEdit::Disable(BOOL result) {
  ((void(__thiscall*)(CObjectEdit*, BOOL))GetAddress(0x72660))(this, result);
}

BOOL CObjectEdit::RenderControlsForObject(CMatrix* object_matrix, float linesize) {
  return ((BOOL(__thiscall*)(CObjectEdit*, CMatrix*, float))GetAddress(0x726D0))(this, object_matrix, linesize);
}

void CObjectEdit::ApplyChanges(ObjectEditProcessType type, float diff) {
  ((void(__thiscall*)(CObjectEdit*, ObjectEditProcessType, float))GetAddress(0x72F00))(this, type, diff);
}

void CObjectEdit::ProcessMouseMove() {
  ((float(__thiscall*)(CObjectEdit*))GetAddress(0x72F20))(this);
}

BOOL CObjectEdit::MsgProc(int uMsg, int wParam, int lParam) {
  return ((BOOL(__thiscall*)(CObjectEdit*, int, int, int))GetAddress(0x72FF0))(this, uMsg, wParam, lParam);
}

void CObjectEdit::Render() {
  ((void(__thiscall*)(CObjectEdit*))GetAddress(0x73220))(this);
}

const char* CObjectEdit::GetMaxSizeChar() {
  return ((const char*(__cdecl*)())GetAddress(0x71A30))();
}

SAMPAPI_END