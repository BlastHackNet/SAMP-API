/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CLabelPool.h"

SAMPAPI_BEGIN_V037R1

CLabelPool::CLabelPool() {
    ((void(__thiscall*)(CLabelPool*))GetAddress(0x1180))(this);
}

CLabelPool::~CLabelPool() {
    ((void(__thiscall*)(CLabelPool*))GetAddress(0x15D0))(this);
}

void CLabelPool::Create(ID nId, const char* szText, D3DCOLOR color, CVector position, float fDrawDistance, bool bBehindWalls, ID nAttachedToPlayer, ID nAttachedToVehicle) {
    ((void(__thiscall*)(CLabelPool*, ID, const char*, D3DCOLOR, CVector, float, bool, ID, ID))GetAddress(0x11C0))(this, nId, szText, color, position, fDrawDistance, bBehindWalls, nAttachedToPlayer, nAttachedToVehicle);
}

BOOL CLabelPool::Delete(ID nId) {
    return ((BOOL(__thiscall*)(CLabelPool*, ID))GetAddress(0x12D0))(this, nId);
}

void CLabelPool::Draw() {
    ((void(__thiscall*)(CLabelPool*))GetAddress(0x1340))(this);
}

SAMPAPI_END
