/**************************************************************************
** Qt Creator license header template
**   Special keywords: owner 2013. 9. 24. 2013
**   Environment variables: 
**   To protect a percent sign, use '%'.
**************************************************************************/


#include "Event.h"
#include <iostream>


Event::Event()
{

}


Event::~Event()
{

}


void Event::eventProc(SDL_Event* e)
{

    switch (e->type) {
    case SDL_WINDOWEVENT:
        break;
    case SDL_KEYDOWN:   //key pressed
        onKeyPressed(e->key.keysym);
        break;
    case SDL_KEYUP: //key released
        onKeyReleased(e->key.keysym);
        break;
    case SDL_MOUSEMOTION:
        onMouseMove(e->motion);
        break;
    case SDL_MOUSEBUTTONDOWN:
        if (e->button.button == SDL_BUTTON_LEFT)
            onLMouseButtonPressed(e->button);
        else if (e->button.button == SDL_BUTTON_RIGHT)
            onRMouseButtonPressed(e->button);
        else if (e->button.button == SDL_BUTTON_MIDDLE)
            onMMouseButtonPressed(e->button);
        else
            ;
        break;
    case SDL_MOUSEBUTTONUP:
        if (e->button.button == SDL_BUTTON_LEFT)
            onLMouseButtonReleased(e->button);
        else if (e->button.button == SDL_BUTTON_RIGHT)
            onRMouseButtonReleased(e->button);
        else if (e->button.button == SDL_BUTTON_MIDDLE)
            onMMouseButtonReleased(e->button);
        else
            ;
        break;
    case SDL_MOUSEWHEEL:
        onMouseWheelMove(e->wheel);
        break;
    case SDL_QUIT:
        onExit();
        break;
    default:
        onUser();
    }
}


void Event::onKeyPressed(SDL_Keysym s)
{
// mod: modifier key (shift, capslock ...)
// scancode: physical(hardware specific) key
// sym: virtual key

}


void Event::onKeyReleased(SDL_Keysym s)
{

}


void Event::onMouseMove(SDL_MouseMotionEvent m)
{
// rel: difference between former and current mouse position,
// state: which mouse button pressed

}


void Event::onLMouseButtonPressed(SDL_MouseButtonEvent b)
{

}


void Event::onLMouseButtonReleased(SDL_MouseButtonEvent b)
{

}


void Event::onRMouseButtonPressed(SDL_MouseButtonEvent b)
{

}


void Event::onRMouseButtonReleased(SDL_MouseButtonEvent b)
{

}


void Event::onMMouseButtonPressed(SDL_MouseButtonEvent b)
{

}


void Event::onMMouseButtonReleased(SDL_MouseButtonEvent b)
{

}


void Event::onMouseWheelMove(SDL_MouseWheelEvent w)
{

}


void Event::onExit()
{

}


void Event::onUser()
{

}