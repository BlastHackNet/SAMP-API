/*
	This is a SAMP API project file.
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

class SAMP_API CVector {
public:
	float x, y, z;

	CVector() { Set(0, 0, 0); }
	CVector(float x, float y, float z) { Set(x, y, z); }

	void Set(float x, float y, float z);
	float GetLength();
	void Normalize();
	float Dot(CVector vec);
	void Cross(CVector vec);
	void ZeroNearZero();
};

SAMP_END
