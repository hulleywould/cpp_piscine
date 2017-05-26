/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 10:31:18 by shulley           #+#    #+#             */
/*   Updated: 2017/05/26 12:17:02 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Fixed::Fixed(std::string n, std::string t)
{
	std::cout << n << ", " << t << ", " << "is born !" << std::endl;
	name = n;
	title = t;
}

Fixed::~Fixed()
{
	std::cout << getName() << ", " << getTitle 
		<< ", is dead. Consequences will never be the same !" << std::endl;  
}

std::string Fixed::getName()
{
	return name;
}

std::string Fixed::getTitle()
{
	return title;
}

std::ostream &operator<<(std::ostream &os, Sorcerer const &rhs)
{
	os << "I am " << rhs.getName() << ", " << rhs.getTitle()
		<< ", and I like ponies !" << std::endl;
}
