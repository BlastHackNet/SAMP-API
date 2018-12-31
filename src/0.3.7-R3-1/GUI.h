/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"

class CDXUTControl;
class CDXUTDialogResourceManager;

SAMP_BEGIN

namespace GUI {
	extern CDXUTDialogResourceManager *&pResourceMgr;

	extern CDXUTDialog *&pGameUi;
	extern CDXUTDialog *&pScoreboard;
	extern CDXUTDialog *&pDialog;
	extern CDXUTDialog *&pClassSelection;

	extern IDirect3DSurface9 *&pCursor;
	extern IDirect3DDevice9 *&pDevice;

	void Initialize();

	void OnLostDevice();
	void OnResetDevice();

	void GameUIEventHandler(unsigned int nEvent, int nControlId, CDXUTControl *pControl, void *pUserContext);
	void ScoreboardEventHandler(unsigned int nEvent, int nControlId, CDXUTControl *pControl, void *pUserContext);
	void DialogEventHandler(unsigned int nEvent, int nControlId, CDXUTControl *pControl, void *pUserContext);
	void ClassSelectionEventHandler(unsigned int nEvent, int nControlId, CDXUTControl *pControl, void *pUserContext);
}

SAMP_END