/*
 * Tile.h
 *
 *  Created on: Sep 29, 2013
 *      Author: lbestestl
 */


#ifndef TILE_H_
#define TILE_H_


enum TileType {
	TT_NONE = 0,
	TT_PE, 	// pass player and enemies
	TT_PO, 	// pass only player
	TT_E0, 	// pass only Enemy
	TT_HW, 	// horizontal wall	─
	TT_VW, 	// vertical wall	│
	TT_RDW,	// right down wall	┌
	TT_LDW,	// left down wall	┐
	TT_LUW,	// left up wall		┘
	TT_RUW,	// right up wall	└
	TT_HD, 	// hidden door
	TT_NHD,	// normal horizontal door
	TT_NVD,	// normal vertical door
	TT_SHD,	// special horizontal door
	TT_SVD 	// special vertical door
};


#endif /* TILE_H_ */
