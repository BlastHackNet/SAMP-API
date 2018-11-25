/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"

SAMP_BEGIN

struct SAMP_API VectorCompressed {
	unsigned short x, y, z;
};

struct SAMP_API CVector {
	float x, y, z;

	void Set(float x, float y, float z);
	float GetLength();
	void Normalize();
	float Dot(CVector vec);
	void Cross(CVector vec);
	void ZeroNearZero();
};

SAMP_END