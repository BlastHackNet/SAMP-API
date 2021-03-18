/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"

class CDXUTControl;
class CDXUTDialogResourceManager;

SAMPAPI_BEGIN_PACKED_V037R1

namespace GUI {
    SAMPAPI_EXPORT SAMPAPI_VAR CDXUTDialogResourceManager*& RefResourceMgr();

    SAMPAPI_EXPORT SAMPAPI_VAR CDXUTDialog*& RefGameUi();
    SAMPAPI_EXPORT SAMPAPI_VAR CDXUTDialog*& RefScoreboard();
    SAMPAPI_EXPORT SAMPAPI_VAR CDXUTDialog*& RefDialog();
    SAMPAPI_EXPORT SAMPAPI_VAR CDXUTDialog*& RefClassSelection();

    SAMPAPI_EXPORT SAMPAPI_VAR IDirect3DSurface9*& RefCursor();
    SAMPAPI_EXPORT SAMPAPI_VAR IDirect3DDevice9*& RefDevice();

    SAMPAPI_EXPORT void Initialize();

    SAMPAPI_EXPORT void OnLostDevice();
    SAMPAPI_EXPORT void OnResetDevice();

    SAMPAPI_EXPORT void GameUIEventHandler(unsigned int nEvent, int nControlId, CDXUTControl* pControl, void* pUserContext);
    SAMPAPI_EXPORT void ScoreboardEventHandler(unsigned int nEvent, int nControlId, CDXUTControl* pControl, void* pUserContext);
    SAMPAPI_EXPORT void DialogEventHandler(unsigned int nEvent, int nControlId, CDXUTControl* pControl, void* pUserContext);
    SAMPAPI_EXPORT void ClassSelectorEventHandler(unsigned int nEvent, int nControlId, CDXUTControl* pControl, void* pUserContext);
} // namespace GUI

SAMPAPI_END_PACKED
