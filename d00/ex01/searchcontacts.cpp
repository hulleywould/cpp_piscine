#include "Headers.hpp"

int	hasdigit(int c)
{
	return (c >= 48 && c <= 57 ? 1 : 0);
}

void display_fields(Phonebook *contact, int index)
{
	std::cout << "index: " << contact[index].index << std::endl;
	std::cout << "first name: " << contact[index].first_name << std::endl;
	std::cout << "last name: " << contact[index].last_name << std::endl;
	std::cout << "nickname: " << contact[index].nickname << std::endl;
	std::cout << "login: " << contact[index].nickname << std::endl;
	std::cout << "postal address: " << contact[index].postal_address << std::endl;
	std::cout << "email address: " << contact[index].email_address << std::endl;
	std::cout << "phone number: " << contact[index].phone_num << std::endl;
	std::cout << "birthday date: " << contact[index].birthdate << std::endl;
	std::cout << "favourite meal: " << contact[index].fave_meal << std::endl;
	std::cout << "underwear color: " << contact[index].underwear_color << std::endl;
	std::cout << "darkest secret: " << contact[index].darkest_secret << std::endl;
}

int	choose_contact(Phonebook *contact)
{
	std::string	chosen_index;
	int		index;

	std::cout << "SELECT CONTACT BY INDEX" << std::endl;
	std::getline(std::cin, chosen_index);
	if (chosen_index.length() == 1 && hasdigit(chosen_index[0]))
	{
		index = chosen_index[0] - '0';
		if ((index < 0 && index > 8) || (contact[index].has_details != true))
		{
			std::cout << "invalid input" << std::endl;
			return (0);
		}
		else
			display_fields(contact, index);
	}
	else
		std::cout << "invalid input" << std::endl;
	return (0);
}


int	search_list(Phonebook *contact, int num_of_contacts)
{
	int	index;

	if (contact[0].has_details != true)
		std::cout << "no contacts available. " << std::endl;
	else
	{
		index = 0;
		std::cout << "     index|first name| last name|  nickname" << std::endl;
		while (index < num_of_contacts)
		{
			std::cout << std::setw(10) << contact[index].index << "|";
			if (contact[index].first_name.length() >= 10)
				std::cout << contact[index].first_name.substr(0,9) << ".|";
			else
				std::cout << std::setw(10) << contact[index].first_name << "|";
			if (contact[index].last_name.length() >= 10)
				std::cout << contact[index].last_name.substr(0,9) << ".|";
			else
				std::cout << std::setw(10) << contact[index].last_name << "|";
			if (contact[index].nickname.length() >= 10)
				std::cout << contact[index].nickname.substr(0,9) << "." << std::endl;
			else
				std::cout << std::setw(10) << contact[index].nickname << std::endl;
			index++;
		}
		choose_contact(contact);
	}
	return (0);
}

