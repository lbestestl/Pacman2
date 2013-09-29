/**************************************************************************
** Qt Creator license header template
**   Special keywords: owner 2013. 9. 23. 2013
**   Environment variables: 
**   To protect a percent sign, use '%'.
**************************************************************************/


#include "App.h"
#include "Define.h"
#include "Texture.h"


App::App()
    : isRunning(true),
      win(NULL),
      ren(NULL),
      tex(NULL),
      font(NULL)
{
}


App::~App()
{

}


App& App::getApp()
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
                                   SDL_WINDOWPOS_CENTERED, MY_WINDOW_WIDTH,
                                   MY_WINDOW_HEIGHT, SDL_WINDOW_SHOWN)) == NULL) {
        isRunning = false;
    }

    if ((ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED |
                                       SDL_RENDERER_PRESENTVSYNC)) == NULL) {
        isRunning = false;
    }

    SDL_RenderClear(ren);

    if ((tex = Texture::load("./res/background.jpg", ren)) == NULL) {
        isRunning = false;
    }

    if (TTF_Init() == -1) {
    	isRunning = false;
    }

    return isRunning;
}


void App::update()
{

}


void App::draw()
{
    Texture::draw(tex, ren, 0, 0, 200, 200, 800, 600);
    SDL_RenderPresent(ren);
}


bool App::cleanUp()
{
	TTF_CloseFont(font);
	TTF_Quit();
    SDL_DestroyTexture(tex);
    SDL_DestroyRenderer(ren);
    SDL_DestroyWindow(win);
    SDL_Quit();
    return true;
}
