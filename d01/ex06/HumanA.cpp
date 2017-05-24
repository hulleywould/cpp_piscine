/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 14:42:02 by shulley           #+#    #+#             */
/*   Updated: 2017/05/24 16:18:31 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::setName(std::string n)
{
	this->name = n;
}
void HumanA::setWeapon(Weapon &w)
{
	this->weapon = &w;
}

Weapon *HumanA::getWeapon()
{
	return this->weapon;
}

std::string HumanA::getName()
{
	return this->name;
}

void	HumanA::attack()
{
	std::cout << this->getName() << " attacks with his " 
		<< this->weapon->getType() << std::endl;
}

HumanA::HumanA(std::string n, Weapon &w) : weapon(&w), name(n) {}

/*#include "HumanA.hpp"

void HumanA::setName(std::string n)
{
	this->name = n;
}

std::string HumanA::getName()
{
	return this->name;
}

void	HumanA::attack()
{
	std::cout << this->getName() << " attacks with his " 
		<< this->weapon.getType() << std::endl;
}

HumanA::HumanA(std::string n, Weapon& w) : weapon(w), name(n) {}*/
