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
