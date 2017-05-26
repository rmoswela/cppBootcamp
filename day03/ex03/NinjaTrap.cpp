/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 16:51:20 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/26 20:37:24 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap ()
{
	std::cout << "NinjaTrap Default constructor" << std::endl;
}

//NinjaTrap::NinjaTrap (std::string const label) : name(label), ClapTrap(label), hitPoints(100), maxHitPoints(100), energyPoints(100), maxEnergyPoints(100), level(1), meleeAttackDamage(30), rangedAttackDamage(20), armourDamageReduction(5)
NinjaTrap::NinjaTrap (std::string const label) : ClapTrap(label), name(label)
{
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armourDamageReduction = 0;
	std::cout << "NinjaTrap parametirized constructor" << std::endl;
}

NinjaTrap::NinjaTrap (NinjaTrap const & target) : ClapTrap(target.name)
{
	std::cout << "NinjaTrap copy of constructor" << std::endl;
	*this = target;
	return;
}

/*
 * assignment operator that is exception safe using swap
 */
//NinjaTrap &	NinjaTrap::operator = (NinjaTrap temp)//taking by value
NinjaTrap &	NinjaTrap::operator = (NinjaTrap const & target)
{
	std::cout << "Assignment operator" << std::endl;

	//copy of the right hand side
	NinjaTrap temp(target);

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
NinjaTrap::~NinjaTrap()
{
	std::cout << "This " << this->name << "is fucked" << std::endl;
}

std::ostream &	operator<<(std::ostream & os, NinjaTrap const & target)
{
	os << target.hitPoints << target.maxHitPoints << target.energyPoints << target.maxEnergyPoints << target.level << target.meleeAttackDamage << target.rangedAttackDamage << target.armourDamageReduction;
	return os;
}
std::ostream &	operator<<(std::ostream & os, FragTrap const & target)
{
	os << target.hitPoints << target.maxHitPoints << target.energyPoints << target.maxEnergyPoints << target.level << target.meleeAttackDamage << target.rangedAttackDamage << target.armourDamageReduction;
	return os;
}

/*
 * function that announces a ranged attack
 */
void		NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << "Ninja " << this->name << " attacks " << target << " at range, causing " << this->rangedAttackDamage << " points of damage, what a hit!" << std::endl;
}

/*
 * function that announces a fight
 */
void		NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << "Ninja " << this->name << " melee attack on " << target << " caused " << this->rangedAttackDamage << " points of damage, crazy!" << std::endl;
}


void 			NinjaTrap::ninjaShoebox(FragTrap::FragTrap const & target)
{
	const char *funnyAttacks[] = {"prepare for trouble, make it double", "eat grass", "whatch out for my sucker punch", "take this", "suck balls"};

	std::cout << "FR4G-TP from ninjaTrap " << this->name << " " << funnyAttacks[rand() % 5] << " you " << target.name << std::endl;
}

void 			NinjaTrap::ninjaShoebox(ScavTrap::ScavTrap const & target)
{
	const char *blast[] = {"grenade", "missile", "bomb", "detonator", "firecracker"};
	
	std::cout << "Scavtrap " << this->name << " in a ninjaTrap throws a " << blast[rand() % 5] << " at " << target.name << std::endl;
}

void 			NinjaTrap::ninjaShoebox(NinjaTrap const & target)
{
	const char *ninja[] = {"shinobi-iri", "kenjutsu", "bojutsu", "yarijutsu", "tai jutsu"};
	
	std::cout << "I ninja " << this->name << " in a ninjaTrap apply " << ninja[rand() % 5] << " ninja skill at " << target.name << std::endl;
}
