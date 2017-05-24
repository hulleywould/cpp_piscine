/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 11:02:44 by shulley           #+#    #+#             */
/*   Updated: 2017/05/24 13:10:22 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony()
{
	std::cout << "Pony created" << std::endl;
}

Pony::~Pony()
{
	std::cout << "Pony deleted" << std::endl;
}
void	Pony::greet()
{
	std::cout << "Hi, i'm " << this->name << "!" << std::endl;  
}

void	Pony::setSpeed(int s)
{
	this->speed = s; 
}

void	Pony::setColor(std::string c)
{
	this->color = c;
}

void	Pony::setName(std::string n)
{
	this->name = n;
}

int		Pony::getSpeed()
{
	return this->speed;
}

std::string	Pony::getColor()
{
	return this->color;
}

std::string Pony::getName()
{
	return this->name;
}
