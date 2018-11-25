/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"

SAMP_BEGIN

enum eValueType {
	VALUE_TYPE_NONE,
	VALUE_TYPE_INT,
	VALUE_TYPE_STRING,
	VALUE_TYPE_FLOAT
};

class SAMP_API CConfig {
public:
	struct Entry {
		char			m_szName[41];
		BOOL			m_bReadOnly; // maybe
		eValueType  m_nType;
		int			m_nValue;
		float			m_fValue;
		char		  *m_szValue;
	}	  m_aEntries[512];
	BOOL m_bNotEmpty[512]; // map
	char m_szFilename[261];
	int  m_nFirstFree;

	CConfig(const char *szFile);
	~CConfig() {
		Save();
	}

	void FindFirstFree();
	int GetIndex(const char *szName);
	BOOL DoesExist(const char *szName);
	int Create(const char *szName); // returns index of the created entry
	int GetIntValue(const char *szName);
	const char *GetStringValue(const char *szName);
	float GetFloatValue(const char *szName);
	BOOL Delete(const char *szName);
	eValueType GetType(const char *szName);
	Entry *GetEntry(int nIndex);
	BOOL Save();
	BOOL SetIntValue(const char *szName, int nValue, BOOL bReadOnly = 0);
	BOOL SetStringValue(const char *szName, const char *nValue, BOOL bReadOnly = 0);
	BOOL SetFloatValue(const char *szName, float fValue, BOOL bReadOnly = 0);
	BOOL SetValue(const char *szName, const char *szValue);
	BOOL Load();
};

extern CConfig *&pConfig;

SAMP_END
