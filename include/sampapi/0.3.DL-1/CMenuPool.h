/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/0.3.DL-1/CMenu.h"

SAMPAPI_BEGIN_PACKED_V03DL_1

class SAMPAPI_EXPORT CMenuPool {
public:
    enum { MAX_MENUS = 128 };

    CMenu* m_pObject[MAX_MENUS];
    BOOL   m_bNotEmpty[MAX_MENUS];
    NUMBER m_nCurrent;
    bool   m_bCanceled;

    CMenuPool();
    ~CMenuPool();

    CMenu* Create(NUMBER nId, float fX, float fY, char nColumns, float fFirstColumnWidth, float fSecondColumnWidth, const CMenu::Interaction* pInteraction);
    BOOL   Delete(NUMBER nId);
    void   Show(NUMBER nId);
    void   Hide(NUMBER nId);
    char*  GetTextPointer(const char* szName);
    void   Process();
};

SAMPAPI_END_PACKED
