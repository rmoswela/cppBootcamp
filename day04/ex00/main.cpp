/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 04:01:37 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/27 04:54:20 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int		main()
{
	Sorcerer robert ("Robert", "the magnificent");
	Victim jim ("Jimmy");
	Peon joe ("Joy");

	std::cout<< robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	return 0;
}
