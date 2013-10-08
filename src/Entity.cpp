/**************************************************************************
** Qt Creator license header template
**   Special keywords: owner 2013. 9. 26. 2013
**   Environment variables: 
**   To protect a percent sign, use '%'.
**************************************************************************/


#include "Entity.h"


Entity::Entity()
	: id(ET_NONE),
	  posX(0),
	  posY(0),
	  width(0),
	  height(0)
{
}


Entity::~Entity()
{

}


bool Entity::init(std::string file)
{
	return true;
}


void Entity::update()
{
	ani.animate();
}


void Entity::draw()
{

}


bool Entity::cleanUp()
{
	return true;
}


bool Entity::interactive()
{
	return true;
}


const EntityType Entity::getId()
{
	return id;
}


const int Entity::getPosX()
{
	return posX;
}


const int Entity::getPosY()
{
	return posY;
}
