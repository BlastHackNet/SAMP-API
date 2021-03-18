/*
	This is a SAMP (0.3.7-R1) API project file.
	Developer: LUCHARE <luchare.dev@gmail.com>
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R1/VehicleSelection.h"

SAMPAPI_BEGIN_V037R1

SAMPAPI_VAR CCamera*& VehicleSelection::RefCamera() {
    return *(CCamera**)GetAddress(0x13BA7C);
}

SAMPAPI_VAR CVehicle*& VehicleSelection::RefVehicle() {
    return *(CVehicle**)GetAddress(0x13BB64);
}

SAMPAPI_VAR CPad*& VehicleSelection::RefControls() {
    return *(CPad**)GetAddress(0x13BA78);
}

SAMPAPI_VAR BOOL& VehicleSelection::RefInitialized() {
    return *(BOOL*)GetAddress(0x13BB60);
}

SAMPAPI_VAR int& VehicleSelection::RefSelectedModel() {
    return *(int*)GetAddress(0x1014B4);
}

void VehicleSelection::ResetVehicle() {
    ((void(__cdecl*)())GetAddress(0x99710))();
}

void VehicleSelection::Process() {
    ((void(__cdecl*)())GetAddress(0x99AD0))();
}

SAMPAPI_END
