/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:33:23 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/22 15:47:38 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T> class Array 
{
	private:
		T 	*_ptr;
		unsigned int _size;
	public :
		Array()
		{
			std::cout << "Default Constructure !!" << std::endl;
			_ptr = new T[0]();
			_size = 0;
		}
		
		Array(unsigned int size)
		{
			std::cout << "Parametrized Constructure !!" << std::endl;
			_ptr = new T[size]();
			_size = size;
		}
		
		Array (const Array<T> &other)
		{
			std::cout << "Coppy Constructure !!" << std::endl;
			_size = 0;
			*this = other;
		}
		
		
		Array& operator= (const Array<T>& other)
		{
			std::cout << "Assignement Operator !!" << std::endl;
			if (_size)
				delete[] _ptr;
			this->_size = other._size;
			_ptr = new T[other._size]();
			for (unsigned int i = 0; i < other._size; i++)
				_ptr[i] = other._ptr[i];
			return (*this);
		}
		T &operator [](int i) const
		{
			if (i < 0 || i >= (int)_size)
				throw std::out_of_range("Out Of Bounds");
			return (_ptr[i]);
		}
		
		unsigned int size() const
		{
			return (_size);
		}
		
		~Array()
		{
			std::cout << "Array Destructor!!" << std::endl;
			delete[] _ptr;
		}
};

#endif