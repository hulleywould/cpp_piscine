/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 13:13:48 by shulley           #+#    #+#             */
/*   Updated: 2017/05/24 13:37:39 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	private:
		std::string	type;
		std::string	name;
	public:
		void announce();
		void setType(std::string t);
		void setName(std::string n);
		std::string getType();
		std::string getName();
};
#endif
