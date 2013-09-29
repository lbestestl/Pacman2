/**************************************************************************
** Qt Creator license header template
**   Special keywords: owner 2013. 9. 23. 2013
**   Environment variables: 
**   To protect a percent sign, use '%'.
**************************************************************************/

#ifndef TEXTURE_H
#define TEXTURE_H


#include <string>
#include <SDL2/SDL.h>


class Texture {
public:
    Texture();
    static SDL_Texture* load(std::string file, SDL_Renderer* renderer);
    static SDL_Texture* load(SDL_Surface* surface, SDL_Renderer* renderer);
    static bool draw(SDL_Texture* sourceImage, SDL_Renderer* destinationRenderer,
                     int destinationXPos, int destinationYPos);
    static bool draw(SDL_Texture* sourceImage, SDL_Renderer* destinationRenderer,
                     int destinationXPos, int destinationYPos, int sourceXPos,
                     int sourceYPos, int sourceWidth, int sourceHeight);
};


#endif // SURFACE_H
