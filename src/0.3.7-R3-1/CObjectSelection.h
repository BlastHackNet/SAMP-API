/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"

SAMP_BEGIN

class SAMP_API CObjectSelection {
public:
	BOOL  m_bIsActive;
	ID		m_nHoveredObject;

	CObjectSelection();
	
	ID DefineObject();
	void DrawLabels();
	void Enable(BOOL bEnable);
	void Draw();
	void SendNotification(); // enter
	BOOL MsgProc(int uMsg, int wParam, int lParam);
};

extern CObjectSelection *&pObjectSelection;

SAMP_END