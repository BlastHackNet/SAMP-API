/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CSrvNetStats.h"

SAMPAPI_BEGIN

SAMPAPI_VAR CSrvNetStats*& RefServerNetStatistics() {
    return *(CSrvNetStats**)GetAddress(0x26E8B8);
}

CSrvNetStats::CSrvNetStats(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CSrvNetStats*, IDirect3DDevice9*))GetAddress(0x70B30))(this, pDevice);
}

void CSrvNetStats::Draw() {
    ((void(__thiscall*)(CSrvNetStats*))GetAddress(0x70B70))(this);
}

SAMPAPI_END
