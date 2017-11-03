/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 01:02:24 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/27 04:49:53 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << this->_name << " , " << this->_title << " is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << " , " << this->_title << " is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & target)
{
	this->_name = target.getName();
	this->_title = target.getTitle();
	return *this;
}

Sorcerer::Sorcerer(Sorcerer const & target)
{
	*this = target;
	return;
}

std::ostream &	operator<<(std::ostream & os, Sorcerer const & target)
{
	std::cout << "I am " << target.getName() << " , " << target.getTitle() << " and I like ponies!" << std::endl;
	os << target.getName() << target.getTitle();
	return os;
}

std::string		Sorcerer::getName(void) const
{
	return this->_name;
}

std::string		Sorcerer::getTitle(void) const
{
	return this->_title;
}

void			Sorcerer::setName(std::string name)
{
	this->_name = name;
}

void			Sorcerer::setTitle(std::string title)
{
	this->_title = title;
}

void			Sorcerer::polymorph(Victim const & target) const
{
	target.getPolymorphed();
}
