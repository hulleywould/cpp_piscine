/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BulletEvent.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 13:22:38 by shulley           #+#    #+#             */
/*   Updated: 2017/05/28 15:22:55 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BulletEvent.class.hpp"

BulletEvent::BulletEvent(void) {
	setNumBullet(0);
}

BulletEvent::BulletEvent(int numBullets)
{
	setNumBullet(numBullets);
}

BulletEvent::~BulletEvent(void) {}

BulletEvent::BulletEvent(BulletEvent const &copy)
{
	*this = copy;
}

BulletEvent&		BulletEvent::operator=( BulletEvent const & bullet) {
    if (this != &bullet) {
        *this = bullet;
    }
    return *this;
};

void	BulletEvent::updateBullets(void)
{
	int	i = 0;
	while (i < numOfBullets)
	{
		bullet[i].moveRight();
		i++;
	}
}

void	BulletEvent::setX(int x)
{
	pos.x = x;
}

void	BulletEvent::setY(int y)
{
	pos.y = y;
}

int		BulletEvent::getX(void)
{
	return pos.x;
}

int		BulletEvent::getY(void)
{
	return pos.y;
}

void	BulletEvent::createBullets(int x, int y)
{
	bullet[getNumBullet()].setX(x);
	bullet[getNumBullet()].setY(y);
	numOfBullets++;
}

Bullet	*BulletEvent::getBullet(void)
{
	return bullet;
}

void	BulletEvent::setNumBullet(int num)
{
	numOfBullets = num;
}

int		BulletEvent::getNumBullet(void)
{
	return numOfBullets;
}
