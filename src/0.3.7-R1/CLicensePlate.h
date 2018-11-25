/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"

SAMP_BEGIN

class SAMP_API CLicensePlate {
public:
	IDirect3DDevice9		*m_pDevice;
	ID3DXRenderToSurface *m_pRenderer;
	IDirect3DTexture9		*m_pTexture;
	IDirect3DSurface9		*m_pSurface;
#ifdef _d3d9TYPES_H_
	D3DDISPLAYMODE		    m_displayMode;
#else
	unsigned int			 m_displayMode[4];
#endif
	IDirect3DTexture9		*m_pDefaultPlate;

	CLicensePlate(IDirect3DDevice9 *pDevice);
	~CLicensePlate();

	void OnLostDevice();
	void OnResetDevice();

	IDirect3DTexture9 *Create(const char *pText);
};

extern CLicensePlate *&pLicensePlateConstructor;

SAMP_END