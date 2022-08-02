/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:10:14 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/27 16:13:20 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("pardon", 25, 5), _target(target){
	return;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : Form("pardon", 25, 5),
	_target(src.getTarget()){
	return;
}

PresidentialPardonForm::PresidentialPardonForm() : Form("pardon", 25, 5), _target(""){}

PresidentialPardonForm::~PresidentialPardonForm(){
	return;
}

std::string PresidentialPardonForm::getTarget() const{
	return(this->_target);
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	rhs.getTarget();
	std::cout << "Can't copy anything" << std::endl;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const & b)const{
	if (!this->getSign()){
		throw(Form::NoSignatureExeption());
		return;
	}
	if (b.getRang() > this->_grade_ex){
		throw(Form::GradeTooLowException());
		return;
	}
	std::cout << this->_target << " has been forgive by Zafod Beeblebrox" << std::endl;
}