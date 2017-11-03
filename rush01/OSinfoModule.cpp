/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OSinfoModule.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 03:49:17 by rmoswela          #+#    #+#             */
/*   Updated: 2017/06/04 13:52:53 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OSinfoModule.hpp"

OSinfoModule::OSinfoModule()
{
	this->display();
}

OSinfoModule::OSinfoModule(OSinfoModule const & target)
{
	*this = target;
	return;
}

OSinfoModule	&	OSinfoModule::operator=(OSinfoModule const & target)
{
	if (this != &target)
		*this = target;
	return *this;
}

OSinfoModule::~OSinfoModule(void)
{
}

std::ostream	&	operator<<(std::ostream & os, OSinfoModule const & target)
{
	os << "System Version: " << target.getSysVersion();
	os << "Kernel Version: " << target.getKernelVer();
	os << "Time since Boot: " <<target.getUpTime();
	return os;
}

std::string			OSinfoModule::getSysVersion(void) const
{
	return this->_sysVersion;
}

std::string					OSinfoModule::getKernelVer(void) const
{
	return this->_kernelVer;
}

std::string					OSinfoModule::getUpTime(void) const
{
	return this->_upTime;
}

std::string				OSinfoModule::commandExec(const char * cmd)
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

void				OSinfoModule::display(void)
{
	this->_sysVersion = commandExec("system_profiler SPSoftwareDataType | awk '/System Version/ { print $3\" \" $4\" \"$5}'");
	this->_kernelVer = commandExec("system_profiler SPSoftwareDataType | awk '/Kernel Version/ { print $3\" \"$4\" \"$5}'");
	this->_upTime = commandExec("system_profiler SPSoftwareDataType | awk '/Time/ { print $4\" \"$5\" \"$6}'");
}
