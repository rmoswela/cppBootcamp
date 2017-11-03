/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 21:26:06 by rmoswela          #+#    #+#             */
/*   Updated: 2017/06/01 23:27:33 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <vector>
#include <array>
#include <iostream>

class Error : public std::exception
{
	public:
		virtual const char *out() const throw();
};

const char *Error::out() const throw()
{
	return "execption! first occurance not found";
}

	template<typename T>
void	Easyfind(const T & target, int n)
{
	Error e;
	typename T::const_iterator it;
	try
	{
		for (it = target.begin(); it != target.end(); ++it)
		{
			if(*it == n)
			{
				std::cout <<"first occurance = " << *it << std::endl;
				return;
			}
		}
		throw e;
	}
	catch(Error & e)
	{
		std::cout << e.out() << std::endl;
	}
}

#endif
