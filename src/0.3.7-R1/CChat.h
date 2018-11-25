/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "CFonts.h"

SAMP_BEGIN

enum eChatEntryType : unsigned int {
	CHAT_TYPE_NONE = 0,
	CHAT_TYPE_CHAT = 1 << 1,
	CHAT_TYPE_INFO = 1 << 2,
	CHAT_TYPE_DEBUG = 1 << 3
};

enum eChatWindowMode :  unsigned int {
	CHAT_WINDOW_MODE_OFF,
	CHAT_WINDOW_MODE_LIGHT,
	CHAT_WINDOW_MODE_FULL
};

class SAMP_API CChat {
public:
	unsigned int			m_nPageSize;
	char					  *m_pLastMsgText;
	eChatWindowMode		m_nMode;
	bool						m_bTimestamps;
	BOOL						m_bIsLogExist;
	char						m_szLogPath[261]; // MAX_PATH(+1)
	CDXUTDialog			  *m_pGameUI; 
	CDXUTEditBox        *m_pEditboxBg; 
	CDXUTScrollBar	     *m_pScrollbar; 
	D3DCOLOR					m_dwTextColor;  // 0xFFFFFFFF
	D3DCOLOR					m_dwInfoColor;  // 0xFF88AA62
	D3DCOLOR					m_dwDebugColor; // 0xFFA9C4E4
	unsigned long			m_dwWindowBottom;
	struct {
		unsigned int	m_nTimestamp;
		char				m_szPrefix[28];
		char				m_szText[144];
		unsigned char	unknown[64];
		eChatEntryType	m_nType;
		D3DCOLOR			m_dwTextColor;
		D3DCOLOR			m_dwPrefixColor;
	}							m_aEntry[100];
	CFonts				  *m_pFontRenderer;
	ID3DXSprite			  *m_pTextSprite;
	ID3DXSprite			  *m_pSprite;
	IDirect3DDevice9	  *m_pDevice;
	BOOL						m_bRenderToSurface;
	ID3DXRenderToSurface*m_pRenderToSurface;
	IDirect3DTexture9	  *m_pTexture;
	IDirect3DSurface9	  *m_pSurface;
#ifdef _d3d9TYPES_H_
	D3DDISPLAYMODE		   m_displayMode;
#else
	unsigned int			m_displayMode[4];
#endif
	int						pad_[2];
	BOOL						m_bRedraw;
	unsigned long			m_nScrollbarPos;
	unsigned long			m_nCharHeight; // this is the height of the "Y" 
	unsigned long			m_nTimestampWidth;

	CChat(IDirect3DDevice9 *pDevice, CFonts *pFontRenderer, const char *pChatLogPath);
	~CChat();

	void CycleMode();
	void CalcSizes();
	void OnLostDevice();
	void OnResetDevice();
	void UpdateScrollbar();
	void SetPageSize(unsigned int nSize);
	void PageUp();
	void PageDown();
	void ScrollToBottom();
	void RenderText(const char *pText, CRect rect, D3DCOLOR dwColor);
	void LogToFile(int nEntryType, const char *pText);
	void ResetDialogControls(CDXUTDialog *pGameUI);
	void AddEntry(eChatEntryType nType, const char *pText, const char *pPrefix, D3DCOLOR dwTextColor, D3DCOLOR dwPrefixColor);
	void Draw();
	void DrawInDirectMode();
	void AddChatMessage(const char *pNick, D3DCOLOR dwNickColor, const char *pText);
	void AddClientMessage(D3DCOLOR dwColor, const char *pText);
	void FilterInvalidChars(char *pText);

	static void Print(CChat *pChat, D3DCOLOR dwColor, const char *pFormat, ...);
	// static void AddInfoMessage(CChat *pChat, char *pFormat, ...); // samp.dll+0x644a0
	// static void AddDebugMessage(CChat *pChat, char *pFormat, ...); // samp.dll+0x64520
};

extern CChat *&pChat;

SAMP_END