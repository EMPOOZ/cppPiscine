/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:09:21 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/22 12:09:22 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap{
private:
	
public:
	ScavTrap(std::string const name);
	~ScavTrap();

	void	guardGate();
	void	attack(std::string const &target);
};

#endif
