/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.DL-1/CAudio.h"

SAMPAPI_BEGIN_V03DL_1

int CAudio::GetRadioStation() {
    return ((int(__thiscall*)(CAudio*))GetAddress(0xA2030))(this);
}

void CAudio::StartRadio(int nStation) {
    ((void(__thiscall*)(CAudio*, int))GetAddress(0xA2060))(this, nStation);
}

void CAudio::StopRadio() {
    ((void(__thiscall*)(CAudio*))GetAddress(0xA2260))(this);
}

float CAudio::GetRadioVolume() {
    return ((float(__thiscall*)(CAudio*))GetAddress(0xA20A0))(this);
}

void CAudio::StopOutdoorAmbienceTrack() {
    ((void(__thiscall*)(CAudio*))GetAddress(0xA20B0))(this);
}

void CAudio::SetOutdoorAmbienceTrack(int nSound) {
    ((void(__thiscall*)(CAudio*, int))GetAddress(0xA20C0))(this, nSound);
}

bool CAudio::IsOutdoorAmbienceTrackDisabled() {
    return ((bool(__thiscall*)(CAudio*))GetAddress(0xA21C0))(this);
}

void CAudio::Play(int nSound, CVector location) {
    ((void(__thiscall*)(CAudio*, int, CVector))GetAddress(0xA20E0))(this, nSound, location);
}

SAMPAPI_END
