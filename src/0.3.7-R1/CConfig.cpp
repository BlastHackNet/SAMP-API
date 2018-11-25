/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "CConfig.h"

SAMP::CConfig *&SAMP::pConfig = *(SAMP::CConfig **)SAMP_ADDROF(0x21A0E0);

SAMP::CConfig::CConfig(const char *szFile) {
	((void(__thiscall *)(CConfig *, const char *))SAMP_ADDROF(0x62820))(this, szFile);
}

void SAMP::CConfig::FindFirstFree() {
	((void(__thiscall *)(CConfig *))SAMP_ADDROF(0x62080))(this);
}

int SAMP::CConfig::GetIndex(const char *szName) {
	return ((int(__thiscall *)(CConfig *, const char *))SAMP_ADDROF(0x620D0))(this, szName);
}

BOOL SAMP::CConfig::DoesExist(const char *szName) {
	return ((BOOL(__thiscall *)(CConfig *, const char *))SAMP_ADDROF(0x62170))(this, szName);
}

int SAMP::CConfig::Create(const char *szName) {
	return ((int(__thiscall *)(CConfig *, const char *))SAMP_ADDROF(0x62190))(this, szName);
}

int SAMP::CConfig::GetIntValue(const char *szName) {
	return ((int(__thiscall *)(CConfig *, const char *))SAMP_ADDROF(0x62250))(this, szName);
}

const char *SAMP::CConfig::GetStringValue(const char *szName) {
	return ((const char *(__thiscall *)(CConfig *, const char *))SAMP_ADDROF(0x62280))(this, szName);
}

float SAMP::CConfig::GetFloatValue(const char *szName) {
	return ((float(__thiscall *)(CConfig *, const char *))SAMP_ADDROF(0x622B0))(this, szName);
}

BOOL SAMP::CConfig::Delete(const char *szName) {
	return ((BOOL(__thiscall *)(CConfig *, const char *))SAMP_ADDROF(0x622E0))(this, szName);
}

SAMP::eValueType SAMP::CConfig::GetType(const char *szName) {
	return ((eValueType(__thiscall *)(CConfig *, const char *))SAMP_ADDROF(0x62340))(this, szName);
}

SAMP::CConfig::Entry *SAMP::CConfig::GetEntry(int nIndex) {
	return ((Entry *(__thiscall *)(CConfig *, int))SAMP_ADDROF(0x62370))(this, nIndex);
}

BOOL SAMP::CConfig::Save() {
	return ((BOOL(__thiscall *)(CConfig *))SAMP_ADDROF(0x62410))(this);
}

BOOL SAMP::CConfig::SetIntValue(const char *szName, int nValue, BOOL bReadOnly) {
	return ((BOOL(__thiscall *)(CConfig *, const char *, int, BOOL))SAMP_ADDROF(0x624C0))(this, szName, nValue, bReadOnly);
}

BOOL SAMP::CConfig::SetStringValue(const char *szName, const char *szValue, BOOL bReadOnly) {
	return ((BOOL(__thiscall *)(CConfig *, const char *, const char *, BOOL))SAMP_ADDROF(0x62520))(this, szName, szValue, bReadOnly);
}

BOOL SAMP::CConfig::SetFloatValue(const char *szName, float fValue, BOOL bReadOnly) {
	return ((BOOL(__thiscall *)(CConfig *, const char *, float, BOOL))SAMP_ADDROF(0x625C0))(this, szName, fValue, bReadOnly);
}

BOOL SAMP::CConfig::SetValue(const char *szName, const char *szValue) {
	return ((BOOL(__thiscall *)(CConfig *, const char *, const char *))SAMP_ADDROF(0x62620))(this, szName, szValue);
}

BOOL SAMP::CConfig::Load() {
	return ((BOOL(__thiscall *)(CConfig *))SAMP_ADDROF(0x626B0))(this);
}