/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 12:17:56 by shulley           #+#    #+#             */
/*   Updated: 2017/05/26 17:00:06 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	VICTIM_HPP
# define VICTIM_HPP

#include <iostream>
#include <string>

class Victim {
	public:
		Victim(std::string);
		~Victim(void);
		Victim(Victim const &copy);
		std::string getName(void);
		void setName(std::string n);
		void getPolymorphed() const;
	private:
		std::string	name;
		Victim();

};

#endif
