/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 14:20:34 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/26 14:21:07 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal{
public:
	WrongAnimal(void);
	virtual ~WrongAnimal();
	WrongAnimal	&operator=(const WrongAnimal &other);
	virtual void makeSound() const;
	std::string getType() const;
protected:
	std::string type;
};
std::ostream	&operator<<(std::ostream &ostream, const WrongAnimal &instance);
#endif