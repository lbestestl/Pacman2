/**************************************************************************
** Qt Creator license header template
**   Special keywords: owner 2013. 9. 26. 2013
**   Environment variables: 
**   To protect a percent sign, use '%'.
**************************************************************************/


#ifndef ENTITY_H
#define ENTITY_H


class Entity
{
public:
    Entity();
    virtual ~Entity();
    
    bool interactive();
    
private:
    int posX;
    int posY;
    int width;
    int height;
    
};


#endif // ENTITY_H
