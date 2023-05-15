/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CNetStats.h"

SAMPAPI_BEGIN_V037R5_1

SAMPAPI_VAR CNetStats*& RefNetStats() {
    return *(CNetStats**)GetAddress(0x26EB6C);
}

CNetStats::CNetStats(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CNetStats*, IDirect3DDevice9*))GetAddress(0x60D40))(this, pDevice);
}

void CNetStats::Draw() {
    ((void(__thiscall*)(CNetStats*))GetAddress(0x60D70))(this);
}

SAMPAPI_END
