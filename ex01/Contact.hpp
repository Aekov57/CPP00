/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: misimon <misimon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 11:22:20 by misimon           #+#    #+#             */
/*   Updated: 2023/04/12 15:36:59 by misimon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class Contact
{
	public:
		void setValue();
		void showValue(int i);
		void printContact();
		bool isEmpty();
	private:
		void setVar(std::string str, std::string *whichValue);
		void printLine(std::string str);
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNbr;
		std::string _darkSecret;
};

#endif