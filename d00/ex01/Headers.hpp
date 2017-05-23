/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Headers.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 11:04:21 by shulley           #+#    #+#             */
/*   Updated: 2017/05/23 10:00:33 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "Phonebook.cpp"

class		Phonebook;
void		display_fields(Phonebook *contact, int index);
int			search_list(Phonebook *contact, int num_of_contacts);
int			choose_contact(Phonebook *);
Phonebook	add_contact(Phonebook *new_contact);
std::string filter_string();
int			hasdigit(int c);
