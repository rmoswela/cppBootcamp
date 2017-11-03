/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Missile.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 04:37:45 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/28 06:09:30 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Missile.hpp"


Missile::Missile()
{
	_isAlive = true;
}

Missile::~Missile()
{
}

Missile		& Missile::operator=(Missile const & target)
{
	this->_xPos = target.getXMissile();
	this->_yPos = target.getYMissile();
	return *this;
}

Missile::Missile(Missile const & target)
{
	*this = target;
	return;
}

void	 Missile::playerShoot(int x, int y)
{
	this->_xPos = x;//target.getXPos();
	this->_yPos = y;//target.getYPos();
	//return *this;
}

int			Missile::getXMissile(void) const
{
	return this->_xPos;
}

int			Missile::getYMissile(void) const
{
	return this->_yPos;
}

void		Missile::setXMissile(int x)
{
	this->_xPos = x;
}

void		Missile::setYMissile(int y)
{
	this->_yPos = y;
}
