/*
	This is a SAMP API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"

SAMPAPI_BEGIN_COMMON

class SAMPAPI_EXPORT CPoint {
public:
    long x, y;

    CPoint();
    CPoint(long x, long y);
};

SAMPAPI_END_COMMON
