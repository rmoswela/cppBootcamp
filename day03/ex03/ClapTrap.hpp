/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 05:16:51 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/26 15:49:44 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap
{
	public:

		std::string		name;
		int				hitPoints;
		int				maxHitPoints;
		int				energyPoints;
		int				maxEnergyPoints;
		int				level;
		int				meleeAttackDamage;
		int				rangedAttackDamage;
		int				armourDamageReduction;

	//public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(ClapTrap const & target);
		ClapTrap & operator=(ClapTrap const & target);

		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		/*void			setHitPoints(int const hitPoints);
		void			setMaxHitPoints(int const maxPoints);
		void			setEnergyPoints(int const energy);
		void			setMaxEnergyPoints(int const maxEnergy);
		void			setLevel(int const level);
		void			setMeleeAttackDamage(int const melee);
		void			setRangedAttackDamage(int const ranged);
		void			setArmourDamage(int const armour);

		int				getHitPoints(void);
		int				getMaxHitPoints(void);
		int				getEnergyPoints(void);
		int				getMaxEnergyPoints(void);
		int				getLevel(void);
		int				getRangedAttackDamage(void);
		int				getMeleeAttackDamage(void);
		int				getArmourDamage(void);*/
};

std::ostream & operator<<(std::ostream & os, ClapTrap const & target);

#endif

