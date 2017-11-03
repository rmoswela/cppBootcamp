/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 19:28:16 by rmoswela          #+#    #+#             */
/*   Updated: 2017/06/04 15:37:43 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CPUModule.hpp"
#include "RAMModule.hpp"
#include "HostnameModule.hpp"
#include "OSinfoModule.hpp"
#include "DateModule.hpp"
#include "NetworkModule.hpp"

int main()
{
	CPUModule  c; //= new CPUModule();
	RAMModule  r; //= new RAMModule();
	HostnameModule  h;// = new HostnameModule();
	NetworkModule  n;// = new HostnameModule();
	OSinfoModule  *o = new OSinfoModule();
	DateModule  *d = new DateModule();
	std::cout << c << std::endl;
	std::cout << h << std::endl;
	std::cout << *(o) << std::endl;
	std::cout << r << std::endl;
	std::cout << *(d) << std::endl;
	std::cout << n << std::endl;
    //std::string test = exec("top | head | tail -2 | head -1");
    //std::cout << test;
    return 0;
}
