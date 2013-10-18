/*
 * Map.cpp
 *
 *  Created on: Sep 29, 2013
 *      Author: lbestestl
 */


#include "Map.h"
#include "Define.h"
#include "App.h"
#include "Texture.h"

#include <fstream>
#include <iostream>
#include <string.h>


Map::Map()
	: tileset(NULL)
{
	// TODO Auto-generated constructor stub
}


bool Map::init(std::string file)
{
//	std::ifstream fin;
//	fin.open(file.c_str(), std::ios::in | std::ios::binary);
//	if (!fin.is_open()) {
//		//열 수 없음
//		return false;
//	}
//
//	//파일 크기 구하기
//	fin.seekg(0, std::ios_base::end);
//	std::ifstream::pos_type size = fin.tellg();
//	if (size != MAP_WIDTH * MAP_HEIGHT) {
//		//잘못된 형식
//		return false;
//	}
//
//	tileset = new char[size];
//	if (tileset == NULL) {
//		//메모리 할당 불가
//		return false;
//	}
//
//	//파일 읽기(buffer 1024)
//	fin.seekg(0, std::ios::beg);
//	for (int i = 0; i < size; i += 1024) {
//		fin.read(tileset+i, 1024);
//	}
//
//	fin.close();
//	return true;
	std::ifstream fin;
	fin.open(file.c_str(), std::ios::in);
	if (!fin.is_open()) {
		//열 수 없음
		return false;
	}

	int size = MAP_WIDTH * MAP_HEIGHT;
	tileset = new TileType[size];
	if (tileset == NULL) {
		return false;
	}

	for (int y = 0, id = 0, input = 0; y < MAP_HEIGHT; y++) {
		for (int x = 0; x < MAP_WIDTH; x++) {
			fin >> input;
			switch (input/100) {
			case 10:
				tileset[id] = TT_NONE;
				break;
			case 11:
				tileset[id] = TT_PE;
				break;
			case 12:
				tileset[id] = TT_PO;
				break;
			case 13:
				tileset[id] = TT_EO;
				break;
			case 14:
				tileset[id] = TT_HW;
				break;
			case 15:
				tileset[id] = TT_VW;
				break;
			case 16:
				tileset[id] = TT_RDW;
				break;
			case 17:
				tileset[id] = TT_LDW;
				break;
			case 18:
				tileset[id] = TT_LUW;
				break;
			case 19:
				tileset[id] = TT_RUW;
				break;
			case 20:
				tileset[id] = TT_HD;
				break;
			case 21:
				tileset[id] = TT_NHD;
				break;
			case 22:
				tileset[id] = TT_NVD;
				break;
			case 23:
				tileset[id] = TT_SHD;
				break;
			case 24:
				tileset[id] = TT_SVD;
				break;
			default:
				tileset[id] = TT_NONE;
			}
			id++;
		}
	}

	fin.close();

	return true;
}


void Map::draw()
{
	for (int y = 0, id = 0; y < MAP_HEIGHT; y++) {
		for (int x = 0; x < MAP_WIDTH; x++) {
			if (tileset[id] == 0x10) {
				Texture::draw(App::theApp().tex, App::theApp().ren,
						x*TILE_SIZE + MARGIN_WIDTH, y*TILE_SIZE + MARGIN_HEIGHT,
						300, 60, TILE_SIZE, TILE_SIZE);
			} else if (tileset[id] == 0x20) {
				Texture::draw(App::theApp().tex, App::theApp().ren,
						x*TILE_SIZE + MARGIN_WIDTH, y*TILE_SIZE + MARGIN_HEIGHT,
						280, 60, TILE_SIZE, TILE_SIZE);
			} else if (tileset[id] == 0x30) {
				Texture::draw(App::theApp().tex, App::theApp().ren,
						x*TILE_SIZE + MARGIN_WIDTH, y*TILE_SIZE + MARGIN_HEIGHT,
						280, 80, TILE_SIZE, TILE_SIZE);
			} else if (tileset[id] == 0x40) {
				Texture::draw(App::theApp().tex, App::theApp().ren,
						x*TILE_SIZE + MARGIN_WIDTH, y*TILE_SIZE + MARGIN_HEIGHT,
						300, 80, TILE_SIZE, TILE_SIZE);
			} else if (tileset[id] == 0x50) {
				Texture::draw(App::theApp().tex, App::theApp().ren,
						x*TILE_SIZE + MARGIN_WIDTH, y*TILE_SIZE + MARGIN_HEIGHT,
						300, 100, TILE_SIZE, TILE_SIZE);
			} else if (tileset[id] == 0x60) {
				Texture::draw(App::theApp().tex, App::theApp().ren,
						x*TILE_SIZE + MARGIN_WIDTH, y*TILE_SIZE + MARGIN_HEIGHT,
						280, 100, TILE_SIZE, TILE_SIZE);
			} else if (tileset[id] == 0x00) {
//				Texture::draw(App::theApp().tex, App::theApp().ren,
//						x*TILE_SIZE + 10, y*TILE_SIZE + 30, 240, 320, 30, 30);
			}
			id++;
		}
	}
}


bool Map::cleanUp()
{
	delete[] tileset;
	tileset = NULL;
	return true;
}


const char Map::getTileset(int x, int y)
{
	return tileset[x + y * MAP_WIDTH];
}
