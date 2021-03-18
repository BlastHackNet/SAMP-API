/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CDialog.h"

SAMPAPI_BEGIN_V037R3_1

SAMPAPI_VAR CDialog*& RefDialog() {
    return *(CDialog**)GetAddress(0x26E898);
}

CDialog::CDialog(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CDialog*, IDirect3DDevice9*))GetAddress(0x6ED30))(this, pDevice);
}

void CDialog::GetScreenRect(CRect* pRect) {
    ((void(__thiscall*)(CDialog*, CRect*))GetAddress(0x6EF60))(this, pRect);
}

int CDialog::GetTextScreenLength(const char* szString) {
    return ((int(__thiscall*)(CDialog*, const char*))GetAddress(0x6EF90))(this, szString);
}

void CDialog::Hide() {
    ((void(__thiscall*)(CDialog*))GetAddress(0x6F110))(this);
}

void CDialog::ResetDialogControls(CDXUTDialog* pDialog) {
    ((void(__thiscall*)(CDialog*, CDXUTDialog*))GetAddress(0x6F2D0))(this, pDialog);
}

void CDialog::Show(int nId, int nType, const char* szCaption, const char* szText, const char* szLeftButton, const char* szRightButton, BOOL bServerside) {
    ((void(__thiscall*)(CDialog*, int, int, const char*, const char*, const char*, const char*, BOOL))GetAddress(0x6F8C0))(this, nId, nType, szCaption, szText, szLeftButton, szRightButton, bServerside);
}

void CDialog::Close(char nProcessButton) {
    ((void(__thiscall*)(CDialog*, char))GetAddress(0x6FF40))(this, nProcessButton);
}

void CDialog::Draw() {
    ((void(__thiscall*)(CDialog*))GetAddress(0x6F140))(this);
}

SAMPAPI_END
