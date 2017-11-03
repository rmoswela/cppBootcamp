/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoswela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 20:45:13 by rmoswela          #+#    #+#             */
/*   Updated: 2017/05/28 05:28:30 by rmoswela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_CLASS_H
# define ENEMY_CLASS_H

#include "GameEntity.hpp"
#include "Player.hpp"
#include "Missile.hpp"
#include <ncurses.h>
#include <iostream>

class Enemy : public GameEntity
{
	private:
		int			_speed;
		//int			_yPos;
	
	public:
					Enemy();
					Enemy(int xPos, int yPost);
		Enemy &		operator=(Enemy const & target);
					Enemy(Enemy const & target);
					~Enemy();

		void		shoot();
		void		collision(Player *p, Missile *m);
		int			move();

};

#endif
