/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Missile.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 03:42:39 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/28 06:09:07 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MISSILE_H
# define MISSILE_H

#include "AllHeaders.hpp"

class Missile: public GameEntity
{
	public:
					Missile();
		Missile &	operator=(Missile const & target);
					Missile(Missile const & target);
					~Missile();

		//Missile	&	playerShoot(Player const & target);
		void		playerShoot(int xpos, int ypos);
		void		setXMissile(int x);
		void		setYMissile(int y);

		int			getXMissile(void) const;
		int 		getYMissile(void) const;		
};


#endif
