/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 14:20:40 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/26 14:21:01 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"
#include <iostream>

WrongDog::WrongDog(){
	this->type = "WrogDog";
	return;
}

WrongDog::~WrongDog(){
	return;
}

void WrongDog::makeSound() const{
	std::cout << "wuf" << std::endl;
}