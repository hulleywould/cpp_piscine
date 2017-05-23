/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 16:05:34 by shulley           #+#    #+#             */
/*   Updated: 2017/05/23 16:41:04 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieHorde {
	public:
		Zombie *random;
		ZombieHorde(int n)
		{	
			std::string names[10] = {"fam", "dam", "van", "blam", 
			"mam", "ham", "sam", "clam", "scam", "tam"};
			random = new Zombie[n];
			while (n > 0)
			{
				random[n].name = names[rand() % 10];
				random[n].type = "brainer";
				random[n].announce();
			   	n--;
			}
		}
		~ZombieHorde()
		{
			delete [] random;
		}
};
