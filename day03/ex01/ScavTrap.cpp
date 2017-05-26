/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 21:31:28 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/26 07:14:27 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap ()
{
	std::cout << "ScavTrap Default constructor" << std::endl;
}

ScavTrap::ScavTrap (std::string const label) : name(label), hitPoints(100), maxHitPoints(100), energyPoints(50), maxEnergyPoints(50), level(1), meleeAttackDamage(20), rangedAttackDamage(15), armourDamageReduction(3)
{
	std::cout << "ScavTrap parametirized constructor" << std::endl;
}

ScavTrap::ScavTrap (ScavTrap const & target) : ClapTrap(target.name)
{
	std::cout << "Hi i am " << target << "copy of ScavTrap constructor" << std::endl;
	*this = target;
	return;
}

/*
 * assignment operator that is exception safe using swap
 */
//ScavTrap &	ScavTrap::operator = (ScavTrap temp)//taking by value
ScavTrap &	ScavTrap::operator = (ScavTrap const & target)
{
	std::cout << "Hi i am " << target << " ScavTrap assignment operator" << std::endl;

	//copy of the right hand side
	ScavTrap temp(target);

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
ScavTrap::~ScavTrap()
{
	std::cout << "By Odin, By Thor, By " << this->name << " i am fucken destroyed" << std::endl;
}

std::ostream &	operator<<(std::ostream & os, ScavTrap const & target)
{
	os << target.hitPoints << target.maxHitPoints << target.energyPoints << target.maxEnergyPoints << target.level << target.meleeAttackDamage << target.rangedAttackDamage << target.armourDamageReduction;
	return os;
}

/*
 * function that announces a ranged attack
 */
void		ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " snipped " << target << " at range, fucking " << this->rangedAttackDamage << " of his points!" << std::endl;
}

/*
 * function that announces a fight
 */
void		ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP " << this->name << " was on a melee battle with " << target << " fucking " << this->rangedAttackDamage << " of his points, what an ass!" << std::endl;
}

/*
 * function that checks amount of damage you are taking plus you armour damage 
 * so you don't go below zero
 */
void			ScavTrap::takeDamage(unsigned int amount)
{
	if ((this->hitPoints - ((int)amount - this->armourDamageReduction)) < 0)
	{
		this->hitPoints = 0;
	}
	else
	{
		this->hitPoints -= ((int)amount - this->armourDamageReduction);
	}

	std::cout << "FR4G-TP " << this->name <<  " is " << amount - this->armourDamageReduction << " fucked, i might need a new guard!" << std::endl;
}

/*
 * function that repairs yourself and checks you don't go over max hit points
 */
void			ScavTrap::beRepaired(unsigned int amount)
{
	if ((this->hitPoints + (int)amount) > this->maxHitPoints)
	{
		this->hitPoints = this->maxHitPoints;
	}
	else
	{
		this->hitPoints += (int)amount;
	}

	std::cout << "FR4G-TP " << this->name <<  " is " << amount << " healed, and ready to man my palace again!" << std::endl;

}

void 			ScavTrap::challengeNewcomer(std::string const & target)
{
	const char *awesomeChallenges[] = {"beer chugging", "cow tipping", "getting bored", "being zuma", " sky diving"};

	std::cout << "I FR4G-TP " << this->name << " assign " << target << " a " << awesomeChallenges[rand() % 5] << " challenge" << std::endl;
}
