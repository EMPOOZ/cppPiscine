/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tconwy <tconwy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 13:56:47 by tconwy            #+#    #+#             */
/*   Updated: 2022/06/17 13:56:48 by tconwy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>
#include "Replace.hpp"
 
int main(int argc, char* argv[]){
	if (argc != 4){
		std::cout << "incorrect input" << std::endl;
		return (1);
	}
	Replace file(argv[1]);
	file.replace(argv[2],argv[3]);
	return (0);
}