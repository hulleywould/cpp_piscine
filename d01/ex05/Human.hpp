/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 09:10:33 by shulley           #+#    #+#             */
/*   Updated: 2017/05/24 14:07:19 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"
#include <iostream>
#include <sstream>
#include <string>

class Human {
	public:
		Human();
		const Brain& getBrain() const;
		std::string identify() const;
	private:
		const Brain mybrain;
};
#endif
