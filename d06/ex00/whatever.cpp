/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shulley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/31 13:29:52 by shulley           #+#    #+#             */
/*   Updated: 2017/05/31 13:48:18 by shulley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

template <typename T>
void swap (T &a, T &b)
{
	T	temp;
	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T min(T &a, T &b)
{
	if (a > b)
		return b;
	else if (a == b)
		return b;
	else
		return a;
}

template <typename T>
T max(T &a, T&b)
{
	if (a > b)
		return a;
	else if (a == b)
		return b;
	else
		return b;
}
