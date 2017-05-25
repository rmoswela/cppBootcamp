/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 01:51:58 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/25 15:53:20 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(int const i);
		Fixed(float const f);
		Fixed(Fixed const &obj); //copy constructor
		Fixed &				operator=(Fixed const &op); //assignment operator
		int 				getRawBits(void) const;
		void 				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;

	private:
		int					_fixedPointValue;
		static const int	_numOfFractionalBits;
};

std::ostream & operator<<(std::ostream & o, Fixed const &obj);
#endif
