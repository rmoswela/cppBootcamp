/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HostnameModule.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 03:49:17 by rmoswela          #+#    #+#             */
/*   Updated: 2017/06/04 12:35:59 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HostnameModule.hpp"

HostnameModule::HostnameModule()
{
	this->display();
}

HostnameModule::HostnameModule(HostnameModule const & target)
{
	*this = target;
	return;
}

HostnameModule	&	HostnameModule::operator=(HostnameModule const & target)
{
	if (this != &target)
		*this = target;
	return *this;
}

HostnameModule::~HostnameModule(void)
{
}

std::ostream	&	operator<<(std::ostream & os, HostnameModule const & target)
{
	os << "Hostname: " << target.getHostname();
	os << "Username: " << target.getUsername();
	return os;
}

std::string			HostnameModule::getHostname(void) const
{
	return this->_hostname;
}

std::string					HostnameModule::getUsername(void) const
{
	return this->_username;
}

std::string				HostnameModule::commandExec(const char * cmd)
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

void				HostnameModule::display(void)
{
	this->_hostname = commandExec("hostname");
	this->_username = commandExec("id -un");
}
