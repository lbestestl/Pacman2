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
#include <vector>


class Map {
public:
	Map();
	bool init(std::string file);
	void draw();
	bool cleanUp();

private:
	std::vector<Tile> tileset;
};


#endif /* MAP_H_ */
