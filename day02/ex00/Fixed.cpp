/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 01:53:49 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/25 15:17:01 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

void		Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
}

int			Fixed::getRawBits(void) const
{
	std::cout << "get raw bit member function called" << std::endl;
	return this->_fixedPointValue;
}


Fixed::Fixed(Fixed const &obj)
{
	std::cout << "copy of the constructor called" << std::endl;
	*this = obj;
	return;
}

Fixed &		Fixed::operator=(Fixed const &op)
{
	std::cout << "assignment operator called" << std::endl;
	if (this != &op)
		this->_fixedPointValue = op.getRawBits();
	return *this;
}

const int Fixed::_numOfFractionalBits = 8;
