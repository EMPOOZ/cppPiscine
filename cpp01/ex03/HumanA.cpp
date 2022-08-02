/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:56:29 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/17 13:56:30 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon){
	this->name = name;
	this->weapon = &weapon;
	return;
}

HumanA::~HumanA(){
	return;
}

void HumanA::attack(){
	if (!this->weapon){
		std::cout << "you don't have a weapon" << std::endl;
		return;
	}
	std::cout << this->name << " attacks with their " << *this->weapon->GetType() << std::endl;
}
