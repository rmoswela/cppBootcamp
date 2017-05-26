/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 05:31:44 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/26 15:59:52 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap ()
{
    std::cout << "ClapTrap Default constructor" << std::endl;
}

ClapTrap::ClapTrap (std::string const name) : name(name)
{
    std::cout << "Hi i am " << name << "of ClapTrap and I am the parent constructor" << std::endl;
}

ClapTrap::ClapTrap (ClapTrap const & target)
{
    std::cout << "I " << target << " am copy of ClapTrap constructor" << std::endl;
    *this = target;
    return;
}

/*
 * assignment operator that is exception safe using swap
 */
//ClapTrap &	ClapTrap::operator = (ClapTrap temp)//taking by value
ClapTrap &	ClapTrap::operator = (ClapTrap const & target)
{
    std::cout << "Hi i am " << target << " ClapTrap assignment operator" << std::endl;
    
    //copy of the right hand side
    ClapTrap temp(target);
    
    //swap data members with temporary
    /*std::swap(hitPoints, temp.hitPoints);
    std::swap(maxHitPoints, temp.maxHitPoints);
    std::swap(energyPoints, temp.energyPoints);
    std::swap(maxEnergyPoints, temp.maxEnergyPoints);
    std::swap(level, temp.level);
    std::swap(meleeAttackDamage, temp.meleeAttackDamage);
    std::swap(rangedAttackDamage, temp.rangedAttackDamage);
    std::swap(armourDamageReduction, temp.armourDamageReduction);*/
	(void)target;
    
    return *this;
}

/*
 * destructor to deallocate or destroy instance of class
 */
ClapTrap::~ClapTrap()
{
    std::cout << "By Odin, By Thor, By " << this->name << " i disappear" << std::endl;
}

std::ostream &	operator<<(std::ostream & os, ClapTrap const & target)
{
	//(void)target;
	//os << target;
	os << target.hitPoints << target.maxHitPoints << target.energyPoints << target.maxEnergyPoints << target.level << target.meleeAttackDamage << target.rangedAttackDamage << target.armourDamageReduction;
	return os;
}

/*
 * function that announces a ranged attack
 */
void		ClapTrap::rangedAttack(std::string const & target)
{
    std::cout << "ClapTrap " << this->name << " snipped " << target << " at range, fucking " << this->rangedAttackDamage << " of his points!" << std::endl;
}

/*
 * function that announces a fight
 */
void		ClapTrap::meleeAttack(std::string const & target)
{
    std::cout << "ClapTrap " << this->name << " was on a melee battle with " << target << " fucking " << this->rangedAttackDamage << " of his points, what an ass!" << std::endl;
}

/*
 * function that checks amount of damage you are taking plus you armour damage
 * so you don't go below zero
 */
void			ClapTrap::takeDamage(unsigned int amount)
{
    if ((this->hitPoints - ((int)amount - this->armourDamageReduction)) < 0)
    {
        this->hitPoints = 0;
    }
    else
    {
        this->hitPoints -= ((int)amount - this->armourDamageReduction);
    }
    
    std::cout << "ClapTrap " << this->name <<  " is " << amount - this->armourDamageReduction << " fucked, i might need a new guard!" << std::endl;
}

/*
 * function that repairs yourself and checks you don't go over max hit points
 */
void			ClapTrap::beRepaired(unsigned int amount)
{
    if ((this->hitPoints + (int)amount) > this->maxHitPoints)
    {
        this->hitPoints = this->maxHitPoints;
    }
    else
    {
        this->hitPoints += (int)amount;
    }
    
    std::cout << "ClapTrap " << this->name <<  " is " << amount << " healed, and ready to man my palace again!" << std::endl;
    
}
