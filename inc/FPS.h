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
	static FPS& theFPS();
	void update();
	const float getSpeedFactor();
	const unsigned int getFpsNum();

private:
	unsigned int curFrame;
	unsigned int prevTime;
	float speedFactor; // default fps(64) / current fps
						// 하드웨어 성능차이에 의한 속도 차이 해결
	unsigned int fpsNum;
};


#endif /* FPS_H_ */
