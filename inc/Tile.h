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
	TT_HO = 1, // ─
	TT_VO = 2, // │
	TT_RD = 3, // ┌
	TT_LD = 4, // ┐
	TT_LU = 5, // ┘
	TT_RU = 6, // └
	TT_EXIT = 15
};


class Tile {
public:
	Tile();
private:
	TileType type;
};


#endif /* TILE_H_ */
