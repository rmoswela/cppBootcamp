/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 03:42:34 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/24 17:22:12 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_H
# define BRAIN_CLASS_H

#include <string>
#include <iostream>

class Brain
{
	private:
		std::string		_address;

	public:
		//functions of a brain
		std::string		identify() const;
		std::string		getAddress();

		Brain();
		~Brain();
};
#endif
