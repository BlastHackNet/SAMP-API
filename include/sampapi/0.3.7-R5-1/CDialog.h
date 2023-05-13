/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/CRect.h"

SAMPAPI_BEGIN_PACKED_V037R5_1

class SAMPAPI_EXPORT CDialog {
public:
    enum DialogType {
        DIALOG_MESSAGEBOX,
        DIALOG_INPUT,
        DIALOG_LIST,
        DIALOG_PASSWORD,
        DIALOG_TABLIST,
        DIALOG_HEADERSLIST
    };

    IDirect3DDevice9* m_pDevice;
    unsigned long     m_position[2];
    unsigned long     m_size[2];
    unsigned long     m_buttonOffset[2];
    CDXUTDialog*      m_pDialog;
    CDXUTListBox*     m_pListbox;
    CDXUTIMEEditBox*  m_pEditbox;
    BOOL              m_bIsActive;
    int               m_nType;
    unsigned int      m_nId;
    char*             m_szText;
    unsigned long     m_textSize[2];
    char              m_szCaption[65];
    BOOL              m_bServerside;
    char              pad[536];

    CDialog(IDirect3DDevice9* pDevice);

    void GetScreenRect(CRect* pRect);
    int  GetTextScreenLength(const char* szString);
    void Hide();
    void ResetDialogControls(CDXUTDialog* pDialog);
    void Show(int nId, int nType, const char* szCaption, const char* szText, const char* szLeftButton, const char* szRightButton, BOOL bServerside);
    void Close(char nProcessButton);
    void Draw();
};

SAMPAPI_EXPORT SAMPAPI_VAR CDialog*& RefDialog();

SAMPAPI_END_PACKED
