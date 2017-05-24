/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 09:10:16 by shulley           #+#    #+#             */
/*   Updated: 2017/05/24 10:50:19 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Brain.hpp"

class Human {
	public:
		Human() : mybrain() {}
		const Brain& getBrain()
		{
			return mybrain;
		}
		std::string identify() const
		{
			return mybrain.identify();
		}
	private:
		const Brain mybrain;
};
