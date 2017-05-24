/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 21:16:21 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/24 14:29:01 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

/*
 * constructor to initialize the class instance
 */
Zombie::Zombie(std::string name, std::string type) : _zombieType(type), _zombieName(name)
{
	this->announce();
}

/*
 * destructor to destroy or deallocate an object
 */
Zombie::~Zombie()
{
	std::cout<< "Hi, I am " << this->_zombieName << " and i just died!"<< std::endl;
}

/*
 * function to announce the zombie properties
 */
void		Zombie::announce()
{
	std::cout << "My name is " << this->_zombieName << " and I am a zombie of type " << this->_zombieType << ", I came here to haunt you!" << std::endl;
}
