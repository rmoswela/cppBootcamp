/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 22:55:46 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/24 15:00:38 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
//#include "Zombie.hpp"

/*
 * constructor to initialize instance of the zombieEvent class
 */
ZombieEvent::ZombieEvent()
{
}

/*
 * destructor to destroy or deallocate the zombieEvent instance
 */
ZombieEvent::~ZombieEvent()
{
}

/*
 * fuction that takes a zombie type and returns it
 */
void		ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}


/*
 * function to create a zombie with type, name and returns it
 */

Zombie		*ZombieEvent::newZombie(std::string name)
{
	//instantiate a zombie
	Zombie *zombie = new Zombie(name, _type);
	//Zombie *ptrZombie = &zombie;
	return zombie;
}
