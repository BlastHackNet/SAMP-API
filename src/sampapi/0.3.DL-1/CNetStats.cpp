/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CNetStats.h"

SAMPAPI_BEGIN_V03DL_1

SAMPAPI_VAR CNetStats*& RefNetStats() {
    return *(CNetStats**)GetAddress(0x2AC9FC);
}

CNetStats::CNetStats(IDirect3DDevice9* pDevice) {
    ((void(__thiscall*)(CNetStats*, IDirect3DDevice9*))GetAddress(0x607C0))(this, pDevice);
}

void CNetStats::Draw() {
    ((void(__thiscall*)(CNetStats*))GetAddress(0x607F0))(this);
}

SAMPAPI_END
