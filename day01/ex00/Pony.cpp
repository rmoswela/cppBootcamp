/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 15:58:04 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/23 16:51:02 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <string>
#include <iostream>

Pony::Pony(std::string mem)
{
	this->_memory = mem;
	std::cout << "Hi, I am pony from " << this->_memory << " memory" << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "Pony from " << this->_memory << " memory just died" << std::endl;
}
