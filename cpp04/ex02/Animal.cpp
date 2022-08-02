/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 13:36:31 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/26 14:29:22 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal(){}

Animal::~Animal(){
	std::cout << "I am Dead" << std::endl;
	return;
}

Animal &Animal::operator=(Animal const &rhc){
	std::cout << "Assignement operator for Animal called" << std::endl;
	this->type = rhc.getType();
	return * this;
}

Animal::Animal(Animal & src){
	std::cout << "copy dog" << std::endl;
	this->type = src.getType();
	return;
}

void Animal::makeSound() const{
	std::cout << "..." << std::endl;
}

std::string Animal::getType() const{
	return this->type;
}

std::ostream	&operator<<(std::ostream &ostream, const Animal &instance)
{
	ostream << instance.getType();;
	return ostream;
}