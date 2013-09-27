/**************************************************************************
** Qt Creator license header template
**   Special keywords: owner 2013. 9. 23. 2013
**   Environment variables: 
**   To protect a percent sign, use '%'.
**************************************************************************/


#include "Texture.h"
#include "App.h"

#include <SDL2/SDL_image.h>


Texture::Texture()
{
}


SDL_Texture* Texture::load(std::string file, SDL_Renderer* ren)
{
    SDL_Texture* tex = IMG_LoadTexture(ren, file.c_str());

    if (tex == NULL) {
        return NULL;
    }

    return tex;
}


SDL_Texture* Texture::load(SDL_Surface* surf, SDL_Renderer* ren)
{
    SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, surf);
    SDL_FreeSurface(surf);
    return tex;
}


bool Texture::draw(SDL_Texture* tex, SDL_Renderer* ren, int destX, int destY)
{
    if (tex == NULL) {
        return false;
    }

    SDL_Rect destR;
    destR.x = destX;
    destR.y = destY;

    SDL_QueryTexture(tex, NULL, NULL, &destR.w, &destR.h);
    SDL_RenderCopy(ren, tex, NULL, &destR);

    return true;
}


bool Texture::draw(SDL_Texture* tex, SDL_Renderer* ren, int destX, int destY,
                   int srcX, int srcY, int srcW, int srcH)
{
    if (tex == NULL) {
        return false;
    }

    SDL_Rect destR;
    destR.x = destX;
    destR.y = destY;
    destR.w = srcW;
    destR.h = srcH;

    SDL_Rect srcR;
    srcR.x = srcX;
    srcR.y = srcY;
    srcR.w = srcW;
    srcR.h = srcH;

    SDL_RenderCopy(ren, tex, &srcR, &destR);

    return true;
}