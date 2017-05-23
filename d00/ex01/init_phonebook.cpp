/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_phonebook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 11:19:10 by shulley           #+#    #+#             */
/*   Updated: 2017/05/23 10:08:00 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Headers.hpp"

std::string filter_string()
{
	std::string str;
	do {
		std::getline(std::cin, str);
		str.erase(remove_if(str.begin(), str.end(), isspace), str.end());
	} while (str.empty());
	return (str);
}

Phonebook add_contact(Phonebook *new_contact)
{
	std::cout << "what's your first name? " << std::endl;
	new_contact->first_name = filter_string();
	std::cout << "what's your last name? " << std::endl;
	new_contact->last_name = filter_string();	
	std::cout << "what's your nickame? " << std::endl;
	new_contact->nickname = filter_string();
	std::cout << "what's your login? " << std::endl;
	new_contact->login = filter_string();
	std::cout << "what's your postal address? " << std::endl;
	new_contact->postal_address = filter_string();
	std::cout << "what's your email address? " << std::endl;
	new_contact->email_address = filter_string();
	std::cout << "what's your phone number? " << std::endl;
	new_contact->phone_num = filter_string();
	std::cout << "what's your birthday date? " << std::endl;
	new_contact->birthdate = filter_string();
	std::cout << "what's your favourite meal? " << std::endl;
	new_contact->fave_meal = filter_string();
	std::cout << "what's your underwear color? " << std::endl;
	new_contact->underwear_color = filter_string();
	std::cout << "what's your darkest secret? " << std::endl;
	new_contact->darkest_secret = filter_string();
	new_contact->has_details = true;
	new_contact->index = new_contact->contact_index++;
	return (*new_contact);
}

int Phonebook::contact_index = 0;
