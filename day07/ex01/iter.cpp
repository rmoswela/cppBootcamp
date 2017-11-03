/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 03:38:31 by rmoswela          #+#    #+#             */
/*   Updated: 2017/06/01 16:52:23 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
 * function that takes 3 parameter 
 * pointer to array, length of the array and
 * pointer to function that returns void and takes a const value
 */
template<typename T>
void		iter(T * arr, unsigned int len, void (*func) (T const &))
{
	//std::cout << "array addr = " << arr << std::endl;

	for(unsigned int loop = 0; loop < len; loop++)
	{
		func(arr[loop]);
	}
}

/*
 * function that takes a const value
 */
template<typename T>
void		arrayFunc(T const & index)
{
	std::cout << "Hi i am = " << index << std::endl;
}

int main()
{
	int num[] = {1, 2, 3, 4, 5};
	unsigned int len1 = (sizeof(num)/ sizeof(num[0]));
	std::cout <<"size = " << len1 << std::endl;
	::iter(num, len1, arrayFunc<int>);

	std::string str[] = {"r", "e", "u", "b", "e", "n"};
	unsigned int len2 = (sizeof(str)/ sizeof(str[0]));
	std::cout <<"size = " << len2 << std::endl;
	::iter(str, len2, arrayFunc<std::string>);

	char arr[] = {'a', 'b', 'c', 'd'};
	unsigned int len3 = (sizeof(arr)/ sizeof(arr[0]));
	std::cout <<"size = " << len3 << std::endl;
	::iter(arr, len3, arrayFunc<char>);
}
