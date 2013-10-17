/*
 * Player.cpp
 *
 *  Created on: Sep 29, 2013
 *      Author: lbestestl
 */


#include "Player.h"


Player::Player()
{

}


Player::~Player()
{

}



bool Player::init(std::string file)
{
	return true;
}


void Player::update()
{
	MoveableEntity::update();
}


void Player::draw()
{
	MoveableEntity::draw();
}


bool Player::cleanUp()
{
	return true;
}
