/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CTextDrawPool.h"

SAMPAPI_BEGIN_V03DL_1

CTextDrawPool::CTextDrawPool() {
    ((void(__thiscall*)(CTextDrawPool*))GetAddress(0x1E260))(this);
}

CTextDrawPool::~CTextDrawPool() {
    ((void(__thiscall*)(CTextDrawPool*))GetAddress(0x1E390))(this);
}

void CTextDrawPool::Delete(ID nId) {
    ((void(__thiscall*)(CTextDrawPool*, ID))GetAddress(0x1E2B0))(this, nId);
}

void CTextDrawPool::Draw() {
    ((void(__thiscall*)(CTextDrawPool*))GetAddress(0x1E2F0))(this);
}

CTextDraw* CTextDrawPool::Create(int nId, CTextDraw::Transmit* pData, const char* szText) {
    return ((CTextDraw * (__thiscall*)(CTextDrawPool*, int, CTextDraw::Transmit*, const char*)) GetAddress(0x1E3D0))(this, nId, pData, szText);
}

SAMPAPI_END
