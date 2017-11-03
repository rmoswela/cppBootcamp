/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 18:27:28 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/30 18:27:30 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BUREAUCRAT_HPP
#define _BUREAUCRAT_HPP

#include <iostream>

#include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
	class GradeTooHighException : public std::exception
	{
		private:
		public:
			GradeTooHighException(void);
			GradeTooHighException(GradeTooHighException const & obj);
			virtual ~GradeTooHighException(void) throw();

			GradeTooHighException & operator=(GradeTooHighException const & rhs);

			virtual const char * what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		private:
		public:
			GradeTooLowException(void);
			GradeTooLowException(GradeTooLowException const & obj);
			virtual ~GradeTooLowException(void) throw();

			GradeTooLowException & operator=(GradeTooLowException const & rhs);

			virtual const char * what() const throw();
	};

	private:
		std::string const _name;
		int _grade;

		Bureaucrat(void);
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & obj);
		~Bureaucrat(void);

		Bureaucrat & operator=(Bureaucrat const & rhs);

		void incGrade();
		void decGrade();
		void signForm(Form & form);
		void executeForm(Form const & form);

		//Getters
		int getGrade() const;
		std::string getName() const;
};

std::ostream & operator<<(std::ostream & o, Bureaucrat & rhs);

#endif
