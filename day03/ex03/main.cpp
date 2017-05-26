/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 03:15:54 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/26 20:26:41 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
	srand(time(NULL));

	FragTrap attack("reuben");
	ScavTrap challenge("lame");
	NinjaTrap ninja("moswela");

	std::string const & str = "russ";
	std::string const & chall = "bonnie";

	std::cout << attack.name << " energy points: " << attack.energyPoints << std::endl;
	attack.vaulthunter_dot_exe(str);
	std::cout << attack.name << " energy points: " << attack.energyPoints << std::endl;
	attack.vaulthunter_dot_exe(str);
	attack.vaulthunter_dot_exe(str);
	attack.vaulthunter_dot_exe(str);
	std::cout << attack.name << " energy points: " << attack.energyPoints << std::endl;
	attack.vaulthunter_dot_exe(str);
	std::cout << attack.name << " energy points: " << attack.energyPoints << std::endl;
	attack.rangedAttack(str);
	attack.meleeAttack(str);
	std::cout << attack.name << " hit points: " << attack.hitPoints << std::endl;
	attack.takeDamage(30);
	std::cout << attack.name << " hit points: " << attack.hitPoints << std::endl;
	attack.takeDamage(75);
	std::cout << attack.name << " hit points: " << attack.hitPoints << std::endl;
	attack.beRepaired(80);
	std::cout << attack.name << " hit points: " << attack.hitPoints << std::endl;
	attack.beRepaired(10);
	std::cout << attack.name << " hit points: " << attack.hitPoints << std::endl;


	std::cout << challenge.name << " energy points: " << challenge.energyPoints << std::endl;
	challenge.challengeNewcomer(chall);
	std::cout << challenge.name << " energy points: " << challenge.energyPoints << std::endl;
	challenge.challengeNewcomer(chall);
	challenge.challengeNewcomer(chall);
	challenge.challengeNewcomer(chall);
	std::cout << challenge.name << " energy points: " << challenge.energyPoints << std::endl;
	challenge.challengeNewcomer(chall);
	std::cout << challenge.name << " energy points: " << challenge.energyPoints << std::endl;
	challenge.rangedAttack(chall);
	challenge.meleeAttack(chall);
	std::cout << challenge.name << " hit points: " << challenge.hitPoints << std::endl;
	challenge.takeDamage(60);
	std::cout << challenge.name << " hit points: " << challenge.hitPoints << std::endl;
	challenge.takeDamage(35);
	std::cout << challenge.name << " hit points: " << challenge.hitPoints << std::endl;
	challenge.beRepaired(34);
	std::cout << challenge.name << " hit points: " << challenge.hitPoints << std::endl;
	challenge.beRepaired(90);
	std::cout << challenge.name << " hit points: " << challenge.hitPoints << std::endl;
    
	//FragTrap  attac = attack;
	ScavTrap & chal = challenge;

    std::cout << ninja.name << " energy points: " << ninja.energyPoints << std::endl;
    ninja.ninjaShoebox(attack);
    std::cout << ninja.name << " energy points: " << ninja.energyPoints << std::endl;
    ninja.ninjaShoebox(ninja);
    ninja.ninjaShoebox(chal);
    ninja.ninjaShoebox(attack);
    std::cout << ninja.name << " energy points: " << ninja.energyPoints << std::endl;
    ninja.ninjaShoebox(chal);
    ninja.ninjaShoebox(attack);
    ninja.ninjaShoebox(chal);
    std::cout << ninja.name << " energy points: " << ninja.energyPoints << std::endl;
    ninja.meleeAttack(chall);
    ninja.rangedAttack(chall);
    ninja.meleeAttack(str);
    ninja.rangedAttack(str);
    std::cout << ninja.name << " hit points: " << ninja.hitPoints << std::endl;
    ninja.takeDamage(40);
    std::cout << ninja.name << " hit points: " << ninja.hitPoints << std::endl;
    ninja.takeDamage(75);
    ninja.ninjaShoebox(ninja);
    std::cout << ninja.name << " hit points: " << ninja.hitPoints << std::endl;
    ninja.beRepaired(70);
    std::cout << ninja.name << " hit points: " << ninja.hitPoints << std::endl;
    ninja.ninjaShoebox(ninja);
    ninja.beRepaired(90);
    std::cout << ninja.name << " hit points: " << ninja.hitPoints << std::endl;
    ninja.ninjaShoebox(attack);
    ninja.ninjaShoebox(attack);
    ninja.ninjaShoebox(attack);
    ninja.ninjaShoebox(attack);

	return (0);
}
