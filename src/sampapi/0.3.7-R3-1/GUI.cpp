/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/GUI.h"

SAMPAPI_BEGIN_V037R3_1

SAMPAPI_VAR CDXUTDialogResourceManager*& GUI::RefResourceMgr() {
    return *(CDXUTDialogResourceManager**)GetAddress(0x26E968);
}

SAMPAPI_VAR CDXUTDialog*& GUI::RefGameUi() {
    return *(CDXUTDialog**)GetAddress(0x26E96C);
}

SAMPAPI_VAR CDXUTDialog*& GUI::RefScoreboard() {
    return *(CDXUTDialog**)GetAddress(0x26E970);
}

SAMPAPI_VAR CDXUTDialog*& GUI::RefDialog() {
    return *(CDXUTDialog**)GetAddress(0x26E978);
}

SAMPAPI_VAR CDXUTDialog*& GUI::RefClassSelection() {
    return *(CDXUTDialog**)GetAddress(0x26E974);
}

SAMPAPI_VAR IDirect3DSurface9*& GUI::RefCursor() {
    return *(IDirect3DSurface9**)GetAddress(0x26E984);
}

SAMPAPI_VAR IDirect3DDevice9*& GUI::RefDevice() {
    return *(IDirect3DDevice9**)GetAddress(0x26E888);
}

void GUI::Initialize() {
    ((void(__cdecl*)())GetAddress(0xC5EB0))();
}

void GUI::OnLostDevice() {
    ((void(__cdecl*)())GetAddress(0xC47D0))();
}

void GUI::OnResetDevice() {
    ((void(__cdecl*)())GetAddress(0xC4A30))();
}

void GUI::GameUIEventHandler(unsigned int nEvent, int nControlId, CDXUTControl* pControl, void* pUserContext) {
    ((void(__stdcall*)(unsigned int, int, CDXUTControl*, void*))GetAddress(0xC5DC0))(nEvent, nControlId, pControl, pUserContext);
}

void GUI::ScoreboardEventHandler(unsigned int nEvent, int nControlId, CDXUTControl* pControl, void* pUserContext) {
    ((void(__stdcall*)(unsigned int, int, CDXUTControl*, void*))GetAddress(0xC5E00))(nEvent, nControlId, pControl, pUserContext);
}

void GUI::DialogEventHandler(unsigned int nEvent, int nControlId, CDXUTControl* pControl, void* pUserContext) {
    ((void(__stdcall*)(unsigned int, int, CDXUTControl*, void*))GetAddress(0xC5D30))(nEvent, nControlId, pControl, pUserContext);
}

void GUI::ClassSelectionEventHandler(unsigned int nEvent, int nControlId, CDXUTControl* pControl, void* pUserContext) {
    ((void(__stdcall*)(unsigned int, int, CDXUTControl*, void*))GetAddress(0xC5E30))(nEvent, nControlId, pControl, pUserContext);
}

SAMPAPI_END
