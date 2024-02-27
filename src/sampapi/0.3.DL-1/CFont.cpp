/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CFont.h"

SAMPAPI_BEGIN_V03DL_1

CFont::CFont() {
    ((void(__thiscall*)(CFont*))GetAddress(0x6B8D0))(this);
}

CFont::CFont(ID3DXFont* pFont) {
    *(void**)this = (void*)GetAddress(0xEA410);
    m_pFont = pFont;
}

SAMPAPI_END
