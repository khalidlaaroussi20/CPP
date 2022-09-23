/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:59:20 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/18 15:15:51 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#define NOT_VALID_TYPE 0
#define TYPE_CHAR 1
#define TYPE_INT 2
#define TYPE_FLOAT 3
#define TYPE_DOUBLE 4
#define UNKNOWN_TYPE 5
#define SPECIAL 6

#define PLUS_INFF 7
#define MINUS_INFF 8
#define PLUS_INF 9
#define MINUS_INF 10


#define NOT_PRINTABLE 13
#define PRINTABLE 14
#define INVALID 15
#define VALID  16

#define IMPOSSIBLE 17

#define PRECISION 1

#include <iostream>
#include <iomanip> 
#include <string>
#include <limits>
#include <cmath>




class Converter 
{
	private:
		const std::string _param;
		int		_type;
		int		_typeStatus;
		int		_stateChar;
		int		_stateInt;
		int		_stateFloat;
		int		_stateDouble;
		int		_val;
		char	_c;
		float	_f;
		double	_d;
		Converter();
		void	_toChar();
		void		_printChar();
		void		_printInt();
		void		_printFloat();
		void		_printDouble();
	public :
		Converter(const std::string  param);
		Converter (const Converter &other);

		//getters
		const std::string getParam() const;
		int getType() const;
		
		// Operators 
		Converter& operator= (const Converter& other);
		void		detectType();
		void		toTypes();
		void		setChar();
		void		setInt();
		void		setFloat();
		void		setDouble();
		bool		isSpecialType();
		//printing
		
		void		printTypes();
		
		~Converter();
};


#endif