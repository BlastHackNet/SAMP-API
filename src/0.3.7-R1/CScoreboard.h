/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "CRect.h"

SAMP_BEGIN

class SAMP_API CScoreboard {
public:
	BOOL					m_bIsEnabled;
	unsigned int		m_nPlayerCount;
	float					m_fPosition[2];
	float					m_fScalar;
	float					m_fSize[2];
	float					pad_[5];
	IDirect3DDevice9 *m_pD3DDevice;
	CDXUTDialog		  *m_pDialog;
	CDXUTListBox	  *m_pListbox;
	unsigned int		m_nOffset;
	BOOL					m_bIsSorted; 

	CScoreboard(IDirect3DDevice9 *pDevice);
	
	void Show();
	void Draw();
	void Hide(bool bHideCursor);
	void UpdateList();
	void ResetDialogControls(CDXUTDialog *pDialog);
	void GetRect(CRect *pRect);
	void ResetScale();
	void ClickSelectedPlayer();
};

extern CScoreboard *&pScoreboard;

SAMP_END