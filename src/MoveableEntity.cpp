/*
 * MoveableEntity.cpp
 *
 *  Created on: Sep 29, 2013
 *      Author: lbestestl
 */


#include "MoveableEntity.h"

#include "FPS.h"


MoveableEntity::MoveableEntity()
	: dir(ED_STOP),
	  speedX(0),
	  speedY(0),
	  accelX(0),
	  accelY(0)
{
}


MoveableEntity::~MoveableEntity()
{

}


bool MoveableEntity::init(std::string file)
{
	return true;
}


void MoveableEntity::update()
{
}


void MoveableEntity::draw()
{

}


bool MoveableEntity::cleanUp()
{
	return true;
}


bool MoveableEntity::interactive()
{
	return true;
}


void MoveableEntity::move(float x, float y)
{
	if (x == 0 && y == 0)
		return;
	x *= FPS::getFPS().getSpeedFactor();
	y *= FPS::getFPS().getSpeedFactor();
}

