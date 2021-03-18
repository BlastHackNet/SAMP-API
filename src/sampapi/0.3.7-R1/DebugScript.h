/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"
#include "sampapi/0.3.7-R1/CObjectPool.h"

/*
	commands:
		CreateObject(int model, float posx, float posy, float posz, float rotx, float, roty, float rotz);
		SetPlayerInterior(int id);
		RemoveBuildingForPlayer(int model, float posx, float posy, float, posz, float radius);
		SetPlayerCameraPos(float posx, float posy, float posz);
		AddStaticVehicle/CreateVehicle(int model, float posx, float posy, float posz, float rot, int clr1, int clr2);
		SetPlayerCameraLookAt() - dummy
	
	example:
		CreateObject(11933, 0, 0, 10, 0, 0, 0, 100)

	one line can contain only one command
*/

SAMPAPI_BEGIN_PACKED_V037R1

namespace DebugScript {
    enum { LINE_BUFFER_LENGTH = 256 };

    SAMPAPI_EXPORT SAMPAPI_VAR CObjectPool*& RefPrivateObjectPool();
    SAMPAPI_EXPORT SAMPAPI_VAR unsigned short& RefObjectCount();
    SAMPAPI_EXPORT SAMPAPI_VAR CVector& RefNewCameraPos();

    SAMPAPI_EXPORT void  Initialize(const char* szFile); // delete old object pool before calling
    SAMPAPI_EXPORT void  ProcessLine(const char* szLine);
    SAMPAPI_EXPORT char* GetCommandParams(char* szLine); // (...)
    SAMPAPI_EXPORT void  CreateVehicle(const char* szParams);
} // namespace DebugScript

SAMPAPI_END_PACKED
