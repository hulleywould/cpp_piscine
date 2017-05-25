/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 13:37:36 by shulley           #+#    #+#             */
/*   Updated: 2017/05/25 15:03:32 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	fixedPoint = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	fixedPoint = num << numOfFractionalBits;
}

Fixed::Fixed(const float fp)
{
	std::cout << "Float construction called" << std::endl;
	fixedPoint = roundf(fp * (1 << numOfFractionalBits));
}

Fixed::Fixed(const Fixed &copy)
{
	fixedPoint = copy.fixedPoint;
	std::cout << "Copy constructor called" << std::endl;
}

int		Fixed::toInt(void) const
{
	return fixedPoint >> numOfFractionalBits;
}

float	Fixed::toFloat(void) const
{
	return (((float) fixedPoint) / (1 << numOfFractionalBits));
}

int Fixed::getRawBits() const
{
	return fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
	fixedPoint = raw;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	fixedPoint = rhs.getRawBits();
	std::cout << "Assignment operator called" << std::endl;
	return *this;
}

std::ostream  &operator<<(std::ostream  &os, const Fixed &rhs)
{
	os << rhs.toFloat();
	return os;
}
