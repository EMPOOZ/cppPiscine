/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:07:34 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/22 12:07:42 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
	ClapTrap remi("Remi");

	remi.attack("Bob");
	remi.takeDamage(4);
	remi.beRepaired(1);
	remi.takeDamage(8);
	remi.takeDamage(1);
	remi.beRepaired(5);
}