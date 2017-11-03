/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 01:12:06 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/30 17:45:46 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"
class Form;

class Bureaucrat
{
	private:
		std::string const		_name;
		int						_grade;

	public:
		struct	GradeTooHighException : public std::exception
	{
		virtual const char *gradeHigh() const throw();
	};
		struct	GradeTooLowException : public std::exception
	{
		virtual const char *gradeLow() const throw();
	};
		Bureaucrat();
		Bureaucrat(int grade);
		Bureaucrat(Bureaucrat const & target);
		Bureaucrat & 			operator=(Bureaucrat const & target);
		virtual ~Bureaucrat();

		/*void					setName(std::string name);
		void					setGrade(int grade);*/

		std::string				getName(void) const;
		int						getGrade(void) const;

		void					incrementGrade(void);
		void					decrementGrade(void);

		void					signForm(Form *form);
};
std::ostream & 			operator<<(std::ostream & os, Bureaucrat const & target);


#endif
