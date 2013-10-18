/*
 * Map.h
 *
 *  Created on: Sep 29, 2013
 *      Author: lbestestl
 */


#ifndef MAP_H_
#define MAP_H_


#include "Tile.h"

#include <string>


class Map {
public:
	Map();
	bool init(std::string file);
	void draw();
	bool cleanUp();
	const char getTileset(int x, int y);

private:
	TileType* tileset;
//	char* tileset;
};


#endif /* MAP_H_ */
