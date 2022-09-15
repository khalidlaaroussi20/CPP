/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:57:04 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/15 12:19:05 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat Default constructor called\n";
}

Bureaucrat::Bureaucrat(const std::string  name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat Parametrized  constructor called\n";
	_isGradeTooHigh();
	_isGradeTooLow();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade)
{
	std::cout << "Bureaucrat Copy Constructor !!" << std::endl;
	_isGradeTooHigh();
	_isGradeTooLow();
}

Bureaucrat& Bureaucrat::operator= (const Bureaucrat& other)
{
	std::cout << "Bureaucrat Copy assignment operator called\n";
	this->_grade = other.getGrade();
	_isGradeTooHigh();
	_isGradeTooLow();
	return (*this);
}



const std::string		Bureaucrat::getName() const
{
	return (this->_name);
}

int		Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::_isGradeTooLow()
{
	if (this ->_grade > MIN_GRADE)
		throw Bureaucrat::GradeTooLowException();
}
void	Bureaucrat::_isGradeTooHigh()
{
	if (this ->_grade < MAX_GRADE)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::incrementGrade()
{
	_grade--;
	_isGradeTooHigh();
}
void Bureaucrat::decrementtGrade()
{
	_grade++;
	_isGradeTooLow();
}

std::ostream & operator << (std::ostream &out, const Bureaucrat &b)
{
    out << b.getName() << ", bureaucrat grade " << b.getGrade();
    return out;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called\n";
}

