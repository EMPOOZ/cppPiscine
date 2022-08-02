/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 13:35:31 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/26 14:28:06 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog(){
	std::cout << "I am a Dog" << std::endl;
	this->type = "Dog";
	return;
}

Dog::Dog(Dog & src){
	std::cout << "copy dog" << std::endl;
	this->type = src.getType();
	return;
}

Dog::~Dog(){
	std::cout << "I am dog die" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "wuf" << std::endl;
}