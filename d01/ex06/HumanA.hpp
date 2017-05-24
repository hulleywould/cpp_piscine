/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 14:36:57 by shulley           #+#    #+#             */
/*   Updated: 2017/05/24 16:17:47 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanA {
	private:
		Weapon *weapon;
		std::string	name;
	public:
		HumanA(std::string n, Weapon& w);
		void	attack();
		void 	setWeapon(Weapon &w);
		void 	setName(std::string n);

		Weapon *getWeapon();
		std::string getName();
};

#endif
