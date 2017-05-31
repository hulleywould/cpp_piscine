/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 14:56:17 by shulley           #+#    #+#             */
/*   Updated: 2017/05/31 14:56:20 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 13:53:12 by shulley           #+#    #+#             */
/*   Updated: 2017/05/31 14:54:10 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T, typename U, typename V>
void iter(T array, U length, V function)
{
	int		i = 0;
	while (i != length)
	{
		function(array[i]);
		i++;
	}
}

void	toUpper(char &i)
{
	if (i >= 95 && i <= 122)
		i -= 32;
}

void	incrementInt(int &i)
{
	i++;
}

int main()
{
	int 	i = 0;
	
	char charr[3] = {'a', 'b', 'c'};
	int	array[10] = {1,2,3,4,5,6,7,8,9,0};
	iter(array, 10, incrementInt);
	while (i < 10)
	{
		std::cout << array[i];
		i++;
	}
	std::cout << "\n";
	i = 0;
	iter(charr, 3, toUpper);
	while (i < 3)
	{
		std::cout << charr[i];
		i++;
	}
	std::cout << "\n";
	return (0);
}
