/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 03:18:26 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/24 03:39:03 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int		main()
{
	std::string brain = "HI THIS IS BRAIN";

	//pointer to a string at address brain
	std::string *ptr = &brain;

	//reference to varible brain
	std::string& ref = brain;

	std::cout << *ptr << ", i am from pointer! "<<std::endl;
	std::cout << ref << ", i am from reference! "<<std::endl;
	
	return 0;
}
