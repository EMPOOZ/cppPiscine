/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:56:51 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/17 13:56:52 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include <fstream>
#include "Replace.hpp"

Replace::Replace(std::string name){
	std::string newFile = name + ".reaplace";
	this->file.open(name);
	if(this->file.is_open()){
		this->newFile.open(newFile);
	} else {
		std::cout << "Error file " << name << std::endl;
	}
}

Replace::~Replace(){
	this->newFile.close();
	this->file.close();
}

void Replace::inread(std::string &dest){
	if(this->file.is_open()){
		std::string line;
		while (std::getline(this->file, line)){
			dest.append(line);
			if (!this->file.eof())
				dest.append("\n");
		}
	}
}

void Replace::outwrite(std::string &str){
	if(this->newFile.is_open())
		this->newFile << str;
}

int Replace::replace(std::string s1, std::string s2){
	int i = 0;
	int c = 0;
	std::string read;
	std::string write;
	inread(read);
	if(s1 == s2)
		write = read;
	else{
		while(true){
			c = read.find(s1, i);
			if(c == (int)std::string::npos){
				write.append(read, i, read.length());
				break;
			}
			write.append(read, i, c - i);
			write.append(s2);
			i = c + s1.length();
		}
	}
	outwrite(write);
	return(1);
}
