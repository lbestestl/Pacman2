/*
 * Game.cpp
 *
 *  Created on: Oct 17, 2013
 *      Author: owner
 */


#include "GameInfo.h"


GameInfo::GameInfo()
	: score(0),
	  life(3),
	  stage(0)
{
}


GameInfo::~GameInfo()
{
}


bool GameInfo::init()
{
	map.init("./res/map/stage2.dpm");
	return true;
}


void GameInfo::update()
{
	p1.update();
}


void GameInfo::draw()
{
    map.draw();
    p1.draw();
}


bool GameInfo::cleanUp()
{
	map.cleanUp();
	return true;
}
