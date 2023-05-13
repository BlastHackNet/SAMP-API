/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CChatBubble.h"

SAMPAPI_BEGIN_V037R1

SAMPAPI_VAR CChatBubble*& RefChatBubble() {
    return *(CChatBubble**)GetAddress(0x21A0DC);
}

CChatBubble::CChatBubble() {
    ((void(__thiscall*)(CChatBubble*))GetAddress(0x63220))(this);
}

void CChatBubble::Add(ID nPlayer, const char* szText, D3DCOLOR color, float fDrawDistance, int lifeSpan) {
    ((void(__thiscall*)(CChatBubble*, ID, const char*, D3DCOLOR, float, int))GetAddress(0x63250))(this, nPlayer, szText, color, fDrawDistance, lifeSpan);
}

void CChatBubble::Draw() {
    ((void(__thiscall*)(CChatBubble*))GetAddress(0x63310))(this);
}

SAMPAPI_END
