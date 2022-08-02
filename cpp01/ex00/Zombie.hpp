/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:56:15 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/17 13:56:16 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ZOMBIE_C
#define ZOMBIE_C

class Zombie {
public:
	Zombie(std::string name);
	~Zombie();

	void Zombie_spik();
	std::string getName(void);
private:
	std::string name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);
#endif