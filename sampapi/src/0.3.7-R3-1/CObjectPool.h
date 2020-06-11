/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi.h"
#include "CVector.h"
#include "CObject.h"

class CObject;

SAMPAPI_BEGIN_PACKED

class SAMPAPI_EXPORT CObjectPool {
public:
    enum { MAX_OBJECTS = 1000 };

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
