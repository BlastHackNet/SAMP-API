/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "CVector.h"

SAMP_BEGIN

class SAMP_API CLabel {
public:
	IDirect3DDevice9 *m_pDevice;
	ID3DXSprite		  *m_pSprite;

	CLabel(IDirect3DDevice9 *pDevice);
	~CLabel() {
		OnLostDevice();
	}

	void Begin();
	void Draw(CVector *pPos, const char *szText, D3DCOLOR dwColor, bool bShadow, bool bIfHasNoObstacles);
	void End();
	
	void OnLostDevice();
	void OnResetDevice();

	BOOL HasNoObstacles(CVector vPoint);
};

extern CLabel *&pLabel;

SAMP_END