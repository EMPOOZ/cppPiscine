/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 12:08:42 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/22 12:08:43 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap{
private:
	
public:
	FragTrap(std::string const name);
	~FragTrap();

	void	highFivesGuys(void);
	void	dmg123(std::string const &target);
};

#endif
