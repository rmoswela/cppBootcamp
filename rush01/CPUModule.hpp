/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPUModule.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 03:20:04 by rmoswela          #+#    #+#             */
/*   Updated: 2017/06/04 10:16:47 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPUMODULE_HPP
#define CPUMODULE_HPP

#include <iostream>
#include <stdexcept>
#include <stdio.h>
#include <string>
#include "IMonitorModule.hpp"

class CPUModule : public IMonitorModule
{
	private:
		std::string			_model;
		std::string			_clockSpeed;
		std::string			_numOfCores;
		std::string			_userActivity;
		std::string			_sysActivity;
		std::string			_idle;

	public:
							CPUModule();
							CPUModule(CPUModule const & target);
		CPUModule	&		operator=(CPUModule const & target);
							~CPUModule();

		std::string			getModel(void) const;
		std::string			getClockSpeed(void) const;
		std::string			getNumOfCores(void) const;
		std::string			getUserActivity(void) const;
		std::string			getSysActivity(void) const;
		std::string			getIdle(void) const;
		std::string			commandExec(const char * cmd);
		void				display(void);
};

std::ostream	&		operator<<(std::ostream & os, CPUModule const & target);

#endif
