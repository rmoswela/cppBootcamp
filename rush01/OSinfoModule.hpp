/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OSinfoModule.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 10:43:42 by rmoswela          #+#    #+#             */
/*   Updated: 2017/06/04 13:22:26 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OSINFOMODULE_HPP
#define OSINFOMODULE_HPP

#include "IMonitorModule.hpp"
#include <string.h>
#include <iostream>

class OSinfoModule : public IMonitorModule
{
	private:
		std::string			_sysVersion;
		std::string			_kernelVer;
		std::string			_upTime;

	public:
		OSinfoModule();
		OSinfoModule(OSinfoModule const & target);
		OSinfoModule	&		operator=(OSinfoModule const & target);
		~OSinfoModule();

		std::string			getSysVersion(void) const;
		std::string			getKernelVer(void) const;
		std::string			getUpTime(void) const;
		std::string			commandExec(const char * cmd);
		void				display(void);
};

std::ostream	&		operator<<(std::ostream	& os, OSinfoModule const & target);

#endif
