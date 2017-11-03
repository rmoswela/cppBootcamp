/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 03:23:56 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/27 04:55:40 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_CLASS_H
# define PEON_CLASS_H

#include <string>
#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
	private:
		std::string		_name;

	public:
						Peon();
						Peon(std::string name);
						Peon(Peon const & target);
		Peon	&		operator=(Peon const & target);
						~Peon();
		
		void			setName(std::string name);

		std::string		getName(void) const;

		virtual void	getPolymorphed() const;
};

std::ostream	&		operator<<(std::ostream & os, Peon const & target);

#endif
