/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 14:21:23 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/26 14:57:08 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria ("cure"){
	return;
}

Cure::~Cure(){
	return;
}

AMateria* Cure::clone() const{
	Cure *newCure = new Cure;
	return(newCure);
}

void Cure::use(ICharacter &target){
	std::cout << "* USE Cure " << target.getName() << " *" << std::endl;
}

Cure	&Cure::operator=( const Cure &other )
{
	this->_type = other._type;
	std::cout << "Assignation operator for Cure called" << std::endl;
	return *this;
}