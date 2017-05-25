/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 09:17:50 by shulley           #+#    #+#             */
/*   Updated: 2017/05/25 12:46:17 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {

	private:
		int			fixedPoint;
		static const int	numOfFractionalBits = 8;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		~Fixed(void);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed	&operator=(const Fixed &rhs);
};


#endif
