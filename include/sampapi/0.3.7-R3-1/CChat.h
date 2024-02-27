/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>

	See more here https://github.com/LUCHARE/SAMP-API

	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/CRect.h"
#include "sampapi/0.3.7-R3-1/CFonts.h"

SAMPAPI_BEGIN_PACKED_V037R3_1

class SAMPAPI_EXPORT CChat {
public:
    enum EntryType {
        ENTRY_TYPE_NONE = 0,
        ENTRY_TYPE_CHAT = 1 << 1,
        ENTRY_TYPE_INFO = 1 << 2,
        ENTRY_TYPE_DEBUG = 1 << 3
    };
    enum DisplayMode {
        DISPLAY_MODE_OFF,
        DISPLAY_MODE_NOSHADOW,
        DISPLAY_MODE_NORMAL
    };
    enum { MAX_MESSAGES = 100 };

    unsigned int    m_nPageSize;
    char*           m_szLastMessage;
    int             m_nMode;
    bool            m_bTimestamps;
    BOOL            m_bDoesLogExist;
    char            m_szLogPath[261]; // MAX_PATH(+1)
    CDXUTDialog*    m_pGameUi;
    CDXUTEditBox*   m_pEditbox;
    CDXUTScrollBar* m_pScrollbar;
    D3DCOLOR        m_textColor;  // 0xFFFFFFFF
    D3DCOLOR        m_infoColor;  // 0xFF88AA62
    D3DCOLOR        m_debugColor; // 0xFFA9C4E4
    long            m_nWindowBottom;

    struct SAMPAPI_EXPORT ChatEntry {
        int      m_timestamp;
        char     m_szPrefix[28];
        char     m_szText[144];
        char     unused[64];
        int      m_nType;
        D3DCOLOR m_textColor;
        D3DCOLOR m_prefixColor;
    };
    ChatEntry m_entry[MAX_MESSAGES];

    CFonts*               m_pFontRenderer;
    ID3DXSprite*          m_pTextSprite;
    ID3DXSprite*          m_pSprite;
    IDirect3DDevice9*     m_pDevice;
    BOOL                  m_bRenderToSurface;
    ID3DXRenderToSurface* m_pRenderToSurface;
    IDirect3DTexture9*    m_pTexture;
    IDirect3DSurface9*    m_pSurface;
#ifdef _d3d9TYPES_H_
    D3DDISPLAYMODE m_displayMode;
#else
    unsigned int m_displayMode[4];
#endif
    int  pad_[2];
    BOOL m_bRedraw;
    long m_nScrollbarPos;
    long m_nCharHeight; // this is the height of the "Y"
    long m_nTimestampWidth;

    CChat(IDirect3DDevice9* pDevice, CFonts* pFontRenderer, const char* szLogPath);

    int  GetMode();
    void SwitchMode();
    void RecalcFontSize();
    void OnLostDevice();
    void UpdateScrollbar();
    void SetPageSize(int nValue);
    void PageUp();
    void PageDown();
    void ScrollToBottom();
    void Scroll(int nDelta);
    void FilterOutInvalidChars(char* szString);
    void PushBack();
    void RenderEntry(const char* szText, CRect rect, D3DCOLOR color);
    void Log(int nType, const char* szText, const char* szPrefix);
    void ResetDialogControls(CDXUTDialog* pGameUi);
    void Render();
    void AddEntry(int nType, const char* szText, const char* szPrefix, D3DCOLOR textColor, D3DCOLOR prefixColor);
    void Draw();
    void RenderToSurface();
    void AddChatMessage(const char* szPrefix, D3DCOLOR prefixColor, const char* szText);
    void AddMessage(D3DCOLOR color, const char* szText);
    void OnResetDevice();
};

SAMPAPI_EXPORT SAMPAPI_VAR CChat*& RefChat();

SAMPAPI_END_PACKED
