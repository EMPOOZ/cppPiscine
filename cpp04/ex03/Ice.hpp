/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 14:21:27 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/26 14:21:42 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ICE_CPP
#define ICE_CPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Character.hpp"
#include <iostream>

class Ice : public AMateria{
public:
	Ice();
	~Ice();

	AMateria* clone() const;
	void use(ICharacter &target);
	Ice		&operator=(const Ice &other);
};

#endif