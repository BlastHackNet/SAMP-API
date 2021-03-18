/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/CRect.h"

SAMPAPI_BEGIN_PACKED_V037R1

class SAMPAPI_EXPORT CScoreboard {
public:
    BOOL              m_bIsEnabled;
    int               m_nPlayerCount;
    float             m_position[2];
    float             m_fScalar;
    float             m_size[2];
    float             pad[5];
    IDirect3DDevice9* m_pDevice;
    CDXUTDialog*      m_pDialog;
    CDXUTListBox*     m_pListBox;
    int               m_nCurrentOffset;
    BOOL              m_bIsSorted;

    CScoreboard(IDirect3DDevice9* pDevice);

    void Recalc();
    void GetRect(CRect* pRect);
    void Close(bool bHideCursor);
    void ResetDialogControls(CDXUTDialog* pDialog);
    void SendNotification();
    void UpdateList();
    void Draw();
    void Enable();
};

SAMPAPI_EXPORT SAMPAPI_VAR CScoreboard*& RefScoreboard();

SAMPAPI_END_PACKED
