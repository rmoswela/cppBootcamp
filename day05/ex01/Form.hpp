/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 04:43:04 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/30 17:38:07 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;
class Form
{
	private:
		std::string const		_name;
		bool					_signed;
		int const				_grade;

	public:
		struct GradeTooHighException : public std::exception
	{
		/*GradeTooHighException();
		GradeTooHighException(GradeTooHighException const & target);
		GradeTooHighException	&			operator=(GradeTooHighException const & target);
		virtual ~GradeTooHighException() throw();*/
		virtual const char *gradeHigh() const throw();
	};
		struct GradeTooLowException : public std::exception
	{
		virtual const char *gradeLow() const throw();
	};
							Form();
							Form(Form const & target);
		Form	&			operator=(Form const & target);
		virtual				~Form();

		std::string const	getName(void) const;
		bool				getSignature(void) const;
		int 				getGrade(void) const;

		void				beSigned(Bureaucrat *bu);
};
std::ostream	&		operator<<(std::ostream & os, Form const & target);


#endif
