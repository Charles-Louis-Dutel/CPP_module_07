/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@42student.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:19:56 by cdutel            #+#    #+#             */
/*   Updated: 2025/01/31 11:46:12 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include <ctime>
# include <cstdlib>

template<typename T>
class	Array
{
	public:
		Array(void) : _array_size(0)
		{
			this->_array = new T[this->_array_size];
		}

		Array(unsigned int const n) : _array_size(n)
		{
			this->_array = new T[this->_array_size];
		}

		Array(Array const &copy)
		{
			this->_array_size = copy._array_size;
			this->_array = new T[copy._array_size];
			for (unsigned int i = 0; i < this->_array_size; i++)
			{
				this->_array[i] = copy._array[i];
			}
		}

		~Array(void)
		{
			if (this->_array != NULL)
				delete [] this->_array;
		}


		/*Operator overload*/
		Array	&operator=(Array const &inst)
		{
			if (this != &inst)
			{
				this->_array_size = inst._array_size;
				if (this->_array != NULL)
					delete [] this->_array;
				this->_array = new T[inst._array_size];
				for (unsigned int i = 0; i < this->_array_size; i++)
				{
					this->_array[i] = inst._array[i];
				}
			}
			return (*this);
		}

		T	&operator[](unsigned int const n)
		{
			if (n < this->_array_size)
				return (this->_array[n]);
			else
			{
				throw Array::OutOfSizeException();
			}
		}


		/*Public member functions*/
		size_t	size(void) const
		{
			return (this->_array_size);
		}



		/*Exception*/
		class	OutOfSizeException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Size is out of range";
				}
		};

	private:
		T				*_array;
		unsigned int	_array_size;
};

#endif

