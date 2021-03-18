/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/0.3.7-R3-1/CMenu.h"

SAMPAPI_BEGIN_PACKED_V037R3_1

class SAMPAPI_EXPORT CMenuPool {
public:
    enum { MAX_MENUS = 128 };

    CMenu* m_pObject[MAX_MENUS];
    BOOL   m_bNotEmpty[MAX_MENUS];
    NUMBER m_nCurrent;
    bool   m_bCanceled;

    CMenuPool();
    ~CMenuPool();

    CMenu* Create(NUMBER nId, const char* szTitle, float fX, float fY, char nColumns, float fFirstColumnWidth, float fSecondColumnWidth, const CMenu::Interaction* pInteraction);
    BOOL   Delete(NUMBER nId);
    void   Show(NUMBER nId);
    void   Hide(NUMBER nId);
    char*  GetTextPointer(const char* szName);
    void   Process();
};

SAMPAPI_END_PACKED
