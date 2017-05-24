/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 16:22:12 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/23 18:05:11 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.cpp"
#include <string>


void		ponyOnTheHeap()
{
	Pony *pony = new Pony("Heap");
	delete pony;
}

void		ponyOnTheStack()
{
	Pony pony = Pony("Stack");
}

int			main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return 0;
}
