/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RAMModule.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 10:43:42 by rmoswela          #+#    #+#             */
/*   Updated: 2017/06/04 11:56:23 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAMMODULE_HPP
#define RAMMODULE_HPP

#include "IMonitorModule.hpp"
#include <string.h>
#include <iostream>

class RAMModule : public IMonitorModule
{
	private:
		std::string			_availMem;
		std::string			_memForOS;
		std::string			_privateMem;
		std::string			_sharedMem;
		std::string			_totalMem;
		std::string			_unusedMem;

	public:
		RAMModule();
		RAMModule(RAMModule const & target);
		RAMModule	&		operator=(RAMModule const & target);
		~RAMModule();

		std::string			getAvailMem(void) const;
		std::string			getMemForOS(void) const;
		std::string			getPrivateMem(void) const;
		std::string			getSharedMem(void) const;
		std::string			getTotalMem(void) const;
		std::string			getUnusedMem(void) const;
		std::string			commandExec(const char * cmd);
		void				display(void);
};

std::ostream	&		operator<<(std::ostream	& os, RAMModule const & target);

#endif
