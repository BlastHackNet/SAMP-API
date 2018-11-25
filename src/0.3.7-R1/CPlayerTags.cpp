/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CPlayerTags.h"

SAMP::CPlayerTags *&SAMP::pPlayerTags = *(SAMP::CPlayerTags **)SAMP_ADDROF(0x21A0B0);

SAMP::CPlayerTags::CPlayerTags(IDirect3DDevice9 *pDevice) {
	((void(__thiscall *)(CPlayerTags *, IDirect3DDevice9 *))SAMP_ADDROF(0x68610))(this, pDevice);
}

SAMP::CPlayerTags::~CPlayerTags() {
	((void(__thiscall *)(CPlayerTags *))SAMP_ADDROF(0x68640))(this);
}

void SAMP::CPlayerTags::BeginLabel() {
	((void(__thiscall *)(CPlayerTags *))SAMP_ADDROF(0x686A0))(this);
}

void SAMP::CPlayerTags::DrawLabel(CVector *pPosition, const char *szLabel, D3DCOLOR dwColor, float fDistanceToCamera, bool bDrawStatus, int nStatus) {
	((void(__thiscall *)(CPlayerTags *, CVector *, const char *, D3DCOLOR, float, bool, int))SAMP_ADDROF(0x686C0))(this, pPosition, szLabel, dwColor, fDistanceToCamera, bDrawStatus, nStatus);
}

void SAMP::CPlayerTags::EndLabel() {
	((void(__thiscall *)(CPlayerTags *))SAMP_ADDROF(0x686B0))(this);
}

void SAMP::CPlayerTags::BeginHealthBar() {
	((void(__thiscall *)(CPlayerTags *))SAMP_ADDROF(0x68FD0))(this);
}

void SAMP::CPlayerTags::DrawHealthBar(CVector *pPosition, float fHealth, float fArmour, float fDistanceToCamera) {
	((void(__thiscall *)(CPlayerTags *, CVector *, float, float, float))SAMP_ADDROF(0x689C0))(this, pPosition, fHealth, fArmour, fDistanceToCamera);
}

void SAMP::CPlayerTags::EndHealthBar() {
	((void(__thiscall *)(CPlayerTags *))SAMP_ADDROF(0x68670))(this);
}

void SAMP::CPlayerTags::OnLostDevice() {
	((void(__thiscall *)(CPlayerTags *))SAMP_ADDROF(0x68F70))(this);
}

void SAMP::CPlayerTags::OnResetDevice() {
	((void(__thiscall *)(CPlayerTags *))SAMP_ADDROF(0x68FA0))(this);
}