/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "GUI.h"

CDXUTDialogResourceManager *&SAMP::GUI::pResourceMgr = *(CDXUTDialogResourceManager **)SAMP_ADDROF(0x21A180);
CDXUTDialog *&SAMP::GUI::pGameUi = *(CDXUTDialog **)SAMP_ADDROF(0x21A184);
CDXUTDialog *&SAMP::GUI::pScoreboard = *(CDXUTDialog **)SAMP_ADDROF(0x21A188);
CDXUTDialog *&SAMP::GUI::pDialog = *(CDXUTDialog **)SAMP_ADDROF(0x21A190);
CDXUTDialog *&SAMP::GUI::pClassSelection = *(CDXUTDialog **)SAMP_ADDROF(0x21A18C);
IDirect3DSurface9 *&SAMP::GUI::pCursor = *(IDirect3DSurface9 **)SAMP_ADDROF(0x21A198);
IDirect3DDevice9 *&SAMP::GUI::pDevice = *(IDirect3DDevice9 **)SAMP_ADDROF(0x21A0A8);

void SAMP::GUI::Initialize() {
	((void(__cdecl *)())SAMP_ADDROF(0xB3FC0))();
}

void SAMP::GUI::OnLostDevice() {
	((void(__cdecl *)())SAMP_ADDROF(0xB2980))();
}

void SAMP::GUI::OnResetDevice() {
	((void(__cdecl *)())SAMP_ADDROF(0xB2BE0))();
}

void SAMP::GUI::GameUIEventHandler(unsigned int nEvent, int nControlId, CDXUTControl *pControl, void *pUserContext) {
	((void(__stdcall *)(unsigned int, int, CDXUTControl *, void *))SAMP_ADDROF(0xB3EE0))(nEvent, nControlId, pControl, pUserContext);
}

void SAMP::GUI::ClassSelectorEventHandler(unsigned int nEvent, int nControlId, CDXUTControl *pControl, void *pUserContext) {
	((void(__stdcall *)(unsigned int, int, CDXUTControl *, void *))SAMP_ADDROF(0xB3F50))(nEvent, nControlId, pControl, pUserContext);
}

void SAMP::GUI::ScoreboardEventHandler(unsigned int nEvent, int nControlId, CDXUTControl *pControl, void *pUserContext) {
	((void(__stdcall *)(unsigned int, int, CDXUTControl *, void *))SAMP_ADDROF(0xB3F20))(nEvent, nControlId, pControl, pUserContext);
}

void SAMP::GUI::DialogEventHandler(unsigned int nEvent, int nControlId, CDXUTControl *pControl, void *pUserContext) {
	((void(__stdcall *)(unsigned int, int, CDXUTControl *, void *))SAMP_ADDROF(0xB3E50))(nEvent, nControlId, pControl, pUserContext);
}