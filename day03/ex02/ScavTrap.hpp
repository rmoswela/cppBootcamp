/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 03:41:43 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/26 07:20:18 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		std::string		name;

						ScavTrap();
						ScavTrap(std::string name);
						ScavTrap(ScavTrap const &obj);
		ScavTrap &		operator=(ScavTrap const &obj);
						~ScavTrap();

		void			challengeNewcomer(std::string const & target);
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
};

std::ostream & operator << (std::ostream & os, ScavTrap const &obj);

#endif
