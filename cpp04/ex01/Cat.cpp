/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 13:36:06 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/26 14:28:49 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(){
	std::cout << "I am a Cat" << std::endl;
	this->type = "Cat";
	this->brain = new Brain;
	return;
}

Cat::Cat(Cat & src){
	std::cout << "copycat" << std::endl;
	this->type = src.getType();
	this->brain = new Brain(*src.brain);
	return;
}

Cat::~Cat(){
	std::cout << "last mau" << std::endl;
	delete (this->brain);
	return;
}

void Cat::makeSound() const{
	std::cout << "newMau" << std::endl;
}

Brain * Cat::getBrain() const{
	return (this->brain);
}