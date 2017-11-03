/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/30 01:12:06 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/30 17:54:25 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

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
		~Bureaucrat();

		std::string				getName(void) const;
		int						getGrade(void) const;

		void					incrementGrade(void);
		void					decrementGrade(void);
};
std::ostream & 			operator<<(std::ostream & os, Bureaucrat const & target);


#endif
