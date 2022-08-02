/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 13:36:12 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/26 13:36:12 by tconwy           ###   ########.fr       */
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
	virtual ~Dog();
	virtual void makeSound() const;
	Brain * getBrain() const;
protected:
	Brain * brain;
};

#endif