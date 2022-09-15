/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:57:04 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/09 16:03:13 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	this ->fixedPoint = 0;
}

Fixed::Fixed(const int fixedPoint)
{
	std::cout << "Int constructor called\n";
	this ->fixedPoint = fixedPoint << Fixed::fractionalBit;
}

Fixed::Fixed(const float fixedPoint)
{
	std::cout << "Float constructor called\n";
	this ->fixedPoint = roundf(fixedPoint  * ( 1 << Fixed::fractionalBit));
}


Fixed::Fixed (const Fixed &other)
{
	std::cout << "Copy constructor called\n";
	*this = other;
	//this ->fixedPoint = other.getRawBits();
}

Fixed& Fixed::operator= (const Fixed& fixed)
{
	std::cout << "Copy assignment operator called\n";
	this->fixedPoint = fixed.getRawBits();
	return (*this);
}


int Fixed::getRawBits( void ) const
{
	return (this ->fixedPoint);
}

void	Fixed::setRawBits(  int const raw )
{
	this ->fixedPoint = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->fixedPoint / (1 << Fixed::fractionalBit));
}
int		Fixed::toInt( void ) const
{
	return ((int)(this ->toFloat()));
}

std::ostream & operator << (std::ostream &out, const Fixed &c)
{
    out << c.toFloat();
    return out;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
