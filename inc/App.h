/**************************************************************************
** Qt Creator license header template
**   Special keywords: owner 2013. 9. 23. 2013
**   Environment variables: 
**   To protect a percent sign, use '%'.
**************************************************************************/


#ifndef APP_H
#define APP_H


#include "Event.h"
#include "GameInfo.h"

#include <SDL2/SDL_ttf.h>


class App
	: public Event {
private:
    App();
    ~App();

public:
    static App& theApp();
    int exec();

private:
    bool init();
    void eventProc(SDL_Event* event);
    void update();
    void draw();
    bool cleanUp();

    void onExit();
    void onKeyPressed(SDL_Keysym symbol);

public:
    SDL_Renderer* ren;
    SDL_Texture* tex;

private:
    bool isRunning;
	SDL_Window* win;
	GameInfo gi;
};


#endif // APP_H
