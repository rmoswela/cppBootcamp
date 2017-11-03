/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 01:41:03 by rmoswela          #+#    #+#             */
/*   Updated: 2017/06/02 06:39:29 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int size) : _size(size)
{
	//size zero initialized vectors
	//this->_vec (_size, 0);
	this->_count = 0;
	//this->_sp<int, _size>  temp;
}

Span::Span(Span const & target)
{
	*this = target;
	return;
}

Span	&	Span::operator=(Span const & target)
{
	if(this != &target)
		*this = target;
	return *this;
}

Span::~Span(void)
{
}

unsigned int Span::getSize(void) const
{
	return this->_size;
}
unsigned int Span::getCount(void) const
{
	return this->_count;
}

void		Span::addNumber(int num)
{
	Span::Full f;
	try
	{
	if (this->_count < this->_size)
	{
		this->_vec.push_back(num);
		std::cout << "added = " << num << std::endl;
	}
	else
		throw f;
	}
	catch(Span::Full & e)
	{
		std::cout << e.fullyStacked() << std::endl;
	}
	this->_count += 1;
}

const char *Span::Full::fullyStacked() const throw()
{
	return "Exception: container full";
}

const char *Span::NoSpan::emptySpan() const throw()
{
	return "Exception: There is no span to find";
}

int		Span::shortestSpan()
{
	int ret;
	Span::NoSpan s;
	try
	{
		if (this-> _count > 2)
		{
			std::sort(this->_vec.begin(), this->_vec.end());			
			ret = this->_vec.at(1) - this->_vec.front();
		}
		else
			throw s;
	}
	catch(Span::NoSpan & e)
	{
		std::cout << e.emptySpan() << std::endl;
	}
	return ret;
}

int		Span::longestSpan()
{
    int ret;
    Span::NoSpan s;
    try
    {
        if (this-> _count > 2)
		{
			std::sort(this->_vec.begin(), this->_vec.end());
            ret = this->_vec.back() - this->_vec.front();
		}
        else
            throw s;
    }
    catch(Span::NoSpan & e)
    {
        std::cout << e.emptySpan() << std::endl;
    }
    return ret;
}
