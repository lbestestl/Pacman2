/*
 * AnimationCtrl.h
 *
 *  Created on: Oct 7, 2013
 *      Author: owner
 */


#ifndef ANIMATIONCTRL_H_
#define ANIMATIONCTRL_H_


#include "Entity.h"
#include "MoveableEntity.h"


class AnimationCtrl {
public:
	AnimationCtrl();
	virtual ~AnimationCtrl();

	void update();
	void draw(EntityType id, Direction dir, unsigned int curFrame, int posX, int posY);
};


#endif /* ANIMATIONCTRL_H_ */
