/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:56:44 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/17 13:56:45 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#ifndef WEAPON_HPP
#define WEAPON_HPP

class Weapon{
	private:
		std::string type;
	public:
		~Weapon();
		std::string* GetType();
		void setType(std::string type);
		Weapon();
		Weapon(std::string name);
};

#endif