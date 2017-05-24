/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 15:53:01 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/24 17:43:11 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Human.hpp"

Human::Human() : brain()
{
}

const std::string		Human::identify() const
{
	return this->brain.identify();
}

const Brain&		Human::getBrain() const
{
	return this->brain;
}

Human::~Human()
{
}
