/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CChatBubble.h"

SAMPAPI_BEGIN_V037R3_1

SAMPAPI_VAR CChatBubble*& RefChatBubble() {
    return *(CChatBubble**)GetAddress(0x26E8C0);
}

CChatBubble::CChatBubble() {
    ((void(__thiscall*)(CChatBubble*))GetAddress(0x66670))(this);
}

void CChatBubble::Add(ID nPlayer, const char* szText, D3DCOLOR color, float fDrawDistance, int lifeSpan) {
    ((void(__thiscall*)(CChatBubble*, ID, const char*, D3DCOLOR, float, int))GetAddress(0x666A0))(this, nPlayer, szText, color, fDrawDistance, lifeSpan);
}

void CChatBubble::Draw() {
    ((void(__thiscall*)(CChatBubble*))GetAddress(0x66760))(this);
}

SAMPAPI_END
