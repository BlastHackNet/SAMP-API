/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"

SAMPAPI_BEGIN_PACKED_V037R5_1

class SAMPAPI_EXPORT CConfig {
public:
    enum {
        MAX_ENTRIES = 512,
        MAX_ENTRY_NAME = 40,
    };
    enum ValueType {
        VALUE_TYPE_NONE,
        VALUE_TYPE_INT,
        VALUE_TYPE_STRING,
        VALUE_TYPE_FLOAT
    };

    struct SAMPAPI_EXPORT ConfigEntry {
        char  m_szName[MAX_ENTRY_NAME + 1];
        BOOL  m_bReadOnly; // maybe
        int   m_nType;
        int   m_nValue;
        float m_fValue;
        char* m_szValue;
    };

    ConfigEntry m_entry[MAX_ENTRIES];
    BOOL        m_bNotEmpty[MAX_ENTRIES]; // map
    char        m_szFilename[261];
    int         m_nFirstFree;

    CConfig(const char* szFile);
    ~CConfig();

    void         FindFirstFree();
    int          GetIndex(const char* szEntry);
    bool         DoesExist(const char* szEntry);
    int          CreateEntry(const char* szName);
    int          GetIntValue(const char* szEntry);
    const char*  GetStringValue(const char* szEntry);
    float        GetFloatValue(const char* szEntry);
    BOOL         Free(const char* szEntry);
    int          GetValueType(const char* szEntry);
    ConfigEntry* GetEntry(int nIndex);
    int          GetType(const char* szString);
    BOOL         Save();
    BOOL         WriteIntValue(const char* szEntry, int nValue, BOOL bReadOnly = 0);
    BOOL         WriteStringValue(const char* szEntry, const char* szValue, BOOL bReadOnly = 0);
    BOOL         WriteFloatValue(const char* szEntry, float fValue, BOOL bReadOnly = 0);
    void         Write(const char* szEntry, char* szBuffer);
    BOOL         Load();
};

SAMPAPI_EXPORT SAMPAPI_VAR CConfig*& RefConfig();

SAMPAPI_END_PACKED
