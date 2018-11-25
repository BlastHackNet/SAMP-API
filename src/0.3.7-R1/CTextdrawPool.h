/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once 

#include "common.h"
#include "CTextdraw.h"

#define MAX_TEXTDRAWS 2048
#define MAX_LOCAL_TEXTDRAWS 256 

SAMP_BEGIN

class SAMP_API CTextdrawPool {
public:
	BOOL				m_bNotEmpty[MAX_TEXTDRAWS + MAX_LOCAL_TEXTDRAWS];
	CTextdraw	  *m_pTextdraw[MAX_TEXTDRAWS + MAX_LOCAL_TEXTDRAWS];
	
	CTextdrawPool();
	~CTextdrawPool();

	CTextdraw *New(ID nId, void *pTransmit, const char *szText);
	void Delete(ID nId);
	void Draw();
};

SAMP_END