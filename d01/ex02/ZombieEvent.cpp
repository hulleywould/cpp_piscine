/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 13:22:53 by shulley           #+#    #+#             */
/*   Updated: 2017/05/23 15:25:52 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctime>
#include "Zombie.hpp"

class ZombieEvent {
	public:
		Zombie bozo;
		void setZombieType(std::string type)
		{
			bozo.type = type;
		}
		Zombie *newZombie(std::string name)
		{
			Zombie *zom = new Zombie;
			zom->name = name;
			zom->type = bozo.type;
			delete zom;
			return zom;
		}

		void randomChump()
		{
			std::string randomNames[7] = {"zomo", "bumpy", "hector", "keyoung",
				"sherwin", "keegz", "speedy"};
			Zombie newZom;
			srand(time(0));
			newZom.name = randomNames[rand() % 5];
			newZom.type = "eater";
			newZom.announce();
		}
};

