/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 09:10:24 by shulley           #+#    #+#             */
/*   Updated: 2017/05/24 10:57:11 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>

class Brain {
	private:
		std::string 	iq;
		std::string 	matter;
		std::stringstream identity;
	public:
		Brain()
		{
			this->identity << std::hex << this;
		}
		std::string identify() const
		{
			return this->identity.str();
		}
};
