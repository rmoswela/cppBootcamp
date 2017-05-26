/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 16:18:51 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/26 18:00:50 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef NINJATRAP_H
# define NINJATRAP_H

#include <string>
#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		std::string		name;

						NinjaTrap();
						NinjaTrap(std::string name);
						NinjaTrap(NinjaTrap const &obj);
		NinjaTrap &		operator=(NinjaTrap const &obj);
						~NinjaTrap();

		void			ninjaShoebox(FragTrap::FragTrap const & target);
		void			ninjaShoebox(ScavTrap::ScavTrap const & target);
		void			ninjaShoebox(NinjaTrap const & target);
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
};

std::ostream & operator << (std::ostream & os, NinjaTrap const &obj);
//std::ostream & operator << (std::ostream & os, ScavTrap const &obj);
std::ostream & operator << (std::ostream & os, FragTrap const &obj);

#endif
