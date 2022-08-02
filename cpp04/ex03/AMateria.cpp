/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 14:21:14 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/26 14:21:34 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Character.hpp"

AMateria::AMateria(std::string const & type) : _type(type){
	return;
}

AMateria::AMateria(){}

AMateria::~AMateria(){
	return;
}

std::string const & AMateria::getType() const{
	return(_type);
}