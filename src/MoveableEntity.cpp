/*
 * MoveableEntity.cpp
 *
 *  Created on: Sep 29, 2013
 *      Author: lbestestl
 */


#include "MoveableEntity.h"
#include "FPS.h"
#include "AnimationCtrl.h"
#include "Define.h"


MoveableEntity::MoveableEntity()
	: dir(D_STOP),
	  speedX(0),
	  speedY(0),
	  accelX(0),
	  accelY(0),
	  maxSpeedX(3),
	  maxSpeedY(3)
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
		if (speedX > 0) {
			accelX = -1;
		} else if(speedX < 0) {
			accelX =  1;
		}
		if(speedX < 2.0f && speedX > -2.0f) {
			accelX = 0;
			speedX = 0;
		}
		if (speedY > 0) {
			accelY = -1;
		} else if(speedY < 0) {
			accelY =  1;
		}
		if(speedY < 2.0f && speedY > -2.0f) {
			accelY = 0;
			speedY = 0;
		}
		break;
	case D_LEFT:
		accelX = -0.8;
		accelY = 0;
		if (speedY > 0) {
			accelY = -1;
		} else if(speedY < 0) {
			accelY =  1;
		}
		if(speedY < 2.0f && speedY > -2.0f) {
			accelY = 0;
			speedY = 0;
		}
		break;
	case D_RIGHT:
		accelX = 0.8;
		accelY = 0;
		if (speedY > 0) {
			accelY = -1;
		} else if(speedY < 0) {
			accelY =  1;
		}
		if(speedY < 2.0f && speedY > -2.0f) {
			accelY = 0;
			speedY = 0;
		}
		break;
	case D_UP:
		accelX = 0;
		accelY = -0.8;
		if (speedX > 0) {
			accelX = -1;
		} else if(speedX < 0) {
			accelX =  1;
		}
		if(speedX < 2.0f && speedX > -2.0f) {
			accelX = 0;
			speedX = 0;
		}
		break;
	case D_DOWN:
		accelX = 0;
		accelY = 0.8;
		if (speedX > 0) {
			accelX = -1;
		} else if(speedX < 0) {
			accelX =  1;
		}
		if(speedX < 2.0f && speedX > -2.0f) {
			accelX = 0;
			speedX = 0;
		}
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

	ani.animate();
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
	float ex = this->getPosX() + sx;
	float ey = this->getPosY() + sy;
	if (posValid(ex, ey)) {
		this->setPosX(ex);
		this->setPosY(ey);
	}

}


void MoveableEntity::setDir(Direction dir)
{
	this->dir = dir;
}


bool MoveableEntity::posValid(float x, float y)
{
	if (x < 0 || x > WINDOW_WIDTH - UNIT_SIZE
			|| y < 0 || y > WINDOW_HEIGHT - UNIT_SIZE)
		return false;
	for (int h = 0; h < MAP_HEIGHT; h++) {
		for (int w = 0; w < MAP_WIDTH; w++) {
//			TileType tile = getTiles0et(w, h);
//			if (!posValid(tile))
//				return false;
		}
	}
	return true;
}


bool MoveableEntity::posValid(TileType type)
{
    if (type == TT_HW || type == TT_VW || type == TT_RDW || type == TT_RUW
    		|| type == TT_LDW || type == TT_LUW)
    	return false;
	return true;
}


bool MoveableEntity::posValid(Entity* ent, int x, int y)
{
	return true;
}
