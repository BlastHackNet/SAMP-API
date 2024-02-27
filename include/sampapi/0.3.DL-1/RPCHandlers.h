/*
	This is a SAMP (0.3.DL-1) API project file.
	Developers: LUCHARE <luchare.dev@gmail.com>, ARMOR
	
	See more here https://github.com/LUCHARE/SAMP-API
	
	Copyright (c) 2018 BlastHack Team <BlastHack.Net>. All rights reserved.
*/

#pragma once

#include "sampapi/sampapi.h"

struct RPCParameters;

SAMPAPI_BEGIN_PACKED_V03DL_1

namespace RPCHandlers {
    // RegisterRPCs1

    void ScrSetPlayerSkillLevel(RPCParameters* pParams);
    void ScrCreate3DTextLabel(RPCParameters* pParams);
    void ScrDestroy3DTextLabel(RPCParameters* pParams);
    void ScrChatBubble(RPCParameters* pParams);
    void ScrShowDialog(RPCParameters* pParams);
    void ScrSetCheckpoint(RPCParameters* pParams);
    void ScrDisableCheckpoint(RPCParameters* pParams);
    void ScrSetRaceCheckpoint(RPCParameters* pParams);
    void ScrDisableRaceCheckpoint(RPCParameters* pParams);
    void UpdateScoresPingsIps(RPCParameters* pParams);
    void SrvNetStats(RPCParameters* pParams);
    void ScrGamemodeRestart(RPCParameters* pParams);
    void ConnectionRejected(RPCParameters* pParams);
    void ScrClientMessage(RPCParameters* pParams);
    void ScrSetWorldTime(RPCParameters* pParams);
    void ScrCreatePickup(RPCParameters* pParams);
    void ScrDestroyPickup(RPCParameters* pParams);
    void ScrDestroyWeaponPickup(RPCParameters* pParams);
    void ScmEvent(RPCParameters* pParams);
    void ScrSetWeather(RPCParameters* pParams);
    void ScrSetPlayerTime(RPCParameters* pParams);
    void ScrToggleClock(RPCParameters* pParams);
    void ScrSetIngameTimer(RPCParameters* pParams);
    void ScrWorldPlayerAdd(RPCParameters* pParams);
    void ScrWorldPlayerDeath(RPCParameters* pParams);
    void ScrWorldPlayerRemove(RPCParameters* pParams);
    void ScrWorldVehicleAdd(RPCParameters* pParams);
    void ScrWorldVehicleRemove(RPCParameters* pParams);
    void DamageVehicle(RPCParameters* pParams);
    void ScrSetVehicleParamsEx(RPCParameters* pParams);
    void EnterVehicle(RPCParameters* pParams);
    void ExitVehicle(RPCParameters* pParams);
    void ScrServerJoin(RPCParameters* pParams);
    void ScrServerQuit(RPCParameters* pParams);
    void ScrInitGame(RPCParameters* pParams);
    void Chat(RPCParameters* pParams);
    void RequestClass(RPCParameters* pParams);
    void RequestSpawn(RPCParameters* pParams);
    void EditAttachedObject(RPCParameters* pParams);
    void EditObject(RPCParameters* pParams);
    void EnterEditObject(RPCParameters* pParams);
    void ScrCancelEdit(RPCParameters* pParams);
    void ScrUpdateCameraTarget(RPCParameters* pParams);
    void ClientCheck(RPCParameters* pParams);
    void ScrCreateActor(RPCParameters* pParams);
    void ScrDestroyActor(RPCParameters* pParams);

    // RegisterRPCs2

