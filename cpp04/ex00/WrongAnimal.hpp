/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 13:35:46 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/26 13:35:47 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal{
public:
	WrongAnimal(void);
	~WrongAnimal();
	void makeSound() const;
	WrongAnimal &operator=(const WrongAnimal &other);
	std::string getType() const;
protected:
	std::string type;
};
std::ostream	&operator<<(std::ostream &ostream, const WrongAnimal &instance);
#endif