/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CSrvNetStats.h"

SAMPAPI_BEGIN_V037R5_1

SAMPAPI_VAR CSrvNetStats*& RefServerNetStatistics() {
    return *(CSrvNetStats**)GetAddress(0x26EB70);
}

CSrvNetStats::CSrvNetStats(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CSrvNetStats*, IDirect3DDevice9*))GetAddress(0x71220))(this, pDevice);
}

void CSrvNetStats::Draw() {
    ((void(__thiscall*)(CSrvNetStats*))GetAddress(0x71260))(this);
}

SAMPAPI_END
