/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/0.3.DL-1/CObject.h"

class CObject;

SAMPAPI_BEGIN_PACKED_V03DL_1

class SAMPAPI_EXPORT CObjectPool {
public:
    enum { MAX_OBJECTS = 2100 };

    int      m_nLargestId;
    BOOL     m_bNotEmpty[MAX_OBJECTS];
    CObject* m_pObject[MAX_OBJECTS];

    CObjectPool();
    ~CObjectPool();

    void     UpdateLargestId();
    int      GetCount();
    BOOL     Delete(ID nId);
    BOOL     Create(ID nId, int nModel, CVector position, CVector rotation, float fDrawDistance);
    CObject* Find(::CObject* pGameObject);
    int      GetId(::CObject* pGameObject);
    void     Process();
    void     ConstructMaterials();
    void     ShutdownMaterials();
    void     Draw();
    void     DrawLast();
    CObject* Get(ID nId);
};

SAMPAPI_END_PACKED
