/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 12:49:11 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/21 12:49:11 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

Point::Point() : x(0), y(0){}

Point::Point( Point const & src ) : x(src.get_x()), y(src.get_y()){}

Point::Point( Fixed const x, Fixed const y ) : x(x), y(y){}

Point::~Point(){}

Fixed	Point::get_x() const{
	return (this->x);
}

Fixed	Point::get_y() const{
	return (this->y);
}
