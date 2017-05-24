/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 11:17:15 by shulley           #+#    #+#             */
/*   Updated: 2017/05/24 13:09:32 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int	ponyOnTheHeap()
{
	unsigned int	address;
	Pony *speedy = new Pony();
	address = (uintptr_t)speedy;
	speedy->setName("speedy");
	speedy->greet();
	delete speedy;
	return (address); 
}

int ponyOnTheStack()
{
	Pony hector;
	hector.setName("hector");
	hector.greet();
	return ((uintptr_t)&hector);
}

int	main()
{
	int onTheHeap;
	int onTheStack;

	onTheHeap = ponyOnTheHeap();
	onTheStack = ponyOnTheStack();
	std::cout << "heap address is: " << onTheHeap << std::endl;
	std::cout << "stack address is: " << onTheStack << std::endl;
	return (0);
}
