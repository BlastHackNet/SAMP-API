/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CTextDrawPool.h"

SAMP::CTextDrawPool::CTextDrawPool() {
	((void(__thiscall *)(CTextDrawPool *))SAMP_ADDROF(0x1E050))(this);
}

SAMP::CTextDrawPool::~CTextDrawPool() {
	((void(__thiscall *)(CTextDrawPool *))SAMP_ADDROF(0x1E180))(this);
}

void SAMP::CTextDrawPool::Delete(ID nId) {
	((void(__thiscall *)(CTextDrawPool *, ID))SAMP_ADDROF(0x1E0A0))(this, nId);
}

void SAMP::CTextDrawPool::Draw() {
	((void(__thiscall *)(CTextDrawPool *))SAMP_ADDROF(0x1E0E0))(this);
}

SAMP::CTextDraw *SAMP::CTextDrawPool::Create(int nId, CTextDraw::Transmit *pData, const char *szText) {
	return ((CTextDraw *(__thiscall *)(CTextDrawPool *, int, CTextDraw::Transmit *, const char *))SAMP_ADDROF(0x1E1C0))(this, nId, pData, szText);
}