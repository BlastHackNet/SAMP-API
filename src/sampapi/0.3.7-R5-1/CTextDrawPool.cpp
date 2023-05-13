/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CTextDrawPool.h"

SAMPAPI_BEGIN_V037R5_1

CTextDrawPool::CTextDrawPool() {
    ((void(__thiscall*)(CTextDrawPool*))GetAddress(0x1E7A0))(this);
}

CTextDrawPool::~CTextDrawPool() {
    ((void(__thiscall*)(CTextDrawPool*))GetAddress(0x1E8D0))(this);
}

void CTextDrawPool::Delete(ID nId) {
    ((void(__thiscall*)(CTextDrawPool*, ID))GetAddress(0x1E7F0))(this, nId);
}

void CTextDrawPool::Draw() {
    ((void(__thiscall*)(CTextDrawPool*))GetAddress(0x1E830))(this);
}

CTextDraw* CTextDrawPool::Create(int nId, CTextDraw::Transmit* pData, const char* szText) {
    return ((CTextDraw * (__thiscall*)(CTextDrawPool*, int, CTextDraw::Transmit*, const char*)) GetAddress(0x1E910))(this, nId, pData, szText);
}

SAMPAPI_END
