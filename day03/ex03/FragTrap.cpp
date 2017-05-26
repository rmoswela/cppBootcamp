/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 21:31:28 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/26 20:35:25 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap ()
{
	std::cout << "FragTrap Default constructor" << std::endl;
}

//FragTrap::FragTrap (std::string const label) : name(label), ClapTrap(label), hitPoints(100), maxHitPoints(100), energyPoints(100), maxEnergyPoints(100), level(1), meleeAttackDamage(30), rangedAttackDamage(20), armourDamageReduction(5)
FragTrap::FragTrap (std::string const label) : ClapTrap(label), name(label)
{
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->level = 1;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armourDamageReduction = 5;
	std::cout << "FragTrap parametirized constructor" << std::endl;
}

FragTrap::FragTrap (FragTrap const & target) : ClapTrap(target.name)
{
	std::cout << "FragTrap copy of constructor" << std::endl;
	*this = target;
	return;
}

/*
 * assignment operator that is exception safe using swap
 */
//FragTrap &	FragTrap::operator = (FragTrap temp)//taking by value
FragTrap &	FragTrap::operator = (FragTrap const & target)
{
	std::cout << "Assignment operator" << std::endl;

	//copy of the right hand side
	FragTrap temp(target);

	//swap data members with temporary
	std::swap(hitPoints, temp.hitPoints);
	std::swap(maxHitPoints, temp.maxHitPoints);
	std::swap(energyPoints, temp.energyPoints);
	std::swap(maxEnergyPoints, temp.maxEnergyPoints);
	std::swap(level, temp.level);
	std::swap(meleeAttackDamage, temp.meleeAttackDamage);
	std::swap(rangedAttackDamage, temp.rangedAttackDamage);
	std::swap(armourDamageReduction, temp.armourDamageReduction);

	return *this;
}

/*
 * destructor to deallocate or destroy instance of class
 */
FragTrap::~FragTrap()
{
	std::cout << "This " << this->name << "is fucked" << std::endl;
}

/*std::ostream &	operator<<(std::ostream & os, FragTrap const & target)
{
    os << target.hitPoints << target.maxHitPoints << target.energyPoints << target.maxEnergyPoints << target.level << target.meleeAttackDamage << target.rangedAttackDamage << target.armourDamageReduction;
	return os;
}*/

/*
 * function that announces a ranged attack
 */
void		FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " attacks " << target << " at range, causing " << this->rangedAttackDamage << " points of damage!" << std::endl;
}

/*
 * function that announces a fight
 */
void		FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " melee attack on " << target << " caused " << this->rangedAttackDamage << " points of damage, what a dick!" << std::endl;
}

/*
 * function that checks amount of damage you are taking plus you armour damage 
 * so you don't go below zero
 *
void			FragTrap::takeDamage(unsigned int amount)
{
	if ((this->hitPoints - ((int)amount - this->armourDamageReduction)) < 0)
	{
		this->hitPoints = 0;
	}
	else
	{
		this->hitPoints -= ((int)amount - this->armourDamageReduction);
	}

	std::cout << "FR4G-TP " << this->name <<  " has been  " << amount - this->armourDamageReduction << " battered, fuck!" << std::endl;
}*/

/*
 * function that repairs yourself and checks you don't go over max hit points
 *
void			FragTrap::beRepaired(unsigned int amount)
{
	if ((this->hitPoints + (int)amount) > this->maxHitPoints)
	{
		this->hitPoints = this->maxHitPoints;
	}
	else
	{
		this->hitPoints += (int)amount;
	}

	std::cout << "FR4G-TP " << this->name <<  " is " << amount << " repaired, and ready for action!" << std::endl;

}*/

void 			FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	const char *funnyAttacks[] = {"prepare for trouble, make it double", "eat grass", "whatch out for my sucker punch", "take this", "suck balls"};

	if ((this->energyPoints - 25) >= 0)
	{
		//srand(time(0));
		std::cout << "FR4G-TP " << this->name << " " << funnyAttacks[rand() % 5] << " you " << target << std::endl;
		this->energyPoints -= 25;
	}
	else
	{
		std::cout << "FR4G-TP " << this->name << " is exhausted!" << std::endl;
	}
}
