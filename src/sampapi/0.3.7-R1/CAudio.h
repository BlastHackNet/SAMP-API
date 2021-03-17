/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi.h"
#include "CVector.h"

SAMPAPI_BEGIN_PACKED

class SAMPAPI_EXPORT CAudio {
public:
    enum { SOUND_OFF = 0 };

    BOOL m_bSoundLoaded;

    CAudio() {
        m_bSoundLoaded = 0;
    }

    ~CAudio() {
        Play(SOUND_OFF);
    }

    void  Play(int nSound, CVector location = {});
    void  StartRadio(unsigned char nStation);
    float GetRadioVolume();
};

SAMPAPI_END_PACKED
