/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CHelpDialog.h"

SAMPAPI_BEGIN_V03DL_1

SAMPAPI_VAR CHelpDialog*& RefHelpDialog() {
    return *(CHelpDialog**)GetAddress(0x2ACA04);
}

CHelpDialog::CHelpDialog(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CHelpDialog*, IDirect3DDevice9*))GetAddress(0x80C8))(this, pDevice);
}

void CHelpDialog::Show() {
    ((void(__thiscall*)(CHelpDialog*))GetAddress(0x6B570))(this);
}

SAMPAPI_END
