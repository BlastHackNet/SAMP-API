/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CTextdraw.h"

SAMP::CTextdraw::CTextdraw(Transmit *pTransmit, const char *szText) {
	((void(__thiscall *)(CTextdraw *, Transmit *, const char *))SAMP_ADDROF(0xACF10))(this, pTransmit, szText);
}

SAMP::CTextdraw::~CTextdraw() {
	((void(__thiscall *)(CTextdraw *))SAMP_ADDROF(0xAC860))(this);
}

void SAMP::CTextdraw::SetText(const char *szText) {
	((void(__thiscall *)(CTextdraw *, const char *))SAMP_ADDROF(0xAC870))(this, szText);
}

void SAMP::CTextdraw::Draw() {
	((void(__thiscall *)(CTextdraw *))SAMP_ADDROF(0xACD90))(this);
}