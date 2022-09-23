/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 13:57:04 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/16 17:43:36 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern()
{
	std::cout << "Intern Default constructor called\n";
	this->forms[0] = std::make_pair(SHRUBBERY_CREATION_NAME, newShrubbery);
	this->forms[1] = std::make_pair(ROBOTOMY_REQUEST_NAME, newRobotomy);
	this->forms[2] = std::make_pair(PRESIDENTIAL_PARDON_NAME, newPresidential);
	
}


Intern::Intern(const Intern &other)
{
	(void)other;
	std::cout << "Intern Copy Constructor !!" << std::endl;
}

Intern& Intern::operator= (const Intern& other)
{
	(void)other;
	std::cout << "Intern Copy assignment operator called\n";
	return (*this);
}

Form *newShrubbery(const std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

Form *newRobotomy(const std::string &target)
{
	return (new RobotomyRequestForm(target));
}

Form *newPresidential(const std::string &target)
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::makeForm(const std::string &name, const std::string &target)
{
	for (int i = 0; i < NUMBER_FORMS; i++)
	{
		if (this->forms[i].first == name)
			return (this->forms[i].second(target));
	}
	std::cout << "this Type form not exist !!" << std::endl;
	return (0);
}


Intern::~Intern()
{
	std::cout << "Intern Destructor called\n";
}

