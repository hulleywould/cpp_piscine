/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 15:37:32 by shulley           #+#    #+#             */
/*   Updated: 2017/05/28 15:39:28 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.class.hpp"

Enemy::Enemy(void){
	
}

Enemy::~Enemy(void){}

Enemy::Enemy(Enemy const &copy)
{
	*this = copy;
}

Enemy&		Enemy::operator=( Enemy const & enemy) {
    if (this != &enemy) {
        *this = enemy;
    }
    return *this;
};

bool	Enemy::getHitStatus(void)
{
	return hitStatus;
}

void	Enemy::setHitStatus(bool isHit)
{
	hitStatus = isHit;
}

void	Enemy::createEnemy(int x, int y)
{
	setX(x);
	setY(y);
}
