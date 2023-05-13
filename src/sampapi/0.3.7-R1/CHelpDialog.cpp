/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CHelpDialog.h"

SAMPAPI_BEGIN_V037R1

SAMPAPI_VAR CHelpDialog*& RefHelpDialog() {
    return *(CHelpDialog**)GetAddress(0x21A0D8);
}

CHelpDialog::CHelpDialog(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CHelpDialog*, IDirect3DDevice9*))GetAddress(0x67440))(this, pDevice);
}

void CHelpDialog::Show() {
    ((void(__thiscall*)(CHelpDialog*))GetAddress(0x67450))(this);
}

SAMPAPI_END
