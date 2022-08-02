/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 14:21:20 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/26 14:21:37 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
public:
	Character(std::string name);
	Character(Character & cp);
	~Character() {} 
	std::string const & getName() const;
	Character	&operator=(const Character &other);
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	AMateria *getItem(int idx);
private:
	AMateria *(item[4]);
	std::string name;
	int num;
};

#endif
