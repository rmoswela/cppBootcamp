/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 05:00:54 by rmoswela          #+#    #+#             */
/*   Updated: 2017/06/02 06:27:57 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	int num = 4;
	//int i = 1;
	Span sp = Span(num);
		sp.addNumber(5);
		sp.addNumber(1);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
	/*for (int loop = 0; loop < num + 1; loop++)
	{
		sp.addNumber(i * 2);
		i +=2;
	}*/
	std::cout << "size = " << sp.getCount() << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}
