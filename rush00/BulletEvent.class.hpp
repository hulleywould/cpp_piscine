/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BulletEvent.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 13:22:53 by shulley           #+#    #+#             */
/*   Updated: 2017/05/28 14:07:45 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BULLETEVENT_CLASS_HPP
# define BULLETEVENT_CLASS_HPP

#include "Bullet.class.hpp"

class BulletEvent {
	private:
		Bullet	bullet[1024];
		Vector	pos;
		int		numOfBullets;
	
	public:
		BulletEvent(void);
		~BulletEvent(void);
		BulletEvent(int);
		BulletEvent(BulletEvent const &copy);
		BulletEvent&	operator=( BulletEvent const & bullet);
		void	setX(int);
		void	setY(int);
		int		getX(void);
		int		getY(void);
		void	updateBullets(void);
		void	setNumBullet(int);
		int		getNumBullet(void);
		Bullet	*getBullet(void);
		void	createBullets(int, int);
};

#endif
