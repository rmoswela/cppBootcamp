/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HostnameModule.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 10:43:42 by rmoswela          #+#    #+#             */
/*   Updated: 2017/06/04 12:33:10 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HOSTNAMEMODULE_HPP
#define HOSTNAMEMODULE_HPP

#include "IMonitorModule.hpp"
#include <string.h>
#include <iostream>

class HostnameModule : public IMonitorModule
{
	private:
		std::string			_hostname;
		std::string			_username;

	public:
		HostnameModule();
		HostnameModule(HostnameModule const & target);
		HostnameModule	&		operator=(HostnameModule const & target);
		~HostnameModule();

		std::string			getHostname(void) const;
		std::string			getUsername(void) const;
		std::string			commandExec(const char * cmd);
		void				display(void);
};

std::ostream	&		operator<<(std::ostream	& os, HostnameModule const & target);

#endif
