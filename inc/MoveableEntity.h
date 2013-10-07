/*
 * MoveableEntity.h
 *
 *  Created on: Sep 29, 2013
 *      Author: lbestestl
 */


#ifndef MOVEABLEENTITY_H_
#define MOVEABLEENTITY_H_


#include "Entity.h"
#include "Tile.h"


enum EntityDirection {
	ED_STOP = 0,
	ED_LEFT,
	ED_RIGHT,
	ED_UP,
	ED_DOWN
};


class MoveableEntity
	: public Entity {
public:
	MoveableEntity();
	virtual ~MoveableEntity();

    virtual bool init(std::string file);
    virtual void update();
    virtual void draw();
    virtual bool cleanUp();

    virtual void move(float x, float y);

private:
    bool posValid(int speedX, int speedY);
    bool posValid(TileType tile);
    bool posValid(Entity* ent, int x, int y);

private:
    EntityDirection dir;
    float speedX;
    float speedY;
    float accelX;
    float accelY;
    float maxSpeedX;
    float maxSpeedY;
};


#endif /* MOVEABLEENTITY_H_ */
