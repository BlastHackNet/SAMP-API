/*
	This is a SAMP API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"

SAMPAPI_BEGIN_COMMON

struct SAMPAPI_EXPORT VectorCompressed {
    unsigned short x, y, z;
};

class SAMPAPI_EXPORT CVector {
public:
    float x, y, z;

    CVector();
    CVector(float x, float y, float z);

    void    Set(float x, float y, float z);
    float   GetLength() const;
    float   GetLengthSquared() const;
    void    Normalize();
    float   Dot(const CVector& vec) const;
    CVector Cross(const CVector& vec) const;
    void    ZeroNearZero();
};

SAMPAPI_END_COMMON