    void ScrDisableVehicleCollisions(RPCParameters* pParams);
    void ScrSetPlayerMapIcon(RPCParameters* pParams);
    void ScrRemovePlayerMapIcon(RPCParameters* pParams);
    void ScrSetPlayerAmmo(RPCParameters* pParams);
    void ScrSetGravity(RPCParameters* pParams);
    void ScrSetVehicleHealth(RPCParameters* pParams);
    void ScrAttachTrailerToVehicle(RPCParameters* pParams);
    void ScrDetachTrailerFromVehicle(RPCParameters* pParams);
    void ScrCreateObject(RPCParameters* pParams);
    void ScrSetObjectPosition(RPCParameters* pParams);
    void ScrSetObjectRotation(RPCParameters* pParams);
    void ScrDestroyObject(RPCParameters* pParams);
    void ScrCreateExplosion(RPCParameters* pParams);
    void ScrShowPlayerNametagForPlayer(RPCParameters* pParams);
    void ScrMoveObject(RPCParameters* pParams);
    void ScrStopObject(RPCParameters* pParams);
    void ScrSetNumberPlate(RPCParameters* pParams);
    void ScrTogglePlayerSpectating(RPCParameters* pParams);
    void ScrPlayerSpectatePlayer(RPCParameters* pParams);
    void ScrPlayerSpectateVehicle(RPCParameters* pParams);
    void ScrMoveVehicleComponent(RPCParameters* pParams);
    void ScrForceClassSelection(RPCParameters* pParams);
    void ScrAttachObjectToPlayer(RPCParameters* pParams);
    void ScrSetPlayerWantedLevel(RPCParameters* pParams);
    void ScrShowTextDraw(RPCParameters* pParams);
    void ScrHideTextDrawForPlayer(RPCParameters* pParams);
    void ScrTextDrawSetString(RPCParameters* pParams);
    void ScrGangZoneCreate(RPCParameters* pParams);
    void ScrGangZoneDestroy(RPCParameters* pParams);
    void ScrGangZoneFlash(RPCParameters* pParams);
    void ScrGangZoneStopFlash(RPCParameters* pParams);
    void ScrApplyAnimation(RPCParameters* pParams);
    void ScrClearAnimations(RPCParameters* pParams);
    void ScrSetPlayerSpecialAction(RPCParameters* pParams);
    void ScrEnableStuntBonusForPlayer(RPCParameters* pParams);
    void ScrSetPlayerFightingStyle(RPCParameters* pParams);
    void ScrSetPlayerVelocity(RPCParameters* pParams);
    void ScrSetVehicleVelocity(RPCParameters* pParams);
    void ScrPlayCrimeReport(RPCParameters* pParams);
    void ScrSetSpawnInfo(RPCParameters* pParams);
    void ScrSetPlayerTeam(RPCParameters* pParams);
    void ScrSetPlayerSkin(RPCParameters* pParams);
    void ScrSetPlayerName(RPCParameters* pParams);
    void ScrSetPlayerPosition(RPCParameters* pParams);
    void ScrSetPlayerPositionFindZ(RPCParameters* pParams);
    void ScrSetPlayerHealth(RPCParameters* pParams);
    void ScrPutPlayerInVehicle(RPCParameters* pParams);
    void ScrRemovePlayerFromVehicle(RPCParameters* pParams);
    void ScrSetPlayerColor(RPCParameters* pParams);
    void ScrDisplayGametext(RPCParameters* pParams);
    void ScrSetPlayerInterior(RPCParameters* pParams);
    void ScrSetPlayerCameraPosition(RPCParameters* pParams);
    void ScrSetPlayerCameraLookAt(RPCParameters* pParams);
    void ScrSetVehiclePosition(RPCParameters* pParams);
    void ScrSetVehicleZAngle(RPCParameters* pParams);
    void ScrSetVehicleParamsForPlayer(RPCParameters* pParams);
    void ScrSetCameraBehindPlayer(RPCParameters* pParams);
    void ScrTogglePlayerControllable(RPCParameters* pParams);
    void ScrPlaySound(RPCParameters* pParams);
    void ScrSetPlayerWorldBounds(RPCParameters* pParams);
    void ScrGivePlayerMoney(RPCParameters* pParams);
    void ScrSetPlayerFacingAngle(RPCParameters* pParams);
    void ScrResetPlayerMoney(RPCParameters* pParams);
    void ScrResetPlayerWeapons(RPCParameters* pParams);
    void ScrGivePlayerWeapon(RPCParameters* pParams);
    void ScrLinkVehicleToInterior(RPCParameters* pParams);
    void ScrSetPlayerArmor(RPCParameters* pParams);
    void ScrDeathMessage(RPCParameters* pParams);
    void ScrSetPlayerShopName(RPCParameters* pParams);
    void ScrSetPlayerDrunkLevel(RPCParameters* pParams);
    void ScrSetPlayerArmedWeapon(RPCParameters* pParams);
    void ScrSetPlayerAttachedObject(RPCParameters* pParams);
    void ScrPlayAudioStream(RPCParameters* pParams);
    void ScrStopAudioStream(RPCParameters* pParams);
    void ScrRemoveBuildingForPlayer(RPCParameters* pParams);
    void ScrAttachCameraToObject(RPCParameters* pParams);
    void ScrInterpolateCamera(RPCParameters* pParams);
    void ClickTextDraw(RPCParameters* pParams);
    void ScrSetObjectMaterial(RPCParameters* pParams);
    void ScrStopObjectCameraCollision(RPCParameters* pParams);
    void ScrSetActorAnimation(RPCParameters* pParams);
    void ScrSetActorRotation(RPCParameters* pParams);
    void ScrSetActorPosition(RPCParameters* pParams);
    void ScrSetActorHealth(RPCParameters* pParams);
    void ScrInitMenu(RPCParameters* pParams);
    void ScrShowMenu(RPCParameters* pParams);
    void ScrHideMenu(RPCParameters* pParams);
} // namespace RPCHandlers

SAMPAPI_END_PACKED