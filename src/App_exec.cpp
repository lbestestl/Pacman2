/**************************************************************************
** Qt Creator license header template
**   Special keywords: owner 2013. 9. 23. 2013
**   Environment variables: 
**   To protect a percent sign, use '%'.
**************************************************************************/


#include "App.h"
#include "Texture.h"


int App::exec()
{
    if (!init())
        return -1;

    while (isRunning) {
        SDL_Event e;
        while (SDL_PollEvent(&e) != 0) {
            eventProc(&e);
        }
        update();
        draw();
    }

    if (!cleanUp())
        return -1;
    return 0;
}
