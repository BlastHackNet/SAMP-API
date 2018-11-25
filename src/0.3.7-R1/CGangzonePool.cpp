/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CGangzonePool.h"

SAMP::CGangzonePool::CGangzonePool() {
	((void(__thiscall *)(CGangzonePool *))SAMP_ADDROF(0x2110))(this);
}

SAMP::CGangzonePool::~CGangzonePool() {
	((void(__thiscall *)(CGangzonePool *))SAMP_ADDROF(0x2140))(this);
}

void SAMP::CGangzonePool::New(ID nId, float left, float top, float right, float bottom, D3DCOLOR dwColor) {
	((void(__thiscall *)(CGangzonePool *, ID, float, float, float, float, D3DCOLOR))SAMP_ADDROF(0x2170))(this, nId, left, top, right, bottom, dwColor);
}

void SAMP::CGangzonePool::Delete(ID nId) {
	((void(__thiscall *)(CGangzonePool *, ID))SAMP_ADDROF(0x2230))(this, nId);
}

void SAMP::CGangzonePool::EnableFlashing(ID nId, D3DCOLOR dwColor) {
	((void(__thiscall *)(CGangzonePool *, ID, D3DCOLOR))SAMP_ADDROF(0x21F0))(this, nId, dwColor);
}

void SAMP::CGangzonePool::DisableFlashing(ID nId) {
	((void(__thiscall *)(CGangzonePool *, ID))SAMP_ADDROF(0x2210))(this, nId);
}

void SAMP::CGangzonePool::Draw() {
	((void(__thiscall *)(CGangzonePool *))SAMP_ADDROF(0x2260))(this);
}