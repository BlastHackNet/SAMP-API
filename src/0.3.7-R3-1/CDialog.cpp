/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CDialog.h"

SAMP::CDialog *&SAMP::pDialog = *(SAMP::CDialog **)SAMP_ADDROF(0x26E898);

SAMP::CDialog::CDialog(IDirect3DDevice9 *pDevice) {
	((void(__thiscall *)(CDialog *, IDirect3DDevice9 *))SAMP_ADDROF(0x6ED30))(this, pDevice);
}

void SAMP::CDialog::GetScreenRect(CRect *pRect) {
	((void(__thiscall *)(CDialog *, CRect *))SAMP_ADDROF(0x6EF60))(this, pRect);
}

int SAMP::CDialog::GetTextScreenLength(const char *szString) {
	return ((int(__thiscall *)(CDialog *, const char *))SAMP_ADDROF(0x6EF90))(this, szString);
}

void SAMP::CDialog::Hide() {
	((void(__thiscall *)(CDialog *))SAMP_ADDROF(0x6F110))(this);
}

void SAMP::CDialog::ResetDialogControls(CDXUTDialog *pDialog) {
	((void(__thiscall *)(CDialog *, CDXUTDialog *))SAMP_ADDROF(0x6F2D0))(this, pDialog);
}

void SAMP::CDialog::Show(int nId, int nType, const char *szCaption, const char *szText, const char *szLeftButton, const char *szRightButton, BOOL bServerside) {
	((void(__thiscall *)(CDialog *, int, int, const char *, const char *, const char *, const char *, BOOL))SAMP_ADDROF(0x6F8C0))(this, nId, nType, szCaption, szText, szLeftButton, szRightButton, bServerside);
}

void SAMP::CDialog::Close(char nProcessButton) {
	((void(__thiscall *)(CDialog *, char))SAMP_ADDROF(0x6FF40))(this, nProcessButton);
}

void SAMP::CDialog::Draw() {
	((void(__thiscall *)(CDialog *))SAMP_ADDROF(0x6F140))(this);
}