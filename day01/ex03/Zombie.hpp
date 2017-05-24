/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 21:11:46 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/24 03:06:03 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

#include <string>

/*
 * class to describe a zombie
 */
class Zombie
{
	public:
		//class attributes
		std::string		zombieType;
		std::string		zombieName;

		//class functions
		Zombie();
		~Zombie();
		void			announce();
};
#endif
