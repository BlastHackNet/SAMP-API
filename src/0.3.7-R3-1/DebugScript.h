/*
	This is a SAMP (0.3.7-R3) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "common.h"
#include "CVector.h"

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

#define LINE_BUFFER_LENGTH 256

SAMP_BEGIN

class CObjectPool;

namespace DebugScript {
	extern CObjectPool *&pPrivateObjectPool;
	extern unsigned short &nObjectCount;

	extern CVector &vNewCameraPos;
	
	void Initialize(const char *szFile); // delete old object pool before calling
	void ProcessLine(const char *szLine);
	char *GetCommandParams(char *szLine); // (...)
	void CreateVehicle(const char *szParams);
}

SAMP_END