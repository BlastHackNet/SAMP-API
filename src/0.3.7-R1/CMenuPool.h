/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "CMenu.h"

#define MAX_MENUS 128

SAMP_BEGIN

class SAMP_API CMenuPool {
public:
	CMenu			  *m_pMenu[MAX_MENUS];
	BOOL				m_bNotEmpty[MAX_MENUS];
	unsigned char	m_nCurrentMenu;
	bool				m_bCanceled;

	CMenuPool();
	~CMenuPool();

	CMenu *New(unsigned char nId, const char *szTitle, float fX, float fY, unsigned char nColumns, float fCol1Width, float fCol2Width, void *pInteraction);
	BOOL Delete(unsigned char nId);
	void Show(unsigned char nId);
	void Hide(unsigned char nId);
	char *GetTextPointer(const char *szName);
	void Process();
};

SAMP_END