/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 01:51:58 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/25 05:55:11 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed const &obj); //copy constructor
		Fixed &				operator=(Fixed const &op); //assignment operator
		int 				getRawBits(void) const;
		void 				setRawBits(int const raw);

	private:
		int					_fixedPointValue;
		static const int	_numOfFractionalBits;
};
#endif
