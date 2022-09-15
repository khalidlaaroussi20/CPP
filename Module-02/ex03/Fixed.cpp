/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:57:04 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/10 17:33:05 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this ->fixedPoint = 0;
}

Fixed::Fixed(const int fixedPoint)
{
	this ->fixedPoint = fixedPoint << Fixed::fractionalBit;
}

Fixed::Fixed(const float fixedPoint)
{
	this ->fixedPoint = roundf(fixedPoint  * ( 1 << Fixed::fractionalBit));
}


Fixed::Fixed (const Fixed &other)
{
	*this = other;
}

//operators

Fixed& Fixed::operator= (const Fixed& fixed)
{
	this->fixedPoint = fixed.getRawBits();
	return (*this);
}

std::ostream & operator << (std::ostream &out, const Fixed &c)
{
    out << c.toFloat();
    return out;
}

//comparison operators

bool Fixed::operator > (const Fixed& other) const
{
	return (this ->getRawBits() > other.getRawBits() );
}
bool Fixed::operator >= (const Fixed& other) const
{
	return (this ->getRawBits() >= other.getRawBits() );
}

bool Fixed::operator < (const Fixed& other) const
{
	return (this ->getRawBits() < other.getRawBits() );
}

bool Fixed::operator <= (const Fixed& other) const
{
	return (this ->getRawBits() <= other.getRawBits() );
}

bool Fixed::operator == (const Fixed& other) const
{
	return (this ->getRawBits() == other.getRawBits() );
}

bool Fixed::operator != (const Fixed& other) const
{
	return (this ->getRawBits() != other.getRawBits() );
}


Fixed Fixed::operator +(const Fixed& other) const
{
	Fixed res;
	res.fixedPoint =  this ->getRawBits() + other.getRawBits();
	return (res);
}

Fixed Fixed::operator -(const Fixed& other) const
{
	Fixed res;
	res.fixedPoint =  this ->getRawBits() - other.getRawBits();
	return (res);
}

Fixed Fixed::operator *(const Fixed& other) const
{
	Fixed res(this ->toFloat() * other.toFloat());
	return (res);
}

Fixed Fixed::operator /(const Fixed& other) const
{
	Fixed res;
	if (other.getRawBits() != 0)
		res = Fixed(this->toFloat() / other.toFloat());
	return (res);
}

//increment Operators

Fixed Fixed::operator++()
{
	++this ->fixedPoint;
	return (*this);
}

//postfix increment
Fixed Fixed::operator++(int)
{
	Fixed temp;
	temp.fixedPoint = this ->fixedPoint++;
	return (temp);
}

Fixed Fixed::operator--()
{
	--this ->fixedPoint;
	return (*this);
}


Fixed Fixed::operator--(int)
{
	Fixed temp;
	temp.fixedPoint = this ->fixedPoint--;
	return (temp);
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

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a <= b)
		return (a);
	return (b);
}

Fixed	const &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a <= b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a >= b)
		return (a);
	return (b);
}

Fixed	const &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a >= b)
		return (a);
	return (b);
}



Fixed::~Fixed()
{
}
