/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 18:41:03 by cdutel            #+#    #+#             */
/*   Updated: 2025/01/27 15:14:55 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/whatever.hpp"

int main( void )
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}


// int main(void)
// {
// 	int	a = 21;
// 	int	b = 42;

// 	std::cout << "Min of " << a << " and " << b << " is : ";
// 	std::cout << min(a, b) << std::endl;
// 	std::cout << "Max of " << a << " and " << b << " is : ";
// 	std::cout << max(a, b) << std::endl;
// 	std::cout << "Before swap, a = " << a << " and b = " << b << std::endl;
// 	swap(a, b);
// 	std::cout << "After swap, a = " << a << " and b = " << b << std::endl;
// 	std::cout << std::endl << std::endl;

// 	float	c = 8.549;
// 	float	d = 15.45;

// 	std::cout << "Min of " << c << " and " << d << " is : ";
// 	std::cout << min(c, d) << std::endl;
// 	std::cout << "Max of " << c << " and " << d << " is : ";
// 	std::cout << max(c, d) << std::endl;
// 	std::cout << "Before swap, c = " << c << " and d = " << d << std::endl;
// 	swap(c, d);
// 	std::cout << "After swap, c = " << c << " and d = " << d << std::endl;
// 	return (0);
// }

