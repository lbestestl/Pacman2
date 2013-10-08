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

	tileset = new char[size];
	if (tileset == NULL) {
		//메모리 할당 불가
		return false;
	}

	//파일 읽기(buffer 1024)
	fin.seekg(0, std::ios::beg);
	for (int i = 0; i < size; i += 1024) {
		fin.read(tileset+i, 1024);
	}

	fin.close();
	return true;
}


void Map::draw()
{
	int tpx;
	int tpy;

	for (int y = 0, id = 0; y < MAP_HEIGHT; y++) {
		for (int x = 0; x < MAP_WIDTH; x++) {
			if (tileset[id] == 0x10) {
				Texture::draw(App::theApp().tex, App::theApp().ren,
						x*TILE_SIZE + 10, y*TILE_SIZE + 30, 300, 80, 20, 20);
			} else if (tileset[id] == 0x20) {
				Texture::draw(App::theApp().tex, App::theApp().ren,
						x*TILE_SIZE + 10, y*TILE_SIZE + 30, 280, 85, 20, 20);
			} else if (tileset[id] == 0x30) {
				Texture::draw(App::theApp().tex, App::theApp().ren,
						x*TILE_SIZE + 10, y*TILE_SIZE + 30, 280, 100, 20, 20);
			} else if (tileset[id] == 0x40) {
				Texture::draw(App::theApp().tex, App::theApp().ren,
						x*TILE_SIZE + 10, y*TILE_SIZE + 30, 300, 100, 20, 20);
			} else if (tileset[id] == 0x50) {
				Texture::draw(App::theApp().tex, App::theApp().ren,
						x*TILE_SIZE + 10, y*TILE_SIZE + 30, 300, 120, 20, 20);
			} else if (tileset[id] == 0x60) {
				Texture::draw(App::theApp().tex, App::theApp().ren,
						x*TILE_SIZE + 10, y*TILE_SIZE + 30, 280, 120, 20, 20);
			} else if (tileset[id] == 0x00) {
				Texture::draw(App::theApp().tex, App::theApp().ren,
						x*TILE_SIZE + 10, y*TILE_SIZE + 30, 240, 320, 30, 30);
			}
			id++;

		}
	}
	Texture::draw(App::theApp().tex, App::theApp().ren, 60, 100, 0, 0, 30, 30);
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
