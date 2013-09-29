/**************************************************************************
** Qt Creator license header template
**   Special keywords: owner 2013. 9. 27. 2013
**   Environment variables: 
**   To protect a percent sign, use '%'.
**************************************************************************/


#ifndef PLAYER_H
#define PLAYER_H

#include "MoveableEntity.h"


class Player
	: public MoveableEntity {
public:
    Player();
    virtual ~Player();
    
    bool init(std::string file);
    void update();
    void draw();
    bool cleanUp();

    bool interactive();
    void move(float x, float y);
    
private:
    int score;
    int life;
};


#endif // PLAYER_H
