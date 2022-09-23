/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:36:26 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/16 11:35:12 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"


ShrubberyCreationForm::ShrubberyCreationForm() 
{
	std::cout << "ShrubberyCreationForm Default constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string  target) : Form(SHRUBBERY_CREATION_NAME, false, SHRUBBERY_SIGN_REQUIRED, SHRUBBERY_EXECUTE_REQUIRED), _target(target)
{
	std::cout << "ShrubberyCreationForm Parametrized  constructor called\n";	
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other), _target(other._target)
{
	std::cout << "ShrubberyCreationForm Copy Constructor !!" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator= (const ShrubberyCreationForm& other)
{
	std::cout << "ShrubberyCreationForm Copy assignment operator called\n";
	other.getName();
	return (*this);
}

//getters
const std::string		ShrubberyCreationForm::getTarget() const
{
	return (this->_target);
}


void	ShrubberyCreationForm::printForm() const
{
	std::ofstream  formFile(_target + "_shrubbery");
	formFile << "        &&& &&  & &&\n";
    formFile << "    && &\\/&\\|& ()|/ @, &&\n";
    formFile << "      &\\/(/&/&||/& /_/)_&/_&\n";
    formFile << "   &() &\\/&|()|/&\\/ '%\" & ()\n";
    formFile << "  &_\\_&&_\\ |& |&&/&__%_/_& &&\n";
    formFile << "&&   && & &| &| /& & % ()& /&&\n";
    formFile << " ()&_---()&\\&\\|&&-&&--%---()~\n";
    formFile << "     &&     \\|||\n";
    formFile << "             |||\n";
    formFile << "             |||\n";
    formFile << "             |||\n";
    formFile << "       , -=-~  .-^- _\n";
	formFile.close();
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (isValidToExecute(executor))
	{
		//print treee
		printForm();
	}
	else
		Form::GradeTooLowException();
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called\n";
}

