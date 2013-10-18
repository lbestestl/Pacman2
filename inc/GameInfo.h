/*
 * Game.h
 *
 *  Created on: Oct 17, 2013
 *      Author: owner
 */


#ifndef GAME_H_
#define GAME_H_


#include "Map.h"
#include "Player.h"
#include "Enemy.h"


class GameInfo {
public:
	GameInfo();
	virtual ~GameInfo();

	bool init();
	void update();
	void draw();
	bool cleanUp();

	inline Player& getP1() {return p1;}

private:
	Map map;
	Player p1;
	Player p2;
	int life;
	int score;
	int stage;
};


#endif /* GAME_H_ */
