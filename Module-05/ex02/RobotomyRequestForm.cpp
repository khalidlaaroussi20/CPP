/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:36:26 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/16 11:35:21 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() 
{
	std::cout << "RobotomyRequestForm Default constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string  target) : Form(ROBOTOMY_REQUEST_NAME, false, ROBOTOMY_SIGN_REQUIRED, ROBOTOMY_EXECUTE_REQUIRED), _target(target)
{
	std::cout << "RobotomyRequestForm Parametrized  constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other), _target(other._target)
{
	std::cout << "RobotomyRequestForm Copy Constructor !!" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator= (const RobotomyRequestForm& other)
{
	std::cout << "RobotomyRequestForm Copy assignment operator called\n";
	other.getName();
	return (*this);
}

//getters
const std::string		RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

void	RobotomyRequestForm::printForm() const
{
	RobotomyRequestForm::count++;
	if (RobotomyRequestForm::count % 2 == 0)
		std::cout << _target << " has been robotomized successfully" << std::endl;
	else
		std::cout <<  "robotomy failed" << std::endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (isValidToExecute(executor))
	{
		printForm();
	}
	else
		Form::GradeTooLowException();
}


RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Destructor called\n";
}

