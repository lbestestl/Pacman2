/**************************************************************************
** Qt Creator license header template
**   Special keywords: owner 2013. 9. 26. 2013
**   Environment variables: 
**   To protect a percent sign, use '%'.
**************************************************************************/


#ifndef ENTITY_H
#define ENTITY_H


#include "Animation.h"

#include <string>
#include <SDL2/SDL.h>


enum EntityType {
	ET_NONE = 0,
	ET_PM, // pacman
	ET_PW, // pacwoman
	ET_PG, // pacman giant
	ET_RE, // red enemy(macky)
	ET_PE, // pink enemy(micky)
	ET_CE, // cyan enemy(mucky)
	ET_OE, // orange enemy(mocky)
	ET_TE, // crying-tears enemy
	ET_IE, // invisible enemy
	ET_NE, // naked enemy
	ET_SE, // snail enemy
	ET_NP, // normal pellet (increase score)
	ET_PP, // power pellet (pacman can defeat enemy)
	ET_FI, // fruit item
	ET_LI  // life item
};


class Entity {
public:
    Entity();
    virtual ~Entity();
    
    virtual bool init(std::string file);
    virtual void update();
    virtual void draw();
    virtual bool cleanUp();

    virtual bool interactive();

    const EntityType getId();
    const float getPosX();
    void setPosX(float posX);
    const float getPosY();
    void setPosY(float posY);

public:
    Animation ani;

private:
    EntityType id;
    float posX;
    float posY;
    unsigned int width;
    unsigned int height;
};


#endif // ENTITY_H
