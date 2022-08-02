/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:08:18 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/27 15:08:24 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name(""), rang(150){
}

Bureaucrat::Bureaucrat(const Bureaucrat &bur) : name(bur.getName()), rang(bur.getRang()) {
	return;
}

Bureaucrat::Bureaucrat(std::string const name, int rang) : name(name){
	if(rang > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if(rang < 1)
		throw (Bureaucrat::GradeTooHighException());
	this->rang = rang;
}

Bureaucrat::~Bureaucrat(){}

void Bureaucrat::increaseRank(void){
	if(this->rang - 1 < 1)
		throw (Bureaucrat::GradeTooHighException());
	this->rang--;
}

void Bureaucrat::downGrade(void){
	if(this->rang + 1 > 150)
		throw (Bureaucrat::GradeTooLowException());
	this->rang++;
}

std::string Bureaucrat::getName(void) const{
	return this->name;
}

int Bureaucrat::getRang(void) const{
	return this->rang;
}

std::ostream &operator<<(std::ostream &ostr, Bureaucrat const &bur){
	ostr << bur.getName() << " bureaucrat grade " << bur.getRang() << "\n";
	return ostr;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const & rhs)
{
	this->rang = rhs.getRang();
	return *this;
}


const char* Bureaucrat::GradeTooHighException::what() const throw(){
	return ("the grade is too high, it cannot be under 1");
}
const char* Bureaucrat::GradeTooLowException::what() const throw(){
	return ("the grade is too low, it cannot be over 150");
}