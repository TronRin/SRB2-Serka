// This program is free software distributed under the
// terms of the GNU General Public License, version 2.
// See the 'LICENSE' file for more details.

/// \file  rpg.h
/// \brief Defining RPG stuff

#ifndef RPG_H
#define RPG_H

#include "doomdef.h"
#include "dehacked.h"
#include "doomdata.h"
#include "p_mobj.h"
#include "d_player.h"
// Basics.
#include "tables.h"
#include "m_fixed.h"

// We need the thinker_t stuff.
#include "d_think.h"

// We need the WAD data structure for Map things, from the THINGS lump.
#include "doomdata.h"

// States are tied to finite states are tied to animation frames.
// Needs precompiled tables/data structures.
#include "info.h"

/////////////////////
// RPG EXP Handling + LEVEL UP logic//
////////////////////

#define MAX_EXP 1000
#define MAX_LEVEL 100

//RPG Getting the Exp for a given Level
int P_GetExpRequiredForLevel(int level);
//RPG Experience for leveling up
void P_GivePlayerExp(mobj_t *player, mobj_t *enemy);
//RPG Player receives Experience
void P_LevelUp(mobj_t *player); //RPG Player Levels Up from Experience

//RPG Level Up Status Increase
void P_LevelUpStatusIncrease(mobj_t *player);


//-------------------------------------------------------------//
//--------------Level Increase Status Functions----------------//
//-------------------------------------------------------------//
void P_JumpingLevel2(player_t *player);

/*
//R
void P_CheckPlayerLevel(mobj_t *player);
//RPG Handle Player Damage
void P_PlayerHit(mobj_t *player, mobj_t *enemy)
//RPG Handle Player Death
void P_PlayerDeath(mobj_t *player);
*/
#endif