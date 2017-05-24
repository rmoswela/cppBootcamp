/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 22:34:04 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/24 13:47:39 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIEEVENT_CLASS_H
# define ZOMBIEEVENT_CLASS_H

#include <string>
#include "Zombie.hpp"
#include <iostream>

class ZombieEvent
{
	public:
		//class functions
		Zombie			*newZombie(std::string name);
		void		setZombieType(std::string type);
		ZombieEvent();
		~ZombieEvent();
	private:
		std::string		_type;
};
#endif
