/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CAudio.h"

SAMPAPI_BEGIN_V037R1

void CAudio::Play(int nSound, CVector location) {
    ((void(__thiscall*)(CAudio*, int, CVector))GetAddress(0x9D730))(this, nSound, location);
}

void CAudio::StartRadio(unsigned char nStation) {
    ((void(__thiscall*)(CAudio*, unsigned char))GetAddress(0x9D860))(this, nStation);
}

float CAudio::GetRadioVolume() {
    return ((float(__thiscall*)(CAudio*))GetAddress(0x9D8A0))(this);
}

SAMPAPI_END
