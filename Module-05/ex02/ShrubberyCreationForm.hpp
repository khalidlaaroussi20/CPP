/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:31:25 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/16 11:36:19 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#define  SHRUBBERY_SIGN_REQUIRED 145
# define SHRUBBERY_EXECUTE_REQUIRED 137

# define SHRUBBERY_CREATION_NAME "shrubbery creation"


#include "Form.hpp"


class ShrubberyCreationForm : public Form
{
	private :
		const std::string _target;
		ShrubberyCreationForm();
		
	public :
		ShrubberyCreationForm(const std::string  target);
		ShrubberyCreationForm (const ShrubberyCreationForm &other);
		
		// Operators 
		ShrubberyCreationForm& operator= (const ShrubberyCreationForm& other);

		//getters
		const std::string getTarget() const;
		//methods
		void	execute(Bureaucrat const & executor) const;
		void	printForm() const;

		~ShrubberyCreationForm();
};


#endif