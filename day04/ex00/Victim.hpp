/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 02:40:03 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/27 04:55:58 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_CLASS_H
# define VICTIM_CLASS_H

#include <string>
#include <iostream>

class Victim
{
	private:
		std::string		_name;
	
	public:
						Victim();
						Victim(std::string name);
						Victim(Victim const & target);
		Victim &		operator=(Victim const & target);
						~Victim();

		std::string		getName(void) const;

		void			setName(std::string name);

		virtual void			getPolymorphed() const;
};

std::ostream	&		operator<<(std::ostream & os, Victim const & target);

#endif
