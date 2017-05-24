/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/24 09:10:16 by shulley           #+#    #+#             */
/*   Updated: 2017/05/24 14:06:59 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() : mybrain() {}
const Brain& Human::getBrain() const
{
	return mybrain;
}
std::string Human::identify() const
{
	return mybrain.identify();
}
