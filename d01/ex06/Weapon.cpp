/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 14:32:36 by shulley           #+#    #+#             */
/*   Updated: 2017/05/24 15:21:44 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string t)
{
	this->type =t;
}

void	Weapon::setType(std::string t)
{
	this->type = t;
}

const std::string& Weapon::getType()
{
	return this->type;
}
