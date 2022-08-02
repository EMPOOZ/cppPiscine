/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 13:35:43 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/26 13:35:44 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "I am a animal" << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "I am die" << std::endl;
}

void WrongAnimal::makeSound() const{
	std::cout << "..." << std::endl;
}

WrongAnimal &	WrongAnimal::operator=( WrongAnimal const & rhs )
{
	std::cout << "Assignement operator for WrongAnimal called" << std::endl;
	this->type = rhs.getType();
	return *this;
}

std::string WrongAnimal::getType() const{
	return this->type;
}

std::ostream	&operator<<( std::ostream &ostream, const WrongAnimal &instance )
{
	ostream << instance.getType();;
	return ostream;
}
