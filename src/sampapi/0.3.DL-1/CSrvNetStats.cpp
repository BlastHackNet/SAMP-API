/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CSrvNetStats.h"

SAMPAPI_BEGIN_V03DL_1

SAMPAPI_VAR CSrvNetStats*& RefServerNetStatistics() {
    return *(CSrvNetStats**)GetAddress(0x2ACA00);
}

CSrvNetStats::CSrvNetStats(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CSrvNetStats*, IDirect3DDevice9*))GetAddress(0x70CC0))(this, pDevice);
}

void CSrvNetStats::Draw() {
    ((void(__thiscall*)(CSrvNetStats*))GetAddress(0x70D00))(this);
}

SAMPAPI_END
