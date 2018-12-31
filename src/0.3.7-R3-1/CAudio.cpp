/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CAudio.h"

int SAMP::CAudio::GetRadioStation() {
	return ((int(__thiscall *)(CAudio *))SAMP_ADDROF(0xA1AE0))(this);
}

void SAMP::CAudio::StartRadio(int nStation) {
	((void(__thiscall *)(CAudio *, int))SAMP_ADDROF(0xA1B10))(this, nStation);
}

void SAMP::CAudio::StopRadio() {
	((void(__thiscall *)(CAudio *))SAMP_ADDROF(0xA1B30))(this);
}

float SAMP::CAudio::GetRadioVolume() {
	return ((float(__thiscall *)(CAudio *))SAMP_ADDROF(0xA1B50))(this);
}

void SAMP::CAudio::StopOutdoorAmbienceTrack() {
	((void(__thiscall *)(CAudio *))SAMP_ADDROF(0xA1B60))(this);
}

void SAMP::CAudio::SetOutdoorAmbienceTrack(int nSound) {
	((void(__thiscall *)(CAudio *, int))SAMP_ADDROF(0xA1B70))(this, nSound);
}

bool SAMP::CAudio::IsOutdoorAmbienceTrackDisabled() {
	return ((bool(__thiscall *)(CAudio *))SAMP_ADDROF(0xA1C70))(this);
}

void SAMP::CAudio::Play(int nSound, CVector location) {
	((void(__thiscall *)(CAudio *, int, CVector))SAMP_ADDROF(0xA1B90))(this, nSound, location);
}