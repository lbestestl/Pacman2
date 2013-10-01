/**************************************************************************
** Qt Creator license header template
**   Special keywords: owner 2013. 9. 23. 2013
**   Environment variables: 
**   To protect a percent sign, use '%'.
**************************************************************************/


#ifndef APP_H
#define APP_H


#include "Event.h"

#include <SDL2/SDL_ttf.h>


class App
	: public Event {
private:
    App();
    ~App();

public:
    static App& getApp();
    int exec();

private:
    bool init();
    void eventProc(SDL_Event* event);
    void update();
    void draw();
    bool cleanUp();

    void onExit();

private:
    bool isRunning;
    SDL_Window* win;
    SDL_Renderer* ren;
    SDL_Texture* tex;
};


#endif // APP_H
