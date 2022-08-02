/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:56:07 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/17 13:56:08 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main(){
	std::cout << "creat zombie" << std::endl;
	{
		Zombie Gadji("Gadji");
		Gadji.Zombie_spik();
	}
	std::cout << "Creating the new zombie" << std::endl;
	{
		Zombie *Murad = newZombie("Murad");
		Murad->Zombie_spik();

		delete Murad;
	}
	{
		std::cout << "Creating the third zombie" << std::endl;
		randomChump("maga");
	}
}