/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 13:15:03 by shulley           #+#    #+#             */
/*   Updated: 2017/05/23 14:10:53 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie {
	public:
		std::string	type;
		std::string	name;
		void announce()
		{
			std::cout << "<" << this->name << "("
				<< this->type << ")> Braiiiinnnnsss..." << std::endl;
		}
};
