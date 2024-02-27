/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CTextDraw.h"

SAMPAPI_BEGIN_V03DL_1

CTextDraw::CTextDraw(Transmit* pData, const char* szText) {
    ((void(__thiscall*)(CTextDraw*, Transmit*, const char*))GetAddress(0xB32E0))(this, pData, szText);
}

CTextDraw::~CTextDraw() {
    ((void(__thiscall*)(CTextDraw*))GetAddress(0xB2B50))(this);
}

void CTextDraw::SetText(const char* szText) {
    ((void(__thiscall*)(CTextDraw*, const char*))GetAddress(0xB2B60))(this, szText);
}

void CTextDraw::Draw() {
    ((void(__thiscall*)(CTextDraw*))GetAddress(0xB3080))(this);
}

SAMPAPI_END
