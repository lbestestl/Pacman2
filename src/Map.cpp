/*
 * Map.cpp
 *
 *  Created on: Sep 29, 2013
 *      Author: lbestestl
 */


#include "Map.h"
#include "Define.h"


Map::Map()
{
	// TODO Auto-generated constructor stub

}


bool Map::init(std::string file)
{
	std::ifstream fin;
	fin.open(file.c_str(), std::ios::in | std::ios::binary);
	if (!fin.is_open()) {
		return false;
	}

	for (int y = 0; y < MAP_HEIGHT; y++) {
		for (int x = 0; x < MAP_WIDTH; x++) {
			;
		}
	}
	return true;
}


bool Map::cleanUp()
{
	delete tileset;
	tileset = NULL;
	return true;
}
