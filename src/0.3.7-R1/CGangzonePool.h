/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "CRect.h"

#define MAX_GANGZONES 1024

SAMP_BEGIN

struct Gangzone {
	struct {
		float left;
		float bottom;
		float right;
		float top;
	}			m_rect;
	D3DCOLOR	m_dwColor;
	D3DCOLOR	m_dwAltColor;
};

class SAMP_API CGangzonePool {
public:
	Gangzone		*m_pGangzone[MAX_GANGZONES];
	BOOL			 m_bNotEmpty[MAX_GANGZONES];
	
	CGangzonePool();
	~CGangzonePool();

	void New(ID nId, float left, float top, float right, float bottom, D3DCOLOR dwColor);
	void EnableFlashing(ID nId, D3DCOLOR dwColor);
	void DisableFlashing(ID nId);
	void Delete(ID nId);
	void Draw();
};

SAMP_END