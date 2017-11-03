/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CPUModule.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 03:49:17 by rmoswela          #+#    #+#             */
/*   Updated: 2017/06/04 12:35:17 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CPUModule.hpp"

CPUModule::CPUModule()
{
	this->display();
}

CPUModule::CPUModule(CPUModule const & target)
{
	*this = target;
	return;
}

CPUModule	&	CPUModule::operator=(CPUModule const & target)
{
	if (this != &target)
		*this = target;
	return *this;
}

CPUModule::~CPUModule(void)
{
}

std::ostream	&	operator<<(std::ostream & os, CPUModule const & target)
{
	os << "User Activity: " << target.getUserActivity();
	os << "System Activity: " << target.getSysActivity();
	os << "Idle: " <<target.getIdle();
	os << "CPU cores: " << target.getNumOfCores();
	os << "Clock speed: " << target.getClockSpeed();
	os << "Model: " << target.getModel();
	return os;
}

std::string			CPUModule::getModel(void) const
{
	return this->_model;
}

std::string					CPUModule::getClockSpeed(void) const
{
	return this->_clockSpeed;
}

std::string					CPUModule::getNumOfCores(void) const
{
	return this->_numOfCores;
}

std::string			CPUModule::getUserActivity(void) const
{
	return this->_userActivity;
}

std::string 		CPUModule::getSysActivity(void) const
{
	return this->_sysActivity;
}

std::string			CPUModule::getIdle(void) const
{
	return this->_idle;
}

std::string				CPUModule::commandExec(const char * cmd)
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

void				CPUModule::display(void)
{
	this->_userActivity = commandExec("top | head -4 | tail -1 | awk '{ print $3 }'");
	this->_sysActivity = commandExec("top | head -4 | tail -1 | awk '{print $5}'");
	this->_idle = commandExec("top | head -4 | tail -1 | awk '{print $7}'");
	this->_numOfCores = commandExec("sysctl -n hw.ncpu");
	this->_clockSpeed = commandExec("sysctl -n hw.cpufrequency");
	this->_model = commandExec("system_profiler SPHardwareDataType Hardware | awk '/Processor Name/ {print $3\" \" $4\" \"$5}'");
}
