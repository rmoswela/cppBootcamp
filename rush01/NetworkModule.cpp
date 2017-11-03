/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NetworkModule.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkrusche <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/04 02:55:15 by dkrusche          #+#    #+#             */
/*   Updated: 2017/06/04 15:27:50 by dkrusche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NetworkModule.hpp"

NetworkModule::NetworkModule()
{
	this->display();
}

NetworkModule::NetworkModule(NetworkModule const & src)
{
	*this = src;
	return;
}

NetworkModule::~NetworkModule()
{

}

NetworkModule & NetworkModule::operator=(NetworkModule const & rhs)
{
	if (this != & rhs)
		*this = rhs;
	return *this;
}

std::string		NetworkModule::getPktsIn(void) const
{
	return this->_pktsIn;
}

std::string		NetworkModule::getBytesIn(void) const
{
	return this->_bytesIn;
}

std::string		NetworkModule::getPktsOut(void) const
{
	return this->_pktsOut;
}

std::string		NetworkModule::getBytesOut(void) const
{
	return this->_bytesOut;
}

std::string		NetworkModule::commandExec(const char * cmd)
{
	char buffer[128];
	std::string result = "";
	FILE* pipe = popen(cmd, "r");
	if (!pipe) throw std::runtime_error("popen() failed!");
	try
	{
		while (!feof(pipe))
		{
			if (fgets(buffer, 128, pipe) != NULL)
				result += buffer;
		}
	}
	catch (...)
	{
		pclose(pipe);
		throw;
	}
	pclose(pipe);
	return result;
}

void			NetworkModule::display(void)
{
	this->_pktsIn = commandExec("top | head | tail -2 | head -1 | awk '{print $3}'");
	this->_bytesIn = commandExec("netstat -I en0 -b | head -2 | tail -1 | awk '{print $7}'");
	this->_pktsOut = commandExec("top | head | tail -2 | head -1 | awk '{print $5}'");
	this->_bytesOut = commandExec("netstat -I en0 -b | head -2 | tail -1 | awk '{print $10}'");
}

std::ostream & operator<<(std::ostream & os, NetworkModule const & rhs)
{
	os << "Packets In: " << rhs.getPktsIn();
	os << "Bytes In: " << rhs.getBytesIn();
	os << "Packets Out: " << rhs.getPktsOut();
	os << "Bytes Out: " << rhs.getBytesOut();
	return os;
}
