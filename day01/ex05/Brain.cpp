/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 03:47:37 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/24 17:44:46 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>
#include <string>
#include <sstream>

/*
 * constructor to initialize instance of the brain class
 */
Brain::Brain()
{
	this->_address = this->identify();
	this->getAddress();
}

/*
 * destructor to destroy or deallocate instance of the brain
 */
Brain::~Brain()
{
}

/*
 * function to print the brains address in memory
 */
std::string		Brain::identify() const
{
	std::stringstream	ss;
	ss << std::hex << this;
	return ss.str();
}

std::string		Brain::getAddress()
{
	return this->_address;
}
