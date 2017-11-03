/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 18:25:46 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/30 18:25:57 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_HPP
#define _FORM_HPP

#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
	class GradeTooHighException : public std::exception
	{
		public:
			GradeTooHighException(void);
			GradeTooHighException(GradeTooHighException const & obj);
			virtual ~GradeTooHighException(void) throw();

			GradeTooHighException & operator=(GradeTooHighException const & rhs);

			virtual const char * what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			GradeTooLowException(void);
			GradeTooLowException(GradeTooLowException const & obj);
			virtual ~GradeTooLowException(void) throw();

			GradeTooLowException & operator=(GradeTooLowException const & rhs);

			virtual const char * what() const throw();
	};

	class FormNotSignedException : public std::exception
	{
		private:
		public:
			FormNotSignedException(void);
			FormNotSignedException(FormNotSignedException const & obj);
			virtual ~FormNotSignedException(void) throw();

			FormNotSignedException & operator=(FormNotSignedException const & rhs);

			virtual const char * what() const throw();
	};

	Form(std::string name, int grSign, int grExecute, std::string target);
	Form(Form const & obj);
	~Form(void);

	Form & operator=(Form const & rhs);

	void beSigned(Bureaucrat & bureaucrat);
	virtual void execute(Bureaucrat const & executor) const = 0;

	/* Getters */
	std::string getName() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;
	bool getIsSigned() const;
	std::string getTarget() const;

	private:
		const std::string _name;
		const int _gradeToSign;
		const int _gradeToExecute;
		bool _isSigned;
		std::string _target;

		Form(void);
};

std::ostream & operator<<(std::ostream & o, Form & rhs);

#endif
