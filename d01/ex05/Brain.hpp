/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 09:10:53 by shulley           #+#    #+#             */
/*   Updated: 2017/05/24 13:55:56 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>
#include <sstream>

class Brain {
	private:
		std::string 	iq;
		std::string 	matter;
		std::stringstream identity;
	public:
		Brain();
		std::string identify() const;
		void setIq(std::string iq_level);
		void setMatter(std::string m);
		std::string getIq();
		std::string getMatter();
};
#endif
