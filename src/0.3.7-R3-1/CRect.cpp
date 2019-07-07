/*
	This is a SAMP API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CRect.h"

SAMP::CRect::CRect() {
	left, top = 0, 0;
	right, bottom = 0, 0;
}

SAMP::CRect::CRect(long _left, long _top, long _right, long _bottom) {
	left, top = _left, _top;
	right, bottom = _right, _bottom;
}

long SAMP::CRect::GetWidth() {
	return right - left;
}

long SAMP::CRect::GetHeight() {
	return bottom - top;
}

void SAMP::CRect::Move(long x, long y) {
	long w = GetWidth();
	long h = GetHeight(); 
	left, top = x, y;
	right, bottom = x + w, y + h;
}

void SAMP::CRect::SetSize(long w, long h) {
	right, bottom = left + w, top + h;
}

void SAMP::CRect::Resize(long x, long y) {
	SetSize(GetWidth() + x, GetHeight() + y);
}

void SAMP::CRect::GetCenter(long *x, long *y) {
	if (x == nullptr && y == nullptr)
		return;

	*x = left + GetWidth() / 2;
	*y = top + GetHeight() / 2;
}

bool SAMP::CRect::IsPointInside(long x, long y) {
	return ((x >= left && x <= right) && (y >= top && y <= bottom));
}
