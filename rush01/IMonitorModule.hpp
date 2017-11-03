/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMonitorModule.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 16:34:20 by rmoswela          #+#    #+#             */
/*   Updated: 2017/06/04 05:29:15 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMONITORMODULE_HPP
#define IMONITORMODULE_HPP

#include <string>

class IMonitorModule
{
	public:
								//IMonitorModule();
		//virtual					~IMonitorModule();
		virtual std::string		commandExec(const char * cmd) = 0;
		virtual void			display(void) = 0;
};

#endif
