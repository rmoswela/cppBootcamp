/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 21:11:46 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/24 14:00:17 by rmoswela         ###   ########.fr       */
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
	private:
		//class attributes
		std::string		_zombieType;
		std::string		_zombieName;

	public:
		//class functions
		Zombie(std::string name, std::string type);
		~Zombie();
		void			announce();
};
#endif
