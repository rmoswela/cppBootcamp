/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 22:05:42 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/28 03:42:08 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy() : GameEntity()
{
	_xPos = rand() % 60;
	_yPos = rand() % 3;
	_speed = rand() % 3;
	_isAlive = true;
}

Enemy::Enemy(int xPos, int yPos) : GameEntity()
{
	this->_xPos = xPos;
	this->_yPos = yPos;
	_isAlive = true;
}

Enemy & Enemy::operator=(Enemy const & target)
{
	this->_xPos = target.getXPos();
	this->_yPos = target.getYPos();
	return *this;
}

Enemy::Enemy(Enemy const & target)
{
	*this = target;
	return;
}

Enemy::~Enemy()
{
	std::cout << "Enemy dies" << std::endl;
}

int			Enemy::move()
{
	this->_yPos += _speed;
	return this->_yPos;
}

void		Enemy::shoot()
{
}

void		Enemy::collision(Player *p, Missile *m)
{
	if (_xPos == m->getXPos() && _yPos >= m->getYPos() && m->getIsAlive())
	{
		m->setIsAlive(false);
		_isAlive = false;
		p->setScore(p->getScore() + 1);
	}
	else if (_xPos >= p->getXPos() && _xPos < p->getXPos() + 3 && _yPos == p->getYPos())
	{
		_isAlive = false;
		p->setLife(p->getLife() - 1);
	}
}
