/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:56:31 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/17 13:56:32 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name){
	this->name = name;
	this->weapon = NULL;
    return;
}

HumanB::~HumanB(){
	return;
} 

void HumanB::attack(){
	if (!this->weapon){
		std::cout << "you don't have a weapon" << std::endl;
		return;
	}
	std::cout << this->name << " attacks with their " << *this->weapon->GetType() << std::endl;
}

void HumanB::setWeapon(Weapon &type){
	this->weapon = &type;
	return;
}