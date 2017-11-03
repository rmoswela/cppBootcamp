/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 01:55:10 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/30 17:39:41 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main()
{
	Bureaucrat *gL = new Bureaucrat(0);
	Bureaucrat *bounds = new Bureaucrat(151);
	Bureaucrat *gH = new Bureaucrat(101);
	Bureaucrat *s = new Bureaucrat(90);
	Form *f = new Form();
	f->beSigned(gL);
	f->beSigned(bounds);
	f->beSigned(gH);
	f->beSigned(s);
	std:: cout<< *f;
	delete gL;
	delete bounds;
	delete gH;
	delete s;
	return 0;
}
