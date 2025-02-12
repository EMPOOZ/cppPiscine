/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:57:01 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/17 13:57:02 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

Harl::Harl(){
}

Harl::~Harl(){
}

void	Harl::complain(std::string level){
	void	(Harl::*complaint[])( void ) = {
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

	int i = this->i;

	while (i < 4){
		void (Harl::*selectedComplaint)(void) = complaint[i];
		if (level == complaintLevels[i]){
			(this->*selectedComplaint)();
		}
		i++;
	}
}

void	Harl::complain_help(std::string lvl){
	std::string complaintLevels[] = {
		"debug",
		"info",
		"warning",
		"error"
	};
	for (int i = 0; i < 4; i++){
		if (lvl == complaintLevels[i])
			switch_case(i);
	}
}

void	Harl::switch_case(int level){
	Harl harl;
	switch (level)
	{
		case Harl::levelDebug:
			this->i = 0;
			break;
		case Harl::levelInfo:
			this->i = 1;
			break;
		case Harl::levelWarning:
			this->i = 2;
			break;
		case Harl::levelError:
			this->i = 3;
			break;
		default:
			break;
	}
}

void Harl::debug(){
	std::cout << "[ DEBUG ]\nI love to get extra bacon for my 7XL-double-cheese-triple-pic"
	"kle-special-ketchup burger. I just love it!" << std::endl;
}
void Harl::info(){
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon cost more money. You don’"
	"t put enough! If you did I would not have to ask for it!" << std::endl;
}
	void Harl::warning(){
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve bee"
	"n coming here for years and you just started working here last month." << std::endl;
}
	void Harl::error(){
	std::cout << "[ ERROR ]\nThis is unacceptable, I want to speak to the manager now." << std::endl;
}
