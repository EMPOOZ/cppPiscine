/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 14:20:13 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/26 14:20:51 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
public:
	Cat(void);
	Cat(Cat &src);
	~Cat();
	Cat &operator=(const Cat &other);
	void makeSound() const;
	Brain * getBrain() const;
protected:
	Brain * brain;
};

#endif