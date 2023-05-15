/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CFont.h"

SAMPAPI_BEGIN_V037R5_1

CFont::CFont() {
    ((void(__thiscall*)(CFont*))GetAddress(0x6B8D0))(this);
}

CFont::CFont(ID3DXFont* pFont) {
    *(void**)this = (void*)GetAddress(0xEA410);
    m_pFont = pFont;
}

SAMPAPI_END
