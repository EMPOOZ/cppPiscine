/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 14:21:24 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/26 14:21:52 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CURE_CPP
#define CURE_CPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Character.hpp"
#include <iostream>

class Cure : public AMateria{
public:
	Cure();
	~Cure();

	AMateria* clone() const;
	void use(ICharacter &target);
	Cure &operator=(const Cure &other);
};

#endif