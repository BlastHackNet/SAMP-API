/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"

#define MAX_MENU_ITEMS 12
#define MAX_COLUMNS 2
#define MAX_MENU_LINE 32

SAMP_BEGIN

class SAMP_API CMenu {
public:
	struct Interaction {
		BOOL m_bMenu;
		BOOL m_bRow[MAX_MENU_ITEMS];
		BOOL m_bPadding[8 - ((MAX_MENU_ITEMS + 1) % 8)]; 
	};

	unsigned char	m_nId;
	char				m_szTitle[MAX_MENU_LINE];
	char				m_szItems[MAX_MENU_ITEMS][MAX_COLUMNS][MAX_MENU_LINE];
	char				m_szHeader[MAX_COLUMNS][MAX_MENU_LINE];	
	float				m_fPosX;
	float				m_fPosY;
	float				m_fFirstColumnWidth;
	float				m_fSecondColumnWidth;
	unsigned char  m_nColumns;
	Interaction		m_interaction;
	unsigned char	m_nColumnCount[MAX_COLUMNS];
	GTAREF			m_hPanel;

	CMenu(const char *szTitle, float fX, float fY, float fFirstColumnWidth, float fSecondColumnWidth, const Interaction *pInteraction);
	~CMenu() {
		Hide();
	}

	void Show();
	void Hide();
	void AddItem(char nColumn, char nRow, const char *szText);
	void SetColumnTitle(char nColumn, const char *szText);
	char *GetItem(char nColumn, char nRow);
	char *GetTitle();
	char *MS(char nColumn, char nRow);
	char GetActiveRow();
};

SAMP_END