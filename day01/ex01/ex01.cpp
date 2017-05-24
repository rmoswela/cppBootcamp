/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 16:56:52 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/23 20:54:13 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void		memoryLeak()
{
	std::string *panthere = new std::string ("string panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}
