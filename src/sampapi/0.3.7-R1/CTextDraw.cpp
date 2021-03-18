/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CTextDraw.h"

SAMPAPI_BEGIN_V037R1

CTextDraw::CTextDraw(Transmit* pTransmit, const char* szText) {
    ((void(__thiscall*)(CTextDraw*, Transmit*, const char*))GetAddress(0xACF10))(this, pTransmit, szText);
}

CTextDraw::~CTextDraw() {
    ((void(__thiscall*)(CTextDraw*))GetAddress(0xAC860))(this);
}

void CTextDraw::SetText(const char* szText) {
    ((void(__thiscall*)(CTextDraw*, const char*))GetAddress(0xAC870))(this, szText);
}

void CTextDraw::Draw() {
    ((void(__thiscall*)(CTextDraw*))GetAddress(0xACD90))(this);
}

SAMPAPI_END
