/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 13:22:43 by shulley           #+#    #+#             */
/*   Updated: 2017/05/28 13:39:23 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bullet.class.hpp"

Bullet::Bullet(void){
	setAvatar("-");
}

Bullet::~Bullet(void){}

Bullet::Bullet(Bullet const &copy)
{
	*this = copy;
}

Bullet&		Bullet::operator=( Bullet const & bullet) {
    if (this != &bullet) {
        *this = bullet;
    }
    return *this;
};

bool	Bullet::getHitStatus(void)
{
	return hitStatus;
}

void	Bullet::setHitStatus(bool isHit)
{
	hitStatus = isHit;
}

void	Bullet::createBullet(int x, int y)
{
	setX(x);
	setY(y);
}


