/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:09:08 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/22 12:30:10 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap( std::string const name ) : ClapTrap(name, 100, 100, 50) {
	std::cout << "I am a FragTrap" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "End of FragTrap " << this->name << std::endl;
	return;
}

void	FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << this->name << " request a high five." << std::endl;
}

void	FragTrap::attack(std::string const &target){
	std::cout << "FragTrap " << this->name << " attack " << target << ", causing " << this->dmg << " points of damage!" << std::endl;
}

