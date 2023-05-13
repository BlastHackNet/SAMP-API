/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/CVector.h"
#include "sampapi/CMatrix.h"
#include "sampapi/0.3.7-R5-1/CEntity.h"

class CSprite2d;
struct RwTexture;

SAMPAPI_BEGIN_PACKED_V037R5_1

class CVehicle;

class SAMPAPI_EXPORT CObject : public CEntity {
public:
    // void **m_lpVtbl = 0xECD1C;
    char    pad_0[6];
    int     m_nModel;
    char    pad_1;
    bool    m_bDontCollideWithCamera;
    float   m_fDrawDistance;
    float   field_0;
    CVector m_position;
    float   m_fDistanceToCamera;
    bool    m_bDrawLast;
    char    pad_2[64];
    CVector m_rotation;
    char    pad_3[5];
    ID      m_nAttachedToVehicle;
    ID      m_nAttachedToObject;
    CVector m_attachOffset;
    CVector m_attachRotation;
    bool    m_bSyncRotation;
    CMatrix m_targetMatrix;
    char    pad_4[148];
    char    m_bMoving;
    float   m_fSpeed;
    char    pad_5[99];

    enum {
        MAX_MATERIALS = 16
    };
    enum MaterialType {
        MATERIAL_TYPE_NONE = 0,
        MATERIAL_TYPE_TEXTURE = 1,
        MATERIAL_TYPE_TEXT = 2
    };
    enum MaterialSize {
        MATERIAL_SIZE_32X32 = 10,
        MATERIAL_SIZE_64X32 = 20,
        MATERIAL_SIZE_64X64 = 30,
        MATERIAL_SIZE_128X32 = 40,
        MATERIAL_SIZE_128X64 = 50,
        MATERIAL_SIZE_128X128 = 60,
        MATERIAL_SIZE_256X32 = 70,
        MATERIAL_SIZE_256X64 = 80,
        MATERIAL_SIZE_256X128 = 90,
        MATERIAL_SIZE_256X256 = 100,
        MATERIAL_SIZE_512X64 = 110,
        MATERIAL_SIZE_512X128 = 120,
        MATERIAL_SIZE_512X256 = 130,
        MATERIAL_SIZE_512X512 = 140
    };

    struct SAMPAPI_EXPORT ObjectMaterial {
        union {
            ::CSprite2d* m_pSprite[MAX_MATERIALS];
            ::RwTexture* m_pTextBackground[MAX_MATERIALS];
        };

        D3DCOLOR m_color[MAX_MATERIALS];
        char     pad_6[68];
        int      m_nType[MAX_MATERIALS];
        BOOL     m_bTextureWasCreated[MAX_MATERIALS];

        struct SAMPAPI_EXPORT MaterialText {
            char     m_nMaterialIndex;
            char     pad_0[137];
            char     m_nMaterialSize;
            char     m_szFont[65];
            char     m_nFontSize;
            bool     m_bBold;
            D3DCOLOR m_fontColor;
            D3DCOLOR m_backgroundColor;
            char     m_align;
        };
        MaterialText       m_textInfo[MAX_MATERIALS];
        char*              m_szText[MAX_MATERIALS];
        IDirect3DTexture9* m_pBackgroundTexture[MAX_MATERIALS];
        IDirect3DTexture9* m_pTexture[MAX_MATERIALS];
    };
    ObjectMaterial m_material;

    BOOL m_bHasCustomMaterial;
    char pad_9[13];

    CObject(int nModel, CVector position, CVector rotation, float fDrawDistance, int a10, char a11, char a12);

    virtual ~CObject() = 0;
    virtual void Add() = 0;
    virtual void Remove() = 0;

    float GetDistance(const CMatrix* pMatrix);
    void  Stop();
    void  SetRotation(const CVector* pVector);
    void  SetAttachedToVehicle(ID nId, const CVector* pOffset, const CVector* pRotation);
    void  SetAttachedToObject(ID nId, const CVector* pOffset, const CVector* pRotation, char a5);
    void  AttachToVehicle(CVehicle* pVehicle);
    void  AttachToObject(CObject* pObject);
    void  Rotate(CVector vector);
    BOOL  AttachedToMovingEntity();
    void  SetMaterial(int nModel, int nIndex, const char* szTxd, const char* szTexture, D3DCOLOR color);
    void  SetMaterialText(int nIndex, const char* szText, char nMaterialSize, const char* szFont, char nFontSize, bool bBold, D3DCOLOR fontColor, D3DCOLOR backgroundColor, char align);
    bool  GetMaterialSize(int nSize, int* x, int* y);
    void  Render();
    void  Process(float fElapsedTime);
    void  ConstructMaterialText();
    void  Draw();
    void  ShutdownMaterialText();
};

SAMPAPI_END_PACKED
