#ifndef _GAMEPLAY_H
#define _GAMEPLAY_H

#include "GameEntity.hpp"

#define MAX_ENTITIES 200

class GamePlay
{
private:
    int _numEntities;
    GameEntity _entity[MAX_ENTITIES];

public:
    GamePlay();
};

#endif