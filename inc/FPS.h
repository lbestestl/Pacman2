/*
 * FPS.h
 *
 *  Created on: Sep 29, 2013
 *      Author: lbestestl
 */


#ifndef FPS_H_
#define FPS_H_


class FPS {
private:
	FPS();
	~FPS();

public:
	static FPS& getFPS();
	void update();
	const float getSpeedFactor();
	const unsigned int getFpsNum();

private:
	unsigned int curFrame;
	unsigned int prevTime;
	float speedFactor;
	unsigned int fpsNum;
};


#endif /* FPS_H_ */
