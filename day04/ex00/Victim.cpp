/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 02:44:59 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/27 04:49:44 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just popped up!" << std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

std::ostream & operator<<(std::ostream & os, Victim const & target)
{
	std::cout << "I am " << target.getName() << " and I like otters!" << std::endl;
	os << target.getName();
	return os;
}

Victim &	Victim::operator=(Victim const & target)
{
	this->_name = target.getName();
	return *this;
}

Victim::Victim(Victim const & target)
{
	*this = target;
	return;
}

std::string		Victim::getName(void) const
{
	return this->_name;
}

void			Victim::setName(std::string name)
{
	this->_name = name;
}

void			Victim::getPolymorphed() const
{
	std::cout << this->getName() << " has been turned into a cute little sheep" << std::endl;
}
