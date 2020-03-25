/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CFont.h"

SAMPAPI_BEGIN

CFont::CFont() {
    ((void(__thiscall*)(CFont*))GetAddress(0x6B160))(this);
}

CFont::CFont(ID3DXFont* pFont) {
    *(void**)this = (void*)GetAddress(0xEA3B8);
    m_pFont = pFont;
}

SAMPAPI_END
