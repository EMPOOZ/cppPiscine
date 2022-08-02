/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 13:35:49 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/26 13:35:49 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(){
	this->type = "WrongCat";
	return;
}

WrongCat::~WrongCat(){
	std::cout << "wrongcat die" << std::endl;
	return;
}

void WrongCat::makeSound() const{
	std::cout << "Mau" << std::endl;
}