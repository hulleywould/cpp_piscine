/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 13:15:03 by shulley           #+#    #+#             */
/*   Updated: 2017/05/24 13:18:33 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << "<" << this->getName() << "("
		<< this->getType() << ")> Braiiiinnnnsss..." << std::endl;
}

void	Zombie::setName(std::string n)
{
	this->name = n;
}

void	Zombie::setType(std::string t)
{
	this->type = t;
}

std::string	Zombie::getName()
{
	return this->name;
}

std::string Zombie::getType()
{
	return this->type;
}
