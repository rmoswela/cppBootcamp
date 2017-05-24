/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 13:39:27 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/24 15:02:15 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

/*
 * function to give zombie instances random names
 */
void		randomChump()
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

	ZombieEvent event;
	event.setZombieType("Blood Sucker");
	Zombie *randZombie = event.newZombie(str);
	delete randZombie;
}

int			main()
{
	randomChump();
	return 0;
}
