/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CAudio.h"

SAMPAPI_BEGIN_V037R3_1

int CAudio::GetRadioStation() {
    return ((int(__thiscall*)(CAudio*))GetAddress(0xA1AE0))(this);
}

void CAudio::StartRadio(int nStation) {
    ((void(__thiscall*)(CAudio*, int))GetAddress(0xA1B10))(this, nStation);
}

void CAudio::StopRadio() {
    ((void(__thiscall*)(CAudio*))GetAddress(0xA1B30))(this);
}

float CAudio::GetRadioVolume() {
    return ((float(__thiscall*)(CAudio*))GetAddress(0xA1B50))(this);
}

void CAudio::StopOutdoorAmbienceTrack() {
    ((void(__thiscall*)(CAudio*))GetAddress(0xA1B60))(this);
}

void CAudio::SetOutdoorAmbienceTrack(int nSound) {
    ((void(__thiscall*)(CAudio*, int))GetAddress(0xA1B70))(this, nSound);
}

bool CAudio::IsOutdoorAmbienceTrackDisabled() {
    return ((bool(__thiscall*)(CAudio*))GetAddress(0xA1C70))(this);
}

void CAudio::Play(int nSound, CVector location) {
    ((void(__thiscall*)(CAudio*, int, CVector))GetAddress(0xA1B90))(this, nSound, location);
}

SAMPAPI_END
