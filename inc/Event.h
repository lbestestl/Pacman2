/**************************************************************************
** Qt Creator license header template
**   Special keywords: owner 2013. 9. 24. 2013
**   Environment variables: 
**   To protect a percent sign, use '%'.
**************************************************************************/

#ifndef EVENT_H
#define EVENT_H


#include <SDL2/SDL.h>


class Event
{
public:
    Event();
    virtual ~Event();
    virtual void eventProc(SDL_Event* event);
protected:
    virtual void onKeyPressed(SDL_Keysym symbol);
    virtual void onKeyReleased(SDL_Keysym symbol);
    virtual void onMouseMove(SDL_MouseMotionEvent motion);
    virtual void onLMouseButtonPressed(SDL_MouseButtonEvent button);
    virtual void onLMouseButtonReleased(SDL_MouseButtonEvent button);
    virtual void onRMouseButtonPressed(SDL_MouseButtonEvent button);
    virtual void onRMouseButtonReleased(SDL_MouseButtonEvent button);
    virtual void onMMouseButtonPressed(SDL_MouseButtonEvent button);
    virtual void onMMouseButtonReleased(SDL_MouseButtonEvent button);
    virtual void onMouseWheelMove(SDL_MouseWheelEvent wheel);
    virtual void onExit();
    virtual void onUser();
};


#endif // EVENT_H
