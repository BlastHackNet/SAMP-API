/*
	This is a SAMP (0.3.7-R1) API project file.
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

	extern CDXUTDialog *&pGameUI;
	extern CDXUTDialog *&pScoreboard;
	extern CDXUTDialog *&pDialog;
	extern CDXUTDialog *&pClassSelection;

	extern IDirect3DSurface9 *&pCursor;

	void Initialize();

	void GameUIEventHandler(unsigned int nEvent, int nControlId, CDXUTControl *pControl, void *pUserContext);
	void ScoreboardEventHandler(unsigned int nEvent, int nControlId, CDXUTControl *pControl, void *pUserContext);
	void DialogEventHandler(unsigned int nEvent, int nControlId, CDXUTControl *pControl, void *pUserContext);
	void ClassSelectorEventHandler(unsigned int nEvent, int nControlId, CDXUTControl *pControl, void *pUserContext);
}

SAMP_END