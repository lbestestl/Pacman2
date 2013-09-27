/**************************************************************************
** Qt Creator license header template
**   Special keywords: owner 2013. 9. 27. 2013
**   Environment variables: 
**   To protect a percent sign, use '%'.
**************************************************************************/


#ifndef PLAYER_H
#define PLAYER_H


class Player : public Entity
{
public:
    Player();
    virtual ~Player();
    
    bool interactive();
    
private:
    int score;
    int life;
};


#endif // PLAYER_H