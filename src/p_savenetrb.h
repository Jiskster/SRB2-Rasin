// SONIC ROBO BLAST 2
//-----------------------------------------------------------------------------
// Copyright (C) 1993-1996 by id Software, Inc.
// Copyright (C) 1998-2000 by DooM Legacy Team.
// Copyright (C) 1999-2021 by Sonic Team Junior.
// Some parts of the code was written by:
//  John FrostFox (john.frostfox@gmail.com)
//  LXShadow
//
// This program is free software distributed under the
// terms of the GNU General Public License, version 2.
// See the 'LICENSE' file for more details.
//-----------------------------------------------------------------------------
/// \file  p_savenetrb.h
/// \brief Savegame I/O routines (in RAM) for rollback netcode.

#include "p_saveg.h" //we borrow some structs, functions, etc from there

extern char netDebugText[10000];

// These are the load / save gamestate routines.
// Basically, these are just faster methods than saveloading from a netsave
// Because we don't need much data to be preserved
// TODO: Find GPLv2 hashtable library and optimize the lua object loading code
void P_GameStateFreeMemory(savestate_t* savestate);
void P_SaveGameState(savestate_t* savestate);
mobj_t *P_FindNewPosition_Hashtable(UINT32 oldposition);

boolean P_LoadGameState(const savestate_t* savestate);