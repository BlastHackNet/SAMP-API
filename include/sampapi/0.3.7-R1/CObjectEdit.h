/*
	This is a SAMP (0.3.7-R1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, kin4stat
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/CVector.h"
#include "sampapi/CMatrix.h"
#include "sampapi/CRect.h"
#include "sampapi/CPoint.h"

SAMPAPI_BEGIN_PACKED_V037R1

enum ObjectEditType {
    OBJECT_EDIT_TYPE_NONE = 0x0,
    OBJECT_EDIT_TYPE_ATTACHEDOBJECT = 0x2,
    OBJECT_EDIT_TYPE_OBJECT = 0x1,
};

enum ObjectEditMode {
    OBJECT_EDIT_MODE_POSITION = 0x0,
    OBJECT_EDIT_MODE_ROTATION = 0x1,
    OBJECT_EDIT_MODE_SCALE = 0x2,
};

enum ObjectEditProcessType {
    OBJECT_EDIT_PROCESS_TYPE_XAXIS = 0x0,
    OBJECT_EDIT_PROCESS_TYPE_YAXIS = 0x1,
    OBJECT_EDIT_PROCESS_TYPE_ZAXIS = 0x2,
    OBJECT_EDIT_PROCESS_TYPE_SETPOSITION = 0x3,
    OBJECT_EDIT_PROCESS_TYPE_SETROTATION = 0x4,
    OBJECT_EDIT_PROCESS_TYPE_SETSCALE = 0x5,
    OBJECT_EDIT_PROCESS_TYPE_SAVE = 0xA,
};

class CObjectEdit {
public:
    CPoint            m_CharMaxSize;
    CRect             m_xAxisButtonRect;
    CRect             m_yAxisButtonRect;
    CRect             m_zAxisButtonRect;
    CRect             m_PositionButtonRect;
    CRect             m_RotationButtonRect;
    CRect             m_ScaleButtonRect;
    CRect             m_SaveButtonRect;
    int               m_nEditType;
    int               m_nEditMode;
    BOOL              m_bEnabled;
    BOOL              m_bRenderedThisFrame;
    ID                m_nEditObjectId;
    unsigned int      m_nAttachedObjectIndex;
    BOOL              m_bIsPlayerObject;
    CVector           m_vRotation;
    unsigned int      m_nLastSentNotificationTick;
    bool              m_bRenderScaleButton;
    bool              m_bEditingRightNow;
    bool              m_bTopXOfObjectIsOnLeftOfScreen;
    bool              m_bTopYOfObjectIsOnLeftOfScreen;
    bool              m_bTopZOfObjectIsOnLeftOfScreen;
    CPoint            m_EditStartPos;
    CPoint            m_CursorPosInGame;
    BOOL              m_bObjectXSizeYCoordDiffMoreThanX;
    BOOL              m_bObjectYSizeYCoordDiffMoreThanX;
    BOOL              m_bObjectZSizeYCoordDiffMoreThanX;
    CMatrix           m_entityMatrix;
    IDirect3DDevice9* m_pDevice;
    ID3DXLine*        m_pLine;
    ID3DXFont*        m_pIconFontSmall;
    ID3DXFont*        m_pIconFontBig;
    int               m_nProcessType;

    CObjectEdit(IDirect3DDevice9* RefDevice);
    float       WorldToScreen(CVector* in, float (&out)[2]);
    float       WorldToScreen(CVector* in, float*);
    int         RenderAxes(CMatrix* a2, float linesize);
    const char* GetRenderChar(BOOL for_big_font);
    void        TryChangeProcessType();
    void        SetEditMode(ObjectEditMode mode);
    void        ResetMousePos();
    void        EnterEditObject(ID object_id, BOOL player_object);
    void        SendEditEndNotification(int response);
    void        SendAttachedEditEndNotification(int response);
    void        Disable(BOOL result);
    BOOL        RenderControlsForObject(CMatrix* object_matrix, float linesize);
    void        ApplyChanges(ObjectEditProcessType type, float diff);
    void        ProcessMouseMove();
    BOOL        MsgProc(int uMsg, int wParam, int lParam);
    void        Render();

    static const char* GetMaxSizeChar();
};

SAMPAPI_EXPORT SAMPAPI_VAR CObjectEdit*& RefObjectEdit();

SAMPAPI_END_PACKED
