/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CMenuPool.h"

SAMP::CMenuPool::CMenuPool() {
	((void(__thiscall *)(CMenuPool *))SAMP_ADDROF(0x7AB0))(this);
}

SAMP::CMenuPool::~CMenuPool() {
	((void(__thiscall *)(CMenuPool *))SAMP_ADDROF(0x7E20))(this);
}

SAMP::CMenu *SAMP::CMenuPool::New(unsigned char nId, const char *szTitle, float fX, float fY, unsigned char nColumns, float fCol1Width, float fCol2Width, void *pInteraction) {
	((void(__thiscall *)(CMenuPool *, unsigned char, const char *, float, float, unsigned char, float, float, void *))SAMP_ADDROF(0x7B00))(this, nId, szTitle, fX, fY, nColumns, fCol1Width, fCol2Width, pInteraction);
}

BOOL SAMP::CMenuPool::Delete(unsigned char nId) {
	return ((BOOL(__thiscall *)(CMenuPool *, unsigned char))SAMP_ADDROF(0x7BD0))(this, nId);
}

void SAMP::CMenuPool::Show(unsigned char nId) {
	((void(__thiscall *)(CMenuPool *, unsigned char))SAMP_ADDROF(0x7C20))(this, nId);
}

void SAMP::CMenuPool::Hide(unsigned char nId) {
	((void(__thiscall *)(CMenuPool *, unsigned char))SAMP_ADDROF(0x7C80))(this, nId);
}

char *SAMP::CMenuPool::GetTextPointer(const char *szName) {
	return ((char *(__thiscall *)(CMenuPool *, const char *))SAMP_ADDROF(0x7CC0))(this, szName);
}

void SAMP::CMenuPool::Process() {
	((void(__thiscall *)(CMenuPool *))SAMP_ADDROF(0x7E60))(this);
}