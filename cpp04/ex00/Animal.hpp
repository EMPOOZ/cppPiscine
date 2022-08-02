/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 13:35:20 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/26 14:25:23 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal{
public:
	Animal(void);
	virtual ~Animal();
	Animal(Animal &src);
	Animal	&operator=(const Animal &other);
	virtual void makeSound() const;
	std::string getType() const;
protected:
	std::string type;
};
std::ostream	&operator<<(std::ostream &ostream, const Animal &instance);
#endif
