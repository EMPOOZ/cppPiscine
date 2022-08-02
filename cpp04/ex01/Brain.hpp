/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 13:36:04 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/26 13:36:04 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain{
private:
	std::string *ideas;
public:
	Brain();
	Brain(Brain & src);
	~Brain();
	Brain	&operator=(const Brain &other);
	std::string *getidea();
};

#endif