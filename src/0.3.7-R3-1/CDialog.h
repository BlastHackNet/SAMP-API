/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "CRect.h"

SAMP_BEGIN

class SAMP_API CDialog {
public:
	IDirect3DDevice9 *m_pDevice;
	unsigned long		m_aPosition[2];
	unsigned long		m_aSize[2];
	unsigned long		m_aButtonOffset[2];
	CDXUTDialog		  *m_pDialog;
	CDXUTListBox	  *m_pListbox; 
	CDXUTIMEEditBox  *m_pEditbox; 
	BOOL					m_bIsActive;
	int					m_nType;
	unsigned int		m_nId;
	char				  *m_szText;
	unsigned long		m_aTextSize[2];
	char					m_szCaption[65];
	BOOL					m_bServerside;
	char					pad[536];

	enum { MessageBox, Input, List, PasswordInput, TabList, HeadersList };

	CDialog(IDirect3DDevice9 *pDevice);
	
	void GetScreenRect(CRect *pRect);
	int GetTextScreenLength(const char *szString);
	void Hide();
	void ResetDialogControls(CDXUTDialog *pDialog);
	void Show(int nId, int nType, const char *szCaption, const char *szText, const char *szLeftButton, const char *szRightButton, BOOL bServerside);
	void Close(char nProcessButton);
	void Draw();
};

extern CDialog *&pDialog;

SAMP_END