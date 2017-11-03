/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 02:08:10 by rmoswela          #+#    #+#             */
/*   Updated: 2017/06/01 03:31:30 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void swap(T & x, T & y)
{
	T  temp;

	temp = x;
	x = y;
	y = temp;
}

template <typename T>
T const & max(T const & x, T const & y)
{
	return ((x > y) ? x : y);
}

template <typename T>
T const & min(T const & x, T const & y)
{
	return ((x < y) ? x : y);
}


int main (void)
{
	int a = 2;
	int b = 3;

	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";
	
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, c) = " << ::max(c, d) << std::endl;
	return 0;
}
