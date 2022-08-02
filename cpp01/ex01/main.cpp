/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:56:18 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/17 13:56:19 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main(){
	std::cout << "Creating the first Zombie horde of Roberts" << std::endl;
	Zombie *zom = zombieHorde(4, "Gadji");
	for (int i = 0; i < 4; i++)
		zom[i].Zombie_spik();
	delete [] zom;
}