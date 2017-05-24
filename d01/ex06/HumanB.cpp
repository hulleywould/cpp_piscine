/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 15:10:31 by shulley           #+#    #+#             */
/*   Updated: 2017/05/24 16:11:39 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::setName(std::string n)
{
	this->name = n;
}
void HumanB::setWeapon(Weapon &w)
{
	this->weapon = &w;
}

Weapon *HumanB::getWeapon()
{
	return this->weapon;
}

std::string HumanB::getName()
{
	return this->name;
}

void	HumanB::attack()
{
	std::cout << this->getName() << " attacks with his " 
		<< this->weapon->getType() << std::endl;
}

HumanB::HumanB(std::string n) : weapon(), name(n) {}
