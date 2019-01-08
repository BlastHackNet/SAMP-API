/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"

#define DEBUG_MODE_VEHICLE_SELECTION 10

SAMP_BEGIN

namespace Debug {
	extern int &nMode;
	extern void *&pFirstEntity;
	extern void *&pSecondEntity;

	void SetProperties(void *pFirstEntity, void *pSecondEntity, int nMode);
	void Disable();
}

SAMP_END