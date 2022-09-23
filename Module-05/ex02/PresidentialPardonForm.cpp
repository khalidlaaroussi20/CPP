/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:36:26 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/16 11:36:04 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() 
{
	std::cout << "PresidentialPardonForm Default constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const std::string  target) : Form(PRESIDENTIAL_PARDON_NAME, false, PRESIDENTIAL_SIGN_REQUIRED, PRESIDENTIAL_EXECUTE_REQUIRED), _target(target)
{
	std::cout << "PresidentialPardonForm Parametrized  constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form(other), _target(other._target)
{
	std::cout << "PresidentialPardonForm Copy Constructor !!" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator= (const PresidentialPardonForm& other)
{
	std::cout << "PresidentialPardonForm Copy assignment operator called\n";
	other.getName();
	return (*this);
}

//getters
const std::string		PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

void	PresidentialPardonForm::printForm() const
{
	std::cout <<  _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (isValidToExecute(executor))
	{
		printForm();
	}
	else
		Form::GradeTooLowException();
}


PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor called\n";
}

