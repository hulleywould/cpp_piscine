#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB {
	private:
		Weapon *weapon;
		std::string	name;
	public:
		HumanB(std::string n);
		void	attack();
		void 	setWeapon(Weapon &weapon);
		void 	setName(std::string n);

		Weapon* getWeapon();
		std::string getName();
};
#endif
