/*
	This is a SAMP (0.3.7-R3) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, Northn
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#include "sampapi/0.3.7-R3-1/RPCHandlers.h"

SAMPAPI_BEGIN_V037R3_1

void RPCHandlers::ScrSetPlayerSkillLevel(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xF2A0))(pParams);
}

void RPCHandlers::ScrCreate3DTextLabel(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xF3D0))(pParams);
}

void RPCHandlers::ScrDestroy3DTextLabel(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xF580))(pParams);
}

void RPCHandlers::ScrChatBubble(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xF640))(pParams);
}

void RPCHandlers::ScrShowDialog(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xF7B0))(pParams);
}

void RPCHandlers::ScrSetCheckpoint(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xFE20))(pParams);
}

void RPCHandlers::ScrDisableCheckpoint(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xE260))(pParams);
}

void RPCHandlers::ScrSetRaceCheckpoint(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xFF30))(pParams);
}

void RPCHandlers::ScrDisableRaceCheckpoint(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xE270))(pParams);
}

void RPCHandlers::UpdateScoresPingsIps(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x10090))(pParams);
}

void RPCHandlers::SrvNetStats(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xE280))(pParams);
}

void RPCHandlers::ScrGamemodeRestart(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xE310))(pParams);
}

void RPCHandlers::ConnectionRejected(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x10200))(pParams);
}

void RPCHandlers::ScrClientMessage(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xEC50))(pParams);
}

void RPCHandlers::ScrSetWorldTime(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xEBB0))(pParams);
}

void RPCHandlers::ScrCreatePickup(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xED40))(pParams);
}

void RPCHandlers::ScrDestroyPickup(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xEE00))(pParams);
}

void RPCHandlers::ScrDestroyWeaponPickup(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xEEA0))(pParams);
}

void RPCHandlers::ScmEvent(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xEF40))(pParams);
}

void RPCHandlers::ScrSetWeather(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xF030))(pParams);
}

void RPCHandlers::ScrSetPlayerTime(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xF0E0))(pParams);
}

void RPCHandlers::ScrToggleClock(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xF1C0))(pParams);
}

void RPCHandlers::ScrSetIngameTimer(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xFBE0))(pParams);
}

void RPCHandlers::ScrWorldPlayerAdd(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x107D0))(pParams);
}

void RPCHandlers::ScrWorldPlayerDeath(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x10A00))(pParams);
}

void RPCHandlers::ScrWorldPlayerRemove(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x10AC0))(pParams);
}

void RPCHandlers::ScrWorldVehicleAdd(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xE330))(pParams);
}

void RPCHandlers::ScrWorldVehicleRemove(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x10B90))(pParams);
}

void RPCHandlers::DamageVehicle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x10E70))(pParams);
}

void RPCHandlers::ScrSetVehicleParamsEx(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x10FA0))(pParams);
}

void RPCHandlers::EnterVehicle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x11280))(pParams);
}

void RPCHandlers::ExitVehicle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x113A0))(pParams);
}

void RPCHandlers::ScrServerJoin(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xF9A0))(pParams);
}

void RPCHandlers::ScrServerQuit(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xFB20))(pParams);
}

void RPCHandlers::ScrInitGame(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x10320))(pParams);
}

void RPCHandlers::Chat(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x11FA0))(pParams);
}

void RPCHandlers::RequestClass(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xFC80))(pParams);
}

void RPCHandlers::RequestSpawn(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xFD50))(pParams);
}

void RPCHandlers::EditAttachedObject(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x11490))(pParams);
}

void RPCHandlers::EditObject(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x11550))(pParams);
}

void RPCHandlers::EnterEditObject(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xE570))(pParams);
}

void RPCHandlers::ScrCancelEdit(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xE630))(pParams);
}

void RPCHandlers::ScrUpdateCameraTarget(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xE6E0))(pParams);
}

void RPCHandlers::ClientCheck(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x11710))(pParams);
}

void RPCHandlers::ScrCreateActor(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0xE770))(pParams);
}

void RPCHandlers::ScrDestroyActor(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x11AB0))(pParams);
}

void RPCHandlers::ScrDisableVehicleCollisions(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x17700))(pParams);
}

void RPCHandlers::ScrSetPlayerMapIcon(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1A0A0))(pParams);
}

void RPCHandlers::ScrRemovePlayerMapIcon(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1A1C0))(pParams);
}

void RPCHandlers::ScrSetPlayerAmmo(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1A520))(pParams);
}

void RPCHandlers::ScrSetGravity(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1A5E0))(pParams);
}

void RPCHandlers::ScrSetVehicleHealth(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1A680))(pParams);
}

void RPCHandlers::ScrAttachTrailerToVehicle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1A760))(pParams);
}

void RPCHandlers::ScrDetachTrailerFromVehicle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1A8A0))(pParams);
}

void RPCHandlers::ScrCreateObject(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1AC50))(pParams);
}

void RPCHandlers::ScrSetObjectPosition(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1B320))(pParams);
}

void RPCHandlers::ScrSetObjectRotation(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1B430))(pParams);
}

void RPCHandlers::ScrDestroyObject(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1B530))(pParams);
}

void RPCHandlers::ScrCreateExplosion(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1B620))(pParams);
}

void RPCHandlers::ScrShowPlayerNametagForPlayer(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1B730))(pParams);
}

void RPCHandlers::ScrMoveObject(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1B810))(pParams);
}

void RPCHandlers::ScrStopObject(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1B9C0))(pParams);
}

void RPCHandlers::ScrSetNumberPlate(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1BB40))(pParams);
}

void RPCHandlers::ScrTogglePlayerSpectating(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1BC60))(pParams);
}

void RPCHandlers::ScrPlayerSpectatePlayer(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1BD10))(pParams);
}

void RPCHandlers::ScrPlayerSpectateVehicle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1BDF0))(pParams);
}

void RPCHandlers::ScrMoveVehicleComponent(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1BED0))(pParams);
}

void RPCHandlers::ScrForceClassSelection(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x17A00))(pParams);
}

void RPCHandlers::ScrAttachObjectToPlayer(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1BFB0))(pParams);
}

void RPCHandlers::ScrInitMenu(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1C170))(pParams);
}

void RPCHandlers::ScrShowMenu(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1C430))(pParams);
}

void RPCHandlers::ScrHideMenu(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1C4E0))(pParams);
}

void RPCHandlers::ScrSetPlayerWantedLevel(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1C590))(pParams);
}

void RPCHandlers::ScrShowTextDraw(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1C630))(pParams);
}

void RPCHandlers::ScrHideTextDrawForPlayer(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1C760))(pParams);
}

void RPCHandlers::ScrTextDrawSetString(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1C810))(pParams);
}

void RPCHandlers::ScrGangZoneCreate(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1C920))(pParams);
}

void RPCHandlers::ScrGangZoneDestroy(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1CA40))(pParams);
}

void RPCHandlers::ScrGangZoneFlash(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1CAF0))(pParams);
}

void RPCHandlers::ScrGangZoneStopFlash(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1CBB0))(pParams);
}

void RPCHandlers::ScrApplyAnimation(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1A260))(pParams);
}

void RPCHandlers::ScrClearAnimations(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x17EB0))(pParams);
}

void RPCHandlers::ScrSetPlayerSpecialAction(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x17FC0))(pParams);
}

void RPCHandlers::ScrEnableStuntBonusForPlayer(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x17670))(pParams);
}

void RPCHandlers::ScrSetPlayerFightingStyle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x18070))(pParams);
}

void RPCHandlers::ScrSetPlayerVelocity(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x18170))(pParams);
}

void RPCHandlers::ScrSetVehicleVelocity(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x18270))(pParams);
}

void RPCHandlers::ScrPlayCrimeReport(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x18960))(pParams);
}

void RPCHandlers::ScrSetSpawnInfo(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x17870))(pParams);
}

void RPCHandlers::ScrSetPlayerTeam(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19020))(pParams);
}

void RPCHandlers::ScrSetPlayerSkin(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x18AA0))(pParams);
}

void RPCHandlers::ScrSetPlayerName(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1D880))(pParams);
}

void RPCHandlers::ScrSetPlayerPosition(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x18C30))(pParams);
}

void RPCHandlers::ScrSetPlayerPositionFindZ(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x18D50))(pParams);
}

void RPCHandlers::ScrSetPlayerHealth(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x18E60))(pParams);
}

void RPCHandlers::ScrPutPlayerInVehicle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x18F10))(pParams);
}

void RPCHandlers::ScrRemovePlayerFromVehicle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x17920))(pParams);
}

void RPCHandlers::ScrSetPlayerColor(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19110))(pParams);
}

void RPCHandlers::ScrDisplayGametext(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19200))(pParams);
}

void RPCHandlers::ScrSetPlayerInterior(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19310))(pParams);
}

void RPCHandlers::ScrSetPlayerCameraPosition(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x193B0))(pParams);
}

void RPCHandlers::ScrSetPlayerCameraLookAt(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19480))(pParams);
}

void RPCHandlers::ScrSetVehiclePosition(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19580))(pParams);
}

void RPCHandlers::ScrSetVehicleZAngle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19690))(pParams);
}

void RPCHandlers::ScrSetVehicleParamsForPlayer(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19770))(pParams);
}

void RPCHandlers::ScrSetCameraBehindPlayer(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x179B0))(pParams);
}

void RPCHandlers::ScrTogglePlayerControllable(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19BA0))(pParams);
}

void RPCHandlers::ScrPlaySound(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19C40))(pParams);
}

void RPCHandlers::ScrSetPlayerWorldBounds(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19D20))(pParams);
}

void RPCHandlers::ScrGivePlayerMoney(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19E10))(pParams);
}

void RPCHandlers::ScrSetPlayerFacingAngle(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19EB0))(pParams);
}

void RPCHandlers::ScrResetPlayerMoney(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x179C0))(pParams);
}

void RPCHandlers::ScrResetPlayerWeapons(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x179D0))(pParams);
}

void RPCHandlers::ScrGivePlayerWeapon(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19F50))(pParams);
}

void RPCHandlers::ScrLinkVehicleToInterior(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19840))(pParams);
}

void RPCHandlers::ScrSetPlayerArmor(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1A470))(pParams);
}

void RPCHandlers::ScrDeathMessage(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1D610))(pParams);
}

void RPCHandlers::ScrSetPlayerShopName(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x17770))(pParams);
}

void RPCHandlers::ScrSetPlayerDrunkLevel(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x186D0))(pParams);
}

void RPCHandlers::ScrSetPlayerArmedWeapon(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x18770))(pParams);
}

void RPCHandlers::ScrSetPlayerAttachedObject(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x18820))(pParams);
}

void RPCHandlers::ScrPlayAudioStream(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1CC60))(pParams);
}

void RPCHandlers::ScrStopAudioStream(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x17A20))(pParams);
}

void RPCHandlers::ScrRemoveBuildingForPlayer(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1CDD0))(pParams);
}

void RPCHandlers::ScrAttachCameraToObject(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19900))(pParams);
}

void RPCHandlers::ScrInterpolateCamera(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x19A00))(pParams);
}

void RPCHandlers::ClickTextDraw(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1CEF0))(pParams);
}

void RPCHandlers::ScrSetObjectMaterial(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1AFB0))(pParams);
}

void RPCHandlers::ScrStopObjectCameraCollision(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1BA80))(pParams);
}

void RPCHandlers::ScrSetActorAnimation(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1CFF0))(pParams);
}

void RPCHandlers::ScrSetActorRotation(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1D290))(pParams);
}

void RPCHandlers::ScrSetActorPosition(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1D370))(pParams);
}

void RPCHandlers::ScrSetActorHealth(RPCParameters* pParams) {
    ((void(*)(RPCParameters*))GetAddress(0x1D480))(pParams);
}

SAMPAPI_END
