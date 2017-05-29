/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EnemyEvent.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/28 13:22:38 by shulley           #+#    #+#             */
/*   Updated: 2017/05/28 15:22:55 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EnemyEvent.class.hpp"

EnemyEvent::EnemyEvent(void) {
	setNumEnemy(0);
	seed = 0;
}

EnemyEvent::EnemyEvent(int numEnemies)
{
	setNumEnemy(numEnemies);
}

EnemyEvent::~EnemyEvent(void) {}

EnemyEvent::EnemyEvent(EnemyEvent const &copy)
{
	*this = copy;
}

EnemyEvent&		EnemyEvent::operator=( EnemyEvent const & enemy) {
    if (this != &enemy) {
        *this = enemy;
    }
    return *this;
};

void	EnemyEvent::updateEnemies(void)
{
	int	i = 0;
	while (i < numOfEnemies)
	{
		enemies[i].moveLeft();
		i++;
	}
}

void	EnemyEvent::setX(int x)
{
	pos.x = x;
}

void	EnemyEvent::setY(int y)
{
	pos.y = y;
}

int		EnemyEvent::getX(void)
{
	return pos.x;
}

int		EnemyEvent::getY(void)
{
	return pos.y;
}

void	EnemyEvent::createEnemies()
{
	seed += (unsigned)time(0);
	srand(seed);
	seed++;
	enemies[numOfEnemies].setX(260);
	enemies[numOfEnemies].setY(rand() % 62);
	numOfEnemies++;
}

Enemy	*EnemyEvent::getEnemy(void)
{
	return enemies;
}

void	EnemyEvent::setNumEnemy(int num)
{
	numOfEnemies = num;
}

int		EnemyEvent::getNumEnemy(void)
{
	return numOfEnemies;
}
