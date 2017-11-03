/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 01:36:28 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/30 17:55:33 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade) : _name("Reuben"), _grade(grade)
{
	Bureaucrat::GradeTooHighException h;
	Bureaucrat::GradeTooLowException l;
	try
	{
		if (this->_grade > 150)
			throw l;
		else if (this->_grade < 1)
			throw h;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.gradeLow() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.gradeHigh() << std::endl;
	}
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & target)
{
	if (this != &target)
		*this = target;
	return *this;
}

Bureaucrat::Bureaucrat(Bureaucrat const & target)
{
	*this = target;
	return;
}

const char *Bureaucrat::GradeTooHighException::gradeHigh() const throw()
{
	return "Grade too High Exception";
}

const char *Bureaucrat::GradeTooLowException::gradeLow() const throw()
{
	return "Grade too Low Exception";
}

std::string			Bureaucrat::getName(void) const
{
	return this->_name;
}

int					Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void				Bureaucrat::incrementGrade()
{
	Bureaucrat::GradeTooHighException h;
	try
	{
		if (this->getGrade() < 1)
			throw h;
		else
			this->_grade--;
	}
	catch(Bureaucrat::GradeTooHighException & e)
	{
		std::cout << e.gradeHigh() << std::endl;
	}
}

void				Bureaucrat::decrementGrade()
{
	Bureaucrat::GradeTooLowException l;
	try
	{
		if(this->getGrade() > 150)
			throw l;
		else
			this->_grade++;
	}
	catch(Bureaucrat::GradeTooLowException & e)
	{
		std::cout << e.gradeLow() << std::endl;
	}
}

std::ostream & 		operator<<(std::ostream & os, Bureaucrat const & target)
{
	os << target.getName() << " bureaucrat grade " << target.getGrade() << std::endl;
	return os;
}
