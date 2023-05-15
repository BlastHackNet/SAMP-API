/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"

SAMPAPI_BEGIN_PACKED_V037R5_1

class SAMPAPI_EXPORT CMenu {
public:
    enum {
        MAX_MENU_ITEMS = 12,
        MAX_COLUMNS = 2,
        MAX_MENU_LINE = 33,
    };

    struct SAMPAPI_EXPORT Interaction {
        BOOL m_bMenu;
        BOOL m_bRow[MAX_MENU_ITEMS];
        BOOL m_bPadding[8 - ((MAX_MENU_ITEMS + 1) % 8)];
    };

    unsigned char m_nId;
    char          m_szTitle[MAX_MENU_LINE];
    char          m_szItems[MAX_MENU_ITEMS][MAX_COLUMNS][MAX_MENU_LINE];
    char          m_szHeader[MAX_COLUMNS][MAX_MENU_LINE];
    float         m_fPosX;
    float         m_fPosY;
    float         m_fFirstColumnWidth;
    float         m_fSecondColumnWidth;
    unsigned char m_nColumns;
    Interaction   m_interaction;
    unsigned char m_nColumnCount[MAX_COLUMNS];
    GTAREF        m_panel;

    CMenu(float fX, float fY, char nColumns, float fFirstColumnWidth, float fSecondColumnWidth, const Interaction* pInteraction);
    CMenu() {
        Hide();
    }

    void  SetTitle(const char* szText);
    void  AddItem(NUMBER nColumn, NUMBER nRow, const char* szText);
    void  SetColumnTitle(NUMBER nColumn, const char* szText);
    void  Hide();
    char* GetItem(NUMBER nColumn, NUMBER nRow);
    char* GetTitle();
    char* MS(NUMBER nColumn, NUMBER nRow);
    char  GetActiveRow();
    void  Show();
};

SAMPAPI_END_PACKED
