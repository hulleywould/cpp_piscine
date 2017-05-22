/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 11:04:01 by shulley           #+#    #+#             */
/*   Updated: 2017/05/22 12:45:06 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Headers.hpp"

/*void add_contact(Phonebook *new_contact)
{
	std::cout << "what's your first name? " << std::endl;
	std::getline(std::cin, new_contact->first_name);
	std::cout << "what's your last name? " << std::endl;
	sttd::getline(std::cin, new_contact->last_name);	
	std::cout << "what's your nickame? " << std::endl;
	std::getline(std::cin, new_contact->nickname);
	std::cout << "what's your login? " << std::endl;
	std::getline(std::cin, new_contact->login);
	std::cout << "what's your postal address? " << std::endl;
	std::getline(std::cin, new_contact->postal_address);
	std::cout << "what's your email address? " << std::endl;
	std::getline(std::cin, new_contact->email_address);
	std::cout << "what's your phone number? " << std::endl;
	std::getline(std::cin, new_contact->phone_number);
	std::cout << "what's your birthday date? " << std::endl;
	std::getline(std::cin, new_contact->birthdate);
	std::cout << "what's your favourite meal? " << std::endl;
	std::getline(std::cin, new_contact->fave_meal);
	std::cout << "what's your underwear color? " << std::endl;
	std::getline(std::cin, new_contact->underwear_color);
	std::cout << "what's your darkest secret? " << std::endl;
	std::getline(std::cin, new_contact->darkest_secret);
}
*/

int check_command(std::string command)
{
	if (command == "ADD")
		return (1);
	else if (command == "SEARCH")
		return (2);
	else if (command == "EXIT")
		return (-1);
	return (0);
}

int	main(void)
{
	Phonebook contact[8];
	std::string command;

	while (true)
	{
		std::cout << "ENTER COMMAND (ADD, SEARCH, DELETE, EXIT):" << std::endl;
		std::cin >> command;
		if (check_command(command) == 1)
			add_contact(&contact[0]);
		else if (check_command(command) == -1)
			return (0);
	}
}
