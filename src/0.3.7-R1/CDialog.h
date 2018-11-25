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

enum eDialogType : unsigned int {
	DIALOG_TYPE_MSGBOX,
	DIALOG_TYPE_INPUT,
	DIALOG_TYPE_LIST,
	DIALOG_TYPE_PASSWORD
};

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
	eDialogType			m_nType;
	unsigned int		m_nId;
	char				  *m_szText;
	unsigned long		m_aTextSize[2];
	char					m_szCaption[65];
	BOOL					m_bServerside;

	CDialog(IDirect3DDevice9 *pDevice);

	void Hide();
	void Draw();
	void ResetDialogControls(CDXUTDialog *pDialog);
	void Close(char nProcessButton);
	void UpdateRects();
	void GetRect(CRect *pRect);
	int GetTextScreenLength(const char *szText);
	int GetFontHeight();
	void Open(
		unsigned short nId, 
		unsigned int nStyle, 
		const char *szCaption, 
		const char *szText, 
		const char *szLeftButton, 
		const char *szRightButton
	);
};

extern CDialog *&pDialog;

SAMP_END