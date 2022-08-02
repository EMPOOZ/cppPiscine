/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:56:43 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/17 13:56:44 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type){
	return;
}

Weapon::Weapon(){
	return;
}

Weapon::~Weapon( void )
{
	return;
}

std::string* Weapon::GetType(){
	return &this->type;
}

void Weapon::setType(std::string type){
	this->type = type;
	return;
}
