/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:36:26 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/15 15:57:37 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() 
{
	std::cout << "ShrubberyCreationForm Default constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string  target) : Form(target, false, SIGN_REQUIRED, EXECUTE_REQUIRED), _target(target)
{
	std::cout << "ShrubberyCreationForm Parametrized  constructor called\n";	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : _target(other._target), Form(other)
{
	std::cout << "ShrubberyCreationForm Copy Constructor !!" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator= (const ShrubberyCreationForm& other)
{
	std::cout << "ShrubberyCreationForm Copy assignment operator called\n";
	return (*this);
}

//getters
const std::string		ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	this->beSigned(executor);
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called\n";
}

