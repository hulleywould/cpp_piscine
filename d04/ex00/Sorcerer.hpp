/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 11:15:24 by shulley           #+#    #+#             */
/*   Updated: 2017/05/26 12:07:52 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SORCERER_HPP
# define SORCERER_HPP

#include <string>
#include <iostream>

class Sorcerer {
	private:
		Sorcerer();
		std::string	name;
		std::string	title;
	public:
		Sorcerer(Sorcerer const &copy);
		Sorcerer(std::string, std::string);
		virtual ~Sorcerer(void) = 0;
		std::string getName();
		std::string getTitle();
};

std::ostream &operator<<(std::ostream &os, Sorcerer const &rhs);

#endif
