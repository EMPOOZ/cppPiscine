/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 13:35:53 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/26 13:35:53 by tconwy           ###   ########.fr       */
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