/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once 

#include "common.h"
#include "CVector.h"

SAMP_BEGIN

class SAMP_API CAudio {
public:
	BOOL m_bSoundLoaded;

	void PlaySound(int nSound, CVector vPosition);
	void PlayRadio(unsigned char nStation);
	float GetRadioVolume();
};

SAMP_END