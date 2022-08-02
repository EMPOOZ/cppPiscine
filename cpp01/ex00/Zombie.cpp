/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:56:14 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/17 13:56:15 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name): name(name){
}

Zombie::~Zombie(){
	std::cout << this->name << " *Sounds of dying again*" << std::endl;
}

void Zombie::Zombie_spik(void){
	std::cout << this->name << ':' << " BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName(){
	return (this->name);
}
