/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 12:30:40 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/13 12:30:41 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <iostream>
 #include <csignal>
#include "Classes.hpp"
int main(){
	PhoneBook book;
		std::cout << "----Enter command----" << std::endl;
		std::cout << "ADD for Add new Contact" << std::endl;
		std::cout << "SEARCH to llok for Contact" << std::endl;
		std::cout << "EXIT for out of here" << std::endl;
	while(1){
		std::string command;
		std::getline(std::cin, command);
		if (std::cin.eof())
			return 0;
		if(command == "ADD")
			book.add_user();
		if(command == "SEARCH")
			book.SearchContact();
		if(command == "EXIT")
			return(0);
		if (std::cin.eof())
			return 0;
		std::cout << "----Enter command----" << std::endl;
		std::cout << "ADD for Add new Contact" << std::endl;
		std::cout << "SEARCH to llok for Contact" << std::endl;
		std::cout << "EXIT for out of here" << std::endl;
	}
	return(0);
} 