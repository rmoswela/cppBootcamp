/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 17:32:32 by rmoswela          #+#    #+#             */
/*   Updated: 2017/06/01 18:11:56 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Array.hpp"

int main(void)
{
    ::Array<std::string> a(10);
    ::Array<std::string> b(20);
    a[2] = 's';
    b[0] = a[11];

	std::cout<<"Size of A = "<<a.size()<<std::endl;
    return (0);
}
