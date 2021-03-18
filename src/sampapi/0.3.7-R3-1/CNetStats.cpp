/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CNetStats.h"

SAMPAPI_BEGIN_V037R3_1

SAMPAPI_VAR CNetStats*& RefNetStats() {
    return *(CNetStats**)GetAddress(0x26E8B4);
}

CNetStats::CNetStats(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CNetStats*, IDirect3DDevice9*))GetAddress(0x605C0))(this, pDevice);
}

void CNetStats::Draw() {
    ((void(__thiscall*)(CNetStats*))GetAddress(0x605F0))(this);
}

SAMPAPI_END
