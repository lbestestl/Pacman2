/*
 * AnimationCtrl.h
 *
 *  Created on: Oct 7, 2013
 *      Author: owner
 */


#ifndef ANIMATIONCTRL_H_
#define ANIMATIONCTRL_H_


class AnimationCtrl {
public:
	AnimationCtrl();
	virtual ~AnimationCtrl();

	void draw();

private:
	EntityType id;
	Direction dir;
	int curFrame;
	int posX;
	int posY;
	int width;
	int height;
};


#endif /* ANIMATIONCTRL_H_ */
