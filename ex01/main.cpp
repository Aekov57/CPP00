/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 17:25:30 by misimon           #+#    #+#             */
/*   Updated: 2023/04/03 16:29:09 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	std::string str;
	PhoneBook phoneBook;
	for (int i = 0; str != "EXIT"; NULL)
	{
		std::cout << "[📞 Phonebook]$ ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			return (EXIT_FAILURE);
		if(str.compare("ADD") == 0)
			phoneBook.addContact(&i);
		else if(str.compare("SEARCH") == 0)
			phoneBook.printTab();
	}
	std::cout << std::endl;
	return(EXIT_SUCCESS);
}