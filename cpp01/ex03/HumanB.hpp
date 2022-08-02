/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:56:33 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/17 13:56:34 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#ifndef HUMANB_HPP
#define HUMANB_HPP

class HumanB{
	private:
		std::string name;
		Weapon *weapon;
	public:
		void attack();
		~HumanB();
		HumanB(std::string name);
		void setWeapon(Weapon &type);
};

#endif