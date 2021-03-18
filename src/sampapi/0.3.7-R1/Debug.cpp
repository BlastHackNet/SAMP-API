/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/Debug.h"

SAMPAPI_BEGIN_V037R1

SAMPAPI_VAR int& Debug::RefMode() {
    return *(int*)GetAddress(0x13BB18);
}

SAMPAPI_VAR void*& Debug::RefFirstEntity() {
    return *(void**)GetAddress(0x13BB1C);
}

SAMPAPI_VAR void*& Debug::RefSecondEntity() {
    return *(void**)GetAddress(0x13BB20);
}

void Debug::SetProperties(void* pFirstEntity, void* pSecondEntity, int nMode) {
    ((void(__cdecl*)(void*, void*, int))GetAddress(0x996E0))(pFirstEntity, pSecondEntity, nMode);
}

void Debug::Disable() {
    ((void(__cdecl*)())GetAddress(0x99700))();
}

SAMPAPI_END
