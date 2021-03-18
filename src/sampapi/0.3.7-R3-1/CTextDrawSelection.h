/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"

SAMPAPI_BEGIN_PACKED_V037R3_1

class SAMPAPI_EXPORT CTextDrawSelection {
public:
    BOOL     m_bIsActive;
    D3DCOLOR m_hoveredColor;
    ID       m_nHoveredId;

    CTextDrawSelection() {
        m_bIsActive = false;
        m_hoveredColor = -1;
        m_nHoveredId = -1;
    }

    ~CTextDrawSelection() {
        if (m_bIsActive)
            ResetTextDraws();
    }

    void ResetTextDraws();
    void RawProcess();
    void Process();
    void Enable(D3DCOLOR hoveredColor);
    void SendNotification();
    void Disable();
    BOOL MsgProc(int uMsg, int wParam, int lParam);
};

SAMPAPI_EXPORT SAMPAPI_VAR CTextDrawSelection*& RefTextDrawSelection();

SAMPAPI_END_PACKED
