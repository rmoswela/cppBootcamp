/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 00:50:37 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/27 04:56:15 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_CLASS_H
# define SORCERER_CLASS_H

#include <string>
#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
	private:
		std::string		_name;
		std::string		_title;

	public:
						Sorcerer();
						Sorcerer(std::string name, std::string title);
						Sorcerer(Sorcerer const & target);
		Sorcerer &		operator=(Sorcerer const & target);
						~Sorcerer();

		std::string		getName(void) const;
		std::string		getTitle(void) const;
		
		void			setName(std::string name);
		void			setTitle(std::string title);

		void			polymorph(Victim const & target) const;
};

std::ostream	& 		operator<<(std::ostream & os, Sorcerer const & target);

#endif
