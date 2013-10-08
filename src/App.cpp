/**************************************************************************
** Qt Creator license header template
**   Special keywords: owner 2013. 9. 23. 2013
**   Environment variables: 
**   To protect a percent sign, use '%'.
**************************************************************************/


#include "App.h"
#include "Define.h"
#include "Texture.h"
#include "Map.h"
#include "FPS.h"
#include <iostream>


App::App()
    : isRunning(true),
      win(NULL),
      ren(NULL),
      tex(NULL)
{
}


App::~App()
{

}


App& App::theApp()
{
    static App app;
    return app;
}


bool App::init()
{
    isRunning = true;

    if (SDL_Init(SDL_INIT_EVERYTHING) == -1) {
        isRunning = false;
    }

    if ((win = SDL_CreateWindow("Pacman2.0", SDL_WINDOWPOS_CENTERED,
                                   SDL_WINDOWPOS_CENTERED, WINDOW_WIDTH,
                                   WINDOW_HEIGHT, SDL_WINDOW_SHOWN)) == NULL) {
        isRunning = false;
    }

    if ((ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED |
                                       SDL_RENDERER_PRESENTVSYNC)) == NULL) {
        isRunning = false;
    }

    SDL_RenderClear(ren);

    if ((tex = Texture::load("./res/tileset.png", ren)) == NULL) {
        isRunning = false;
    }
    map.init("./res/stage2.dpm");

    return isRunning;
}


void App::update()
{
	FPS::theFPS().update();
	std::cout<<FPS::theFPS().getSpeedFactor()<<std::endl;
}


void App::draw()
{
	//pacman은 20*20
    map.draw();
    SDL_RenderPresent(ren);
}


bool App::cleanUp()
{
	map.cleanUp();
    SDL_DestroyTexture(tex);
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();
    return true;
}
