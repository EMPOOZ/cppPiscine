/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:56:55 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/17 13:56:56 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

Harl::Harl(){
}

Harl::~Harl(){
}

void	Harl::complain(std::string level){
	void	(Harl::*complaint[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	std::string complaintLevels[] = {
		"debug",
		"info",
		"warning",
		"error"
	};
	for (int i = 0; i < 4; i++){
		// void (Harl::*selectedComplaint)(void) = complaint[i];
		if (level == complaintLevels[i])
			(this->*complaint[i])();
	}
}

void Harl::debug(){
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pic"
	"kle-special-ketchup burger. I just love it!" << std::endl;
}
void Harl::info(){
	std::cout << "I cannot believe adding extra bacon cost more money. You don’"
	"t put enough! If you did I would not have to ask for it!" << std::endl;
}
	void Harl::warning(){
	std::cout << "I think I deserve to have some extra bacon for free. I’ve bee"
	"n coming here for years and you just started working here last month." << std::endl;
}
	void Harl::error(){
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
