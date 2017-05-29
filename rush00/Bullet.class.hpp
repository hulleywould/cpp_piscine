/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 13:22:48 by shulley           #+#    #+#             */
/*   Updated: 2017/05/28 13:26:09 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BULLET_CLASS_HPP
# define BULLET_CLASS_HPP

#include "Entities.class.hpp"

class Bullet : public Entities {
	
	private:
		bool	hitStatus;
		//Vector	pos;
	public:
		Bullet(void);
		~Bullet(void);
		Bullet(Bullet const &copy);
		Bullet&	operator=( Bullet const & bullet);
		bool	getHitStatus(void);
		void	setHitStatus(bool);
		void	createBullet(int, int);
};

#endif
