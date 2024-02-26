/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"

SAMPAPI_BEGIN_PACKED_V03DL_1

class SAMPAPI_EXPORT CHelpDialog {
public:
    IDirect3DDevice9* m_pDevice;

    CHelpDialog(IDirect3DDevice9* pDevice = SAMPAPI_UNUSED);

    void Show();
};

SAMPAPI_EXPORT SAMPAPI_VAR CHelpDialog*& RefHelpDialog();

SAMPAPI_END_PACKED
