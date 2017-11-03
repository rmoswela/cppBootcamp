/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 05:26:54 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/30 17:38:30 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
class Bureaucrat;

Form::Form() : _name("Reuben"), _grade(100)
{
	this->_signed = false;
}

Form	&		Form::operator=(Form const & target)
{
	if(this != &target)
		*this = target;
	return *this;
}

Form::Form(Form const & target) : _name("Reuben"), _grade(100)
{
	*this = target;
}

Form::~Form()
{
}

const char *Form::GradeTooHighException::gradeHigh() const throw()
{
	return "Grade too High Exception";
}
const char *Form::GradeTooLowException::gradeLow() const throw()
{
	return "Grade too Low Exception";
}

std::ostream	&	operator<<(std::ostream & os, Form const & target)
{
	if (target.getSignature() == true)
		os << target.getName() << " is signed";
	else
		os << target.getName() << " is not signed";
	return os;
}

std::string const	Form::getName(void) const
{
	return this->_name;
}

bool				Form::getSignature(void) const
{
	return this->_signed;
}

int 				Form::getGrade(void) const
{
	return this->_grade;
}

void				Form::beSigned(Bureaucrat * bu)
{
	Form::GradeTooHighException h;
	Form::GradeTooLowException l;

	try
	{

		if (bu->getGrade() > 150 || bu->getGrade() > this->_grade)
		{
			throw l;
		}
		else if (bu->getGrade() < 1)
		{
			throw h;
		}
		else
		{
			this->_signed = true;
		}
	}
	catch(Form::GradeTooLowException &e)
	{
		std::cout << e.gradeLow() << std::endl;
	}
	catch(Form::GradeTooHighException & e)
	{
		std::cout << e.gradeHigh() << std::endl;
	}
}

/*Form::GradeTooHighException::GradeTooHighException()
{
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const & tar)
{
	*this = tar;
	return;
}
Form::GradeTooHighException	&	Form::GradeTooHighException::operator=(GradeTooHighException const & target)
{
	if(this != &target)
		*this = target;
	return *this;
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
}*/
