/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once 

#include "common.h"
#include "CVector.h"

#define SOUND_OFF 0

SAMP_BEGIN

class SAMP_API CAudio {
public:
	BOOL m_bSoundLoaded;

	CAudio() {
		m_bSoundLoaded = 0;
	}

	~CAudio() {
		Play(SOUND_OFF);
	}

	void Play(int nSound, CVector location = {});
	void StartRadio(unsigned char nStation);
	float GetRadioVolume();
};

SAMP_END