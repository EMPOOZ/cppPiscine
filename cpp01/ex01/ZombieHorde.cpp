/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:56:23 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/17 13:56:24 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int numberOfZombies, std::string name){
	Zombie *zombieHorde = new Zombie[numberOfZombies];

	for (int i = 0; i < numberOfZombies; i++)
		zombieHorde[i].setName(name);
	return (zombieHorde);
}