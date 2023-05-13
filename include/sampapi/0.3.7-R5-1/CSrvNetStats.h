/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"

SAMPAPI_BEGIN_PACKED_V037R5_1

class SAMPAPI_EXPORT CSrvNetStats {
public:
    unsigned long     m_dwLastTotalBytesSent;
    unsigned long     m_dwLastTotalBytesRecv;
    unsigned long     m_dwLastUpdateTick;
    unsigned long     m_dwBPSUpload;
    unsigned long     m_dwBPSDownload;
    IDirect3DDevice9* m_pDevice;

    CSrvNetStats(IDirect3DDevice9* pDevice);

    void Draw();
};

SAMPAPI_EXPORT SAMPAPI_VAR CSrvNetStats*& RefServerNetStatistics();

SAMPAPI_END_PACKED
