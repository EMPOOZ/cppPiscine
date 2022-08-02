/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:08:52 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/22 12:08:53 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap( std::string const name ) : ClapTrap(name, 100, 50, 20) {
	std::cout << "I am a ScavTrap" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "End of ScavTrap" << std::endl;
	return;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap " << this->name << " have enterred in Gate keeper mode." << std::endl;
}

void	ScavTrap::attack(std::string const &target){
	std::cout << "ScavTrap " << this->name << " attack " << target << ", causing " << this->dmg << " points of damage!" << std::endl;
}