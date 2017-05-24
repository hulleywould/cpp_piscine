/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 11:15:44 by shulley           #+#    #+#             */
/*   Updated: 2017/05/24 13:01:14 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <string>

class Pony {
	private:
		int				speed;
		std::string		color;
		std::string		name;

	public:
		Pony();
		~Pony();
		void	greet();

		void	setSpeed(int s);
		void 	setColor(std::string c);
		void 	setName(std::string n);

		int 	getSpeed();
		std::string getColor();
		std::string getName();
};

#endif
