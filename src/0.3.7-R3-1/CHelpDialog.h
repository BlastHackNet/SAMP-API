/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"

SAMP_BEGIN

class SAMP_API CHelpDialog {
public:
	IDirect3DDevice9 *m_pDevice;

	CHelpDialog(IDirect3DDevice9 *pDevice = SAMP_UNUSED);
	
	void Show();
};

extern CHelpDialog *&pHelpDialog;

SAMP_END