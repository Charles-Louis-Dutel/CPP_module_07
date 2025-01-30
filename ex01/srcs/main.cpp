/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:41:03 by cdutel            #+#    #+#             */
/*   Updated: 2025/01/30 15:45:57 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "../includes/iter.hpp"

void	increment(int &i)
{
	i++;
}

void	ft_isdigit(std::string &s)
{
	for (size_t i = 0; i < s.length(); i++)
		std::cout << "Is " << s[i] << " a digit : " << (std::isdigit(s[i]) ? "yes" : "no") << std::endl;
}

int	main( void )
{
	std::cout << "Testing string array :" << std::endl;
	std::string	test[] = {"Bonjour", "97"};
	::iter(test, 2, ft_isdigit);
	std::cout << std::endl;

	std::cout << "Testing int array :" << std::endl;
	int	int_array [] = {1, 10, -1, 150};
	std::cout << "Before increment : " << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		std::cout << int_array[i] << " ; ";
	}
	std::cout << std::endl;
	::iter(int_array, 4, increment);
	std::cout << "After increment : " << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		std::cout << int_array[i] << " ; ";
	}
	std::cout << std::endl;
	
	return (0);
}



