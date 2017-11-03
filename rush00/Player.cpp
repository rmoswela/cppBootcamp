#include <iostream>

#include "Player.hpp"

Player::Player(void)
{
	_xPos = 30;
	_yPos = 40;
	_score = 0;
    _life = 3;
	_isAlive = true;
}

Player & Player::operator=(Player const & obj)
{
	_xPos = obj._xPos;
	_yPos = obj._yPos;
	_score = obj._score;

	return (*this);
}

Player::Player(Player const & obj)
{
	*this = obj;
}

Player::~Player(void)
{
	std::cout << "Player has been killed" << std::endl;
	return;
}

void Player::shoot()
{	
}

int Player::getScore() const 
{ 
    return _score;
}

int Player::getLife() const 
{ 
    return _life;
}

void Player::setScore(int score)
{
    _score = score;
}

void Player::setLife(int life)
{
    _life = life;
}
