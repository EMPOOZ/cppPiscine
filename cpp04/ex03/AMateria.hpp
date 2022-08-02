/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 14:21:16 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/26 14:21:35 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

class ICharacter;
#include <iostream>
#include "ICharacter.hpp"


class AMateria
{
protected:
	std::string _type;
	AMateria();
public:
	AMateria(std::string const & type);
	virtual ~AMateria();
	std::string const & getType() const; 
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target) = 0;
};

#endif
