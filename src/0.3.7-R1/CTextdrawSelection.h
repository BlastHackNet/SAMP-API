/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"

SAMP_BEGIN

class SAMP_API CTextdrawSelection {
public:
	BOOL			m_bIsActive;
	D3DCOLOR		m_dwHoveredColor;
	ID				m_nHoveredId;

	BOOL MsgProc(int uMsg, int wParam, int lParam);
	void Enable(D3DCOLOR dwHoveredColor);
	void Disable();
	void SendNotification();
};

extern CTextdrawSelection *&pTextdrawSelection;

SAMP_END