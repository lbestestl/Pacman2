/*
 * Animation.cpp
 *
 *  Created on: Sep 29, 2013
 *      Author: lbestestl
 */


#include "Animation.h"

#include <SDL2/SDL.h>
#include <iostream>


Animation::Animation()
	: curFrame(0),
	  frameInc(1),
	  frameRate(100),
	  prevTime(0),
	  maxFrame(2) // curFrame = [0, maxFrame)
{
}


Animation::Animation(unsigned int cf, unsigned int fi,
		unsigned int fr, unsigned long pt, unsigned int mf)
	: curFrame(cf),
	  frameInc(fi),
	  frameRate(fr),
	  prevTime(pt),
	  maxFrame(mf)
{
}


void Animation::animate()
{
	if (prevTime + frameRate > SDL_GetTicks())
		return;
	prevTime = SDL_GetTicks();
	curFrame += frameInc;
	if (curFrame >= maxFrame)
		curFrame = 0;
}


const unsigned int Animation::getCurFrame()
{
	return curFrame;
}
