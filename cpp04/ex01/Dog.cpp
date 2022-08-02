/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 13:36:10 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/26 14:29:02 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

Dog::Dog(){
	std::cout << "I am a Dog" << std::endl;
	this->type = "Dog";
	this->brain = new Brain;
	return;
}

Dog::Dog(Dog & src){
	std::cout << "copy dog" << std::endl;
	this->type = src.getType();
	this->brain = new Brain(*src.brain);
	return;
}

Dog::~Dog(){
	std::cout << "last wuf" << std::endl;
	delete (this->brain);
	return;
}

void Dog::makeSound() const{
	std::cout << "newwuf" << std::endl;
}

Brain * Dog::getBrain() const{
	return (this->brain);
}