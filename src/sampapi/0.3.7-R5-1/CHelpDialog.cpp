/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CHelpDialog.h"

SAMPAPI_BEGIN_V037R5_1

SAMPAPI_VAR CHelpDialog*& RefHelpDialog() {
    return *(CHelpDialog**)GetAddress(0x26EB74);
}

CHelpDialog::CHelpDialog(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CHelpDialog*, IDirect3DDevice9*))GetAddress(0x83D0))(this, pDevice);
}

void CHelpDialog::Show() {
    ((void(__thiscall*)(CHelpDialog*))GetAddress(0x6BB30))(this);
}

SAMPAPI_END
