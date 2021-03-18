/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/CConfig.h"

SAMPAPI_BEGIN_V037R1

SAMPAPI_VAR CConfig*& RefConfig() {
    return *(CConfig**)GetAddress(0x21A0E0);
}

CConfig::CConfig(const char* szFile) {
    ((void(__thiscall*)(CConfig*, const char*))GetAddress(0x62820))(this, szFile);
}

CConfig::~CConfig() {
    ((void(__thiscall*)(CConfig*))GetAddress(0x62056))(this);
}

void CConfig::FindFirstFree() {
    ((void(__thiscall*)(CConfig*))GetAddress(0x62080))(this);
}

int CConfig::GetIndex(const char* szEntry) {
    return ((int(__thiscall*)(CConfig*, const char*))GetAddress(0x620D0))(this, szEntry);
}

bool CConfig::DoesExist(const char* szEntry) {
    return ((BOOL(__thiscall*)(CConfig*, const char*))GetAddress(0x62170))(this, szEntry);
}

int CConfig::CreateEntry(const char* szName) {
    return ((int(__thiscall*)(CConfig*, const char*))GetAddress(0x62190))(this, szName);
}

int CConfig::GetIntValue(const char* szEntry) {
    return ((int(__thiscall*)(CConfig*, const char*))GetAddress(0x62250))(this, szEntry);
}

const char* CConfig::GetStringValue(const char* szEntry) {
    return ((const char*(__thiscall*)(CConfig*, const char*))GetAddress(0x62280))(this, szEntry);
}

float CConfig::GetFloatValue(const char* szEntry) {
    return ((float(__thiscall*)(CConfig*, const char*))GetAddress(0x622B0))(this, szEntry);
}

BOOL CConfig::Free(const char* szEntry) {
    return ((BOOL(__thiscall*)(CConfig*, const char*))GetAddress(0x622E0))(this, szEntry);
}

int CConfig::GetValueType(const char* szEntry) {
    return ((int(__thiscall*)(CConfig*, const char*))GetAddress(0x62340))(this, szEntry);
}

CConfig::ConfigEntry* CConfig::GetEntry(int nIndex) {
    return ((ConfigEntry * (__thiscall*)(CConfig*, int)) GetAddress(0x62370))(this, nIndex);
}

BOOL CConfig::Save() {
    return ((BOOL(__thiscall*)(CConfig*))GetAddress(0x62410))(this);
}

BOOL CConfig::WriteIntValue(const char* szEntry, int nValue, BOOL bReadOnly) {
    return ((BOOL(__thiscall*)(CConfig*, const char*, int, BOOL))GetAddress(0x624C0))(this, szEntry, nValue, bReadOnly);
}

BOOL CConfig::WriteStringValue(const char* szEntry, const char* szValue, BOOL bReadOnly) {
    return ((BOOL(__thiscall*)(CConfig*, const char*, const char*, BOOL))GetAddress(0x62520))(this, szEntry, szValue, bReadOnly);
}

BOOL CConfig::WriteFloatValue(const char* szEntry, float fValue, BOOL bReadOnly) {
    return ((BOOL(__thiscall*)(CConfig*, const char*, float, BOOL))GetAddress(0x625C0))(this, szEntry, fValue, bReadOnly);
}

void CConfig::Write(const char* szEntry, char* szBuffer) {
    ((void(__thiscall*)(CConfig*, const char*, const char*))GetAddress(0x62620))(this, szEntry, szBuffer);
}

BOOL CConfig::Load() {
    return ((BOOL(__thiscall*)(CConfig*))GetAddress(0x626B0))(this);
}

int CConfig::GetType(const char* szString) {
    return ((int(__thiscall*)(CConfig*, const char*))GetAddress(0x623A0))(this, szString);
}

SAMPAPI_END
