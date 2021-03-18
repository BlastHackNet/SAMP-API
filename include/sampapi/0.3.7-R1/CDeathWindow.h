/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/CRect.h"

SAMPAPI_BEGIN_PACKED_V037R1

class SAMPAPI_EXPORT CDeathWindow {
public:
    enum { MAX_DEATHMESSAGES = 5 };

    BOOL m_bEnabled;

    struct SAMPAPI_EXPORT {
        char     m_szKiller[25];
        char     m_szVictim[25];
        D3DCOLOR m_killerColor;
        D3DCOLOR m_victimColor;
        char     m_nWeapon;
    } m_entry[MAX_DEATHMESSAGES];

    int               m_nLongestNickWidth;
    int               m_position[2];
    ID3DXFont*        m_pFont;
    ID3DXFont*        m_pWeaponFont1;
    ID3DXFont*        m_pWeaponFont2;
    ID3DXSprite*      m_pSprite;
    IDirect3DDevice9* m_pDevice;
    BOOL              m_bAuxFontInited;
    ID3DXFont*        m_pAuxFont1;
    ID3DXFont*        m_pAuxFont2;

    CDeathWindow(IDirect3DDevice9* pDevice);
    ~CDeathWindow();

    void        InitializeAuxFonts();
    void        PushBack();
    void        DrawText(const char* szText, CRect rect, D3DCOLOR color, int nFormat);
    void        DrawWeaponSprite(const char* szSpriteId, CRect rect, D3DCOLOR color);
    void        GetWeaponSpriteRectSize(void* pPoint);
    const char* GetWeaponSpriteId(char nWeapon);
    void        ResetFonts();
    void        Draw();
    void        AddEntry(const char* szKiller, const char* szVictim, D3DCOLOR killerColor, D3DCOLOR victimColor, char nWeapon);
    void        AddMessage(const char* szKiller, const char* szVictim, D3DCOLOR killerColor, D3DCOLOR victimColor, char nWeapon);
};

SAMPAPI_EXPORT SAMPAPI_VAR CDeathWindow*& RefDeathWindow();

SAMPAPI_END_PACKED
