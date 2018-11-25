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

class SAMP_API CFonts {
public:
	ID3DXFont			*m_pFont;
	ID3DXFont			*m_pLittleFont;
	ID3DXFont			*m_pShadow;
	ID3DXFont			*m_pLittleShadow;
	ID3DXFont			*m_pAnyFont;
	ID3DXSprite			*m_pDefaultSprite;
	IDirect3DDevice9	*m_pDevice;
	char					*m_szTempBuffer;
	
	CFonts(IDirect3DDevice9 *pDevice);
	~CFonts();

	void OnLostDevice();
	void OnResetDevice();

	void GetTextScreenSize(void *pPoint, const char *szText, unsigned long dwFormat);
	void GetLittleTextScreenSize(void *pPoint, const char *szText, unsigned long dwFormat);
	
	void RenderText(ID3DXSprite *pSprite, const char *szText, CRect rect, D3DCOLOR dwColor, bool bShadow);
	void RenderLittleText(ID3DXSprite *pSprite, const char *szText, CRect rect, D3DCOLOR dwColor, bool bShadow);

	void CreateFonts();
};

extern CFonts *&pFontRenderer;

SAMP_END