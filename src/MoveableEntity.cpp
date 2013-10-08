/*
 * MoveableEntity.cpp
 *
 *  Created on: Sep 29, 2013
 *      Author: lbestestl
 */


#include "MoveableEntity.h"
#include "FPS.h"
#include "AnimationCtrl.h"


MoveableEntity::MoveableEntity()
	: dir(D_STOP),
	  speedX(0),
	  speedY(0),
	  accelX(0),
	  accelY(0),
	  maxSpeedX(5),
	  maxSpeedY(5)
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
	Entity::update();
	switch (dir) {
	case D_STOP:
		break;
	case D_LEFT:
		accelX = -0.8;
		accelY = 0;
		break;
	case D_RIGHT:
		accelX = 0.8;
		accelY = 0;
		break;
	case D_UP:
		accelX = 0;
		accelY = 0.8;
		break;
	case D_DOWN:
		accelX = 0;
		accelY = -0.8;
		break;
	default:
		;
	}

	speedX += accelX * FPS::theFPS().getSpeedFactor();
	speedY += accelY * FPS::theFPS().getSpeedFactor();

	if(speedX > maxSpeedX)
		speedX = maxSpeedX;
	if(speedX < -maxSpeedX)
		speedX = -maxSpeedX;
	if(speedY > maxSpeedY)
		speedY = maxSpeedY;
	if(speedY < -maxSpeedY)
		speedY = -maxSpeedY;

//	animate();
	move(speedX, speedY);
}


void MoveableEntity::draw()
{
	AnimationCtrl::draw(this->getId(), dir, this->ani.getCurFrame(),
			this->getPosX(), this->getPosY());
}


bool MoveableEntity::cleanUp()
{
	return true;
}


void MoveableEntity::move(float sx, float sy)
{
	if (sx == 0 && sy == 0)
		return;
	sx *= FPS::theFPS().getSpeedFactor();
	sy *= FPS::theFPS().getSpeedFactor();
}


bool MoveableEntity::posValid(int x, int y)
{
	return true;
}


bool MoveableEntity::posValid(TileType type)
{
    if (type == TT_HW)
    	return false;
	return true;
}


bool MoveableEntity::posValid(Entity* ent, int x, int y)
{
	return true;
}
