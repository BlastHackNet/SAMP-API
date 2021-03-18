/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CTextDraw.h"

SAMPAPI_BEGIN_V037R3_1

CTextDraw::CTextDraw(Transmit* pData, const char* szText) {
    ((void(__thiscall*)(CTextDraw*, Transmit*, const char*))GetAddress(0xB2E50))(this, pData, szText);
}

CTextDraw::~CTextDraw() {
    ((void(__thiscall*)(CTextDraw*))GetAddress(0xB26C0))(this);
}

void CTextDraw::SetText(const char* szText) {
    ((void(__thiscall*)(CTextDraw*, const char*))GetAddress(0xB26D0))(this, szText);
}

void CTextDraw::Draw() {
    ((void(__thiscall*)(CTextDraw*))GetAddress(0xB2BF0))(this);
}

SAMPAPI_END
