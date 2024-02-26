/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/GUI.h"

SAMPAPI_BEGIN_V03DL_1

SAMPAPI_VAR CDXUTDialogResourceManager*& GUI::RefResourceMgr() {
    return *(CDXUTDialogResourceManager**)GetAddress(0x2ACAB0);
}

SAMPAPI_VAR CDXUTDialog*& GUI::RefGameUi() {
    return *(CDXUTDialog**)GetAddress(0x2ACAB4);
}

SAMPAPI_VAR CDXUTDialog*& GUI::RefScoreboard() {
    return *(CDXUTDialog**)GetAddress(0x2ACAB8);
}

SAMPAPI_VAR CDXUTDialog*& GUI::RefDialog() {
    return *(CDXUTDialog**)GetAddress(0x2ACAC0);
}

SAMPAPI_VAR CDXUTDialog*& GUI::RefClassSelection() {
    return *(CDXUTDialog**)GetAddress(0x2ACABC);
}

SAMPAPI_VAR IDirect3DSurface9*& GUI::RefCursor() {
    return *(IDirect3DSurface9**)GetAddress(0x2ACACC);
}

SAMPAPI_VAR IDirect3DDevice9*& GUI::RefDevice() {
    return *(IDirect3DDevice9**)GetAddress(0x2AC9D0);
}

void GUI::Initialize() {
    ((void(__cdecl*)())GetAddress(0xC6CE0))();
}

void GUI::OnLostDevice() {
    ((void(__cdecl*)())GetAddress(0xC5620))();
}

void GUI::OnResetDevice() {
    ((void(__cdecl*)())GetAddress(0xC5880))();
}

void GUI::GameUIEventHandler(unsigned int nEvent, int nControlId, CDXUTControl* pControl, void* pUserContext) {
    ((void(__stdcall*)(unsigned int, int, CDXUTControl*, void*))GetAddress(0xC6BF0))(nEvent, nControlId, pControl, pUserContext);
}

void GUI::ScoreboardEventHandler(unsigned int nEvent, int nControlId, CDXUTControl* pControl, void* pUserContext) {
    ((void(__stdcall*)(unsigned int, int, CDXUTControl*, void*))GetAddress(0xC6C30))(nEvent, nControlId, pControl, pUserContext);
}

void GUI::DialogEventHandler(unsigned int nEvent, int nControlId, CDXUTControl* pControl, void* pUserContext) {
    ((void(__stdcall*)(unsigned int, int, CDXUTControl*, void*))GetAddress(0xC6B60))(nEvent, nControlId, pControl, pUserContext);
}

void GUI::ClassSelectionEventHandler(unsigned int nEvent, int nControlId, CDXUTControl* pControl, void* pUserContext) {
    ((void(__stdcall*)(unsigned int, int, CDXUTControl*, void*))GetAddress(0xC6C60))(nEvent, nControlId, pControl, pUserContext);
}

SAMPAPI_END
