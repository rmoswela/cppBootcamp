/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 03:15:54 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/26 03:35:32 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    	srand(time(NULL));

    	FragTrap attack("reuben");

    	std::string const & str = "moswela";

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
    	attack.takeDamage(20);
    	std::cout << attack.name << " hit points: " << attack.hitPoints << std::endl;
    	attack.takeDamage(95);
    	std::cout << attack.name << " hit points: " << attack.hitPoints << std::endl;
    	attack.beRepaired(40);
    	std::cout << attack.name << " hit points: " << attack.hitPoints << std::endl;
    	attack.beRepaired(70);
        std::cout << attack.name << " hit points: " << attack.hitPoints << std::endl;
    
        return (0);
}
