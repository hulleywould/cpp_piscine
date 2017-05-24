/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 16:05:34 by shulley           #+#    #+#             */
/*   Updated: 2017/05/24 13:44:29 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
{	
	std::string names[10] = {"fam", "dam", "van", "blam", 
	"mam", "ham", "sam", "clam", "scam", "tam"};
	random = new Zombie[n];
	while (n > 0)
	{
		random[n].setName(names[rand() % 10]);
		random[n].setType("brainer");
		random[n].announce();
	   	n--;
	}
}
ZombieHorde::~ZombieHorde()
{
	delete [] random;
}
