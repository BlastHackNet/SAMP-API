/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/GUI.h"

SAMPAPI_BEGIN_V037R1

SAMPAPI_VAR CDXUTDialogResourceManager*& GUI::RefResourceMgr() {
    return *(CDXUTDialogResourceManager**)GetAddress(0x21A180);
}

SAMPAPI_VAR CDXUTDialog*& GUI::RefGameUi() {
    return *(CDXUTDialog**)GetAddress(0x21A184);
}

SAMPAPI_VAR CDXUTDialog*& GUI::RefScoreboard() {
    return *(CDXUTDialog**)GetAddress(0x21A188);
}

SAMPAPI_VAR CDXUTDialog*& GUI::RefDialog() {
    return *(CDXUTDialog**)GetAddress(0x21A190);
}

SAMPAPI_VAR CDXUTDialog*& GUI::RefClassSelection() {
    return *(CDXUTDialog**)GetAddress(0x21A18C);
}

SAMPAPI_VAR IDirect3DSurface9*& GUI::RefCursor() {
    return *(IDirect3DSurface9**)GetAddress(0x21A198);
}

SAMPAPI_VAR IDirect3DDevice9*& GUI::RefDevice() {
    return *(IDirect3DDevice9**)GetAddress(0x21A0A8);
}

void GUI::Initialize() {
    ((void(__cdecl*)())GetAddress(0xB3FC0))();
}

void GUI::OnLostDevice() {
    ((void(__cdecl*)())GetAddress(0xB2980))();
}

void GUI::OnResetDevice() {
    ((void(__cdecl*)())GetAddress(0xB2BE0))();
}

void GUI::GameUIEventHandler(unsigned int nEvent, int nControlId, CDXUTControl* pControl, void* pUserContext) {
    ((void(__stdcall*)(unsigned int, int, CDXUTControl*, void*))GetAddress(0xB3EE0))(nEvent, nControlId, pControl, pUserContext);
}

void GUI::ClassSelectorEventHandler(unsigned int nEvent, int nControlId, CDXUTControl* pControl, void* pUserContext) {
    ((void(__stdcall*)(unsigned int, int, CDXUTControl*, void*))GetAddress(0xB3F50))(nEvent, nControlId, pControl, pUserContext);
}

void GUI::ScoreboardEventHandler(unsigned int nEvent, int nControlId, CDXUTControl* pControl, void* pUserContext) {
    ((void(__stdcall*)(unsigned int, int, CDXUTControl*, void*))GetAddress(0xB3F20))(nEvent, nControlId, pControl, pUserContext);
}

void GUI::DialogEventHandler(unsigned int nEvent, int nControlId, CDXUTControl* pControl, void* pUserContext) {
    ((void(__stdcall*)(unsigned int, int, CDXUTControl*, void*))GetAddress(0xB3E50))(nEvent, nControlId, pControl, pUserContext);
}

SAMPAPI_END
