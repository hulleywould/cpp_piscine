/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 13:37:36 by shulley           #+#    #+#             */
/*   Updated: 2017/05/25 16:35:48 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	fixedPoint = 0;
}

Fixed::Fixed(const int num)
{
	fixedPoint = num << numOfFractionalBits;
}

Fixed::Fixed(const float fp)
{
	fixedPoint = roundf(fp * (1 << numOfFractionalBits));
}

Fixed::Fixed(const Fixed &copy)
{
	fixedPoint = copy.fixedPoint;
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
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	fixedPoint = rhs.getRawBits();
	return *this;
}

std::ostream  &operator<<(std::ostream  &os, const Fixed &rhs)
{
	os << rhs.toFloat();
	return os;
}

bool			Fixed::operator>(const Fixed &rhs)
{
	return (fixedPoint > rhs.fixedPoint ? true : false);
}

bool			Fixed::operator<(const Fixed &rhs)
{
	return (fixedPoint < rhs.fixedPoint ? true : false);
}

bool			Fixed::operator>=(const Fixed &rhs)
{
	return (fixedPoint >= rhs.fixedPoint ? true : false);
}

bool			Fixed::operator<=(const Fixed &rhs)
{
	return (fixedPoint <= rhs.fixedPoint ? true : false);
}

bool			Fixed::operator==(const Fixed &rhs)
{
	return (fixedPoint == rhs.fixedPoint ? true : false);
}

bool			Fixed::operator!=(const Fixed &rhs)
{
	return (fixedPoint != rhs.fixedPoint ? true : false);
}

Fixed			&Fixed::operator+(const Fixed &rhs)
{
	return *new Fixed(toFloat() + rhs.toFloat());
}

Fixed			&Fixed::operator-(const Fixed &rhs)
{
	return *new Fixed(toFloat() - rhs.toFloat());
}

Fixed			&Fixed::operator*(const Fixed &rhs)
{
	return *new Fixed(toFloat() * rhs.toFloat());
}

Fixed			&Fixed::operator/(const Fixed &rhs)
{
	return *new Fixed(toFloat() / rhs.toFloat());
}

Fixed			&Fixed::operator++(void)
{
	fixedPoint++;
	return *this;
}

Fixed			Fixed::operator++(int)
{
	Fixed copy = *this;
	fixedPoint++;
	return Fixed(copy.toFloat());
}

Fixed			&Fixed::operator--(void)
{
	fixedPoint--;
	return *this;
}

Fixed			Fixed::operator--(int)
{
	
	Fixed copy = *this;
	fixedPoint--;
	return Fixed(copy.toFloat());
}

Fixed	Fixed::max(Fixed a, Fixed b)
{
	if (a.fixedPoint > b.fixedPoint)
		return a.toFloat();
	else
		return b.toFloat();
}

Fixed Fixed::min(Fixed a, Fixed b)
{
	if (a.fixedPoint > b.fixedPoint)
		return b.toFloat();
	else
		return a.toFloat();
}
