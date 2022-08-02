/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 14:21:18 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/26 14:21:36 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Character.hpp"

Character::Character(std::string name) : name(name){
	for (int i = 0; i < 4; i++){
		this->item[i] = NULL;
	}
	return;
}

Character::Character(Character & cp) : name(cp.getName()){
	for (int i = 0; i < 4; i++)
	{
		this->item[i] = cp.getItem(i);
	}
	return;
}


std::string const & Character::getName() const{
	return (this->name);
}

void Character::equip(AMateria *m){
	int i = 0;

	while (this->item[i] != NULL && i < 4)
		i++;
	if (i < 4)
		this->item[i] = m;
}

void Character::unequip(int idx){
	this->item[idx] = NULL;
}

void Character::use(int idx, ICharacter &target){
	if (this->item[idx])
		this->item[idx]->use(target);
}

AMateria *Character::getItem(int idx){
	if (idx >= 0 && idx <= 4)
		return(this->item[idx]);
	return (NULL);
}

Character &	Character::operator=( Character const & rhs )
{
	this->num = 0;
	for (int i = 0; i < 4; i++)
	{
		if (this->item[i])
			delete this->item[i];
		this->item[i] = rhs.item[i];
		if (rhs.item[i])
			this->num++;
	}
	this->name = rhs.getName();
	std::cout << "Assignement operator for Character called" << std::endl;
	return *this;
}