#ifndef DEFINES_H
#define DEFINES_H

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>
#include <ctime>

/* ==== MISC =====*/
#define DFT_DISTANCE_TO_WIN 4000
#define DFT_DISTANCE -200
#define ZERO 0
#define DIFICULTY_LEVEL_3 3
#define DIFICULTY_LEVEL_2 2
#define DIFICULTY_LEVEL_1 1
#define meteor_min_1 4
#define meteor_max_1 8
#define meteor_min_2 6
#define meteor_max_2 12
#define cosmic_min 3
#define cosmic_max 5
#define METEOR_COSMIC_DMG 10
#define SALAS_TABLE_Y 3
#define SALAS_TABLE_X 4

/* ===== NAVE ====== */

#define SHIP_HP 100
#define SHIP_SHIELD 100

/* ===== PROPULSORES =====*/
#define PROP_HP 100

/* ====== SALA  ===== */

#define SALA_OXI 100
#define SALA_INT 100

/* =====  CREWMEMBERS =====*/
#define CREW_REGEN 1
#define CREW_ATTACK 1
#define CREW_HP 5

/* ===== CAP'N ======*/

#define CAPTN_ARMOR 1
#define CAPTN_REGEN 1
#define CAPTN_ATTACK 2
#define CAPTN_HP 6

/* ===== ROBOT ====*/

#define ROBOT_ARMOR 2
#define ROBOT_ATTACK 3
#define ROBOT_HP 8

/* ===== PIRATA =====*/

#define PIRATE_CHANCE_MOVE 15
#define PIRATE_ATTACK_OTHERS 1
#define PIRATE_ATTACK_ROOM 2
#define PIRATE_HP 4

/*==== XENOMORPHS =====*/

/*====== GEIGERMORPH ======*/

#define GEIGER_CHANCE_MOVE 50
#define GEIGER_ARMOR 3
#define GEIGER_ATTACK 3
#define GEIGER_COCOON_CHANCE 20
#define GEIGER_HP 4

/* ===== GEIGER COCOON ====*/

#define GEIGER_COCOON_ATTACK 0
#define GEIGER_COCOON_ARMOR 1
#define GEIGER_COCOON_HP 6

/* ====  BOB ====*/

#define BLOB_ATTACK 0
#define BLOB_REGEN 6
#define BLOB_HEAL 2
#define BLOB_HP 8
#define BLOB_CHANCE_MOVE 15

/* === MITROGLU ====*/

#define MIT_ATTACK 0
#define MIT_HIPNO 15
#define MIT_CHANCE_MOVE 30
#define MIT_CHNG_ROOM 10



/* ===== OTHERS ======*/

#define DEFAULT_CBT_FLAG 0


#endif