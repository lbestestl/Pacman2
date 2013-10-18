/**************************************************************************
** Qt Creator license header template
**   Special keywords: owner 2013. 9. 25. 2013
**   Environment variables: 
**   To protect a percent sign, use '%'.
**************************************************************************/


#include "App.h"


void App::eventProc(SDL_Event* e)
{
    Event::eventProc(e);
}


void App::onExit()
{
    isRunning = false;
}


void App::onKeyPressed(SDL_Keysym s)
{
	switch (s.sym) {
	case SDLK_LEFT:
		gi.getP1().setDir(D_LEFT);
		break;
	case SDLK_RIGHT:
		gi.getP1().setDir(D_RIGHT);
		break;
	case SDLK_UP:
		gi.getP1().setDir(D_UP);
		break;
	case SDLK_DOWN:
		gi.getP1().setDir(D_DOWN);
		break;
	case SDLK_SPACE:
		gi.getP1().setDir(D_STOP);
		break;
	default:
		;
	}
}
