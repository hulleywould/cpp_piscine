/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 13:35:24 by shulley           #+#    #+#             */
/*   Updated: 2017/05/24 13:25:42 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "Zombie.hpp"

class ZombieEvent {
	private:
		Zombie bozo;
	public:
		void setZombieType(std::string type);
		Zombie *newZombie(std::string name);
		void randomChump();
};

#endif
