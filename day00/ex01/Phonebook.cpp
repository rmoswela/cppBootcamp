/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 14:50:53 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/23 05:05:15 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"

Contact				add();
void				message();
void				columns();
void				display(Contact *array, int loop);

int					main()
{
	int 			loop;
	Contact			arrayContact[8];
	std::string		input;

	loop = 0;

	while (true)
	{
		std::cout << "Please enter an input command: ";
		std::cin >> input;

		if (input == "ADD")
		{
				arrayContact[loop] = add();
				if (loop == 7)
				{
					std::cout << "\n";
					message();
					std::cout << "\n";
					loop--;
				}
				loop++;
		}
		else if(input == "SEARCH")
		{
			columns();
			display(arrayContact, loop);
		}
		else if (input == "EXIT")
		{
			std::cout << "bye bye!" << std::endl;
			return 0;
		}
		else
		{
			std::cout << "Invalid command!" << std::endl;
		}
	}
}
