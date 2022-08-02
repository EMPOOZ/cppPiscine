/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 13:36:34 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/26 14:58:34 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream> 

class Animal{
public:
	Animal(Animal &src);
	virtual ~Animal() = 0;
	Animal	&operator=(const Animal &other);
	virtual void makeSound() const = 0;
	virtual std::string getType() const;
protected:
	Animal();
	std::string type;
};
std::ostream	&operator<<(std::ostream &ostream, const Animal &instance);
#endif