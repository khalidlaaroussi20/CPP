/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaarous <klaarous@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:59:12 by klaarous          #+#    #+#             */
/*   Updated: 2022/09/06 11:32:56 by klaarous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

bool	isEmpty(std::string s)
{
	if (!s.length() || s == "")
		return (true);
	return (false);
}

bool	isNumber(std::string str)
{
	for (size_t i = 0; i < str.length(); i++) 
	{
    	if(!isdigit(str[i]))
			return (false);
	}
	return (true);
}

void printFormattedString(std::string s)
{
	if (s.length() >= 10)
	{
		s[9] = '.';
		std::cout << s.substr(0, 10);
	}
	else
		std::cout << std::setfill(' ') << std::setw (10) << s;
}

void displayTableTitle()
{
	printFormattedString("index");
	std::cout << "|" ;
	std::cout << "first name";
	std::cout << "|" ;
	printFormattedString("last name");
	std::cout << "|" ;
	printFormattedString("nickname");
	std::cout << "|" ;
	std::cout << std::endl;
}

void displayContact(Contact contact, int index)
{
	printFormattedString(std::to_string(index));
	std::cout << "|" ;
	printFormattedString(contact.getFirstName());
	std::cout << "|" ;
	printFormattedString(contact.getLastName());
	std::cout << "|" ;
	printFormattedString(contact.getNickName());
	std::cout << "|" ;
	std::cout << std::endl;
}

void displayContacts(PhoneBook phonesBook)
{
	displayTableTitle();
	for (int i = 0; i < phonesBook.size;i++)
	{
		Contact contact = phonesBook.phonesBook[i];
		displayContact(contact, i);
	}
}

int main()
{
	std::string s = "";
	
	PhoneBook phonesBook = PhoneBook();
	
	while (1)
	{
		std::cout  << "ADD, SEARCH, EXIST.\n";
		std::getline(std::cin, s);
		if  (s == "ADD")
		{
			std::string firstName = "", lastName = "", nickName = "",phoneNumber = "",darkestSecret = "";
			std::cout << "first name     :  ";
			std::getline(std::cin, firstName);
			std::cout << "last name      :  ";
			std::getline(std::cin, lastName);
			std::cout << "nick name      :  ";
			std::getline(std::cin, nickName);
			std::cout << "phone number   :  ";
			std::getline(std::cin, phoneNumber);
			std::cout << "darkest secret :  ";
			std::getline(std::cin, darkestSecret);
			if (isEmpty(firstName) || isEmpty(lastName) || isEmpty(nickName) || isEmpty(phoneNumber) || isEmpty(darkestSecret))
				std::cout << "field empty !" << std::endl;
			else
			{
				Contact contact = Contact(firstName, lastName, nickName,phoneNumber, darkestSecret);
				phonesBook.add(contact);
			}
				
		}
		else if (s == "SEARCH")
		{
			displayContacts(phonesBook);
			std::string index;
			std::cout << "write index :  ";
			std::getline(std::cin, index);
			if (!isNumber(index))
				std::cout << " not found !!" << std::endl;
			else
			{
				int id = stoi(index);
				if (phonesBook.isExist(id))
				{
					Contact contact = phonesBook.search(id);
					contact.toString(id);
				}
			}
		}
		else if(s == "EXIST")
			break;
	}
	return (0);
}