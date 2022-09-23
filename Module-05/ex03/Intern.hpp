/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:59:20 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/16 17:41:51 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#define  NUMBER_FORMS 3

#include <iostream>
#include <string>
#include <utility>



#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"


class Intern 
{
	private:
	
	public :
		typedef Form *(*formMaker)(const std::string &target);
		std::pair<std::string , formMaker> forms[3];
		Intern();
		Intern (const Intern &other);
		
		// Operators 
		Intern& operator= (const Intern& other);


		//function
		Form *makeForm(const std::string &name, const std::string &target);
		~Intern();
};

Form *newShrubbery(const std::string &target);
Form *newRobotomy(const std::string &target);
Form *newPresidential(const std::string &target);


#endif