/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "CVector.h"

#define SOUND_OFF 0
#define SOUND_DISABLE_OUTDOOR_AMBIENCE_TRACK 1

SAMP_BEGIN

class SAMP_API CAudio {
public:
	BOOL m_bSoundLoaded;
	bool m_bOutdoorAmbienceTrackDisabled;

	CAudio() {
		m_bSoundLoaded = false;
		m_bOutdoorAmbienceTrackDisabled = false;
	}

	~CAudio() {
		Play(SOUND_OFF);
	}

	int GetRadioStation();
	void StartRadio(int nStation);
	void StopRadio();
	float GetRadioVolume();
	void StopOutdoorAmbienceTrack();
	void SetOutdoorAmbienceTrack(int nSound);
	void Play(int nSound, CVector location = {});
	bool IsOutdoorAmbienceTrackDisabled();
};

SAMP_END