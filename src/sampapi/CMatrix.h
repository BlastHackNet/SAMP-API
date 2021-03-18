/*
	This is a SAMP API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/CVector.h"

SAMPAPI_BEGIN_COMMON

class SAMPAPI_EXPORT CMatrix {
public:
    CVector       right;
    unsigned long flags;
    CVector       up;
    float         pad_u;
    CVector       at;
    float         pad_a;
    CVector       pos;
    float         pad_p;
};

SAMPAPI_END_COMMON
