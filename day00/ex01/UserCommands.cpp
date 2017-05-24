/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   UserCommands.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 21:10:47 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/23 18:05:08 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

Contact		contact;

Contact		add()
{
	std::cout << "Enter first name: ";
	std::cin >> contact.first_name;
	std::cout << "Enter last name: ";
	std::cin >> contact.last_name;
	std::cout << "Enter nickname: ";
	std::cin >> contact.nickname;
	std::cout << "Enter login: ";
	std::cin >> contact.login;
	std::cout << "Enter postal address: ";
	std::cin >> contact.postal_address;
	std::cout << "Enter email address: ";
	std::cin >> contact.email_address;
	std::cout << "Enter phone number: ";
	std::cin >> contact.phone_number;
	std::cout << "Enter birth date: ";
	std::cin >> contact.birth_date;
	std::cout << "Enter favorite meal: ";
	std::cin >> contact.favorite_meal;
	std::cout << "Enter underwear color: ";
	std::cin >> contact.underwear_color;
	std::cout << "Enter darkest secret: ";
	std::cin >> contact.darkest_secret;
	return		contact;
}

void		message()
{
	std::cout << "**** Phonebook is full, adding more will rewrite the last addition *****" << std::endl;
}


void		columns()
{
	std::cout.width(10); std::cout << std::right << "Index";
	std::cout << " | ";
	std::cout.width(10); std::cout << std::right << "Firstname";
	std::cout << " | ";
	std::cout.width(10); std::cout << std::right << "Lastname";
	std::cout << " | ";
	std::cout.width(10); std::cout << std::right <<"Nickname";
	std::cout << " | ";
	std::cout << "\n";
}

std::string				truncate(std::string str)
{
	if (str.length() > 10)
	{
		str.replace(str.begin() +9, str.end(), ".");
		return str;
	}
	else
		return str;
}


int myAtoi(const std::string& str) 
{
	int n = 0;
	for (size_t  = 0; i < str.length(); i += 1) {
		char digit = str.at(i);
		if (digit < '0' || digit > '9') {
			return n; 
		}
		n *= 10;
		n += digit - '0';
	}
	return n;
}

void				display(Contact array[8], int loop)
{
	char			index[1000];
	int				count;
	int				num;
	count = 0;

	while (count < loop)
	{
		std::cout.width(10); std::cout << std::right << count;
		std::cout << " | ";
		std::cout.width(10); std::cout << std::right << truncate(array[count].first_name);
		std::cout << " | ";
		std::cout.width(10); std::cout << std::right << truncate(array[count].last_name);
		std::cout << " | ";
		std::cout.width(10); std::cout << std::right << truncate(array[count].nickname);
		std::cout << " | ";
		std::cout << "\n";
		count++;
	}
	std::cout << "Enter index of the contact, you want to see: ";
	std::cin >> index;

	num = myAtoi(index);
	std::cout << "atoi: " << num << std::endl;
	if (num)
	{
		std::cout << "Firstname: " << array[num].first_name << std::endl;
		std::cout << "Lastname: " << array[num].last_name << std::endl;
		std::cout << "Nickname: " << array[num].nickname << std::endl;
		std::cout << "Login: " << array[num].login << std::endl;
		std::cout << "Postal Address: " << array[num].postal_address << std::endl;
		std::cout << "Email Address: " << array[num].email_address << std::endl;
		std::cout << "Phone Number: " << array[num].phone_number << std::endl;
		std::cout << "Birthdate: " << array[num].birth_date << std::endl;
		std::cout << "Favorite Meal: "<< array[num].favorite_meal << std::endl;
		std::cout << "Underwear Color: "<< array[num].underwear_color << std::endl;
		std::cout << "Darkest Secret: "<< array[num].darkest_secret << std::endl;
	}
	else
	{
		std::cout << "Value entered is not a number" << std::endl;
	}
}
