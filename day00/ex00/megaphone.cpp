/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 11:39:49 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/23 05:17:55 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>


void		displayToUpper(char *array[])
{
    int		i;
    int		j;
	char	c;
    
    i =  1;
    
    while (array[i] != '\0')
    {
        j = 0;
        while (array[i][j] != '\0')
        {
            c = toupper(array[i][j]);
            std::cout << c;
            j++;
        }
        i++;
    }
}

int		main(int argc, char *argv[])
{
	if(argc > 1)
	{
		displayToUpper(argv);
		std::cout << "\n";
	}
	else
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
}
