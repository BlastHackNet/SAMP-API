/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/CConfig.h"

SAMPAPI_BEGIN_V037R3_1

SAMPAPI_VAR CConfig*& RefConfig() {
    return *(CConfig**)GetAddress(0x26E8C4);
}

CConfig::CConfig(const char* szFile) {
    ((void(__thiscall*)(CConfig*, const char*))GetAddress(0x65C70))(this, szFile);
}

CConfig::~CConfig() {
    ((void(__thiscall*)(CConfig*))GetAddress(0x65490))(this);
}

void CConfig::FindFirstFree() {
    ((void(__thiscall*)(CConfig*))GetAddress(0x654D0))(this);
}

int CConfig::GetIndex(const char* szEntry) {
    return ((int(__thiscall*)(CConfig*, const char*))GetAddress(0x65520))(this, szEntry);
}

bool CConfig::DoesExist(const char* szEntry) {
    return ((bool(__thiscall*)(CConfig*, const char*))GetAddress(0x655C0))(this, szEntry);
}

int CConfig::CreateEntry(const char* szName) {
    return ((int(__thiscall*)(CConfig*, const char*))GetAddress(0x655E0))(this, szName);
}

int CConfig::GetIntValue(const char* szEntry) {
    return ((int(__thiscall*)(CConfig*, const char*))GetAddress(0x656A0))(this, szEntry);
}

const char* CConfig::GetStringValue(const char* szEntry) {
    return ((const char*(__thiscall*)(CConfig*, const char*))GetAddress(0x656D0))(this, szEntry);
}

float CConfig::GetFloatValue(const char* szEntry) {
    return ((float(__thiscall*)(CConfig*, const char*))GetAddress(0x65700))(this, szEntry);
}

BOOL CConfig::Free(const char* szEntry) {
    return ((BOOL(__thiscall*)(CConfig*, const char*))GetAddress(0x65730))(this, szEntry);
}

int CConfig::GetValueType(const char* szEntry) {
    return ((int(__thiscall*)(CConfig*, const char*))GetAddress(0x65790))(this, szEntry);
}

CConfig::ConfigEntry* CConfig::GetEntry(int nIndex) {
    return ((ConfigEntry * (__thiscall*)(CConfig*, int)) GetAddress(0x657C0))(this, nIndex);
}

int CConfig::GetType(const char* szString) {
    return ((int(__thiscall*)(CConfig*, const char*))GetAddress(0x657F0))(this, szString);
}

BOOL CConfig::Save() {
    return ((BOOL(__thiscall*)(CConfig*))GetAddress(0x65860))(this);
}

BOOL CConfig::WriteIntValue(const char* szEntry, int nValue, BOOL bReadOnly) {
    return ((BOOL(__thiscall*)(CConfig*, const char*, int, BOOL))GetAddress(0x65910))(this, szEntry, nValue, bReadOnly);
}

BOOL CConfig::WriteStringValue(const char* szEntry, const char* szValue, BOOL bReadOnly) {
    return ((BOOL(__thiscall*)(CConfig*, const char*, const char*, BOOL))GetAddress(0x65970))(this, szEntry, szValue, bReadOnly);
}

BOOL CConfig::WriteFloatValue(const char* szEntry, float fValue, BOOL bReadOnly) {
    return ((BOOL(__thiscall*)(CConfig*, const char*, float, BOOL))GetAddress(0x65A10))(this, szEntry, fValue, bReadOnly);
}

void CConfig::Write(const char* szEntry, char* szBuffer) {
    ((void(__thiscall*)(CConfig*, const char*, char*))GetAddress(0x65A70))(this, szEntry, szBuffer);
}

BOOL CConfig::Load() {
    return ((BOOL(__thiscall*)(CConfig*))GetAddress(0x65B00))(this);
}

SAMPAPI_END
