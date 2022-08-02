/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:09:02 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/22 12:30:01 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string const name) : ClapTrap(name, 100, 50, 20), ScavTrap( name + "_clap_name" ), FragTrap( name + "_clap_name" ), _name(name){
	std::cout << "I am " << this->_name << ", a DiamondTrap" << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "End of DiamondTrap " << this->name << std::endl;
	return;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Hi, I am " << this->ClapTrap::name << " but you can call me " << this->name << "." << std::endl;
}