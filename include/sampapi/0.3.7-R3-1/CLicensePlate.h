/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"

SAMPAPI_BEGIN_PACKED_V037R3_1

class SAMPAPI_EXPORT CLicensePlate {
public:
    static constexpr auto DEFAULT_PLATE_FONT = "Arial";
    static constexpr auto DEFAULT_PLATE_TEXT = "XYZSR998";
    enum {
        DEFAULT_PLATE_TEXT_COLOR = 0xEE444470,
        DEFAULT_PLATE_BG_COLOR = 0xFFBEB6A8,
    };

    IDirect3DDevice9*     m_pDevice;
    ID3DXRenderToSurface* m_pRenderer;
    IDirect3DTexture9*    m_pTexture;
    IDirect3DSurface9*    m_pSurface;
#ifdef _d3d9TYPES_H_
    D3DDISPLAYMODE m_displayMode;
#else
    unsigned int m_displayMode[4];
#endif
    IDirect3DTexture9* m_pDefaultPlate;

    CLicensePlate(IDirect3DDevice9* pDevice);
    ~CLicensePlate();

    void               OnLostDevice();
    void               OnResetDevice();
    IDirect3DTexture9* Create(const char* szText);
};

SAMPAPI_EXPORT SAMPAPI_VAR CLicensePlate*& RefLicensePlateManager();

SAMPAPI_END_PACKED
