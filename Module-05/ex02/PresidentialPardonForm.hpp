/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:31:25 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/16 11:36:00 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#define  PRESIDENTIAL_SIGN_REQUIRED 25
# define PRESIDENTIAL_EXECUTE_REQUIRED 5

# define PRESIDENTIAL_PARDON_NAME "presidential pardon"

#include "Form.hpp"


class PresidentialPardonForm : public Form
{
	private :
		const std::string _target;
		PresidentialPardonForm();
		
	public :
		PresidentialPardonForm(const std::string  target);
		PresidentialPardonForm (const PresidentialPardonForm &other);
		
		// Operators 
		PresidentialPardonForm& operator= (const PresidentialPardonForm& other);

		//getters
		const std::string getTarget() const;
		//methods
		void	execute(Bureaucrat const & executor) const;
		void	printForm() const;

		~PresidentialPardonForm();
};



#endif