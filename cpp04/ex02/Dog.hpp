/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 14:20:28 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/26 14:20:51 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
public:
	Dog(void);
	Dog(Dog & src);
	~Dog();
	void makeSound() const;
	Dog &operator=(const Dog &other);
	Brain * getBrain() const;
protected:
	Brain * brain;
};

#endif