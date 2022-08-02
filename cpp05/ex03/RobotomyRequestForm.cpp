/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:10:22 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/27 16:13:12 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Request", 25, 5), _target(target){
	return;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : Form("Request", 25, 5),
	_target(src.getTarget()){
	return;
}

RobotomyRequestForm::RobotomyRequestForm() : Form("Request", 25, 5), _target(""){}

RobotomyRequestForm::~RobotomyRequestForm(){
	return;
}

std::string RobotomyRequestForm::getTarget() const{
	return(this->_target);
}

void RobotomyRequestForm::execute(Bureaucrat const & b)const{
	srand(time(0));
	if (!this->getSign())
	{
		throw(Form::NoSignatureExeption());
		return;
	}
	if (b.getRang() > this->_grade_ex)
	{
		throw(Form::GradeTooLowException());
		return;
	}
	std::cout << "Brzrzrzrrrrzrzbllblblblblblllblblblblblblblblght" << std::endl;
	if (rand() % 2)
		std::cout << this->_target << " has been lobotomised" << std::endl;
	else
		std::cout << this->_target << "'s lobotomy failed" << std::endl;
}