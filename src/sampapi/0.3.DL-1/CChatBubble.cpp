/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CChatBubble.h"

SAMPAPI_BEGIN_V03DL_1

SAMPAPI_VAR CChatBubble*& RefChatBubble() {
    return *(CChatBubble**)GetAddress(0x2ACA08);
}

CChatBubble::CChatBubble() {
    ((void(__thiscall*)(CChatBubble*))GetAddress(0x66860))(this);
}

void CChatBubble::Add(ID nPlayer, const char* szText, D3DCOLOR color, float fDrawDistance, int lifeSpan) {
    ((void(__thiscall*)(CChatBubble*, ID, const char*, D3DCOLOR, float, int))GetAddress(0x66890))(this, nPlayer, szText, color, fDrawDistance, lifeSpan);
}

void CChatBubble::Draw() {
    ((void(__thiscall*)(CChatBubble*))GetAddress(0x66950))(this);
}

SAMPAPI_END
