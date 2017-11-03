/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NetworkModule.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkrusche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 02:46:29 by dkrusche          #+#    #+#             */
/*   Updated: 2017/06/04 15:28:01 by dkrusche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NETWORKMODULE_HPP
# define NETWORKMODULE_HPP

# include "IMonitorModule.hpp"
# include <iostream>
# include <stdexcept>
# include <string>
# include <stdio.h>

class	NetworkModule : public IMonitorModule
{
	public:
		NetworkModule();
		NetworkModule(NetworkModule const & src);
		~NetworkModule();

		NetworkModule & operator=(NetworkModule const & rhs);

		std::string		getPktsIn(void) const;
		std::string		getBytesIn(void) const;
		std::string		getPktsOut(void) const;
		std::string		getBytesOut(void) const;

	private:
		std::string		_pktsIn;
		std::string		_bytesIn;
		std::string		_pktsOut;
		std::string		_bytesOut;
		std::string		commandExec(const char * cmd);
		void			display(void);
};

std::ostream & operator<<(std::ostream & os, NetworkModule const & rhs);

#endif
