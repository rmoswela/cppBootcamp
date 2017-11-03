/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 22:32:00 by rmoswela          #+#    #+#             */
/*   Updated: 2017/06/01 23:41:57 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"


int		main()
{
	int num = 21;
	std::vector<int> v;
	for(int loop = 0; loop < 6; loop++)
	{
		v.push_back(loop);
	}

	int n = 7;
	std::array<int,10> arr = {{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }};

	::Easyfind(arr, n);
	::Easyfind(v, num);
	return 0;
}
