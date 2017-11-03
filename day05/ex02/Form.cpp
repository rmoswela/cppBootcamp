/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 18:25:28 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/30 18:25:32 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Form.hpp"

/* GradeTooHighException */

Form::GradeTooHighException::GradeTooHighException(void)
{
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const & obj)
{
	*this = obj;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw()
{

}

Form::GradeTooHighException & Form::GradeTooHighException::operator=(GradeTooHighException const & rhs)
{
	(void)rhs;
	return *this;
}

const char * Form::GradeTooHighException::what() const throw()
{
	return "GradeTooHighException: You can't increment any further";
}


/* GradeTooLowException */

Form::GradeTooLowException::GradeTooLowException(void)
{
}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const & obj)
{
	*this = obj;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw()
{

}

Form::GradeTooLowException & Form::GradeTooLowException::operator=(GradeTooLowException const & rhs)
{
	(void)rhs;
	return *this;
}

const char * Form::GradeTooLowException::what() const throw()
{
	return "GradeTooLowException: You can't decrement any further";
}

/* FormNotSignedException */

Form::FormNotSignedException::FormNotSignedException(void)
{
}

Form::FormNotSignedException::FormNotSignedException(FormNotSignedException const & obj)
{
	*this = obj;
}

Form::FormNotSignedException::~FormNotSignedException(void) throw()
{

}

Form::FormNotSignedException & Form::FormNotSignedException::operator=(FormNotSignedException const & rhs)
{
	(void)rhs;
	return *this;
}

const char * Form::FormNotSignedException::what() const throw()
{
	return "GradeTooLowException: Can't execute unsigned Form";
}

/* Form */

Form::Form(void) : _name("Default"), _gradeToSign(1), _gradeToExecute(1), _isSigned(false)
{
	return;
}

Form::Form(std::string name, int grSign, int grExecute, std::string target) :
			_name(name), _gradeToSign(grSign), _gradeToExecute(grExecute), _isSigned(false), _target(target)
{
	if (grSign > 150 || grExecute > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else if (grSign < 1 || grExecute < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	return;
}

Form::Form(Form const & obj) : _name(obj._name), _gradeToSign(obj._gradeToSign), _gradeToExecute(obj._gradeToExecute)
{
	*this = obj;
	return;
}

Form::~Form(void)
{
	return;
}

Form & Form::operator=(Form const & rhs)
{
	_isSigned = rhs._isSigned;
	return *this;
}

void Form::beSigned(Bureaucrat & bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeToSign)
	{
		throw Form::GradeTooLowException();
	}
	else
		_isSigned = true;
}

void Form::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false)
		throw Form::FormNotSignedException();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
}


std::ostream & operator<<(std::ostream & o, Form & rhs)
{
	o << "Form: " << rhs.getName() << std::endl
	  << "Required Grade to Sign: "<< rhs.getGradeToSign() << std::endl
	  << "Required Grade to Execute: " << rhs.getGradeToExecute() << std::endl
	  << "Is signed: " << rhs.getIsSigned() << std::endl;

	return o;
}

/* Getters */

std::string Form::getName() const
{
	return _name;
}

int Form::getGradeToExecute() const
{
	return _gradeToExecute;
}

int Form::getGradeToSign() const
{
	return _gradeToSign;
}

bool Form::getIsSigned() const
{
	return _isSigned;
}

std::string Form::getTarget() const
{
	return _target;
}
