/*
 * Tile.h
 *
 *  Created on: Sep 29, 2013
 *      Author: lbestestl
 */


#ifndef TILE_H_
#define TILE_H_


enum TileType {
	TT_NONE = 0x00,
	TT_HO = 0x10, // ─
	TT_VO = 0x20, // │
	TT_RD = 0x30, // ┌
	TT_LD = 0x40, // ┐
	TT_LU = 0x50, // ┘
	TT_RU = 0x60, // └
	TT_EXIT = 0xF0
};


#endif /* TILE_H_ */
