/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CTextdrawPool.h"

SAMP::CTextdrawPool::CTextdrawPool() {
	((void(__thiscall *)(CTextdrawPool *))SAMP_ADDROF(0x1ACB0))(this);
}

SAMP::CTextdrawPool::~CTextdrawPool() {
	((void(__thiscall *)(CTextdrawPool *))SAMP_ADDROF(0x1ADE0))(this);
}

SAMP::CTextdraw *SAMP::CTextdrawPool::New(ID nId, void *pTransmit, const char *szText) {
	((void(__thiscall *)(CTextdrawPool *, ID, void *, const char *))SAMP_ADDROF(0x1AE20))(this, nId, pTransmit, szText);
}

void SAMP::CTextdrawPool::Delete(ID nId) {
	((void(__thiscall *)(CTextdrawPool *, ID))SAMP_ADDROF(0x1AD00))(this, nId);
}

void SAMP::CTextdrawPool::Draw() {
	((void(__thiscall *)(CTextdrawPool *))SAMP_ADDROF(0x1AD40))(this);
}