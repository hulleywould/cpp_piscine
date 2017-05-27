/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Spaceship.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/27 11:17:30 by shulley           #+#    #+#             */
/*   Updated: 2017/05/27 16:34:50 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Spaceship.class.hpp"

Spaceship::Spaceship() :player()
{
	player->setAvatar('>');
	player->_isAlive = true;
}

Spaceship::~Spaceship()
{
	std::cout << "spaceship destroyed" << std::endl;
}

Spaceship::Spaceship(Spaceship const &copy)
{
	player = copy.player;
	std::cout << "spaceship copy constuctor called" << std::endl;
}

