/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 13:22:53 by shulley           #+#    #+#             */
/*   Updated: 2017/05/24 13:31:49 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string type)
{
	bozo.setType(type);
}
Zombie *ZombieEvent::newZombie(std::string name)
{
	Zombie *zom = new Zombie;
	zom->setName(name);
	zom->setType(bozo.getType());
	return zom;
}

void ZombieEvent::randomChump()
{
	std::string randomNames[7] = {"zomo", "bumpy", "hector", "keyoung",
		"sherwin", "keegz", "speedy"};
	Zombie newZom;
	srand(time(0));
	newZom.setName(randomNames[rand() % 5]);
	newZom.setType("eater");
	newZom.announce();
}


