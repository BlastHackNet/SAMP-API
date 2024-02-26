/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CGangZonePool.h"

SAMPAPI_BEGIN_V03DL_1

CGangZonePool::CGangZonePool() {
    ((void(__thiscall*)(CGangZonePool*))GetAddress(0x2150))(this);
}

CGangZonePool::~CGangZonePool() {
    ((void(__thiscall*)(CGangZonePool*))GetAddress(0x2180))(this);
}

void CGangZonePool::Create(ID nId, float left, float top, float right, float bottom, D3DCOLOR color) {
    ((void(__thiscall*)(CGangZonePool*, ID, float, float, float, float, D3DCOLOR))GetAddress(0x21B0))(this, nId, left, top, right, bottom, color);
}

void CGangZonePool::StartFlashing(ID nId, D3DCOLOR color) {
    ((void(__thiscall*)(CGangZonePool*, ID, D3DCOLOR))GetAddress(0x2230))(this, nId, color);
}

void CGangZonePool::StopFlashing(ID nId) {
    ((void(__thiscall*)(CGangZonePool*, ID))GetAddress(0x2250))(this, nId);
}

void CGangZonePool::Delete(ID nId) {
    ((void(__thiscall*)(CGangZonePool*, ID))GetAddress(0x2270))(this, nId);
}

void CGangZonePool::Draw() {
    ((void(__thiscall*)(CGangZonePool*))GetAddress(0x22A0))(this);
}

SAMPAPI_END
