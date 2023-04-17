/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 10:56:55 by misimon           #+#    #+#             */
/*   Updated: 2023/04/12 15:36:44 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setVar(std::string str, std::string *whichValue)
{
	while ((*whichValue).empty())
	{
		std::cout << str;
		std::getline(std::cin, *whichValue);
		if (std::cin.eof())
			exit(EXIT_FAILURE);
	}
}

void Contact::setValue()
{
	this->setVar("First Name: ", &this->_firstName);
	this->setVar("Last Name: ", &this->_lastName);
	this->setVar("Nickname: ", &this->_nickname);
	this->setVar("Phone Number: ", &this->_phoneNbr);
	this->setVar("Dark Secret: ", &this->_darkSecret);
}

void Contact::printContact()
{
	if (this->isEmpty() == true)
	{
		std::cout << "Contact don't exist !" << std::endl;
		return ;
	}
	std::cout << std::endl;
	std::cout << "Firstname: " << this->_firstName << std::endl;
	std::cout << "Lastname: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phoneNbr << std::endl;
	std::cout << "Darkest secret: " << this->_phoneNbr << std::endl;
	std::cout << std::endl;
}

bool Contact::isEmpty()
{
	if(this->_darkSecret.empty() || this->_firstName.empty()) return(true);
	if(this->_lastName.empty() || this->_nickname.empty()) return(true);
	if(this->_phoneNbr.empty()) return(true);
	return (false);
}

void Contact::printLine(std::string str)
{
	if(str.size() > 10)
		std::cout << str.substr(0, 9) << ".|";
	else
	{
		for(int j = 10 - str.size(); j != 0; j--)
			std::cout << " ";
		std::cout << str;
		std::cout << "|";
	}
}

void Contact::showValue(int i)
{
	if (this->isEmpty() == false)
	{
		std::cout << "|         " << i << "|";
		this->printLine(this->_firstName);
		this->printLine(this->_lastName);
		this->printLine(this->_nickname);
		std::cout << std::endl;
	}
	else
		std::cout << "|          |          |          |          |" << std::endl;
}