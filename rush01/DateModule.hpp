/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DateModule.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 10:43:42 by rmoswela          #+#    #+#             */
/*   Updated: 2017/06/04 14:02:00 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATEMODULE_HPP
#define DATEMODULE_HPP

#include "IMonitorModule.hpp"
#include <string.h>
#include <iostream>

class DateModule : public IMonitorModule
{
	private:
		std::string			_time;
		std::string			_date;

	public:
		DateModule();
		DateModule(DateModule const & target);
		DateModule	&		operator=(DateModule const & target);
		~DateModule();

		std::string			getDate(void) const;
		std::string			getTime(void) const;
		std::string			commandExec(const char * cmd);
		void				display(void);
};

std::ostream	&		operator<<(std::ostream	& os, DateModule const & target);

#endif
