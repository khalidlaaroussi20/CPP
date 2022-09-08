/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:20:13 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/06 11:19:27 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"


Contact::Contact()
{
	//std::cout << "Contact Constructure !";
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickName,std::string phoneNumber, std::string darkestSecret)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickName = nickName;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;
}

//getters
std::string Contact::getFirstName()
{
	return (firstName);
}
std::string Contact::getLastName()
{
	return (lastName);
}
std::string Contact::getNickName()
{
	return (nickName);
}
std::string Contact::getPhoneNumber()
{
	return (phoneNumber);
}
std::string Contact::getDarkestSecret()
{
	return (darkestSecret);
}

//setters
void Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}
void Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}
void Contact::setNickName(std::string nickName)
{
	this->nickName = nickName;
}
void Contact::setPhoneNumber(std::string phoneNumber)
{
	this ->phoneNumber = phoneNumber;
}
void Contact::setDarkestSecret(std::string darkestSecret)
{
	this ->darkestSecret = darkestSecret;
}

void Contact::toString(int index)
{
	std::cout << "index           = " << index << std::endl;
	std::cout << "first name      = " << firstName << std::endl;
	std::cout << "last name       = " << lastName << std::endl;
	std::cout << "nickname        = " << nickName << std::endl;
	std::cout << "phone number    = " << phoneNumber << std::endl;
	std::cout << "darkest secret  = " << darkestSecret << std::endl;
}