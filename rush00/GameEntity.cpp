#include "GameEntity.hpp"

GameEntity::GameEntity()
{
    return;
}

GameEntity::GameEntity(GameEntity  const & obj)
{
    *this = obj;
}

GameEntity & GameEntity::operator=(GameEntity const & obj)
{    
    _xPos = obj._xPos;
    _yPos = obj._yPos;

    return *this;
}

GameEntity::~GameEntity(void)
{
	return ;
}

int GameEntity::getXPos() const
{
    return _xPos;
}

int GameEntity::getYPos() const
{
    return _yPos;
}

types_t GameEntity::getType() const
{
    return _type;
}

bool GameEntity::getIsAlive() const
{
	return _isAlive;
}

void GameEntity::setXPos(int pos)
{
    _xPos = pos;
}

void GameEntity::setYPos(int pos)
{
    _yPos = pos;
}

void GameEntity::setType(types_t type)
{
    _type = type;
}

void GameEntity::setIsAlive(bool life)
{
	_isAlive = life;
}
