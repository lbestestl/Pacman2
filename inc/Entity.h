/**************************************************************************
** Qt Creator license header template
**   Special keywords: owner 2013. 9. 26. 2013
**   Environment variables: 
**   To protect a percent sign, use '%'.
**************************************************************************/


#ifndef ENTITY_H
#define ENTITY_H


#include <string>
#include <SDL2/SDL.h>


class Entity {
public:
    Entity();
    virtual ~Entity();
    
    virtual bool init(std::string file);
    virtual void update();
    virtual void draw();
    virtual bool cleanUp();

    virtual bool interactive();
    
private:
    void animate();

private:
    int id;
    int posX;
    int posY;
    int width;
    int height;
    
};


#endif // ENTITY_H
