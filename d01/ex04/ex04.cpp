/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/23 16:46:37 by shulley           #+#    #+#             */
/*   Updated: 2017/05/23 16:57:54 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	
	std::string *strptr = &str;

	std::string &strref = str;

	std::cout << "display by pointer " << *strptr << std::endl;
	std::cout << "display by reference " << strref << std::endl;

	return (0);
}
