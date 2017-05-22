/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 10:39:08 by shulley           #+#    #+#             */
/*   Updated: 2017/05/22 12:49:11 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Phonebook {
	public:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_address;
		std::string email_address;
		std::string phone_num;
		std::string birthdate;
		std::string fave_meal;
		std::string underwear_color;
		std::string darkest_secret;
		bool has_details;
};
