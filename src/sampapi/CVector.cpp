/*
	This is a SAMP API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/CVector.h"
#include <cmath>

SAMPAPI_BEGIN_COMMON

CVector::CVector()
    : x(0),
      y(0),
      z(0) {
}

CVector::CVector(float x, float y, float z)
    : x(x),
      y(y),
      z(z) {
}

void CVector::Set(float _x, float _y, float _z) {
    x = _x;
    y = _y;
    z = _z;
}

float CVector::GetLengthSquared() const {
    return x * x + y * y + z * z;
}

float CVector::GetLength() const {
    return std::sqrt(GetLengthSquared());
}

void CVector::Normalize() {
    float len = GetLength();
    x /= len;
    y /= len;
    z /= len;
}

float CVector::Dot(const CVector& vec) const {
    return x * vec.x + y * vec.y + z * vec.z;
}

CVector CVector::Cross(const CVector& vec) const {
    return CVector(y * vec.z - vec.y * z,
                   z * vec.x - vec.z * x,
                   x * vec.y - vec.x * y);
}

void CVector::ZeroNearZero() {
    if (std::abs(x) < 0.0001f)
        x = 0;
    if (std::abs(y) < 0.0001f)
        y = 0;
    if (std::abs(z) < 0.0001f)
        z = 0;
}

SAMPAPI_END_COMMON
