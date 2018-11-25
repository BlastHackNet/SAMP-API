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

class SAMP_API CDeathWindow {
public:
	BOOL					m_bEnabled;
	struct {
		char				m_szKiller[25];
		char				m_szVictim[25];
		D3DCOLOR			m_dwKillerColor;
		D3DCOLOR			m_dwVictimColor;
		unsigned char	m_nType;
	}						m_aEntry[5];
	unsigned int 		m_nLongestNickWidth;
	unsigned long		m_aPosition[2];
	ID3DXFont		  *m_pFont;
	ID3DXFont		  *m_pWeaponFont1;
	ID3DXFont		  *m_pWeaponFont2;
	ID3DXSprite		  *m_pSprite;
	IDirect3DDevice9 *m_pDevice;
	BOOL					m_bAuxFontInited;
  	ID3DXFont 		  *m_pAuxFont1;
  	ID3DXFont 		  *m_pAuxFont2;

	CDeathWindow(IDirect3DDevice9 *pDevice);

	void InitAuxFont();
	void PushBack();
	void RenderText(const char *pText, CRect rect, D3DCOLOR dwColor);
	void RenderWeaponSprite(const char *pWeaponChar, CRect rect, D3DCOLOR dwColor);
	void GetWeaponRectSize(void *pPoint);
	const char *GetWeaponSpriteId(char nWeapon);
	void CreateFonts();
	void Draw();
	void AddEntry(const char *pKiller, const char *pVictim, D3DCOLOR dwKiller, D3DCOLOR dwVictim, char nWeapon);
	// jmp CDeathWindow::AddEntry
	void AddMessage(const char *pKiller, const char *pVictim, D3DCOLOR dwKiller, D3DCOLOR dwVictim, char nWeapon); 
};

extern CDeathWindow *&pDeathWindow;

SAMP_END