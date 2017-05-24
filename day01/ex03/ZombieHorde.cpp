/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 01:22:44 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/24 03:14:27 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <iostream>

/*
 * constructor to initialize specific number of zombieHorde instances
 * and destroy them
 */
ZombieHorde::ZombieHorde(int n)
{
	Zombie *zombie = new Zombie[n];
	delete [] zombie;
}

/*
 * destructor to deallocate or destroy the instance of zombieHorde
 */
ZombieHorde::~ZombieHorde()
{
	std::cout<<"zombie horde destroyed" <<std::endl;
}
