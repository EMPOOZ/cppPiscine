/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 13:36:02 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/26 13:36:02 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	this->ideas = new std::string[100];
	for(int i = 0; i < 100; i++)
		this->ideas[i] = "I wanna eat that PIE";
	std::cout << "Brain created" << std::endl;
	return;
}

Brain::Brain(Brain & src){
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	std::cout << "Brain copy" << std::endl;
	return;
}

Brain::~Brain(){
	delete [] (this->ideas);
	std::cout << "Die Brain" << std::endl;
}

std::string *Brain::getidea(){
	return(this->ideas);
}

Brain &	Brain::operator=(Brain const & rhs)
{
	std::cout << "Assignement operator for Brain called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}
