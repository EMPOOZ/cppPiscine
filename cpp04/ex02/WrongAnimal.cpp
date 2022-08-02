/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 14:20:33 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/26 14:20:55 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "I am a animal1" << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "I am die" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const &rhc){
	std::cout << "Assignement operator for Animal called" << std::endl;
	this->type = rhc.getType();
	return * this;
}

void WrongAnimal::makeSound() const{
	std::cout << "..." << std::endl;
}

std::string WrongAnimal::getType() const{
	return this->type;
}

std::ostream	&operator<<(std::ostream &ostream, const WrongAnimal &instance)
{
	ostream << instance.getType();;
	return ostream;
}