/*
 * Player.cpp
 *
 *  Created on: Sep 29, 2013
 *      Author: lbestestl
 */


#include "Player.h"


Player::Player()
	: score(0),
	  life(0)
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
}


void Player::draw()
{

}


bool Player::cleanUp()
{
	return true;
}


bool Player::interactive()
{
	return true;
}


void Player::move(float x, float y)
{
	if (x == 0 && y == 0)
		return;

}
