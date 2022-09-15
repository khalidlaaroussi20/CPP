/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:57:04 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/09 14:16:15 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this ->fixedPoint = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed (const Fixed &other)
{
	std::cout << "Copy constructor called\n";
	this ->fixedPoint = other.getRawBits();
}

Fixed& Fixed::operator= (const Fixed& fixed)
{
	std::cout << "Copy assignment operator called\n";
	this->fixedPoint = fixed.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return (this ->fixedPoint);
}

void	Fixed::setRawBits(  int const raw )
{
	this ->fixedPoint = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
