/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 13:22:48 by shulley           #+#    #+#             */
/*   Updated: 2017/05/28 13:26:09 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ENEMY_CLASS_HPP
# define ENEMY_CLASS_HPP

#include "Entities.class.hpp"

class Enemy : public Entities {

	private:
		bool	hitStatus;
		//Vector	pos;
	public:
		Enemy(void);
		~Enemy(void);
		Enemy(Enemy const &copy);
		Enemy&		operator=( Enemy const & enemy);
		bool	getHitStatus(void);
		void	setHitStatus(bool);
		void	createEnemy(int, int);
};

#endif
