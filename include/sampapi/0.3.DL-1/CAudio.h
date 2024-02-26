/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/CVector.h"

SAMPAPI_BEGIN_PACKED_V03DL_1

class SAMPAPI_EXPORT CAudio {
public:
    enum SoundId {
        SOUND_OFF = 0,
        SOUND_DISABLE_OUTDOOR_AMBIENCE_TRACK = 1,
    };

    BOOL m_bSoundLoaded;
    bool m_bOutdoorAmbienceTrackDisabled;

    CAudio() {
        m_bSoundLoaded = false;
        m_bOutdoorAmbienceTrackDisabled = false;
    }

    ~CAudio() {
        Play(SOUND_OFF);
    }

    int   GetRadioStation();
    void  StartRadio(int nStation);
    void  StopRadio();
    float GetRadioVolume();
    void  StopOutdoorAmbienceTrack();
    void  SetOutdoorAmbienceTrack(int nSound);
    void  Play(int nSound, CVector location = {});
    bool  IsOutdoorAmbienceTrackDisabled();
};

SAMPAPI_END_PACKED
