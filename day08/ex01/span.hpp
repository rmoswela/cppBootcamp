/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/02 01:10:01 by rmoswela          #+#    #+#             */
/*   Updated: 2017/06/02 06:39:43 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>
//template<typename T>
class Span
{
	private:
		unsigned int		_size;
							Span(void);
		std::vector<int>	_vec;
		unsigned int		_count;
		//T					*sp;

	public:
							Span(unsigned int size);
							Span(Span const & target);
		Span	&			operator=(Span const & target);
							~Span(void);
		unsigned int		getSize(void) const;
		unsigned int		getCount(void) const;
		void				addNumber(int n);
		int					shortestSpan();
		int					longestSpan();

		struct Full : public std::exception
		{
			virtual const char *fullyStacked() const throw();
		};

		struct NoSpan : public std::exception
	{
		virtual const char *emptySpan() const throw();
	};
};



#endif
