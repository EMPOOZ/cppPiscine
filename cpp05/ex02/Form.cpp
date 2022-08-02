/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:09:11 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/27 15:38:06 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form() : _name("untilted file"), _sign(0), _grade(150), _grade_ex(150) {
	return;
}

Form::Form(const Form &rhs) : _name(rhs.getName()), _sign(rhs.getSign()), _grade(rhs.getGrade()), 
	_grade_ex(rhs.getGrade_ex()){
	return;
}

Form::Form(std::string const name, int const grade, int const grade_ex) : _name(name), _sign(0), _grade(grade), _grade_ex(grade_ex){
	if (grade < 1 || grade_ex < 1){
		throw(Form::GradeTooHighException());
	}
	else if (grade > 150 || grade_ex > 150){
		throw(Form::GradeTooLowException());
	}
	return;
}

Form::~Form(){
	return;
}

void Form::beSigned(Bureaucrat const & b){
	if (b.getRang() <= this->getGrade())
		this->_sign = true;
	else
		throw(Form::GradeTooLowException());
}

Form &Form::operator=(Form const & rhs)
{
	this->_sign = rhs.getSign();
	return *this;
}

std::ostream &operator<<(std::ostream &ostr, Form const &form){
	ostr << form.getName() << " signed: " << form.getSign()
	<< " signature level " << form.getGrade() << ", performance level " << form.getGrade_ex() << "\n";
	return ostr;
}


const char* Form::GradeTooHighException::what() const throw(){
	return ("the grade is too high, it cannot be under 1");
}

const char* Form::GradeTooLowException::what() const throw(){
	return ("the grade is too low, it cannot be over 150");
}

const char* 		Form::NoExecutionExeption::what() const throw()
{
	return ("execution is not possible for this form");
}

const char* 		Form::NoSignatureExeption::what() const throw()
{
	return ("the form is not signed");
}

std::string const Form::getName() const{
	return(this->_name);
}

bool Form::getSign() const{
	return(this->_sign);
}

int Form::getGrade() const{
	return(this->_grade);
}

int Form::getGrade_ex() const{
	return(this->_grade_ex);
}

void Form::execute(Bureaucrat const & exec) const{
	(void) exec;
	throw(Form::NoExecutionExeption());
}
