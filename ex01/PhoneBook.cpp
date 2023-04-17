/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:40:48 by misimon           #+#    #+#             */
/*   Updated: 2023/04/04 14:52:01 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	PhoneBook::printTab()
{
	std::string j;
	std::cout << "|==========|==========|==========|==========|" << std::endl;
	std::cout << "|  index   |first name|last name | nickname |" << std::endl;
	std::cout << "|==========|==========|==========|==========|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		this->_contact[i].showValue(i);
		std::cout << "|==========|==========|==========|==========|" << std::endl;
	}
	while (1)
	{
		std::cout << "Which contact do you want to see ? ";
		std::getline(std::cin, j);
		if (std::cin.eof())
			exit(EXIT_FAILURE);
		if(j == "0" || j == "1" || j == "2" || j == "3" || j == "4" || j == "5" 
			|| j == "6" || j == "7")
			break ;
	}
	int nbr = std::stoi(j);
	this->_contact[nbr].printContact();
}

void	PhoneBook::addContact(int *i)
{
	if(*i >= 8)
		*i = 0;
	this->_contact[*i].setValue();
	*i += 1;
}