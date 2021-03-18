/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CDialog.h"

SAMPAPI_BEGIN_V037R1

SAMPAPI_VAR CDialog*& RefDialog() {
    return *(CDialog**)GetAddress(0x21A0B8);
}

CDialog::CDialog(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CDialog*, IDirect3DDevice9*))GetAddress(0x6AE30))(this, pDevice);
}

void CDialog::Hide() {
    ((void(__thiscall*)(CDialog*))GetAddress(0x6B210))(this);
}

void CDialog::Close(char nProcessButton) {
    ((void(__thiscall*)(CDialog*, char))GetAddress(0x6C040))(this, nProcessButton);
}

void CDialog::Draw() {
    ((void(__thiscall*)(CDialog*))GetAddress(0x6B240))(this);
}

void CDialog::Show(int nId, int nType, const char* szCaption, const char* szText, const char* szLeftButton, const char* szRightButton, BOOL bServerside) {
    ((void(__thiscall*)(CDialog*, int, int, const char*, const char*, const char*, const char*, BOOL))GetAddress(0x6B9C0))(this, nId, nType, szCaption, szText, szLeftButton, szRightButton, bServerside);
}

void CDialog::GetScreenRect(CRect* pRect) {
    ((void(__thiscall*)(CDialog*, CRect*))GetAddress(0x6B060))(this, pRect);
}

void CDialog::UpdateRects() {
    ((void(__thiscall*)(CDialog*))GetAddress(0x6AEB0))(this);
}

int CDialog::GetTextScreenLength(const char* pText) {
    return ((int(__thiscall*)(CDialog*, const char*))GetAddress(0x6B0D0))(this, pText);
}

void CDialog::ResetDialogControls(CDXUTDialog* pDialog) {
    return ((void(__thiscall*)(CDialog*, CDXUTDialog*))GetAddress(0x6B3D0))(this, pDialog);
}

SAMPAPI_END
