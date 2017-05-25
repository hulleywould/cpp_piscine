/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 13:28:17 by shulley           #+#    #+#             */
/*   Updated: 2017/05/25 14:20:56 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {

	private:
		int					fixedPoint;
		static const int	numOfFractionalBits = 8;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const float fp);
		Fixed(const int num);
		~Fixed(void);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float 	toFloat(void) const;
		int		toInt(void) const;
		Fixed			&operator=(const Fixed &rhs);
};

std::ostream	&operator<<(std::ostream  &os, const Fixed &rhs);
#endif
