/*
 * FPS.cpp
 *
 *  Created on: Sep 29, 2013
 *      Author: lbestestl
 */


#include "FPS.h"

#include <SDL2/SDL.h>


FPS::FPS()
	: curFrame(0),
	  prevTime(0),
	  speedFactor(0),
	  fpsNum(0)
{

}


FPS::~FPS()
{

}


FPS& FPS::theFPS()
{
	static FPS f;
	return f;
}


void FPS::update()
{
	if(prevTime + 1000 < SDL_GetTicks()) {
		prevTime = SDL_GetTicks();
		fpsNum = curFrame;
		curFrame = 0;
		return;
	}

	speedFactor = ((SDL_GetTicks() - prevTime) / 1000.0f) * 64.0f;
	prevTime = SDL_GetTicks();
	curFrame++;
}


const float FPS::getSpeedFactor()
{
	return speedFactor;
}


const unsigned int FPS::getFpsNum()
{
	return fpsNum;
}
