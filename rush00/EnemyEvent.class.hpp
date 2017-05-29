/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EnemyEvent.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 13:22:53 by shulley           #+#    #+#             */
/*   Updated: 2017/05/28 14:07:45 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_EVENT_CLASS_HPP
# define ENEMY_EVENT_CLASS_HPP

#include "Enemy.class.hpp"

class EnemyEvent {
	private:
		Enemy	enemies[1024];
		int		seed;
		Vector	pos;
		int		numOfEnemies;
	
	public:
		EnemyEvent(void);
		~EnemyEvent(void);
		EnemyEvent(int);
		EnemyEvent(EnemyEvent const &copy);
		EnemyEvent&		operator=( EnemyEvent const & enemy);
		void	setX(int);
		void	setY(int);
		int		getX(void);
		int		getY(void);
		void	updateEnemies(void);
		void	setNumEnemy(int);
		int		getNumEnemy(void);
		Enemy	*getEnemy(void);
		void	createEnemies();
};

#endif
