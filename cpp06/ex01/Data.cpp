/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 17:04:16 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/30 17:04:16 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# include "Data.hpp"

Data::Data(std::string const &str){
	this->_ser = str;
	return;
}

Data::~Data(){
	return;
}


std::string Data::getSer(){
	return(this->_ser);
}