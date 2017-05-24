/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 21:16:21 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/24 03:15:08 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <stdlib.h>
#include <time.h>
#include <iostream>

/*
 * function to give zombie instances random names
 */
std::string		randomZombieNames()
{
	int i = 0;

	//string length
	int num = rand() % 50 + 1;

	//string array
	char str[num + 1];

	//array of alphabets
	static const char alphabets[] = 
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";
	while (i < num)
	{
		srand(time(NULL));
		str[i] = alphabets[rand() % (sizeof(alphabets) - 1)];
		i++;
	}
	//null terminate
	str[i] = '\0';

	return str;
}

/*
 * constructor to initialize the zombie instance
 * with names and announce them
 */
Zombie::Zombie()
{
	this->zombieName = randomZombieNames();
	this->announce();
}

/*
 * destructor to destroy or deallocate zombie instance
 */
Zombie::~Zombie()
{
	std::cout<<"zombie " << this->zombieName << " destroyed" <<std::endl;
}

/*
 * function to announce the zombie property
 */
void		Zombie::announce()
{
	std::cout << "My name is " << this->zombieName << ", I came here to haunt you!" << std::endl;
}
