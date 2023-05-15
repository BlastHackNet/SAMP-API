/*
	This is a SAMP (0.3.7-R5) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/CVector.h"

SAMPAPI_BEGIN_PACKED_V037R5_1

class SAMPAPI_EXPORT CTextDraw {
public:
    struct SAMPAPI_EXPORT Transmit {
        union {
            struct {
                unsigned char m_bBox : 1;
                unsigned char m_bLeft : 1;
                unsigned char m_bRight : 1;
                unsigned char m_bCenter : 1;
                unsigned char m_bProportional : 1;
            };
            unsigned char m_nFlags;
        };
        float          m_fLetterWidth;
        float          m_fLetterHeight;
        D3DCOLOR       m_letterColor;
        float          m_fBoxWidth;
        float          m_fBoxHeight;
        D3DCOLOR       m_boxColor;
        unsigned char  m_nShadow;
        bool           m_bOutline;
        D3DCOLOR       m_backgroundColor;
        unsigned char  m_nStyle;
        unsigned char  is_selectable;
        float          m_fX;
        float          m_fY;
        unsigned short m_nModel;
        CVector        m_rotation;
        float          m_fZoom;
        unsigned short m_aColor[2];
    };

    struct SAMPAPI_EXPORT Data {
        float          m_fLetterWidth;
        float          m_fLetterHeight;
        D3DCOLOR       m_letterColor;
        unsigned char  unknown;
        unsigned char  m_bCenter;
        unsigned char  m_bBox;
        float          m_fBoxSizeX;
        float          m_fBoxSizeY;
        D3DCOLOR       m_boxColor;
        unsigned char  m_nProportional;
        D3DCOLOR       m_backgroundColor;
        unsigned char  m_nShadow;
        unsigned char  m_nOutline;
        unsigned char  m_bLeft;
        unsigned char  m_bRight;
        int            m_nStyle;
        float          m_fX;
        float          m_fY;
        unsigned char  pad_[8];
        unsigned long  field_99B;
        unsigned long  field_99F;
        unsigned long  m_nIndex;
        unsigned char  is_selectable;
        unsigned short m_nModel;
        CVector        m_rotation;
        float          m_fZoom;
        unsigned short m_aColor[2];
        unsigned char  field_9BE;
        unsigned char  drawn_this_frame;
        unsigned char  text_contains_keys;
        unsigned long  computed_left;
        unsigned long  computed_top;
        unsigned long  computed_right;
        unsigned long  computed_bottom;
        unsigned char  is_selected;
        unsigned long  color_if_selected;
    };

    char m_szText[801];
    char m_szString[1602];
    Data m_data;

    CTextDraw(Transmit* pData, const char* szText);
    ~CTextDraw();

    void SetText(const char* szText);
    void Draw();
};

SAMPAPI_END_PACKED
