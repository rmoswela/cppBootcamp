/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 01:55:10 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/30 17:56:04 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main()
{
	Bureaucrat *b = new Bureaucrat(2);
	Bureaucrat *bu = new Bureaucrat(149);

	for(int loop = bu->getGrade(); loop < 152 ;  loop++)
	{
		std::cout << *bu ;
		bu->decrementGrade();
	}

	std::cout << "\n";

	for(int loop = b->getGrade(); loop > -1; loop--)
	{
		std::cout << *b;
		b->incrementGrade();
	}
	return 0;
}
