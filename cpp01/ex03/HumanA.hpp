/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:56:30 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/17 13:56:31 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"
#ifndef HUMANA_HPP
#define HUMANA_HPP

class HumanA{
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanA();
		~HumanA();
		HumanA(std::string name, Weapon &weapon);
		void attack();
		void setWeapon(Weapon &type);
};

#endif
