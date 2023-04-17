/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 14:35:38 by misimon           #+#    #+#             */
/*   Updated: 2023/03/28 11:33:25 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
	switch (ac)
	{
		case 1:
			std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl; 
			break;
		default:
			for (int i = 1; av[i]; i++)
			{
				for(int j = 0; av[i][j]; j++)
					av[i][j] = toupper(av[i][j]);
				std::cout << av[i];
			}
			break;
	}
	std::cout << std::endl;
	return (EXIT_SUCCESS);
}
