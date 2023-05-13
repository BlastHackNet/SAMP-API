/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CChatBubble.h"

SAMPAPI_BEGIN_V037R5_1

SAMPAPI_VAR CChatBubble*& RefChatBubble() {
    return *(CChatBubble**)GetAddress(0x26EB78);
}

CChatBubble::CChatBubble() {
    ((void(__thiscall*)(CChatBubble*))GetAddress(0x66DE0))(this);
}

void CChatBubble::Add(ID nPlayer, const char* szText, D3DCOLOR color, float fDrawDistance, int lifeSpan) {
    ((void(__thiscall*)(CChatBubble*, ID, const char*, D3DCOLOR, float, int))GetAddress(0x66E10))(this, nPlayer, szText, color, fDrawDistance, lifeSpan);
}

void CChatBubble::Draw() {
    ((void(__thiscall*)(CChatBubble*))GetAddress(0x66ED0))(this);
}

SAMPAPI_END
