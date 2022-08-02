/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:04:00 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/30 17:04:01 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert() : _i(0), _c(0), _f(0), _d(0){
	this->_i = getInt();
	this->_c = getChar();
	this->_f = getFloat();
	this->_d = getDouble();
	return;
}

Convert::Convert(Convert &src){ 
	this->_c = src.getChar();
	this->_d = src.getDouble();
	this->_f = src.getFloat();
	this->_i = src.getInt();
	this->_is_char = src.getIsChar();
	this->_is_int = src.getIsInt();
}

Convert::~Convert(){
	return;
}

Convert::Convert(std::string str){
	int i = std::atoi(str.c_str());
	double d = std::atof(str.c_str());

	if (i != 0){
		this->_i = i;
		this->_is_int = 1;
		if(isprint(i)){
			this->_c = static_cast<int>(i);
			this->_is_char = 1;
		}
		else{
			this->_c = 0;
			this->_is_char = 0;
		}
		this->_f = static_cast<float>(d);
		this->_d = static_cast<double>(d);
	}
	else if (str.length() == 1 && isprint(str[0]) && str[0] != '0')
	{
		this->_c = str[0];
		this->_is_char = 1;
		this->_i = static_cast<int>(str[0]);
		this->_is_int = 1;
		this->_f = static_cast<float>(str[0]);
		this->_d = static_cast<double>(str[0]);
	}
	else if (d != 0)
	{
		this->_i = 0;
		this->_c = 0;
		this->_is_char = 0;
		this->_is_int = 0;
		this->_f = static_cast<float>(d);
		this->_d = static_cast<double>(d);
	}
	else
	{
		this->_i = 0;
		this->_c = 0;
		this->_is_char = 0;
		this->_is_int = 1;
		this->_f = static_cast<float>(d);
		this->_d = static_cast<double>(d);
	}
}

int Convert::getInt() const{
	return(this->_i);
}

char Convert::getChar() const{
	return(this->_c);
}

float Convert::getFloat() const{
	return(this->_f);
}

double Convert::getDouble() const{
	return(this->_d);
}

bool Convert::getIsChar() const{
	return (this->_is_char);
}

bool Convert::getIsInt() const{
	return (this->_is_int);
}

void Convert::printInt(){
	std::cout << this->_i << std::endl;
}

void Convert::printChar(){
	std::cout << this->_c << std::endl;
}

void Convert::printFloat(){
	if (fmod(this->_f, 1) == 0)
		std::cout << std::fixed << std::setprecision(1) << this->_f << "f" << std::endl;
	else
		std::cout << this->_f << "f" << std::endl;
}

void	Convert::printDouble()
{
	if (fmod(this->_d, 1) == 0)
		std::cout << std::fixed <<  std::setprecision(1) << this->_d << std::endl;
	else
		std::cout << this->_d << std::endl;
}

Convert &Convert::operator=(const Convert &rhs){
	this->_c = rhs.getChar();
	this->_d = rhs.getDouble();
	this->_f = rhs.getFloat();
	this->_i = rhs.getInt();
	this->_is_char = rhs.getIsChar();
	this->_is_int = rhs.getIsInt();
	return *this;
}

