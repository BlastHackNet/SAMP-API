/*
	This is a SAMP API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"

SAMPAPI_BEGIN_COMMON

class SAMPAPI_EXPORT CRect {
public:
    long left, top;
    long right, bottom;

    CRect();
    CRect(long left, long top, long right, long bottom);

    long GetWidth();
    long GetHeight();
    void Move(long x, long y);
    void Resize(long x, long y);
    void SetSize(long w, long h);
    void GetCenter(long* x, long* y);
    bool IsPointInside(long x, long y);
};

SAMPAPI_END_COMMON
