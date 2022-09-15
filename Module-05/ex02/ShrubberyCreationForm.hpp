/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:31:25 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/15 15:55:58 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#define  SIGN_REQUIRED 145
# define EXECUTE_REQUIRED 137


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

		~ShrubberyCreationForm();
};


#endif