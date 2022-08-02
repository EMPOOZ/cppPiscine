/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:56:22 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/17 13:56:23 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ZOMBIE_C
#define ZOMBIE_C

class Zombie {
public:
	Zombie();
	~Zombie();

	void Zombie_spik();
	std::string getName(void);
	bool setName(std::string newName);
private:
	std::string name;
};

Zombie *zombieHorde(int numberOfZombies, std::string name);
#endif