/*
 * Map.cpp
 *
 *  Created on: Sep 29, 2013
 *      Author: lbestestl
 */


#include "Map.h"
#include "Define.h"

#include <fstream>
#include <iostream>
#include <stdio.h>
#include <string.h>


Map::Map()
	: tileset(NULL)
{
	// TODO Auto-generated constructor stub

}


bool Map::init(std::string file)
{
	std::ifstream fin;
	fin.open(file.c_str(), std::ios::in | std::ios::binary);
	if (!fin.is_open()) {
		//열 수 없음
		return false;
	}

	//파일 크기 구하기
	fin.seekg(0, std::ios_base::end);
	std::ifstream::pos_type size = fin.tellg();
	if (size != MAP_WIDTH * MAP_HEIGHT) {
		//잘못된 형식
		return false;
	}

	char* dd = new char[size];
	tileset = new TileType[size];
	if (tileset == NULL) {
		//메모리 할당 불가
		return false;
	}

	//파일 읽기(buffer 1024)
	fin.seekg(0, std::ios::beg);
	for (int i = 0; i < size; i += 1024) {
		if (i >= size-1024)
			fin.read(dd+i, size-i);
		else
			fin.read(dd+i, 1024);
	}

	for (int y = 0; y < MAP_HEIGHT; y++) {
		for (int x = 0; x < MAP_WIDTH; x++) {
			tileset[y*MAP_WIDTH + x];
			printf("%02X ", dd[x + y*MAP_WIDTH]);
		}
		printf("\n");
	}
	delete[] dd;
	fin.close();
	return true;
}


bool Map::cleanUp()
{
	delete[] tileset;
	tileset = NULL;
	return true;
}
