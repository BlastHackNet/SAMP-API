/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/CRect.h"
#include "sampapi/0.3.7-R5-1/Commands.h"

SAMPAPI_BEGIN_PACKED_V037R5_1

class SAMPAPI_EXPORT CInput {
public:
    enum {
        MAX_CLIENT_CMDS = 144,
        MAX_CMD_LENGTH = 32,
    };

    IDirect3DDevice9* m_pDevice;
    CDXUTDialog*      m_pGameUI;
    CDXUTEditBox*     m_pEditbox;
    CMDPROC           m_commandProc[MAX_CLIENT_CMDS];
    char              m_szCommandName[MAX_CLIENT_CMDS][MAX_CMD_LENGTH + 1];
    int               m_nCommandCount;
    BOOL              m_bEnabled;
    char              m_szInput[129];
    char              m_szRecallBufffer[10][129];
    char              m_szCurrentBuffer[129];
    int               m_nCurrentRecall;
    int               m_nTotalRecall;
    CMDPROC           m_pDefaultCommand;

    CInput(IDirect3DDevice9* pDevice);

    void    GetRect(CRect* pRect);
    void    Open();
    void    Close();
    void    AddRecall(const char* szString);
    void    RecallUp();
    void    RecallDown();
    void    EnableCursor();
    CMDPROC GetCommandHandler(const char* szName);
    void    SetDefaultCommand(CMDPROC handler);
    void    AddCommand(const char* szName, CMDPROC handler);
    BOOL    MsgProc(int uMsg, int wParam, int lParam);
    void    ResetDialogControls(CDXUTDialog* pGameUi);
    void    Send(const char* szString);
    void    ProcessInput();
};

SAMPAPI_EXPORT SAMPAPI_VAR CInput*& RefInputBox();

SAMPAPI_END_PACKED
