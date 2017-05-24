/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 09:10:24 by shulley           #+#    #+#             */
/*   Updated: 2017/05/24 13:58:06 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	this->identity << std::hex << this;
}

std::string Brain::identify() const
{
	return this->identity.str();
}

void	Brain::setIq(std::string iq_level)
{
	this->iq = iq_level;
}

void	Brain::setMatter(std::string m)
{
	this->matter = m;
}

std::string	Brain::getIq()
{
	return this->iq;
}

std::string Brain::getMatter()
{
	return this->matter;
}

