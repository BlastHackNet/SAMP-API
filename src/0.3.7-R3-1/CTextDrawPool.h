/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "CTextDraw.h"

#define MAX_TEXTDRAWS 2048
#define MAX_LOCAL_TEXTDRAWS 256 

SAMP_BEGIN

class SAMP_API CTextDrawPool {
public:
	BOOL				m_bNotEmpty[MAX_TEXTDRAWS + MAX_LOCAL_TEXTDRAWS];
	CTextDraw	  *m_pObject[MAX_TEXTDRAWS + MAX_LOCAL_TEXTDRAWS];

	CTextDrawPool();
	~CTextDrawPool();

	void Delete(ID nId);
	void Draw();
	CTextDraw *Create(int nId, CTextDraw::Transmit *pData, const char *szText);
};

SAMP_END