/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 14:21:25 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/26 14:50:17 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria ("ice"){
	return;
}

Ice::~Ice(){
	return;
}

AMateria* Ice::clone() const{
	Ice *newice = new Ice;
	return(newice);
}

void Ice::use(ICharacter &target){
	std::cout << "* USE Ice " << target.getName() << " *" << std::endl;
}

Ice	&Ice::operator=( const Ice &other )
{
	this->_type = other._type;
	std::cout << "Assignation operator for Ice called" << std::endl;
	return *this;
}