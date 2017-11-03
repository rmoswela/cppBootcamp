/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/01 15:22:08 by rmoswela          #+#    #+#             */
/*   Updated: 2017/06/01 18:11:46 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>

class Array
{
	private:
			unsigned int			_n;
			T					*arr;
	public:
		class OutOfBounds : public std::exception
		{
			public:
				virtual const char *out() const throw();
		};
						Array(void);
						Array(unsigned int n);
		Array	&	operator=(Array const & target);
						Array(Array const & target);
						~Array(void);
		unsigned int	size(void);
		T	&			operator[](unsigned int n);
};

template <typename T>
Array<T>::Array(void)
{
	this->_n = 0;
	this->arr = new T[_n];
}

template <typename T>
Array<T>::Array(unsigned int len) : _n(len)
{
	this->arr = new T[_n];
}

template <typename T>
Array<T> & Array<T>::operator=(Array<T> const & target)
{
	if (*this != target)
		*this = target;
	return *this;
}

template <typename T>
Array<T>::Array(Array<T> const & target)
{
	*this = target;
	return;
}

template <typename T>
Array<T>::~Array()
{
	delete [] arr;
}

template <typename T>
unsigned int Array<T>::size(void)
{
	return (this->_n);
}

template <typename T>
const char * Array<T>::OutOfBounds::out() const throw()
{
	return "Index out of bounds";
}

template <typename T>
T & Array<T>::operator[](unsigned int n)
{
	if ((n < 0) || (n > this->_n - 1))
		std::cout << OutOfBounds().out() <<std::endl;
	return (this->arr)[n];
}
#endif
