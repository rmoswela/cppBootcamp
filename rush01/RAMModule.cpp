/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RAMModule.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 03:49:17 by rmoswela          #+#    #+#             */
/*   Updated: 2017/06/04 12:35:40 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RAMModule.hpp"

RAMModule::RAMModule()
{
	this->display();
}

RAMModule::RAMModule(RAMModule const & target)
{
	*this = target;
	return;
}

RAMModule	&	RAMModule::operator=(RAMModule const & target)
{
	if (this != &target)
		*this = target;
	return *this;
}

RAMModule::~RAMModule(void)
{
}

std::ostream	&	operator<<(std::ostream & os, RAMModule const & target)
{
	os << "Available RAM: " << target.getAvailMem();
	os << "RAM Reserved For OS: " << target.getMemForOS();
	os << "Private Memory: " <<target.getPrivateMem();
	os << "Shared Memory: " << target.getSharedMem();
	os << "Total Memory: " << target.getTotalMem();
	os << "Unused Memory: " << target.getUnusedMem();
	return os;
}

std::string			RAMModule::getAvailMem(void) const
{
	return this->_availMem;
}

std::string					RAMModule::getMemForOS(void) const
{
	return this->_memForOS;
}

std::string					RAMModule::getPrivateMem(void) const
{
	return this->_privateMem;
}

std::string			RAMModule::getSharedMem(void) const
{
	return this->_sharedMem;
}

std::string 		RAMModule::getTotalMem(void) const
{
	return this->_totalMem;
}

std::string			RAMModule::getUnusedMem(void) const
{
	return this->_unusedMem;
}

std::string				RAMModule::commandExec(const char * cmd)
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

void				RAMModule::display(void)
{
	this->_availMem = commandExec("top | head -6 | tail -1 | awk '{ print $2}'");
	this->_memForOS = commandExec("top | head -6 | tail -1 | awk '{ print $4}'");
	this->_privateMem = commandExec("top | head -6 | tail -1 | awk '{ print $6}'");
	this->_sharedMem = commandExec("top | head -6 | tail -1 | awk '{ print $8}'");
	this->_totalMem = commandExec("top | head -7 | tail -1 | awk '{ print $2}'");
	this->_unusedMem = commandExec("top | head -7 | tail -1 | awk '{ print $6}'");
}
