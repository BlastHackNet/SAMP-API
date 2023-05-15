/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"

SAMPAPI_BEGIN_PACKED_V037R5_1

class SAMPAPI_EXPORT CObjectSelection {
public:
    BOOL m_bIsActive;
    ID   m_nHoveredObject;

    CObjectSelection();

    ID   DefineObject();
    void DrawLabels();
    void Enable(BOOL bEnable);
    void Draw();
    void SendNotification(); // enter
    BOOL MsgProc(int uMsg, int wParam, int lParam);
};

SAMPAPI_EXPORT SAMPAPI_VAR CObjectSelection*& RefObjectSelection();

SAMPAPI_END_PACKED
