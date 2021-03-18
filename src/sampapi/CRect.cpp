/*
	This is a SAMP API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/CRect.h"

SAMPAPI_BEGIN_COMMON

CRect::CRect()
    : left(0),
      top(0),
      right(0),
      bottom(0) {
}

CRect::CRect(long _left, long _top, long _right, long _bottom)
    : left(_left),
      top(_top),
      right(_right),
      bottom(_bottom) {
}

long CRect::GetWidth() {
    return right - left;
}

long CRect::GetHeight() {
    return bottom - top;
}

void CRect::Move(long x, long y) {
    long w = GetWidth();
    long h = GetHeight();
    left = x;
    top = y;
    right = x + w;
    bottom = y + h;
}

void CRect::SetSize(long w, long h) {
    right = left + w;
    bottom = top + h;
}

void CRect::Resize(long x, long y) {
    SetSize(GetWidth() + x, GetHeight() + y);
}

void CRect::GetCenter(long* x, long* y) {
    if (x && y) {
        *x = left + GetWidth() / 2;
        *y = top + GetHeight() / 2;
    }
}

bool CRect::IsPointInside(long x, long y) {
    return (x >= left && x <= right) && (y >= top && y <= bottom);
}

SAMPAPI_END_COMMON
