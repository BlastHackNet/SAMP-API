/*
	This is a SAMP API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/CPoint.h"

SAMPAPI_BEGIN_COMMON

CPoint::CPoint()
    : x(0),
      y(0) {
}

CPoint::CPoint(long x, long y)
    : x(x),
      y(y) {
}

SAMPAPI_END_COMMON
