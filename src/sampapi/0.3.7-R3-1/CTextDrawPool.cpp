/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CTextDrawPool.h"

SAMPAPI_BEGIN_V037R3_1

CTextDrawPool::CTextDrawPool() {
    ((void(__thiscall*)(CTextDrawPool*))GetAddress(0x1E050))(this);
}

CTextDrawPool::~CTextDrawPool() {
    ((void(__thiscall*)(CTextDrawPool*))GetAddress(0x1E180))(this);
}

void CTextDrawPool::Delete(ID nId) {
    ((void(__thiscall*)(CTextDrawPool*, ID))GetAddress(0x1E0A0))(this, nId);
}

void CTextDrawPool::Draw() {
    ((void(__thiscall*)(CTextDrawPool*))GetAddress(0x1E0E0))(this);
}

CTextDraw* CTextDrawPool::Create(int nId, CTextDraw::Transmit* pData, const char* szText) {
    return ((CTextDraw * (__thiscall*)(CTextDrawPool*, int, CTextDraw::Transmit*, const char*)) GetAddress(0x1E1C0))(this, nId, pData, szText);
}

SAMPAPI_END
