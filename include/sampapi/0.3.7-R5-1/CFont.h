/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"

/*
	this class handles RGB-formatted tags in ANSI text
	like a "{FFFFFF}Hello {FF5000}World!"
*/

SAMPAPI_BEGIN_PACKED_V037R5_1

#if defined(__D3DX9CORE_H__)

class SAMPAPI_EXPORT CFont : ID3DXFont {
public:
    // void **m_lpVtbl = 0xEA3B8;
    ID3DXFont* m_pFont;

    CFont();
    CFont(ID3DXFont* pFont);

    // IUnknown
    STDMETHOD(QueryInterface)
    (THIS_ REFIID iid, LPVOID* ppv) PURE;
    STDMETHOD_(ULONG, AddRef)
    (THIS) PURE;
    STDMETHOD_(ULONG, Release)
    (THIS) PURE;

    // ID3DXFont
    STDMETHOD(GetDevice)
    (THIS_ LPDIRECT3DDEVICE9* ppDevice) PURE;
    STDMETHOD(GetDescA)
    (THIS_ D3DXFONT_DESCA* pDesc) PURE;
    STDMETHOD(GetDescW)
    (THIS_ D3DXFONT_DESCW* pDesc) PURE;
    STDMETHOD_(BOOL, GetTextMetricsA)
    (THIS_ TEXTMETRICA* pTextMetrics) PURE;
    STDMETHOD_(BOOL, GetTextMetricsW)
    (THIS_ TEXTMETRICW* pTextMetrics) PURE;

    STDMETHOD_(HDC, GetDC)
    (THIS) PURE;
    STDMETHOD(GetGlyphData)
    (THIS_ UINT Glyph, LPDIRECT3DTEXTURE9* ppTexture, RECT* pBlackBox, POINT* pCellInc) PURE;

    STDMETHOD(PreloadCharacters)
    (THIS_ UINT First, UINT Last) PURE;
    STDMETHOD(PreloadGlyphs)
    (THIS_ UINT First, UINT Last) PURE;
    STDMETHOD(PreloadTextA)
    (THIS_ LPCSTR pString, INT Count) PURE;
    STDMETHOD(PreloadTextW)
    (THIS_ LPCWSTR pString, INT Count) PURE;

    STDMETHOD_(INT, DrawTextA)
    (THIS_ LPD3DXSPRITE pSprite, LPCSTR pString, INT Count, LPRECT pRect, DWORD Format, D3DCOLOR Color) PURE;
    STDMETHOD_(INT, DrawTextW)
    (THIS_ LPD3DXSPRITE pSprite, LPCWSTR pString, INT Count, LPRECT pRect, DWORD Format, D3DCOLOR Color) PURE;

    STDMETHOD(OnLostDevice)
    (THIS) PURE;
    STDMETHOD(OnResetDevice)
    (THIS) PURE;
};

#else

class SAMPAPI_EXPORT CFont {
public:
    void**     m_lpVtbl;
    ID3DXFont* m_pFont;

    CFont();
    CFont(ID3DXFont* pFont);
};

#endif

SAMPAPI_END_PACKED
