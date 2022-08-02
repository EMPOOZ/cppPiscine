/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 13:36:00 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/26 14:30:40 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal{
public:
	Animal(void);
	Animal(Animal &src);
	virtual ~Animal();
	Animal	&operator=(const Animal &other);
	virtual void makeSound() const;
	std::string getType() const;
protected:
	std::string type;
};
std::ostream	&operator<<(std::ostream &ostream, const Animal &instance);
#endif