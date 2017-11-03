#ifndef _GAMEENTITY_H
#define _GAMEENTITY_H

//#include "IGameEntity.hpp"

typedef enum
{
	OBSTACLE,
    SHOT
} types_t;

class GameEntity
{
public:
    GameEntity();
    GameEntity(GameEntity  const & obj);
    GameEntity & operator=(GameEntity const & obj);
    ~GameEntity();

    void handleCollision();
    int getXPos() const;
    int getYPos() const;
    types_t getType() const;
    bool getIsAlive() const;

    void setXPos(int pos);
    void setYPos(int pos);
    void setType(types_t type);
    void setIsAlive(bool life);

protected:
    int _xPos;
    int _yPos;
    bool _isAlive;
    types_t _type;
	void	collision();
    
};

#endif
