/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:57:04 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/15 15:44:52 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _signGrade(MIN_GRADE), _executeGrade(MIN_GRADE)
{
	std::cout << "Form Default constructor called\n";
	_isSigned = false;
}

Form::Form(const std::string  name, bool isSigned, const int signGrade, const int executeGrade) : _name(name),_isSigned(isSigned) , _signGrade(signGrade), _executeGrade(executeGrade)
{
	std::cout << "Form Parametrized  constructor called\n";
	_isGradeTooHigh();
	_isGradeTooLow();
}

Form::Form(const Form &other) : _name(other._name), _isSigned(other._isSigned) , _signGrade(other._signGrade), _executeGrade(other._executeGrade)
{
	std::cout << "Form Copy Constructor !!" << std::endl;
	_isGradeTooHigh();
	_isGradeTooLow();
}

Form& Form::operator= (const Form& other)
{
	std::cout << "Form Copy assignment operator called\n";
	this->_isSigned= other.getIsSigned();
	_isGradeTooHigh();
	_isGradeTooLow();
	return (*this);
}

//getters
const std::string		Form::getName() const
{
	return (this->_name);
}

bool				Form::getIsSigned() const
{
	return (this->_isSigned);
}

int			Form::getSignGrade() const
{
	return (this->_signGrade);
}
int			Form::getExecuteGrade() const
{
	return (this->_executeGrade);
}

void	Form::_isGradeTooLow()
{
	if (this ->_signGrade > MIN_GRADE || this ->_executeGrade > MIN_GRADE)
		throw Form::GradeTooLowException();
}
void	Form::_isGradeTooHigh()
{
	if (this ->_signGrade < MAX_GRADE || this ->_executeGrade < MAX_GRADE)
		throw Form::GradeTooHighException();
}


void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getSignGrade())
		this ->_isSigned = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream & operator << (std::ostream &out, const Form &f)
{
    out << "Form name = " << f.getName() << " isSigned = " << f.getIsSigned() << " signGrade = " << f.getSignGrade() << " executeGrade = " << f.getExecuteGrade();
    return out;
}

Form::~Form()
{
	std::cout << "Form Destructor called\n";
}

