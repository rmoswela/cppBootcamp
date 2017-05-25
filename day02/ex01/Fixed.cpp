/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 01:53:49 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/25 16:55:20 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(float const f) : _fixedPointValue (roundf(f * (1 << this->_numOfFractionalBits)))
{
	std::cout << "float constructor called" << std::endl;
}

Fixed::Fixed(int const i) : _fixedPointValue (i * (1 << this->_numOfFractionalBits))
{
	std::cout << "Int constructor called" << std::endl;
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
		this->_fixedPointValue = op._fixedPointValue;//op.getRawBits();
	return *this;
}

int			Fixed::toInt() const
{
	return  roundf(_fixedPointValue / (1 << this->_numOfFractionalBits));
}

float		Fixed::toFloat() const
{
	return  round(_fixedPointValue / (1 << this->_numOfFractionalBits));
}

std::ostream & operator<<(std::ostream & o, Fixed const &obj)
{
	o << obj.getRawBits() / 256.0;
	return o;
}

const int Fixed::_numOfFractionalBits = 8;
