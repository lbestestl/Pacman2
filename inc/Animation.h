/*
 * Animation.h
 *
 *  Created on: Sep 29, 2013
 *      Author: lbestestl
 */


#ifndef ANIMATION_H_
#define ANIMATION_H_


class Animation {
public:
	Animation();
	Animation(unsigned int currentFrame, unsigned int frameIncrease,
			unsigned int frameRate, unsigned long previousTime,
			unsigned int maximumFrame);
	void animate();

private:
	unsigned int curFrame;
	unsigned int frameInc;
	unsigned int frameRate;
	unsigned long prevTime;
	unsigned int maxFrame;
};


#endif /* ANIMATION_H_ */
