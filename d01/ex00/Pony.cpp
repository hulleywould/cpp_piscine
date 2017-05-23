/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 11:02:44 by shulley           #+#    #+#             */
/*   Updated: 2017/05/23 11:50:41 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Pony {
	public:
		int				speed;
		std::string		color;
		std::string		name;
		Pony()
		{
			std::cout << "Pony created" << std::endl;
		}
		~Pony()
		{
			std::cout << "Pony deleted" << std::endl;
		}
		void			greet()
		{
			std::cout << "Hi, i'm " << this->name << "!" << std::endl;  
		}
};
