/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R5-1/CAudio.h"

SAMPAPI_BEGIN_V037R5_1

int CAudio::GetRadioStation() {
    return ((int(__thiscall*)(CAudio*))GetAddress(0xA2210))(this);
}

void CAudio::StartRadio(int nStation) {
    ((void(__thiscall*)(CAudio*, int))GetAddress(0xA2240))(this, nStation);
}

void CAudio::StopRadio() {
    ((void(__thiscall*)(CAudio*))GetAddress(0xA2260))(this);
}

float CAudio::GetRadioVolume() {
    return ((float(__thiscall*)(CAudio*))GetAddress(0xA2280))(this);
}

void CAudio::StopOutdoorAmbienceTrack() {
    ((void(__thiscall*)(CAudio*))GetAddress(0xA2290))(this);
}

void CAudio::SetOutdoorAmbienceTrack(int nSound) {
    ((void(__thiscall*)(CAudio*, int))GetAddress(0xA22A0))(this, nSound);
}

bool CAudio::IsOutdoorAmbienceTrackDisabled() {
    return ((bool(__thiscall*)(CAudio*))GetAddress(0xA23A0))(this);
}

void CAudio::Play(int nSound, CVector location) {
    ((void(__thiscall*)(CAudio*, int, CVector))GetAddress(0xA22C0))(this, nSound, location);
}

SAMPAPI_END
