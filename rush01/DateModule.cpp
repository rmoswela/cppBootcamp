/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DateModule.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 03:49:17 by rmoswela          #+#    #+#             */
/*   Updated: 2017/06/04 14:23:17 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DateModule.hpp"

DateModule::DateModule()
{
	this->display();
}

DateModule::DateModule(DateModule const & target)
{
	*this = target;
	return;
}

DateModule	&	DateModule::operator=(DateModule const & target)
{
	if (this != &target)
		*this = target;
	return *this;
}

DateModule::~DateModule(void)
{
}

std::ostream	&	operator<<(std::ostream & os, DateModule const & target)
{
	os << "Date: " << target.getDate();
	os << "Time : " << target.getTime();
	return os;
}

std::string			DateModule::getTime(void) const
{
	return this->_time;
}

std::string					DateModule::getDate(void) const
{
	return this->_date;
}

std::string				DateModule::commandExec(const char * cmd)
{
    char buffer[128];
    std::string result = "";
    FILE* pipe = popen(cmd, "r");
    if (!pipe) throw std::runtime_error("popen() failed!");
    try {
        while (!feof(pipe)) {
            if (fgets(buffer, 128, pipe) != NULL)
                result += buffer;
        }
    } catch (...) {
        pclose(pipe);
        throw;
    }
    pclose(pipe);
    return result;
}

void				DateModule::display(void)
{
	this->_time = commandExec("date | awk '{print $4\" \"$5}'");
	this->_date = commandExec("date | awk '{print $1\" \"$2\" \"$3\" \"$6}'");
}
