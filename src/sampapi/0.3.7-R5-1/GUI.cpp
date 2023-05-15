/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/GUI.h"

SAMPAPI_BEGIN_V037R5_1

SAMPAPI_VAR CDXUTDialogResourceManager*& GUI::RefResourceMgr() {
    return *(CDXUTDialogResourceManager**)GetAddress(0x26EC20);
}

SAMPAPI_VAR CDXUTDialog*& GUI::RefGameUi() {
    return *(CDXUTDialog**)GetAddress(0x26EC24);
}

SAMPAPI_VAR CDXUTDialog*& GUI::RefScoreboard() {
    return *(CDXUTDialog**)GetAddress(0x26EC28);
}

SAMPAPI_VAR CDXUTDialog*& GUI::RefDialog() {
    return *(CDXUTDialog**)GetAddress(0x26EC30);
}

SAMPAPI_VAR CDXUTDialog*& GUI::RefClassSelection() {
    return *(CDXUTDialog**)GetAddress(0x26EC2C);
}

SAMPAPI_VAR IDirect3DSurface9*& GUI::RefCursor() {
    return *(IDirect3DSurface9**)GetAddress(0x26EC3C);
}

SAMPAPI_VAR IDirect3DDevice9*& GUI::RefDevice() {
    return *(IDirect3DDevice9**)GetAddress(0x26EB40);
}

void GUI::Initialize() {
    ((void(__cdecl*)())GetAddress(0xC5620))();
}

void GUI::OnLostDevice() {
    ((void(__cdecl*)())GetAddress(0xC3F50))();
}

void GUI::OnResetDevice() {
    ((void(__cdecl*)())GetAddress(0xC41B0))();
}

void GUI::GameUIEventHandler(unsigned int nEvent, int nControlId, CDXUTControl* pControl, void* pUserContext) {
    ((void(__stdcall*)(unsigned int, int, CDXUTControl*, void*))GetAddress(0xC5530))(nEvent, nControlId, pControl, pUserContext);
}

void GUI::ScoreboardEventHandler(unsigned int nEvent, int nControlId, CDXUTControl* pControl, void* pUserContext) {
    ((void(__stdcall*)(unsigned int, int, CDXUTControl*, void*))GetAddress(0xC5570))(nEvent, nControlId, pControl, pUserContext);
}

void GUI::DialogEventHandler(unsigned int nEvent, int nControlId, CDXUTControl* pControl, void* pUserContext) {
    ((void(__stdcall*)(unsigned int, int, CDXUTControl*, void*))GetAddress(0xC54A0))(nEvent, nControlId, pControl, pUserContext);
}

void GUI::ClassSelectionEventHandler(unsigned int nEvent, int nControlId, CDXUTControl* pControl, void* pUserContext) {
    ((void(__stdcall*)(unsigned int, int, CDXUTControl*, void*))GetAddress(0xC55A0))(nEvent, nControlId, pControl, pUserContext);
}

SAMPAPI_END
