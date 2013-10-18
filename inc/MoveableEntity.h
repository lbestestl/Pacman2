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


enum Direction {
	D_STOP = 0,
	D_LEFT,
	D_RIGHT,
	D_UP,
	D_DOWN
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
    void setDir(Direction dir);

private:
    bool posValid(float posX, float posY);
    bool posValid(TileType tile);
    bool posValid(Entity* ent, int x, int y);

private:
    Direction dir;
    float speedX;
    float speedY;
    float accelX;
    float accelY;
    float maxSpeedX;
    float maxSpeedY;
};


#endif /* MOVEABLEENTITY_H_ */
