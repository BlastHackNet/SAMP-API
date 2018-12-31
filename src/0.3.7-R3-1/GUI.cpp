/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "GUI.h"

CDXUTDialogResourceManager *&SAMP::GUI::pResourceMgr = *(CDXUTDialogResourceManager **)SAMP_ADDROF(0x26E968);
CDXUTDialog *&SAMP::GUI::pGameUi = *(CDXUTDialog **)SAMP_ADDROF(0x26E96C);
CDXUTDialog *&SAMP::GUI::pScoreboard = *(CDXUTDialog **)SAMP_ADDROF(0x26E970);
CDXUTDialog *&SAMP::GUI::pDialog = *(CDXUTDialog **)SAMP_ADDROF(0x26E978);
CDXUTDialog *&SAMP::GUI::pClassSelection = *(CDXUTDialog **)SAMP_ADDROF(0x26E974);
IDirect3DSurface9 *&SAMP::GUI::pCursor = *(IDirect3DSurface9 **)SAMP_ADDROF(0x26E984);
IDirect3DDevice9 *&SAMP::GUI::pDevice = *(IDirect3DDevice9 **)SAMP_ADDROF(0x26E888);

void SAMP::GUI::Initialize() {
	((void(__cdecl *)())SAMP_ADDROF(0xC5EB0))();
}

void SAMP::GUI::OnLostDevice() {
	((void(__cdecl *)())SAMP_ADDROF(0xC47D0))();
}

void SAMP::GUI::OnResetDevice() {
	((void(__cdecl *)())SAMP_ADDROF(0xC4A30))();
}

void SAMP::GUI::GameUIEventHandler(unsigned int nEvent, int nControlId, CDXUTControl *pControl, void *pUserContext) {
	((void(__stdcall *)(unsigned int, int, CDXUTControl *, void *))SAMP_ADDROF(0xC5DC0))(nEvent, nControlId, pControl, pUserContext);
}

void SAMP::GUI::ScoreboardEventHandler(unsigned int nEvent, int nControlId, CDXUTControl *pControl, void *pUserContext) {
	((void(__stdcall *)(unsigned int, int, CDXUTControl *, void *))SAMP_ADDROF(0xC5E00))(nEvent, nControlId, pControl, pUserContext);
}

void SAMP::GUI::DialogEventHandler(unsigned int nEvent, int nControlId, CDXUTControl *pControl, void *pUserContext) {
	((void(__stdcall *)(unsigned int, int, CDXUTControl *, void *))SAMP_ADDROF(0xC5D30))(nEvent, nControlId, pControl, pUserContext);
}

void SAMP::GUI::ClassSelectionEventHandler(unsigned int nEvent, int nControlId, CDXUTControl *pControl, void *pUserContext) {
	((void(__stdcall *)(unsigned int, int, CDXUTControl *, void *))SAMP_ADDROF(0xC5E30))(nEvent, nControlId, pControl, pUserContext);
}