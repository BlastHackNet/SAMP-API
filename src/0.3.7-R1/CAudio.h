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

enum eSoundState : unsigned int {
	SOUND_STATE_FINISHED, 
	SOUND_STATE_LOADED,
	SOUND_STATE_PLAYING
};

class SAMP_API CAudio {
public:
	eSoundState m_nSoundState;

	void PlaySound(int nSound, CVector vPosition);
	void StartGameRadio(unsigned char nStation);
};

SAMP_END