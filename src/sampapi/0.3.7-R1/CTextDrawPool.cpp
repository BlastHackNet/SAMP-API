/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CTextDrawPool.h"

SAMPAPI_BEGIN_V037R1

CTextDrawPool::CTextDrawPool() {
    ((void(__thiscall*)(CTextDrawPool*))GetAddress(0x1ACB0))(this);
}

CTextDrawPool::~CTextDrawPool() {
    ((void(__thiscall*)(CTextDrawPool*))GetAddress(0x1ADE0))(this);
}

CTextDraw* CTextDrawPool::Create(int nId, CTextDraw::Transmit* pTransmit, const char* szText) {
    return ((CTextDraw * (__thiscall*)(CTextDrawPool*, int, CTextDraw::Transmit*, const char*)) GetAddress(0x1AE20))(this, nId, pTransmit, szText);
}

void CTextDrawPool::Delete(ID nId) {
    ((void(__thiscall*)(CTextDrawPool*, ID))GetAddress(0x1AD00))(this, nId);
}

void CTextDrawPool::Draw() {
    ((void(__thiscall*)(CTextDrawPool*))GetAddress(0x1AD40))(this);
}

SAMPAPI_END
