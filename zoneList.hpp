#include "tb_defines.hpp"

zoneList[] =
{
/*
ID and PROFILE = not used
LINK = zones capturable after this one
DEPEND = auto-capture/enable upon these zones being held
DEPQTY = quantity of zones required for DEPEND i.e. can have only 2 of the 3 zones in DEPEND required
SYNC = required zones for progression

OBJECTS
select 0 = Required Destroyed (0 = all)
select 1 = Randomized Presence // TODO: future development to hide marker, title, hideObject and allwoDamage e.g. randomized TEs
select 2 = Required Placed // TODO: very future development to allow placement of objects = capture e.g. new Convoy gamemode
select 3 = Place Object Type // TODO: very future development to allow placement of objects = capture e.g. new Convoy gamemode
*/

//ID TEAM          	SPAWNTYPE     	LINK    SYNC   	OBJECTS   	DEPEND      DEPQTY  	ZONE_DESC
{ 0, 0, 			0, 				{}, 	{}, 	{}, 			{}, 		0},

{ 1, TEAM_BLUE, 	SPAWN_XRAY, 	{}, 	{}, 	{}, 			{}, 		0, 			"U.S. Army Main Base" }, // blue main base
{ 2, TEAM_RED, 		SPAWN_XRAY, 	{}, 	{}, 	{}, 			{}, 		0, 			"Insurgent Main Base" }, // red main base
{ 3, TEAM_RED, 		SPAWN_INSTANT, 	{}, 	{}, 	{1,1}, 			{2}, 		0, 			"Cayo TE" }, // red FB, destructible, see zoneObject marker
{ 4, TEAM_BLUE, 	SPAWN_LARGEFB, 	{}, 	{}, 	{}, 			{1}, 		0, 			"FB Corazol" }, // switchable FB, initially BLUE
{ 5, TEAM_RED, 		SPAWN_INSTANT, 	{}, 	{}, 	{1,1}, 			{2}, 		0, 			"Parato TE" },
{ 6, TEAM_BLUE, 	SPAWN_LARGEFB, 	{}, 	{}, 	{}, 			{1}, 		0, 			"FB Island" },
{ 7, TEAM_BLUE, 	SPAWN_LARGEFB, 	{}, 	{}, 	{}, 			{1}, 		0, 			"FB Sea" }
 

//SPAWN_LARGEFB = can spawn during Battle Preparation time
//SPAWN_INSTANT = CANNOT spawn during Battle Preparation time
//Note: Base deployment to FB is based on centre of zone not flag
};