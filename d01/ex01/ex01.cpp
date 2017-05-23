/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 13:05:49 by shulley           #+#    #+#             */
/*   Updated: 2017/05/23 13:08:18 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	memoryLeak()
{
	std::string*	panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}
