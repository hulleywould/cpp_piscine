/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 13:37:14 by shulley           #+#    #+#             */
/*   Updated: 2017/05/24 13:27:04 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int	main()
{
	ZombieEvent *dax = new ZombieEvent;
	Zombie *new_zom = dax->newZombie("dax");
	new_zom->setType("creat");
	new_zom->announce();
	delete dax;
	
	ZombieEvent rand2;
	rand2.randomChump();

	Zombie *kling = new Zombie;
	kling->setName("kling");
	kling->setType("brainer");
	kling->announce();

	Zombie mak;
	mak.setName("tak");
	mak.setType("makaka");
	mak.announce();

	ZombieEvent *rand1 = new ZombieEvent;
	rand1->randomChump();
	delete rand1;

	return (0);
}
