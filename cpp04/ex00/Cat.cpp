/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 13:35:25 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/26 14:27:55 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat(){
	std::cout << "I am a Cat" << std::endl;
	this->type = "Cat";
	return;
}

Cat::Cat(Cat & src){
	std::cout << "copy cat" << std::endl;
	this->type = src.getType();
	return;
}

Cat::~Cat(){
	std::cout << "I am cat die" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "Mau" << std::endl;
}