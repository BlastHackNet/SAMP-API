/*
	This is a SAMP API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "CVector.h"

SAMP_BEGIN

class SAMP_API CMatrix {
public:
	CVector right;
	unsigned long flags;
	CVector up;
	float pad_u;
	CVector at;
	float pad_a;
	CVector pos;
	float pad_p;
};

SAMP_END
