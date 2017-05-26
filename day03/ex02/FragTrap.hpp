/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 21:31:44 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/26 07:27:03 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		std::string		name;

						FragTrap();
						FragTrap(std::string name);
						FragTrap(FragTrap const &obj);
		FragTrap &		operator=(FragTrap const &obj);
						~FragTrap();

		void			vaulthunter_dot_exe(std::string const & target);
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
};

std::ostream & operator << (std::ostream & os, FragTrap const &obj);

#endif
