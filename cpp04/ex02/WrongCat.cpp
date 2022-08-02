/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 14:20:36 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/26 14:20:57 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(){
	this->type = "WrongCat";
	return;
}

WrongCat::~WrongCat(){
	return;
}

void WrongCat::makeSound() const{
	std::cout << "Mau" << std::endl;
}