/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 15:09:35 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/27 15:09:35 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Creation", 25, 5), _target(target){
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : Form("Creation", 25, 5),
	_target(src.getTarget()){
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Creation", 25, 5), _target(""){}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	return;
}

std::string ShrubberyCreationForm::getTarget() const{
	return(this->_target);
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	rhs.getTarget();
	std::cout << "Can't copy anything" << std::endl;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & b)const{
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
	std::ofstream ofs(this->getTarget() + "_shrubbery");
	ofs << "                                                         ." << std::endl <<
"                                              .         ;  " << std::endl <<
"                 .              .              ;%     ;;   " << std::endl <<
"                   ,           ,                :;%  %;   " << std::endl <<
"                    :         ;                   :;%;'     ., "  << std::endl <<
"           ,.        %;     %;            ;        %;'    ,;" << std::endl <<
"             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl <<
"              %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl <<
"               ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl <<
"                `%;.     ;%;     %;'         `;%%;.%;'" << std::endl <<
"                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl <<
"                    `:%;.  :;bd%;          %;@%;'" << std::endl <<
"                      `@%:.  :;%.         ;@@%;'" << std::endl <<
"                        `@%.  `;@%.      ;@@%; " << std::endl <<
"                          `@%%. `@%%    ;@@%; " << std::endl <<
"                            ;@%. :@%%  %@@%; " << std::endl <<
"                              %@bd%%%bd%%:; " << std::endl <<
"                                #@%%%%%:;;" << std::endl <<
"                                %@@%%%::;" << std::endl <<
"                                %@@@%(o);  . '" << std::endl <<
"                                %@@@o%;:(.,' " << std::endl <<
"                            `.. %@@@o%::;" << std::endl <<
"                               `)@@@o%::;" << std::endl <<
"                                %@@(o)::;" << std::endl <<
"                               .%@@@@%::;" << std::endl <<
"                               ;%@@@@%::;." << std::endl <<
"                              ;%@@@@%%:;;;." << std::endl <<
"                          ...;%@@@@@%%:;;;;,.."<< std::endl;
ofs.close();
}