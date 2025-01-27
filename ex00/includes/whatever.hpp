/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:54:52 by cdutel            #+#    #+#             */
/*   Updated: 2025/01/27 15:04:35 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T &x, T &y)
{
	T	temp;

	temp = x;
	x = y;
	y = temp;
}

template<typename T>
T const	&min(T const &x, T const &y)
{
	return ((x < y) ? x : y);
}

template<typename T>
T const	&max(T const &x, T const &y)
{
	return ((x > y) ? x : y);
}

#endif

