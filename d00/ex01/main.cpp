/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 11:04:01 by shulley           #+#    #+#             */
/*   Updated: 2017/05/22 16:08:06 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Headers.hpp"

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

int	search_list(Phonebook *contact)
{
	int	index;

	index = 0;
	if (contact[0].has_details != true)
		std::cout << "no contacts available. " << std::endl;
	else
	{
		std::cout << "     index|first name| last name|  nickname" << std::endl;
		while (contact[index].has_details == true)
		{
			std::cout << std::setw(10) << index << "|";
			if (std::contact[index].first_name.length() > 10)
				std::cout << std::setw(10) << contact[index].first_name << "|";
			std::cout << std::setw(10) << contact[index].last_name << "|";
			std::cout << std::setw(10) << contact[index].nickname << std::endl;
			index++;
		}
	}
	return (0);
}

int	main(void)
{
	Phonebook contact[8];
	std::string command;
	int	index;

	index = 0;
	while (true)
	{
		std::cout << "ENTER COMMAND (ADD, SEARCH, DELETE, EXIT): " << std::endl;
		std::getline(std::cin, command);
		if (check_command(command) == 1)
		{
			add_contact(&contact[index]);
			index++;
		}
		else if (check_command(command) == 2)
			search_list(contact);
		else if (check_command(command) == -1)
			return (0);
	}
	return (0);
}
