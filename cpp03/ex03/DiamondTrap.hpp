/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:09:04 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/22 12:09:04 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	DiamondTrap : public ScavTrap, public FragTrap{
private:
	std::string _name;
public:
	DiamondTrap(std::string const name);
	~DiamondTrap();

	using FragTrap::hp;
	using ScavTrap::energy;
	using FragTrap::dmg;
	using ScavTrap::attack;
	void	whoAmI();
};

#endif
