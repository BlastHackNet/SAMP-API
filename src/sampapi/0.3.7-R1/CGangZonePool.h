/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"

SAMPAPI_BEGIN_PACKED_V037R1

struct SAMPAPI_EXPORT GangZone {
    struct SAMPAPI_EXPORT {
        float left;
        float bottom;
        float right;
        float top;
    } m_rect;
    D3DCOLOR m_color;
    D3DCOLOR m_altColor;
};

class SAMPAPI_EXPORT CGangZonePool {
public:
    enum { MAX_GANGZONES = 1024 };

    GangZone* m_pObject[MAX_GANGZONES];
    BOOL      m_bNotEmpty[MAX_GANGZONES];

    CGangZonePool();
    ~CGangZonePool();

    void Create(ID nId, float left, float top, float right, float bottom, D3DCOLOR color);
    void StartFlashing(ID nId, D3DCOLOR color);
    void StopFlashing(ID nId);
    void Delete(ID nId);
    void Draw();
};

SAMPAPI_END_PACKED
