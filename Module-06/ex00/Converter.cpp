/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:02:11 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/18 15:17:03 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"


Converter::Converter()
{
	//std::cout << "Converter Default constructor called\n";
}

Converter::Converter(const std::string  param) : _param(param)
{
	_type = TYPE_INT;
	_stateChar = VALID;
	_stateInt = VALID;
	_stateFloat = VALID;
	_stateDouble = VALID;
	detectType();
	toTypes();
	//std::cout << "Converter Parametrized  constructor called\n";
}

Converter::Converter(const Converter &other) : _param(other._param), _type(other._type)
{
	//std::cout << "Converter Copy Constructor !!" << std::endl;
}

Converter& Converter::operator= (const Converter& other)
{
	//std::cout << "Converter Copy assignment operator called\n";
	_type = other._type;
	return (*this);
}

int	Converter::getType() const
{
	return (this->_type);
}

bool	Converter::isSpecialType()
{
	bool isSpecial = false;
	if (_param == "+inf")
	{
		isSpecial = true;
		_type = SPECIAL;
		_stateChar = IMPOSSIBLE;
		_stateInt = IMPOSSIBLE;
		_f = INFINITY;
		_d = INFINITY;
	}
	else if (_param == "-inf")
	{
		isSpecial = true;
		_type = SPECIAL;
		_stateChar = IMPOSSIBLE;
		_stateInt = IMPOSSIBLE;
		_f = -INFINITY;
		_d = -INFINITY;
	}
	else if (_param == "+inff")
	{
		isSpecial = true;
		_type = SPECIAL;
		_stateChar = IMPOSSIBLE;
		_stateInt = IMPOSSIBLE;
		_f = INFINITY;
		_d = INFINITY;
	}
	else if (_param == "-inff")
	{
		isSpecial = true;
		_type = SPECIAL;
		_stateChar = IMPOSSIBLE;
		_stateInt = IMPOSSIBLE;
		_f = -INFINITY;
		_d = -INFINITY;
	}
	else if (_param == "nan" || _param == "nanf")
	{
		isSpecial = true;
		_type = SPECIAL;
		_stateChar = IMPOSSIBLE;
		_stateInt = IMPOSSIBLE;
		_f = NAN;
		_d = NAN;
		
	}
	return (isSpecial);
	
}

void		Converter::detectType()
{
	if (_param.length() == 1 && (!isdigit(_param[0])))
	{
		_type = TYPE_CHAR;
		return ;
	}
	if (isSpecialType())
		return ;
	for (size_t i = 0; i < _param.length(); i++)
	{
		if ((i == _param.length() - 1 && _param[i] == 'f'))
			_type = TYPE_FLOAT;
		else if (_param[i] == '.')
			_type = TYPE_DOUBLE;
		else
		{
			if (!isdigit(_param[i]))
			{
				_type = NOT_VALID_TYPE;
				return ;
			}
		}
	}
}

void	Converter::_toChar()
{
	_c = static_cast <char> (_val);
	if (!isprint(_val))
		_stateChar = NOT_PRINTABLE;
	else
		_stateChar = PRINTABLE;
}

void		Converter::setChar()
{
	_val = _param[0];
	_toChar();
	_f = _val;
	_d = _val;
}
void		Converter::setInt()
{
	_val = stoi(_param);
	_toChar();
	_f = _val;
	_d = _val;
}
void		Converter::setFloat()
{
	_f = std::stof(_param);
	_d = std::stod(_param);
	_val = static_cast<int> (_f);
	_toChar();
}
void		Converter::setDouble()
{
	setFloat();
}


void		Converter::toTypes()
{
	switch (_type)
	{
		case TYPE_INT:
			setInt();
			break;
		case TYPE_CHAR :
			setChar();
			break;
		case TYPE_FLOAT :
			setFloat();
			break;
		case TYPE_DOUBLE :
			setDouble();
			break;
		case SPECIAL:
			break;
		default:
			_typeStatus = NOT_VALID_TYPE;
			std::cout << "Not Valid Type " << std::endl;
			break;
	}
}

void		Converter::_printChar()
{
	std::cout << "Char : ";
	switch (_stateChar)
	{
		case IMPOSSIBLE:
			std::cout << "impossible";
			break;
		case NOT_PRINTABLE:
				std::cout << "Non displayable";
			break;
		default:
			std::cout << "'" << _c << "'";
			break;
	}
	std::cout << std::endl;
}


void		Converter::_printInt()
{
	std::cout << "int : ";
	switch (_stateInt)
	{
		case IMPOSSIBLE:
			std::cout << "impossible";
			break;
		default:
			std::cout << _val;
			break;
	}
	std::cout << std::endl;
}

void		Converter::_printFloat()
{
	std::cout << "float : ";
	std::cout << std::setprecision(PRECISION)  << _f << "f" << std::endl;
}

void		Converter::_printDouble()
{
	std::cout << "double : ";
	std::cout << std::setprecision(PRECISION)  << _d << std::endl;

}


void		Converter::printTypes()
{
	if (_typeStatus == NOT_VALID_TYPE)
		return ;
	_printChar();
	_printInt();
	_printFloat();
	_printDouble();
}


const std::string		Converter::getParam() const
{
	return (this->_param);
}

Converter::~Converter()
{
	//std::cout << "Converter Destructor called\n";
}