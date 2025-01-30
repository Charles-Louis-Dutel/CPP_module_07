/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:17:20 by cdutel            #+#    #+#             */
/*   Updated: 2025/01/30 15:26:25 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T, typename F>
void	iter(T *array, size_t size, F f)
{
	if (array == NULL || f == NULL)
		return;
	for (size_t i = 0; i < size; i++)
	{
		f(array[i]);
	}
}

#endif
