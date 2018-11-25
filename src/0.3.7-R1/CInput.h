/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "CRect.h"

#define MAX_CLIENT_CMDS 144
#define MAX_CMD_LENGTH 32

SAMP_BEGIN

typedef void(__cdecl *CMDPROC) (const char *);

class SAMP_API CInput {
public:
	IDirect3DDevice9 *m_pD3DDevice;
	CDXUTDialog		  *m_pGameUI;
	CDXUTEditBox	  *m_pEditbox;
	CMDPROC				m_pCommandProc[MAX_CLIENT_CMDS];
	char					m_szCommandName[MAX_CLIENT_CMDS][MAX_CMD_LENGTH + 1];
	unsigned int		m_nCommandCount;
	BOOL					m_bEnabled;
	char					m_szInput[129];
	char					m_szRecallBufffer[10][129];
	char					m_szCurrentBuffer[129];
	unsigned int		m_nCurrentRecall;
	unsigned int		m_nTotalRecall;
	CMDPROC				m_pDefaultCommand;

	CInput(IDirect3DDevice9 *pDevice);

	void ResetDialogControls(CDXUTDialog *pGameUI);
	void Hide();
	void Show();
	int MsgProc(unsigned int uMsg, unsigned int wParam, long lParam);
	void AddRecall(const char *szText);
	void RecallUp();
	void RecallDown();
	void AddCommand(const char *szName, CMDPROC pProc);
	void EnableCursor();
	void GetChatRect(CRect *pRect);
	CMDPROC GetCommandHandler(const char *pName);
	void SetDefaultCommand(CMDPROC pProc);
	void ProcessInput();
	void SendCommand(const char *szText);
};

extern CInput *&pInputbox;

SAMP_END