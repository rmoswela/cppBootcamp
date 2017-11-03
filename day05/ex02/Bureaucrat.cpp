/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 18:27:14 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/30 18:27:17 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* GradeTooHighException */

Bureaucrat::GradeTooHighException::GradeTooHighException(void)
{
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const & obj)
{
	*this = obj;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{

}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const & rhs)
{
	(void)rhs;
	return *this;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return "GradeTooHighException: You can't increment any further";
}


/* GradeTooLowException */

Bureaucrat::GradeTooLowException::GradeTooLowException(void)
{
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const & obj)
{
	*this = obj;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{

}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const & rhs)
{
	(void)rhs;
	return *this;
}

/* Bureaucrat */

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return "GradeTooLowException: You can't decrement any further";
}


Bureaucrat::Bureaucrat(void)
{
	return;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else
		_grade = grade;
	return;
}

Bureaucrat::Bureaucrat(Bureaucrat const & obj)
{
	*this = obj;
	return;
}

Bureaucrat::~Bureaucrat(void)
{
	return;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	_grade = rhs._grade;
	return *this;
}

void Bureaucrat::incGrade(void)
{
	if ((_grade - 1) < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else
		_grade--;
}

void Bureaucrat::decGrade(void)
{
	if ((_grade + 1) > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
	else
		_grade++;
}

void Bureaucrat::signForm(Form & form)
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signs " << form.getName() <<  std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << _name << " cannot sign " << form.getName()
				  << " because of ("
				  << e.what() << ")"  << std::endl;
	}
}

void Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << _name << " executes " << form.getName() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "<" << _name << "> cannot execute <" << form.getName()
				  << " because of ("
				  << e.what() << ")"  << std::endl;
	}
}

/* Getters */

int Bureaucrat::getGrade() const
{
	return _grade;
}

std::string Bureaucrat::getName() const
{
	return _name;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat & rhs)
{
	o << rhs.getName() << ", bureaucrat grade: " << rhs.getGrade();
	return o;
}
