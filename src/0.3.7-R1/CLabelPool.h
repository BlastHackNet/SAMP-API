/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "CVector.h"

#define MAX_TEXT_LABELS 2048

SAMP_BEGIN

struct SAMP_API LabelInfo {
	char		  *m_pText;
	D3DCOLOR		m_dwColor;
	CVector		m_vPosition;
	float			m_fDrawDistance;
	bool			m_bBehindWalls;
	ID				m_nAttachedToPlayer;
	ID				m_nAttachedToVehicle;
};

class SAMP_API CLabelPool {
public:
	LabelInfo	m_label[MAX_TEXT_LABELS];
	int			m_bNotEmpty[MAX_TEXT_LABELS];

	CLabelPool();
	~CLabelPool();

	void New(ID nId, const char *szText, D3DCOLOR dwColor, CVector vPos, float fDrawDistance, bool bBehindWalls, ID nAttachedToPlayer, ID nAttachedToVehicle);
	BOOL Delete(ID nId);
	void Draw();
};

SAMP_END