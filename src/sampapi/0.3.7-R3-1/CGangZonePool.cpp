/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CGangZonePool.h"

SAMPAPI_BEGIN_V037R3_1

CGangZonePool::CGangZonePool() {
    ((void(__thiscall*)(CGangZonePool*))GetAddress(0x2100))(this);
}

CGangZonePool::~CGangZonePool() {
    ((void(__thiscall*)(CGangZonePool*))GetAddress(0x2130))(this);
}

void CGangZonePool::Create(ID nId, float left, float top, float right, float bottom, D3DCOLOR color) {
    ((void(__thiscall*)(CGangZonePool*, ID, float, float, float, float, D3DCOLOR))GetAddress(0x2160))(this, nId, left, top, right, bottom, color);
}

void CGangZonePool::StartFlashing(ID nId, D3DCOLOR color) {
    ((void(__thiscall*)(CGangZonePool*, ID, D3DCOLOR))GetAddress(0x21E0))(this, nId, color);
}

void CGangZonePool::StopFlashing(ID nId) {
    ((void(__thiscall*)(CGangZonePool*, ID))GetAddress(0x2200))(this, nId);
}

void CGangZonePool::Delete(ID nId) {
    ((void(__thiscall*)(CGangZonePool*, ID))GetAddress(0x2220))(this, nId);
}

void CGangZonePool::Draw() {
    ((void(__thiscall*)(CGangZonePool*))GetAddress(0x2250))(this);
}

SAMPAPI_END
