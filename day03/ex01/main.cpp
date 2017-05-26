/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 03:15:54 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/26 04:18:52 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	srand(time(NULL));

	FragTrap attack("reuben");
	ScavTrap challenge("lame");

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

	return (0);
}
