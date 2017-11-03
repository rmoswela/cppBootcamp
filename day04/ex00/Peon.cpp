/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 03:32:45 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/27 04:49:22 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon()
{
}

Peon::Peon(std::string name) : Victim(name), _name(name)
{
	std::cout << "Zog zog" << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark" << std::endl;
}

Peon	& 	Peon::operator=(Peon const & target)
{
	this->_name = target.getName();
	return *this;
}

Peon::Peon(Peon const & target)
{
	*this = target;
	return;
}

std::ostream &	operator<<(std::ostream & os, Peon const & target)
{
	os << target.getName();
	return os;
}

void			Peon::setName(std::string name)
{
	this->_name = name;
}

std::string		Peon::getName(void) const
{
	return this->_name;
}

void	Peon::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a pinky pony!" << std::endl;
}
