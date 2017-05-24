/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 15:37:39 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/24 17:38:56 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_CLASS_H
# define HUMAN_CLASS_H

#include "Brain.hpp"

class Human
{
	const Brain brain;

	public:
		const std::string		identify() const;
		const Brain&			getBrain() const;
		Human();
		~Human();
};
#endif
