/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:48:26 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/21 12:48:36 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(){
	std::cout << "Default constructor called\n";
	this->value = 0;
}

Fixed::Fixed(const Fixed &fixed){
	std::cout << "Copy constructor called\n";
	*this = fixed;
}

Fixed::Fixed(int i){
	std::cout << "Int constructor called\n";
	this->value = i << this->bits;
	return;
}

Fixed::Fixed(float i){
	std::cout << "Float constructor called\n";
	int power = pow(2, this->bits);
	this->value = roundf(i * power);
	return;
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
	this->value = 0;
}

Fixed& Fixed::operator=(const Fixed &fixed){
	std::cout << "Copy assignment operator called\n";
 
	if (this != &fixed){
		this->value = fixed.getRawBits();
	}
	return (*this);
}

std::ostream &	operator<<( std::ostream & ostr, Fixed const & instance)
{
	ostr << instance.toFloat();
	return (ostr);
}

int Fixed::getRawBits() const{
	std::cout << "getRawBits member function called\n";
	return this->value;
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits member function called\n";
	this->value = raw;
}

int Fixed::toInt()const{
	return(this->value >> this->bits);
}

float Fixed::toFloat()const{
	int power = pow(2, this->bits);
	float res = (float)this->value / power;
	return (res);
}